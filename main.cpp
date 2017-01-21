#include <opencv2/core/core.hpp>
#include <opencv2/videoio/videoio.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main(int argc, char **argv) {
    std::cerr << "start" << std::endl;
    int64 startTick = cv::getTickCount();

    cv::VideoCapture capture = cv::VideoCapture("Clip00001.avi");

    namedWindow("orjinal", WINDOW_AUTOSIZE);
    namedWindow("gray&gaussian", WINDOW_AUTOSIZE);
    namedWindow("canny", WINDOW_AUTOSIZE);
    namedWindow("found", WINDOW_AUTOSIZE);
    moveWindow("orjinal", 100, 300);
    moveWindow("gray&gaussian", 500, 300);
    moveWindow("canny", 900, 300);
    moveWindow("found", 1300, 300);

    cv::Mat currFrame;
    int i = 0;
    for (;; i++) {
        capture >> currFrame;
        if (currFrame.empty()) {
            break;
        }
        //resize(currFrame, currFrame, Size(1280,720));
        currFrame = currFrame(CvRect(1340, 160, 350, 350));
        imshow("orjinal", currFrame);
        cv::Mat tempFrame;
        cvtColor(currFrame, tempFrame, cv::COLOR_BGR2GRAY);

        cv::GaussianBlur(tempFrame, tempFrame, cv::Size(3, 3), 0, 0);
        //threshold(tempFrame, tempFrame, 200, 255, THRESH_BINARY_INV);
        imshow("gray&gaussian", tempFrame);

        cv::Canny(tempFrame, tempFrame, 200, 225);
        imshow("canny", tempFrame);

        vector<vector<Point>> contours;
        vector<Vec4i> hierarchy;
        findContours(tempFrame, contours, hierarchy, CV_RETR_EXTERNAL, CV_CHAIN_APPROX_SIMPLE, Point(0, 0));

        Mat foundFrame(350, 350, CV_8UC3, Scalar(0, 0, 0));

        int contourSize = contours.size();
        for (int j = 0; j < contourSize; j++) {
            vector<Point2f> approx;
            if (contours[j].size() == 0) continue;
            approxPolyDP(contours[j], approx, arcLength(contours[j], true) * 0.02, true);
            if (approx.size() == 4) {
                Rect boundRect = boundingRect(approx);
                Mat roi = currFrame(boundRect);
                Mat1b mask(roi.rows, roi.cols);
                Scalar meanVals = mean(roi, mask);
                rectangle(foundFrame, boundRect, meanVals, -1);
            }
        }
        imshow("found", foundFrame);
        waitKey(1);
    }
    std::cout << "read " << i << " frames in " << ((cv::getTickCount() - startTick) / cv::getTickFrequency())
              << std::endl;

    return 0;
}