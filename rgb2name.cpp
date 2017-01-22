//
// Created by Melih on 22.01.2017.
//

#include "rgb2name.h"
#include <cmath>
#include <limits>

using namespace std;

vector<vector<double>> RGB2NAME_KNOWN_COLORS = {
        {255, 0,   0},
        {255, 255, 0},
        {0,   255, 0},
        {0,   0,   255},
};

double euclideanDist(vector<double> rgb1, vector<double> rgb2) {
    return pow(abs(rgb1[0] - rgb2[0]), 2) + pow(abs(rgb1[1] - rgb2[1]), 2) + pow(abs(rgb1[2] - rgb2[2]), 2);
}

/*
["0", "Red"],
["1", "Yellow"],
["2", "Green"],
["3", "Blue"],
 */
string rgb2name(vector<double> inputRGB) {
    double min = numeric_limits<double>::max();
    int minC = -1;
    for(int i=0;i<RGB2NAME_KNOWN_COLORS.size();i++){
        double distance = euclideanDist(inputRGB, RGB2NAME_KNOWN_COLORS[i]);
        if(distance<min){
            min = distance;
            minC = i;
        }
    }
    if (minC == 0) {
        return std::__cxx11::string("Red");
    } else if (minC == 1) {
        return std::__cxx11::string("Yellow");
    } else if (minC == 2) {
        return std::__cxx11::string("Green");
    } else if (minC == 3) {
        return std::__cxx11::string("Blue");
    }
    return std::__cxx11::string(" ");
}
