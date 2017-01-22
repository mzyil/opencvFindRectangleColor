//
// Created by Melih on 22.01.2017.
//

#include "rgb2name.h"
#include <vector>

using namespace std;
/*
["0", "Red"],
["0", "Violet"],
["1", "Orange"],
["1", "Yellow"],
["2", "Green"],
["3", "Blue"],
["4", "Brown"],
["4", "Black"],
["5", "Grey"],
["5", "White"]
 */
int rgb2name(vector<double> rgb){
    int color = (int) ((rgb[0] * 256) + (rgb[1] * 16) + (rgb[2] * 1));
    if(color >= 0x000000 && color < 0x000080){
        return 4;
    }else if(color >= 0x000080 && color < 0x00008B){
        return 3;
    }else if(color >= 0x00008B && color < 0x00009C){
        return 3;
    }else if(color >= 0x00009C && color < 0x0000CD){
        return 3;
    }else if(color >= 0x0000CD && color < 0x0000FF){
        return 3;
    }else if(color >= 0x0000FF && color < 0x002FA7){
        return 3;
    }else if(color >= 0x002FA7 && color < 0x003366){
        return 3;
    }else if(color >= 0x003366 && color < 0x003399){
        return 3;
    }else if(color >= 0x003399 && color < 0x004225){
        return 3;
    }else if(color >= 0x004225 && color < 0x0047AB){
        return 2;
    }else if(color >= 0x0047AB && color < 0x00494E){
        return 3;
    }else if(color >= 0x00494E && color < 0x005F5B){
        return 2;
    }else if(color >= 0x005F5B && color < 0x00626F){
        return 2;
    }else if(color >= 0x00626F && color < 0x0066CC){
        return 2;
    }else if(color >= 0x0066CC && color < 0x006E4E){
        return 3;
    }else if(color >= 0x006E4E && color < 0x00755E){
        return 2;
    }else if(color >= 0x00755E && color < 0x007B77){
        return 2;
    }else if(color >= 0x007B77 && color < 0x007BA7){
        return 2;
    }else if(color >= 0x007BA7 && color < 0x008000){
        return 3;
    }else if(color >= 0x008000 && color < 0x008080){
        return 2;
    }else if(color >= 0x008080 && color < 0x00879F){
        return 3;
    }else if(color >= 0x00879F && color < 0x008B8B){
        return 3;
    }else if(color >= 0x008B8B && color < 0x008F70){
        return 2;
    }else if(color >= 0x008F70 && color < 0x0095B6){
        return 2;
    }else if(color >= 0x0095B6 && color < 0x009900){
        return 3;
    }else if(color >= 0x009900 && color < 0x009DC4){
        return 2;
    }else if(color >= 0x009DC4 && color < 0x009E60){
        return 3;
    }else if(color >= 0x009E60 && color < 0x00A550){
        return 2;
    }else if(color >= 0x00A550 && color < 0x00A693){
        return 2;
    }else if(color >= 0x00A693 && color < 0x00A86B){
        return 2;
    }else if(color >= 0x00A86B && color < 0x00BFFF){
        return 2;
    }else if(color >= 0x00BFFF && color < 0x00CC99){
        return 3;
    }else if(color >= 0x00CC99 && color < 0x00CCCC){
        return 2;
    }else if(color >= 0x00CCCC && color < 0x00CED1){
        return 3;
    }else if(color >= 0x00CED1 && color < 0x00FA9A){
        return 3;
    }else if(color >= 0x00FA9A && color < 0x00FF00){
        return 2;
    }else if(color >= 0x00FF00 && color < 0x00FF7F){
        return 2;
    }else if(color >= 0x00FF7F && color < 0x00FFFF){
        return 2;
    }else if(color >= 0x00FFFF && color < 0x013220){
        return 3;
    }else if(color >= 0x013220 && color < 0x01796F){
        return 2;
    }else if(color >= 0x01796F && color < 0x029D74){
        return 2;
    }else if(color >= 0x029D74 && color < 0x03B4C8){
        return 2;
    }else if(color >= 0x03B4C8 && color < 0x03C03C){
        return 3;
    }else if(color >= 0x03C03C && color < 0x082567){
        return 2;
    }else if(color >= 0x082567 && color < 0x08457E){
        return 3;
    }else if(color >= 0x08457E && color < 0x08E8DE){
        return 3;
    }else if(color >= 0x08E8DE && color < 0x09F911){
        return 3;
    }else if(color >= 0x09F911 && color < 0x0BDA51){
        return 2;
    }else if(color >= 0x0BDA51 && color < 0x0F4645){
        return 2;
    }else if(color >= 0x0F4645 && color < 0x1034A6){
        return 2;
    }else if(color >= 0x1034A6 && color < 0x120A8F){
        return 3;
    }else if(color >= 0x120A8F && color < 0x136843){
        return 3;
    }else if(color >= 0x136843 && color < 0x1560BD){
        return 2;
    }else if(color >= 0x1560BD && color < 0x15633D){
        return 3;
    }else if(color >= 0x15633D && color < 0x165B31){
        return 2;
    }else if(color >= 0x165B31 && color < 0x166461){
        return 2;
    }else if(color >= 0x166461 && color < 0x167E65){
        return 2;
    }else if(color >= 0x167E65 && color < 0x17462E){
        return 2;
    }else if(color >= 0x17462E && color < 0x177245){
        return 2;
    }else if(color >= 0x177245 && color < 0x177B4D){
        return 2;
    }else if(color >= 0x177B4D && color < 0x184343){
        return 2;
    }else if(color >= 0x184343 && color < 0x191970){
        return 2;
    }else if(color >= 0x191970 && color < 0x193925){
        return 3;
    }else if(color >= 0x193925 && color < 0x19443C){
        return 2;
    }else if(color >= 0x19443C && color < 0x1AB385){
        return 2;
    }else if(color >= 0x1AB385 && color < 0x1B3427){
        return 2;
    }else if(color >= 0x1B3427 && color < 0x1B4636){
        return 2;
    }else if(color >= 0x1B4636 && color < 0x1B4B35){
        return 2;
    }else if(color >= 0x1B4B35 && color < 0x1B8A6B){
        return 2;
    }else if(color >= 0x1B8A6B && color < 0x1C39BB){
        return 2;
    }else if(color >= 0x1C39BB && color < 0x1D393C){
        return 3;
    }else if(color >= 0x1D393C && color < 0x1E272C){
        return 3;
    }else if(color >= 0x1E272C && color < 0x1E2F3C){
        return 3;
    }else if(color >= 0x1E2F3C && color < 0x1E3442){
        return 3;
    }else if(color >= 0x1E3442 && color < 0x1E90FF){
        return 3;
    }else if(color >= 0x1E90FF && color < 0x1F6A7D){
        return 3;
    }else if(color >= 0x1F6A7D && color < 0x20392C){
        return 3;
    }else if(color >= 0x20392C && color < 0x203F58){
        return 2;
    }else if(color >= 0x203F58 && color < 0x206937){
        return 3;
    }else if(color >= 0x206937 && color < 0x20B2AA){
        return 2;
    }else if(color >= 0x20B2AA && color < 0x21263A){
        return 2;
    }else if(color >= 0x21263A && color < 0x21303E){
        return 3;
    }else if(color >= 0x21303E && color < 0x21421E){
        return 3;
    }else if(color >= 0x21421E && color < 0x214559){
        return 2;
    }else if(color >= 0x214559 && color < 0x228B22){
        return 3;
    }else if(color >= 0x228B22 && color < 0x232E26){
        return 2;
    }else if(color >= 0x232E26 && color < 0x232F2C){
        return 2;
    }else if(color >= 0x232F2C && color < 0x23414E){
        return 2;
    }else if(color >= 0x23414E && color < 0x234537){
        return 3;
    }else if(color >= 0x234537 && color < 0x24252B){
        return 2;
    }else if(color >= 0x24252B && color < 0x242A2E){
        return 5;
    }else if(color >= 0x242A2E && color < 0x242E28){
        return 5;
    }else if(color >= 0x242E28 && color < 0x243640){
        return 2;
    }else if(color >= 0x243640 && color < 0x245336){
        return 3;
    }else if(color >= 0x245336 && color < 0x252525){
        return 2;
    }else if(color >= 0x252525 && color < 0x252F2F){
        return 5;
    }else if(color >= 0x252F2F && color < 0x25342B){
        return 2;
    }else if(color >= 0x25342B && color < 0x253C48){
        return 2;
    }else if(color >= 0x253C48 && color < 0x253F4E){
        return 3;
    }else if(color >= 0x253F4E && color < 0x254636){
        return 3;
    }else if(color >= 0x254636 && color < 0x254855){
        return 2;
    }else if(color >= 0x254855 && color < 0x25597F){
        return 3;
    }else if(color >= 0x25597F && color < 0x255B77){
        return 3;
    }else if(color >= 0x255B77 && color < 0x259797){
        return 3;
    }else if(color >= 0x259797 && color < 0x2599B2){
        return 2;
    }else if(color >= 0x2599B2 && color < 0x262B2F){
        return 3;
    }else if(color >= 0x262B2F && color < 0x264334){
        return 3;
    }else if(color >= 0x264334 && color < 0x26604F){
        return 2;
    }else if(color >= 0x26604F && color < 0x266242){
        return 2;
    }else if(color >= 0x266242 && color < 0x266255){
        return 2;
    }else if(color >= 0x266255 && color < 0x273C5A){
        return 2;
    }else if(color >= 0x273C5A && color < 0x274234){
        return 3;
    }else if(color >= 0x274234 && color < 0x274A5D){
        return 2;
    }else if(color >= 0x274A5D && color < 0x28353A){
        return 3;
    }else if(color >= 0x28353A && color < 0x29292F){
        return 3;
    }else if(color >= 0x29292F && color < 0x292C2F){
        return 3;
    }else if(color >= 0x292C2F && color < 0x292D4F){
        return 5;
    }else if(color >= 0x292D4F && color < 0x29332B){
        return 3;
    }else if(color >= 0x29332B && color < 0x293432){
        return 2;
    }else if(color >= 0x293432 && color < 0x29598B){
        return 2;
    }else if(color >= 0x29598B && color < 0x297B76){
        return 3;
    }else if(color >= 0x297B76 && color < 0x29A98B){
        return 2;
    }else if(color >= 0x29A98B && color < 0x29AB87){
        return 2;
    }else if(color >= 0x29AB87 && color < 0x2A2551){
        return 2;
    }else if(color >= 0x2A2551 && color < 0x2A2725){
        return 0;
    }else if(color >= 0x2A2725 && color < 0x2A2922){
        return 5;
    }else if(color >= 0x2A2922 && color < 0x2A2B41){
        return 1;
    }else if(color >= 0x2A2B41 && color < 0x2A2F23){
        return 0;
    }else if(color >= 0x2A2F23 && color < 0x2A52BE){
        return 2;
    }else if(color >= 0x2A52BE && color < 0x2B2E25){
        return 3;
    }else if(color >= 0x2B2E25 && color < 0x2B2E26){
        return 2;
    }else if(color >= 0x2B2E26 && color < 0x2B3230){
        return 2;
    }else if(color >= 0x2B3230 && color < 0x2B3449){
        return 5;
    }else if(color >= 0x2B3449 && color < 0x2B3F36){
        return 3;
    }else if(color >= 0x2B3F36 && color < 0x2B4B40){
        return 2;
    }else if(color >= 0x2B4B40 && color < 0x2B797A){
        return 2;
    }else if(color >= 0x2B797A && color < 0x2C2A35){
        return 2;
    }else if(color >= 0x2C2A35 && color < 0x2C2C32){
        return 0;
    }else if(color >= 0x2C2C32 && color < 0x2C2D24){
        return 3;
    }else if(color >= 0x2C2D24 && color < 0x2C2D3C){
        return 2;
    }else if(color >= 0x2C2D3C && color < 0x2C3227){
        return 3;
    }else if(color >= 0x2C3227 && color < 0x2C3539){
        return 2;
    }else if(color >= 0x2C3539 && color < 0x2C4641){
        return 3;
    }else if(color >= 0x2C4641 && color < 0x2C5778){
        return 2;
    }else if(color >= 0x2C5778 && color < 0x2C5971){
        return 3;
    }else if(color >= 0x2C5971 && color < 0x2C6E31){
        return 3;
    }else if(color >= 0x2C6E31 && color < 0x2D2541){
        return 2;
    }else if(color >= 0x2D2541 && color < 0x2D2D24){
        return 0;
    }else if(color >= 0x2D2D24 && color < 0x2D2F28){
        return 2;
    }else if(color >= 0x2D2F28 && color < 0x2D3032){
        return 2;
    }else if(color >= 0x2D3032 && color < 0x2D383A){
        return 5;
    }else if(color >= 0x2D383A && color < 0x2D3C54){
        return 5;
    }else if(color >= 0x2D3C54 && color < 0x2E183B){
        return 3;
    }else if(color >= 0x2E183B && color < 0x2E2249){
        return 0;
    }else if(color >= 0x2E2249 && color < 0x2E3749){
        return 0;
    }else if(color >= 0x2E3749 && color < 0x2E8B57){
        return 3;
    }else if(color >= 0x2E8B57 && color < 0x2F3C53){
        return 2;
    }else if(color >= 0x2F3C53 && color < 0x2F4F4F){
        return 3;
    }else if(color >= 0x2F4F4F && color < 0x2F7532){
        return 5;
    }else if(color >= 0x2F7532 && color < 0x302621){
        return 2;
    }else if(color >= 0x302621 && color < 0x305C71){
        return 4;
    }else if(color >= 0x305C71 && color < 0x305D35){
        return 3;
    }else if(color >= 0x305D35 && color < 0x308EA0){
        return 2;
    }else if(color >= 0x308EA0 && color < 0x312760){
        return 3;
    }else if(color >= 0x312760 && color < 0x312A29){
        return 0;
    }else if(color >= 0x312A29 && color < 0x313330){
        return 4;
    }else if(color >= 0x313330 && color < 0x313337){
        return 5;
    }else if(color >= 0x313337 && color < 0x314643){
        return 5;
    }else if(color >= 0x314643 && color < 0x316EA0){
        return 2;
    }else if(color >= 0x316EA0 && color < 0x31796D){
        return 3;
    }else if(color >= 0x31796D && color < 0x32127A){
        return 2;
    }else if(color >= 0x32127A && color < 0x321414){
        return 0;
    }else if(color >= 0x321414 && color < 0x322C2B){
        return 4;
    }else if(color >= 0x322C2B && color < 0x323438){
        return 5;
    }else if(color >= 0x323438 && color < 0x323F75){
        return 5;
    }else if(color >= 0x323F75 && color < 0x324336){
        return 3;
    }else if(color >= 0x324336 && color < 0x325482){
        return 2;
    }else if(color >= 0x325482 && color < 0x329760){
        return 3;
    }else if(color >= 0x329760 && color < 0x32CD32){
        return 2;
    }else if(color >= 0x32CD32 && color < 0x332C22){
        return 2;
    }else if(color >= 0x332C22 && color < 0x332E2E){
        return 4;
    }else if(color >= 0x332E2E && color < 0x334046){
        return 5;
    }else if(color >= 0x334046 && color < 0x335083){
        return 3;
    }else if(color >= 0x335083 && color < 0x33CC99){
        return 3;
    }else if(color >= 0x33CC99 && color < 0x342931){
        return 2;
    }else if(color >= 0x342931 && color < 0x343467){
        return 0;
    }else if(color >= 0x343467 && color < 0x34363A){
        return 0;
    }else if(color >= 0x34363A && color < 0x343F5C){
        return 5;
    }else if(color >= 0x343F5C && color < 0x34533D){
        return 3;
    }else if(color >= 0x34533D && color < 0x352235){
        return 2;
    }else if(color >= 0x352235 && color < 0x35281E){
        return 0;
    }else if(color >= 0x35281E && color < 0x35312C){
        return 4;
    }else if(color >= 0x35312C && color < 0x353D75){
        return 4;
    }else if(color >= 0x353D75 && color < 0x353E4F){
        return 3;
    }else if(color >= 0x353E4F && color < 0x353E64){
        return 3;
    }else if(color >= 0x353E64 && color < 0x35514F){
        return 3;
    }else if(color >= 0x35514F && color < 0x355E3B){
        return 2;
    }else if(color >= 0x355E3B && color < 0x362D26){
        return 2;
    }else if(color >= 0x362D26 && color < 0x36383C){
        return 4;
    }else if(color >= 0x36383C && color < 0x363E1D){
        return 5;
    }else if(color >= 0x363E1D && color < 0x36482F){
        return 2;
    }else if(color >= 0x36482F && color < 0x365C7D){
        return 2;
    }else if(color >= 0x365C7D && color < 0x372528){
        return 3;
    }else if(color >= 0x372528 && color < 0x372D52){
        return 4;
    }else if(color >= 0x372D52 && color < 0x373332){
        return 0;
    }else if(color >= 0x373332 && color < 0x37363F){
        return 5;
    }else if(color >= 0x37363F && color < 0x373E41){
        return 0;
    }else if(color >= 0x373E41 && color < 0x373F43){
        return 3;
    }else if(color >= 0x373F43 && color < 0x37412A){
        return 3;
    }else if(color >= 0x37412A && color < 0x374E88){
        return 2;
    }else if(color >= 0x374E88 && color < 0x375D4F){
        return 3;
    }else if(color >= 0x375D4F && color < 0x376F89){
        return 2;
    }else if(color >= 0x376F89 && color < 0x382161){
        return 3;
    }else if(color >= 0x382161 && color < 0x382C38){
        return 0;
    }else if(color >= 0x382C38 && color < 0x383428){
        return 0;
    }else if(color >= 0x383428 && color < 0x383740){
        return 1;
    }else if(color >= 0x383740 && color < 0x387B54){
        return 3;
    }else if(color >= 0x387B54 && color < 0x38B0DE){
        return 2;
    }else if(color >= 0x38B0DE && color < 0x393227){
        return 3;
    }else if(color >= 0x393227 && color < 0x39392C){
        return 4;
    }else if(color >= 0x39392C && color < 0x393B3C){
        return 2;
    }else if(color >= 0x393B3C && color < 0x393D2A){
        return 5;
    }else if(color >= 0x393D2A && color < 0x393E2E){
        return 2;
    }else if(color >= 0x393E2E && color < 0x394043){
        return 2;
    }else if(color >= 0x394043 && color < 0x395555){
        return 3;
    }else if(color >= 0x395555 && color < 0x399F86){
        return 2;
    }else if(color >= 0x399F86 && color < 0x3A181A){
        return 2;
    }else if(color >= 0x3A181A && color < 0x3A3532){
        return 0;
    }else if(color >= 0x3A3532 && color < 0x3A4531){
        return 5;
    }else if(color >= 0x3A4531 && color < 0x3A4E5F){
        return 2;
    }else if(color >= 0x3A4E5F && color < 0x3B2B2C){
        return 3;
    }else if(color >= 0x3B2B2C && color < 0x3B2E25){
        return 4;
    }else if(color >= 0x3B2E25 && color < 0x3B3C38){
        return 4;
    }else if(color >= 0x3B3C38 && color < 0x3B436C){
        return 5;
    }else if(color >= 0x3B436C && color < 0x3B444B){
        return 3;
    }else if(color >= 0x3B444B && color < 0x3C2126){
        return 5;
    }else if(color >= 0x3C2126 && color < 0x3C241B){
        return 4;
    }else if(color >= 0x3C241B && color < 0x3C2F23){
        return 4;
    }else if(color >= 0x3C2F23 && color < 0x3C3748){
        return 4;
    }else if(color >= 0x3C3748 && color < 0x3C3B3C){
        return 0;
    }else if(color >= 0x3C3B3C && color < 0x3C3D3E){
        return 5;
    }else if(color >= 0x3C3D3E && color < 0x3C4354){
        return 5;
    }else if(color >= 0x3C4354 && color < 0x3CB371){
        return 3;
    }else if(color >= 0x3CB371 && color < 0x3D2B1F){
        return 2;
    }else if(color >= 0x3D2B1F && color < 0x3D325D){
        return 4;
    }else if(color >= 0x3D325D && color < 0x3D3F7D){
        return 0;
    }else if(color >= 0x3D3F7D && color < 0x3D4031){
        return 0;
    }else if(color >= 0x3D4031 && color < 0x3D4653){
        return 2;
    }else if(color >= 0x3D4653 && color < 0x3D4B52){
        return 3;
    }else if(color >= 0x3D4B52 && color < 0x3D7188){
        return 3;
    }else if(color >= 0x3D7188 && color < 0x3D85B8){
        return 3;
    }else if(color >= 0x3D85B8 && color < 0x3E2631){
        return 3;
    }else if(color >= 0x3E2631 && color < 0x3E3267){
        return 0;
    }else if(color >= 0x3E3267 && color < 0x3E594C){
        return 0;
    }else if(color >= 0x3E594C && color < 0x3E6334){
        return 2;
    }else if(color >= 0x3E6334 && color < 0x3E8027){
        return 2;
    }else if(color >= 0x3E8027 && color < 0x3F2E4C){
        return 2;
    }else if(color >= 0x3F2E4C && color < 0x3F3623){
        return 0;
    }else if(color >= 0x3F3623 && color < 0x3F3726){
        return 4;
    }else if(color >= 0x3F3726 && color < 0x3F3939){
        return 1;
    }else if(color >= 0x3F3939 && color < 0x3F545A){
        return 5;
    }else if(color >= 0x3F545A && color < 0x3FFF00){
        return 3;
    }else if(color >= 0x3FFF00 && color < 0x404048){
        return 2;
    }else if(color >= 0x404048 && color < 0x404D49){
        return 5;
    }else if(color >= 0x404D49 && color < 0x406356){
        return 2;
    }else if(color >= 0x406356 && color < 0x407577){
        return 2;
    }else if(color >= 0x407577 && color < 0x40826D){
        return 2;
    }else if(color >= 0x40826D && color < 0x408F90){
        return 3;
    }else if(color >= 0x408F90 && color < 0x40E0D0){
        return 2;
    }else if(color >= 0x40E0D0 && color < 0x413628){
        return 3;
    }else if(color >= 0x413628 && color < 0x413D4B){
        return 4;
    }else if(color >= 0x413D4B && color < 0x4156C5){
        return 0;
    }else if(color >= 0x4156C5 && color < 0x4169E1){
        return 3;
    }else if(color >= 0x4169E1 && color < 0x419F59){
        return 3;
    }else if(color >= 0x419F59 && color < 0x42342B){
        return 2;
    }else if(color >= 0x42342B && color < 0x42426F){
        return 4;
    }else if(color >= 0x42426F && color < 0x42639F){
        return 3;
    }else if(color >= 0x42639F && color < 0x428929){
        return 3;
    }else if(color >= 0x428929 && color < 0x43182F){
        return 2;
    }else if(color >= 0x43182F && color < 0x43464B){
        return 0;
    }else if(color >= 0x43464B && color < 0x434C28){
        return 5;
    }else if(color >= 0x434C28 && color < 0x438EAC){
        return 1;
    }else if(color >= 0x438EAC && color < 0x44232F){
        return 3;
    }else if(color >= 0x44232F && color < 0x442D21){
        return 0;
    }else if(color >= 0x442D21 && color < 0x443240){
        return 4;
    }else if(color >= 0x443240 && color < 0x44362D){
        return 0;
    }else if(color >= 0x44362D && color < 0x443736){
        return 4;
    }else if(color >= 0x443736 && color < 0x445172){
        return 4;
    }else if(color >= 0x445172 && color < 0x445761){
        return 3;
    }else if(color >= 0x445761 && color < 0x44798E){
        return 3;
    }else if(color >= 0x44798E && color < 0x452E39){
        return 3;
    }else if(color >= 0x452E39 && color < 0x453430){
        return 0;
    }else if(color >= 0x453430 && color < 0x45362B){
        return 4;
    }else if(color >= 0x45362B && color < 0x45402B){
        return 4;
    }else if(color >= 0x45402B && color < 0x454642){
        return 1;
    }else if(color >= 0x454642 && color < 0x462C77){
        return 5;
    }else if(color >= 0x462C77 && color < 0x463430){
        return 0;
    }else if(color >= 0x463430 && color < 0x463623){
        return 4;
    }else if(color >= 0x463623 && color < 0x463629){
        return 4;
    }else if(color >= 0x463629 && color < 0x463D3E){
        return 4;
    }else if(color >= 0x463D3E && color < 0x464646){
        return 5;
    }else if(color >= 0x464646 && color < 0x46473E){
        return 5;
    }else if(color >= 0x46473E && color < 0x46494E){
        return 5;
    }else if(color >= 0x46494E && color < 0x465352){
        return 5;
    }else if(color >= 0x465352 && color < 0x465945){
        return 2;
    }else if(color >= 0x465945 && color < 0x4682B4){
        return 2;
    }else if(color >= 0x4682B4 && color < 0x473E23){
        return 3;
    }else if(color >= 0x473E23 && color < 0x47526E){
        return 4;
    }else if(color >= 0x47526E && color < 0x47562F){
        return 3;
    }else if(color >= 0x47562F && color < 0x475877){
        return 2;
    }else if(color >= 0x475877 && color < 0x482427){
        return 3;
    }else if(color >= 0x482427 && color < 0x483C32){
        return 0;
    }else if(color >= 0x483C32 && color < 0x483D8B){
        return 5;
    }else if(color >= 0x483D8B && color < 0x48412B){
        return 3;
    }else if(color >= 0x48412B && color < 0x484753){
        return 1;
    }else if(color >= 0x484753 && color < 0x484A46){
        return 0;
    }else if(color >= 0x484A46 && color < 0x48531A){
        return 5;
    }else if(color >= 0x48531A && color < 0x486531){
        return 2;
    }else if(color >= 0x486531 && color < 0x486C7A){
        return 2;
    }else if(color >= 0x486C7A && color < 0x488084){
        return 3;
    }else if(color >= 0x488084 && color < 0x489084){
        return 2;
    }else if(color >= 0x489084 && color < 0x48D1CC){
        return 2;
    }else if(color >= 0x48D1CC && color < 0x496267){
        return 3;
    }else if(color >= 0x496267 && color < 0x496569){
        return 3;
    }else if(color >= 0x496569 && color < 0x49764F){
        return 3;
    }else if(color >= 0x49764F && color < 0x49889A){
        return 2;
    }else if(color >= 0x49889A && color < 0x4A2D57){
        return 3;
    }else if(color >= 0x4A2D57 && color < 0x4A2E32){
        return 0;
    }else if(color >= 0x4A2E32 && color < 0x4A3B6A){
        return 0;
    }else if(color >= 0x4A3B6A && color < 0x4A4B46){
        return 0;
    }else if(color >= 0x4A4B46 && color < 0x4A766E){
        return 5;
    }else if(color >= 0x4A766E && color < 0x4B0082){
        return 2;
    }else if(color >= 0x4B0082 && color < 0x4B2D72){
        return 0;
    }else if(color >= 0x4B2D72 && color < 0x4B3C8E){
        return 0;
    }else if(color >= 0x4B3C8E && color < 0x4B433B){
        return 0;
    }else if(color >= 0x4B433B && color < 0x4B5320){
        return 4;
    }else if(color >= 0x4B5320 && color < 0x4B5A62){
        return 2;
    }else if(color >= 0x4B5A62 && color < 0x4B5F56){
        return 3;
    }else if(color >= 0x4B5F56 && color < 0x4BA351){
        return 2;
    }else if(color >= 0x4BA351 && color < 0x4C1C24){
        return 2;
    }else if(color >= 0x4C1C24 && color < 0x4C3347){
        return 0;
    }else if(color >= 0x4C3347 && color < 0x4C3D4E){
        return 0;
    }else if(color >= 0x4C3D4E && color < 0x4C4E31){
        return 0;
    }else if(color >= 0x4C4E31 && color < 0x4C5356){
        return 2;
    }else if(color >= 0x4C5356 && color < 0x4C5544){
        return 5;
    }else if(color >= 0x4C5544 && color < 0x4C6B88){
        return 2;
    }else if(color >= 0x4C6B88 && color < 0x4C785C){
        return 3;
    }else if(color >= 0x4C785C && color < 0x4CA973){
        return 2;
    }else if(color >= 0x4CA973 && color < 0x4CBB17){
        return 2;
    }else if(color >= 0x4CBB17 && color < 0x4D3E3C){
        return 2;
    }else if(color >= 0x4D3E3C && color < 0x4D4D4B){
        return 4;
    }else if(color >= 0x4D4D4B && color < 0x4D4DFF){
        return 5;
    }else if(color >= 0x4D4DFF && color < 0x4D503C){
        return 3;
    }else if(color >= 0x4D503C && color < 0x4D5D53){
        return 2;
    }else if(color >= 0x4D5D53 && color < 0x4DB1C8){
        return 5;
    }else if(color >= 0x4DB1C8 && color < 0x4E2728){
        return 3;
    }else if(color >= 0x4E2728 && color < 0x4E2E53){
        return 0;
    }else if(color >= 0x4E2E53 && color < 0x4E312D){
        return 0;
    }else if(color >= 0x4E312D && color < 0x4E4E4C){
        return 0;
    }else if(color >= 0x4E4E4C && color < 0x4E5541){
        return 5;
    }else if(color >= 0x4E5541 && color < 0x4E5552){
        return 2;
    }else if(color >= 0x4E5552 && color < 0x4E5D4E){
        return 5;
    }else if(color >= 0x4E5D4E && color < 0x4E6C9D){
        return 2;
    }else if(color >= 0x4E6C9D && color < 0x4F2A2C){
        return 3;
    }else if(color >= 0x4F2A2C && color < 0x4F301F){
        return 0;
    }else if(color >= 0x4F301F && color < 0x4F3835){
        return 4;
    }else if(color >= 0x4F3835 && color < 0x4F4037){
        return 0;
    }else if(color >= 0x4F4037 && color < 0x4F4D32){
        return 4;
    }else if(color >= 0x4F4D32 && color < 0x4F4E48){
        return 1;
    }else if(color >= 0x4F4E48 && color < 0x4F6348){
        return 5;
    }else if(color >= 0x4F6348 && color < 0x4F7942){
        return 2;
    }else if(color >= 0x4F7942 && color < 0x50404D){
        return 2;
    }else if(color >= 0x50404D && color < 0x50494A){
        return 5;
    }else if(color >= 0x50494A && color < 0x505555){
        return 5;
    }else if(color >= 0x505555 && color < 0x506355){
        return 5;
    }else if(color >= 0x506355 && color < 0x50C878){
        return 2;
    }else if(color >= 0x50C878 && color < 0x51412D){
        return 2;
    }else if(color >= 0x51412D && color < 0x514F4A){
        return 4;
    }else if(color >= 0x514F4A && color < 0x51559B){
        return 5;
    }else if(color >= 0x51559B && color < 0x51574F){
        return 3;
    }else if(color >= 0x51574F && color < 0x517B78){
        return 5;
    }else if(color >= 0x517B78 && color < 0x5218FA){
        return 2;
    }else if(color >= 0x5218FA && color < 0x522426){
        return 0;
    }else if(color >= 0x522426 && color < 0x522C35){
        return 0;
    }else if(color >= 0x522C35 && color < 0x523936){
        return 0;
    }else if(color >= 0x523936 && color < 0x524B4B){
        return 4;
    }else if(color >= 0x524B4B && color < 0x524D5B){
        return 5;
    }else if(color >= 0x524D5B && color < 0x526B2D){
        return 0;
    }else if(color >= 0x526B2D && color < 0x532934){
        return 2;
    }else if(color >= 0x532934 && color < 0x53331E){
        return 0;
    }else if(color >= 0x53331E && color < 0x534931){
        return 4;
    }else if(color >= 0x534931 && color < 0x534B4F){
        return 1;
    }else if(color >= 0x534B4F && color < 0x53736F){
        return 4;
    }else if(color >= 0x53736F && color < 0x544E31){
        return 2;
    }else if(color >= 0x544E31 && color < 0x544F3A){
        return 1;
    }else if(color >= 0x544F3A && color < 0x554545){
        return 1;
    }else if(color >= 0x554545 && color < 0x554A3C){
        return 4;
    }else if(color >= 0x554A3C && color < 0x554D42){
        return 0;
    }else if(color >= 0x554D42 && color < 0x555B2C){
        return 4;
    }else if(color >= 0x555B2C && color < 0x556061){
        return 2;
    }else if(color >= 0x556061 && color < 0x556B2F){
        return 3;
    }else if(color >= 0x556B2F && color < 0x558F93){
        return 2;
    }else if(color >= 0x558F93 && color < 0x564786){
        return 3;
    }else if(color >= 0x564786 && color < 0x564985){
        return 0;
    }else if(color >= 0x564985 && color < 0x565051){
        return 0;
    }else if(color >= 0x565051 && color < 0x57534B){
        return 5;
    }else if(color >= 0x57534B && color < 0x57595D){
        return 4;
    }else if(color >= 0x57595D && color < 0x576D8E){
        return 5;
    }else if(color >= 0x576D8E && color < 0x5784C1){
        return 3;
    }else if(color >= 0x5784C1 && color < 0x582124){
        return 3;
    }else if(color >= 0x582124 && color < 0x582F2B){
        return 0;
    }else if(color >= 0x582F2B && color < 0x583580){
        return 0;
    }else if(color >= 0x583580 && color < 0x584C25){
        return 0;
    }else if(color >= 0x584C25 && color < 0x585452){
        return 1;
    }else if(color >= 0x585452 && color < 0x592720){
        return 5;
    }else if(color >= 0x592720 && color < 0x594537){
        return 4;
    }else if(color >= 0x594537 && color < 0x595648){
        return 4;
    }else if(color >= 0x595648 && color < 0x5959AB){
        return 4;
    }else if(color >= 0x5959AB && color < 0x59BAA3){
        return 3;
    }else if(color >= 0x59BAA3 && color < 0x5A4C42){
        return 2;
    }else if(color >= 0x5A4C42 && color < 0x5A4D41){
        return 4;
    }else if(color >= 0x5A4D41 && color < 0x5A4F51){
        return 4;
    }else if(color >= 0x5A4F51 && color < 0x5A6E41){
        return 4;
    }else if(color >= 0x5A6E41 && color < 0x5B342E){
        return 2;
    }else if(color >= 0x5B342E && color < 0x5B3A24){
        return 0;
    }else if(color >= 0x5B3A24 && color < 0x5B3D27){
        return 4;
    }else if(color >= 0x5B3D27 && color < 0x5B3E90){
        return 4;
    }else if(color >= 0x5B3E90 && color < 0x5B5D56){
        return 0;
    }else if(color >= 0x5B5D56 && color < 0x5B6E91){
        return 5;
    }else if(color >= 0x5B6E91 && color < 0x5B6F55){
        return 3;
    }else if(color >= 0x5B6F55 && color < 0x5B89C0){
        return 2;
    }else if(color >= 0x5B89C0 && color < 0x5BA0D0){
        return 3;
    }else if(color >= 0x5BA0D0 && color < 0x5C3317){
        return 3;
    }else if(color >= 0x5C3317 && color < 0x5C3C6D){
        return 4;
    }else if(color >= 0x5C3C6D && color < 0x5C4033){
        return 0;
    }else if(color >= 0x5C4033 && color < 0x5C512F){
        return 4;
    }else if(color >= 0x5C512F && color < 0x5C8173){
        return 1;
    }else if(color >= 0x5C8173 && color < 0x5D1F1E){
        return 2;
    }else if(color >= 0x5D1F1E && color < 0x5D3B2E){
        return 0;
    }else if(color >= 0x5D3B2E && color < 0x5D4E46){
        return 4;
    }else if(color >= 0x5D4E46 && color < 0x5D5346){
        return 4;
    }else if(color >= 0x5D5346 && color < 0x5D8AA8){
        return 4;
    }else if(color >= 0x5D8AA8 && color < 0x5F2C2F){
        return 3;
    }else if(color >= 0x5F2C2F && color < 0x5F8151){
        return 0;
    }else if(color >= 0x5F8151 && color < 0x5F9228){
        return 2;
    }else if(color >= 0x5F9228 && color < 0x5F9727){
        return 2;
    }else if(color >= 0x5F9727 && color < 0x5F9EA0){
        return 2;
    }else if(color >= 0x5F9EA0 && color < 0x5FB69C){
        return 3;
    }else if(color >= 0x5FB69C && color < 0x605A67){
        return 2;
    }else if(color >= 0x605A67 && color < 0x605D6B){
        return 0;
    }else if(color >= 0x605D6B && color < 0x607C47){
        return 0;
    }else if(color >= 0x607C47 && color < 0x608A5A){
        return 2;
    }else if(color >= 0x608A5A && color < 0x609AB8){
        return 2;
    }else if(color >= 0x609AB8 && color < 0x61666B){
        return 3;
    }else if(color >= 0x61666B && color < 0x61755B){
        return 5;
    }else if(color >= 0x61755B && color < 0x62422B){
        return 2;
    }else if(color >= 0x62422B && color < 0x625665){
        return 4;
    }else if(color >= 0x625665 && color < 0x625D2A){
        return 0;
    }else if(color >= 0x625D2A && color < 0x62603E){
        return 2;
    }else if(color >= 0x62603E && color < 0x626746){
        return 5;
    }else if(color >= 0x626746 && color < 0x62777E){
        return 2;
    }else if(color >= 0x62777E && color < 0x633528){
        return 3;
    }else if(color >= 0x633528 && color < 0x636373){
        return 4;
    }else if(color >= 0x636373 && color < 0x636D70){
        return 3;
    }else if(color >= 0x636D70 && color < 0x636F22){
        return 3;
    }else if(color >= 0x636F22 && color < 0x63775A){
        return 2;
    }else if(color >= 0x63775A && color < 0x639283){
        return 2;
    }else if(color >= 0x639283 && color < 0x63B76C){
        return 2;
    }else if(color >= 0x63B76C && color < 0x643A48){
        return 2;
    }else if(color >= 0x643A48 && color < 0x647D86){
        return 0;
    }else if(color >= 0x647D86 && color < 0x648894){
        return 3;
    }else if(color >= 0x648894 && color < 0x6495ED){
        return 3;
    }else if(color >= 0x6495ED && color < 0x651C26){
        return 3;
    }else if(color >= 0x651C26 && color < 0x652DC1){
        return 0;
    }else if(color >= 0x652DC1 && color < 0x654321){
        return 0;
    }else if(color >= 0x654321 && color < 0x654D49){
        return 4;
    }else if(color >= 0x654D49 && color < 0x65645F){
        return 4;
    }else if(color >= 0x65645F && color < 0x65ADB2){
        return 5;
    }else if(color >= 0x65ADB2 && color < 0x6600FF){
        return 3;
    }else if(color >= 0x6600FF && color < 0x66023C){
        return 0;
    }else if(color >= 0x66023C && color < 0x662A2C){
        return 0;
    }else if(color >= 0x662A2C && color < 0x664A2D){
        return 0;
    }else if(color >= 0x664A2D && color < 0x666A6D){
        return 4;
    }else if(color >= 0x666A6D && color < 0x666F6F){
        return 5;
    }else if(color >= 0x666F6F && color < 0x666FB4){
        return 5;
    }else if(color >= 0x666FB4 && color < 0x667028){
        return 3;
    }else if(color >= 0x667028 && color < 0x66B348){
        return 2;
    }else if(color >= 0x66B348 && color < 0x66B7E1){
        return 2;
    }else if(color >= 0x66B7E1 && color < 0x66CDAA){
        return 3;
    }else if(color >= 0x66CDAA && color < 0x66FF00){
        return 3;
    }else if(color >= 0x66FF00 && color < 0x66FF66){
        return 2;
    }else if(color >= 0x66FF66 && color < 0x674834){
        return 2;
    }else if(color >= 0x674834 && color < 0x67BE90){
        return 4;
    }else if(color >= 0x67BE90 && color < 0x682860){
        return 2;
    }else if(color >= 0x682860 && color < 0x683332){
        return 0;
    }else if(color >= 0x683332 && color < 0x68578C){
        return 0;
    }else if(color >= 0x68578C && color < 0x686B50){
        return 0;
    }else if(color >= 0x686B50 && color < 0x68766E){
        return 2;
    }else if(color >= 0x68766E && color < 0x69293B){
        return 2;
    }else if(color >= 0x69293B && color < 0x69326E){
        return 0;
    }else if(color >= 0x69326E && color < 0x694554){
        return 0;
    }else if(color >= 0x694554 && color < 0x695D87){
        return 0;
    }else if(color >= 0x695D87 && color < 0x695F50){
        return 0;
    }else if(color >= 0x695F50 && color < 0x696268){
        return 4;
    }else if(color >= 0x696268 && color < 0x69684B){
        return 0;
    }else if(color >= 0x69684B && color < 0x696969){
        return 1;
    }else if(color >= 0x696969 && color < 0x69755C){
        return 5;
    }else if(color >= 0x69755C && color < 0x697D89){
        return 2;
    }else if(color >= 0x697D89 && color < 0x698890){
        return 3;
    }else if(color >= 0x698890 && color < 0x6A1F44){
        return 3;
    }else if(color >= 0x6A1F44 && color < 0x6A4928){
        return 0;
    }else if(color >= 0x6A4928 && color < 0x6A5445){
        return 4;
    }else if(color >= 0x6A5445 && color < 0x6A5ACD){
        return 4;
    }else if(color >= 0x6A5ACD && color < 0x6A5BB1){
        return 3;
    }else if(color >= 0x6A5BB1 && color < 0x6A6466){
        return 0;
    }else if(color >= 0x6A6466 && color < 0x6A6873){
        return 5;
    }else if(color >= 0x6A6873 && color < 0x6B252C){
        return 0;
    }else if(color >= 0x6B252C && color < 0x6B3FA0){
        return 0;
    }else if(color >= 0x6B3FA0 && color < 0x6B4226){
        return 0;
    }else if(color >= 0x6B4226 && color < 0x6B5A5A){
        return 4;
    }else if(color >= 0x6B5A5A && color < 0x6B6A6C){
        return 4;
    }else if(color >= 0x6B6A6C && color < 0x6B8E23){
        return 5;
    }else if(color >= 0x6B8E23 && color < 0x6C322E){
        return 2;
    }else if(color >= 0x6C322E && color < 0x6C3736){
        return 0;
    }else if(color >= 0x6C3736 && color < 0x6C461F){
        return 0;
    }else if(color >= 0x6C461F && color < 0x6C4F3F){
        return 1;
    }else if(color >= 0x6C4F3F && color < 0x6C5B4C){
        return 4;
    }else if(color >= 0x6C5B4C && color < 0x6C5E53){
        return 4;
    }else if(color >= 0x6C5E53 && color < 0x6CDAE7){
        return 4;
    }else if(color >= 0x6CDAE7 && color < 0x6D3B24){
        return 3;
    }else if(color >= 0x6D3B24 && color < 0x6D562C){
        return 1;
    }else if(color >= 0x6D562C && color < 0x6D5843){
        return 1;
    }else if(color >= 0x6D5843 && color < 0x6D7876){
        return 4;
    }else if(color >= 0x6D7876 && color < 0x6D9A78){
        return 2;
    }else if(color >= 0x6D9A78 && color < 0x6DAFA7){
        return 2;
    }else if(color >= 0x6DAFA7 && color < 0x6E2233){
        return 2;
    }else if(color >= 0x6E2233 && color < 0x6E3326){
        return 0;
    }else if(color >= 0x6E3326 && color < 0x6E3974){
        return 1;
    }else if(color >= 0x6E3974 && color < 0x6E3D34){
        return 0;
    }else if(color >= 0x6E3D34 && color < 0x6E5150){
        return 0;
    }else if(color >= 0x6E5150 && color < 0x6E5A5B){
        return 0;
    }else if(color >= 0x6E5A5B && color < 0x6E5F56){
        return 4;
    }else if(color >= 0x6E5F56 && color < 0x6E8D71){
        return 4;
    }else if(color >= 0x6E8D71 && color < 0x6F372D){
        return 2;
    }else if(color >= 0x6F372D && color < 0x6F634B){
        return 0;
    }else if(color >= 0x6F634B && color < 0x6F63A0){
        return 4;
    }else if(color >= 0x6F63A0 && color < 0x6F747B){
        return 0;
    }else if(color >= 0x6F747B && color < 0x6F8C9F){
        return 3;
    }else if(color >= 0x6F8C9F && color < 0x6FD2BE){
        return 3;
    }else if(color >= 0x6FD2BE && color < 0x6FFFFF){
        return 2;
    }else if(color >= 0x6FFFFF && color < 0x701F28){
        return 3;
    }else if(color >= 0x701F28 && color < 0x706950){
        return 0;
    }else if(color >= 0x706950 && color < 0x706E66){
        return 1;
    }else if(color >= 0x706E66 && color < 0x708090){
        return 5;
    }else if(color >= 0x708090 && color < 0x712F2C){
        return 5;
    }else if(color >= 0x712F2C && color < 0x716675){
        return 4;
    }else if(color >= 0x716675 && color < 0x716E61){
        return 0;
    }else if(color >= 0x716E61 && color < 0x718F8A){
        return 2;
    }else if(color >= 0x718F8A && color < 0x71A91D){
        return 2;
    }else if(color >= 0x71A91D && color < 0x724AA1){
        return 2;
    }else if(color >= 0x724AA1 && color < 0x726751){
        return 0;
    }else if(color >= 0x726751 && color < 0x73343A){
        return 1;
    }else if(color >= 0x73343A && color < 0x733D1F){
        return 0;
    }else if(color >= 0x733D1F && color < 0x734A12){
        return 1;
    }else if(color >= 0x734A12 && color < 0x73503B){
        return 4;
    }else if(color >= 0x73503B && color < 0x736330){
        return 0;
    }else if(color >= 0x736330 && color < 0x73633E){
        return 1;
    }else if(color >= 0x73633E && color < 0x73C2FB){
        return 1;
    }else if(color >= 0x73C2FB && color < 0x744042){
        return 3;
    }else if(color >= 0x744042 && color < 0x745085){
        return 0;
    }else if(color >= 0x745085 && color < 0x745937){
        return 0;
    }else if(color >= 0x745937 && color < 0x747028){
        return 4;
    }else if(color >= 0x747028 && color < 0x747880){
        return 2;
    }else if(color >= 0x747880 && color < 0x74918E){
        return 3;
    }else if(color >= 0x74918E && color < 0x74B2A8){
        return 2;
    }else if(color >= 0x74B2A8 && color < 0x752B2F){
        return 2;
    }else if(color >= 0x752B2F && color < 0x75442B){
        return 0;
    }else if(color >= 0x75442B && color < 0x75482F){
        return 1;
    }else if(color >= 0x75482F && color < 0x756556){
        return 1;
    }else if(color >= 0x756556 && color < 0x75785A){
        return 4;
    }else if(color >= 0x75785A && color < 0x75876E){
        return 2;
    }else if(color >= 0x75876E && color < 0x75AA94){
        return 2;
    }else if(color >= 0x75AA94 && color < 0x763C33){
        return 2;
    }else if(color >= 0x763C33 && color < 0x766D52){
        return 0;
    }else if(color >= 0x766D52 && color < 0x766D7C){
        return 1;
    }else if(color >= 0x766D7C && color < 0x77422C){
        return 0;
    }else if(color >= 0x77422C && color < 0x77712B){
        return 1;
    }else if(color >= 0x77712B && color < 0x777672){
        return 2;
    }else if(color >= 0x777672 && color < 0x778899){
        return 5;
    }else if(color >= 0x778899 && color < 0x77A8AB){
        return 5;
    }else if(color >= 0x77A8AB && color < 0x77B7D0){
        return 2;
    }else if(color >= 0x77B7D0 && color < 0x77DD77){
        return 3;
    }else if(color >= 0x77DD77 && color < 0x782E2C){
        return 2;
    }else if(color >= 0x782E2C && color < 0x784430){
        return 0;
    }else if(color >= 0x784430 && color < 0x786D5F){
        return 1;
    }else if(color >= 0x786D5F && color < 0x786E4C){
        return 4;
    }else if(color >= 0x786E4C && color < 0x78857A){
        return 1;
    }else if(color >= 0x78857A && color < 0x78866B){
        return 2;
    }else if(color >= 0x78866B && color < 0x788878){
        return 2;
    }else if(color >= 0x788878 && color < 0x78B1BF){
        return 5;
    }else if(color >= 0x78B1BF && color < 0x79443B){
        return 3;
    }else if(color >= 0x79443B && color < 0x794D60){
        return 4;
    }else if(color >= 0x794D60 && color < 0x796878){
        return 0;
    }else if(color >= 0x796878 && color < 0x798488){
        return 0;
    }else if(color >= 0x798488 && color < 0x7988AB){
        return 3;
    }else if(color >= 0x7988AB && color < 0x7A2E4D){
        return 3;
    }else if(color >= 0x7A2E4D && color < 0x7A4434){
        return 0;
    }else if(color >= 0x7A4434 && color < 0x7A715C){
        return 4;
    }else if(color >= 0x7A715C && color < 0x7A7229){
        return 1;
    }else if(color >= 0x7A7229 && color < 0x7A7679){
        return 1;
    }else if(color >= 0x7A7679 && color < 0x7A7C76){
        return 5;
    }else if(color >= 0x7A7C76 && color < 0x7A89B8){
        return 5;
    }else if(color >= 0x7A89B8 && color < 0x7A9461){
        return 3;
    }else if(color >= 0x7A9461 && color < 0x7AAAE0){
        return 2;
    }else if(color >= 0x7AAAE0 && color < 0x7AAC21){
        return 3;
    }else if(color >= 0x7AAC21 && color < 0x7AC5B4){
        return 2;
    }else if(color >= 0x7AC5B4 && color < 0x7B68EE){
        return 2;
    }else if(color >= 0x7B68EE && color < 0x7B785A){
        return 3;
    }else if(color >= 0x7B785A && color < 0x7B8976){
        return 2;
    }else if(color >= 0x7B8976 && color < 0x7B948C){
        return 2;
    }else if(color >= 0x7B948C && color < 0x7BA05B){
        return 2;
    }else if(color >= 0x7BA05B && color < 0x7BB18D){
        return 2;
    }else if(color >= 0x7BB18D && color < 0x7C2D37){
        return 2;
    }else if(color >= 0x7C2D37 && color < 0x7C7173){
        return 0;
    }else if(color >= 0x7C7173 && color < 0x7C7C72){
        return 5;
    }else if(color >= 0x7C7C72 && color < 0x7C817C){
        return 2;
    }else if(color >= 0x7C817C && color < 0x7C9F2F){
        return 5;
    }else if(color >= 0x7C9F2F && color < 0x7CFC00){
        return 2;
    }else if(color >= 0x7CFC00 && color < 0x7D4138){
        return 2;
    }else if(color >= 0x7D4138 && color < 0x7D4E38){
        return 0;
    }else if(color >= 0x7D4E38 && color < 0x7D655C){
        return 4;
    }else if(color >= 0x7D655C && color < 0x7D6757){
        return 4;
    }else if(color >= 0x7D6757 && color < 0x7D9D72){
        return 4;
    }else if(color >= 0x7D9D72 && color < 0x7DF9FF){
        return 2;
    }else if(color >= 0x7DF9FF && color < 0x7E2530){
        return 3;
    }else if(color >= 0x7E2530 && color < 0x7E4A3B){
        return 0;
    }else if(color >= 0x7E4A3B && color < 0x7E8424){
        return 4;
    }else if(color >= 0x7E8424 && color < 0x7EB394){
        return 2;
    }else if(color >= 0x7EB394 && color < 0x7ECDDD){
        return 2;
    }else if(color >= 0x7ECDDD && color < 0x7FC15C){
        return 3;
    }else if(color >= 0x7FC15C && color < 0x7FFF00){
        return 2;
    }else if(color >= 0x7FFF00 && color < 0x7FFFD4){
        return 2;
    }else if(color >= 0x7FFFD4 && color < 0x800000){
        return 3;
    }else if(color >= 0x800000 && color < 0x800020){
        return 4;
    }else if(color >= 0x800020 && color < 0x800080){
        return 0;
    }else if(color >= 0x800080 && color < 0x801818){
        return 0;
    }else if(color >= 0x801818 && color < 0x803790){
        return 0;
    }else if(color >= 0x803790 && color < 0x803A4B){
        return 0;
    }else if(color >= 0x803A4B && color < 0x80461B){
        return 0;
    }else if(color >= 0x80461B && color < 0x804E2C){
        return 4;
    }else if(color >= 0x804E2C && color < 0x805D80){
        return 1;
    }else if(color >= 0x805D80 && color < 0x807661){
        return 0;
    }else if(color >= 0x807661 && color < 0x808000){
        return 1;
    }else if(color >= 0x808000 && color < 0x808080){
        return 2;
    }else if(color >= 0x808080 && color < 0x815B28){
        return 5;
    }else if(color >= 0x815B28 && color < 0x816E5C){
        return 1;
    }else if(color >= 0x816E5C && color < 0x817C87){
        return 4;
    }else if(color >= 0x817C87 && color < 0x818988){
        return 0;
    }else if(color >= 0x818988 && color < 0x81A6AA){
        return 5;
    }else if(color >= 0x81A6AA && color < 0x826663){
        return 3;
    }else if(color >= 0x826663 && color < 0x826A21){
        return 4;
    }else if(color >= 0x826A21 && color < 0x8272A4){
        return 1;
    }else if(color >= 0x8272A4 && color < 0x827A67){
        return 0;
    }else if(color >= 0x827A67 && color < 0x827F79){
        return 1;
    }else if(color >= 0x827F79 && color < 0x833D3E){
        return 5;
    }else if(color >= 0x833D3E && color < 0x837050){
        return 0;
    }else if(color >= 0x837050 && color < 0x8378C7){
        return 2;
    }else if(color >= 0x8378C7 && color < 0x842833){
        return 0;
    }else if(color >= 0x842833 && color < 0x845C40){
        return 0;
    }else if(color >= 0x845C40 && color < 0x8470FF){
        return 4;
    }else if(color >= 0x8470FF && color < 0x848789){
        return 3;
    }else if(color >= 0x848789 && color < 0x849137){
        return 5;
    }else if(color >= 0x849137 && color < 0x849CA9){
        return 2;
    }else if(color >= 0x849CA9 && color < 0x853534){
        return 3;
    }else if(color >= 0x853534 && color < 0x85494C){
        return 0;
    }else if(color >= 0x85494C && color < 0x855E42){
        return 0;
    }else if(color >= 0x855E42 && color < 0x856363){
        return 4;
    }else if(color >= 0x856363 && color < 0x857158){
        return 4;
    }else if(color >= 0x857158 && color < 0x858885){
        return 4;
    }else if(color >= 0x858885 && color < 0x85CA87){
        return 5;
    }else if(color >= 0x85CA87 && color < 0x86282E){
        return 2;
    }else if(color >= 0x86282E && color < 0x864B36){
        return 0;
    }else if(color >= 0x864B36 && color < 0x865040){
        return 1;
    }else if(color >= 0x865040 && color < 0x867665){
        return 4;
    }else if(color >= 0x867665 && color < 0x86837A){
        return 4;
    }else if(color >= 0x86837A && color < 0x86D2C1){
        return 5;
    }else if(color >= 0x86D2C1 && color < 0x871F78){
        return 2;
    }else if(color >= 0x871F78 && color < 0x87382F){
        return 0;
    }else if(color >= 0x87382F && color < 0x876A68){
        return 0;
    }else if(color >= 0x876A68 && color < 0x878466){
        return 4;
    }else if(color >= 0x878466 && color < 0x87876F){
        return 2;
    }else if(color >= 0x87876F && color < 0x878785){
        return 2;
    }else if(color >= 0x878785 && color < 0x87CEEB){
        return 5;
    }else if(color >= 0x87CEEB && color < 0x87CEFA){
        return 3;
    }else if(color >= 0x87CEFA && color < 0x883C32){
        return 3;
    }else if(color >= 0x883C32 && color < 0x884F40){
        return 0;
    }else if(color >= 0x884F40 && color < 0x888064){
        return 4;
    }else if(color >= 0x888064 && color < 0x88896C){
        return 1;
    }else if(color >= 0x88896C && color < 0x88A95B){
        return 2;
    }else if(color >= 0x88A95B && color < 0x892D4F){
        return 2;
    }else if(color >= 0x892D4F && color < 0x897E59){
        return 0;
    }else if(color >= 0x897E59 && color < 0x89AC27){
        return 1;
    }else if(color >= 0x89AC27 && color < 0x89D9C8){
        return 2;
    }else if(color >= 0x89D9C8 && color < 0x8A2BE2){
        return 2;
    }else if(color >= 0x8A2BE2 && color < 0x8A2D52){
        return 0;
    }else if(color >= 0x8A2D52 && color < 0x8A3324){
        return 0;
    }else if(color >= 0x8A3324 && color < 0x8A3335){
        return 4;
    }else if(color >= 0x8A3335 && color < 0x8A7D72){
        return 0;
    }else if(color >= 0x8A7D72 && color < 0x8AA7CC){
        return 4;
    }else if(color >= 0x8AA7CC && color < 0x8AAEA4){
        return 3;
    }else if(color >= 0x8AAEA4 && color < 0x8B0000){
        return 2;
    }else if(color >= 0x8B0000 && color < 0x8B008B){
        return 0;
    }else if(color >= 0x8B008B && color < 0x8B4513){
        return 0;
    }else if(color >= 0x8B4513 && color < 0x8B504B){
        return 4;
    }else if(color >= 0x8B504B && color < 0x8B5F4D){
        return 4;
    }else if(color >= 0x8B5F4D && color < 0x8B7D82){
        return 4;
    }else if(color >= 0x8B7D82 && color < 0x8B7E77){
        return 0;
    }else if(color >= 0x8B7E77 && color < 0x8B8265){
        return 4;
    }else if(color >= 0x8B8265 && color < 0x8B8589){
        return 1;
    }else if(color >= 0x8B8589 && color < 0x8B8685){
        return 5;
    }else if(color >= 0x8B8685 && color < 0x8B98D8){
        return 5;
    }else if(color >= 0x8B98D8 && color < 0x8BA58F){
        return 3;
    }else if(color >= 0x8BA58F && color < 0x8C6338){
        return 2;
    }else if(color >= 0x8C6338 && color < 0x8C9C9C){
        return 1;
    }else if(color >= 0x8C9C9C && color < 0x8CA8A0){
        return 3;
    }else if(color >= 0x8CA8A0 && color < 0x8CCEEA){
        return 2;
    }else if(color >= 0x8CCEEA && color < 0x8D5F2C){
        return 3;
    }else if(color >= 0x8D5F2C && color < 0x8D702A){
        return 1;
    }else if(color >= 0x8D702A && color < 0x8D8478){
        return 1;
    }else if(color >= 0x8D8478 && color < 0x8D90A1){
        return 4;
    }else if(color >= 0x8D90A1 && color < 0x8E2323){
        return 3;
    }else if(color >= 0x8E2323 && color < 0x8E3537){
        return 1;
    }else if(color >= 0x8E3537 && color < 0x8E4D45){
        return 0;
    }else if(color >= 0x8E4D45 && color < 0x8E5164){
        return 0;
    }else if(color >= 0x8E5164 && color < 0x8E593C){
        return 0;
    }else if(color >= 0x8E593C && color < 0x8E72C7){
        return 1;
    }else if(color >= 0x8E72C7 && color < 0x8E9A21){
        return 0;
    }else if(color >= 0x8E9A21 && color < 0x8F3F2A){
        return 2;
    }else if(color >= 0x8F3F2A && color < 0x8F4E45){
        return 1;
    }else if(color >= 0x8F4E45 && color < 0x8F7777){
        return 0;
    }else if(color >= 0x8F7777 && color < 0x8F7D6B){
        return 4;
    }else if(color >= 0x8F7D6B && color < 0x8FB69C){
        return 4;
    }else if(color >= 0x8FB69C && color < 0x8FBC8F){
        return 2;
    }else if(color >= 0x8FBC8F && color < 0x905D5D){
        return 2;
    }else if(color >= 0x905D5D && color < 0x905E26){
        return 0;
    }else if(color >= 0x905E26 && color < 0x906A54){
        return 1;
    }else if(color >= 0x906A54 && color < 0x90EE90){
        return 4;
    }else if(color >= 0x90EE90 && color < 0x915F6D){
        return 2;
    }else if(color >= 0x915F6D && color < 0x91A092){
        return 0;
    }else if(color >= 0x91A092 && color < 0x92000A){
        return 2;
    }else if(color >= 0x92000A && color < 0x922A31){
        return 0;
    }else if(color >= 0x922A31 && color < 0x923830){
        return 0;
    }else if(color >= 0x923830 && color < 0x926F5B){
        return 0;
    }else if(color >= 0x926F5B && color < 0x9271A7){
        return 4;
    }else if(color >= 0x9271A7 && color < 0x928C3C){
        return 0;
    }else if(color >= 0x928C3C && color < 0x92ACB4){
        return 2;
    }else if(color >= 0x92ACB4 && color < 0x9370DB){
        return 3;
    }else if(color >= 0x9370DB && color < 0x9391A0){
        return 0;
    }else if(color >= 0x9391A0 && color < 0x93A2BA){
        return 3;
    }else if(color >= 0x93A2BA && color < 0x93AAB9){
        return 3;
    }else if(color >= 0x93AAB9 && color < 0x93CCEA){
        return 3;
    }else if(color >= 0x93CCEA && color < 0x9400D3){
        return 3;
    }else if(color >= 0x9400D3 && color < 0x946A81){
        return 0;
    }else if(color >= 0x946A81 && color < 0x9470C4){
        return 0;
    }else if(color >= 0x9470C4 && color < 0x948C7E){
        return 0;
    }else if(color >= 0x948C7E && color < 0x952E31){
        return 4;
    }else if(color >= 0x952E31 && color < 0x954E2C){
        return 0;
    }else if(color >= 0x954E2C && color < 0x95524C){
        return 1;
    }else if(color >= 0x95524C && color < 0x955264){
        return 0;
    }else if(color >= 0x955264 && color < 0x95532F){
        return 0;
    }else if(color >= 0x95532F && color < 0x95879C){
        return 1;
    }else if(color >= 0x95879C && color < 0x95986B){
        return 0;
    }else if(color >= 0x95986B && color < 0x960018){
        return 2;
    }else if(color >= 0x960018 && color < 0x962C54){
        return 0;
    }else if(color >= 0x962C54 && color < 0x9678B6){
        return 0;
    }else if(color >= 0x9678B6 && color < 0x968428){
        return 0;
    }else if(color >= 0x968428 && color < 0x96A793){
        return 1;
    }else if(color >= 0x96A793 && color < 0x97422D){
        return 2;
    }else if(color >= 0x97422D && color < 0x97463C){
        return 1;
    }else if(color >= 0x97463C && color < 0x97694F){
        return 0;
    }else if(color >= 0x97694F && color < 0x97976F){
        return 4;
    }else if(color >= 0x97976F && color < 0x97A49A){
        return 2;
    }else if(color >= 0x97A49A && color < 0x97D5B3){
        return 2;
    }else if(color >= 0x97D5B3 && color < 0x984961){
        return 2;
    }else if(color >= 0x984961 && color < 0x986960){
        return 0;
    }else if(color >= 0x986960 && color < 0x987654){
        return 0;
    }else if(color >= 0x987654 && color < 0x987D73){
        return 4;
    }else if(color >= 0x987D73 && color < 0x987E7E){
        return 4;
    }else if(color >= 0x987E7E && color < 0x989171){
        return 4;
    }else if(color >= 0x989171 && color < 0x989F7A){
        return 2;
    }else if(color >= 0x989F7A && color < 0x98FB98){
        return 2;
    }else if(color >= 0x98FB98 && color < 0x98FF98){
        return 2;
    }else if(color >= 0x98FF98 && color < 0x990066){
        return 2;
    }else if(color >= 0x990066 && color < 0x9932CC){
        return 0;
    }else if(color >= 0x9932CC && color < 0x99522B){
        return 0;
    }else if(color >= 0x99522B && color < 0x9955BB){
        return 1;
    }else if(color >= 0x9955BB && color < 0x996515){
        return 0;
    }else if(color >= 0x996515 && color < 0x996666){
        return 4;
    }else if(color >= 0x996666 && color < 0x9966CC){
        return 0;
    }else if(color >= 0x9966CC && color < 0x997A8D){
        return 0;
    }else if(color >= 0x997A8D && color < 0x9998A7){
        return 0;
    }else if(color >= 0x9998A7 && color < 0x9999CC){
        return 3;
    }else if(color >= 0x9999CC && color < 0x999A86){
        return 3;
    }else if(color >= 0x999A86 && color < 0x999B95){
        return 2;
    }else if(color >= 0x999B95 && color < 0x9A463D){
        return 5;
    }else if(color >= 0x9A463D && color < 0x9A8678){
        return 0;
    }else if(color >= 0x9A8678 && color < 0x9AB973){
        return 4;
    }else if(color >= 0x9AB973 && color < 0x9AC0B6){
        return 1;
    }else if(color >= 0x9AC0B6 && color < 0x9ACD32){
        return 2;
    }else if(color >= 0x9ACD32 && color < 0x9B3D3D){
        return 2;
    }else if(color >= 0x9B3D3D && color < 0x9BDDFF){
        return 0;
    }else if(color >= 0x9BDDFF && color < 0x9C5B34){
        return 3;
    }else if(color >= 0x9C5B34 && color < 0x9C8D72){
        return 1;
    }else if(color >= 0x9C8D72 && color < 0x9CA664){
        return 4;
    }else if(color >= 0x9CA664 && color < 0x9CACA5){
        return 2;
    }else if(color >= 0x9CACA5 && color < 0x9CD03B){
        return 2;
    }else if(color >= 0x9CD03B && color < 0x9D442D){
        return 2;
    }else if(color >= 0x9D442D && color < 0x9D5432){
        return 1;
    }else if(color >= 0x9D5432 && color < 0x9D702E){
        return 1;
    }else if(color >= 0x9D702E && color < 0x9D7F61){
        return 1;
    }else if(color >= 0x9D7F61 && color < 0x9D8ABF){
        return 4;
    }else if(color >= 0x9D8ABF && color < 0x9D9CB4){
        return 0;
    }else if(color >= 0x9D9CB4 && color < 0x9DB4AA){
        return 3;
    }else if(color >= 0x9DB4AA && color < 0x9DD3A8){
        return 2;
    }else if(color >= 0x9DD3A8 && color < 0x9DE093){
        return 2;
    }else if(color >= 0x9DE093 && color < 0x9E3332){
        return 2;
    }else if(color >= 0x9E3332 && color < 0x9E5B40){
        return 0;
    }else if(color >= 0x9E5B40 && color < 0x9E6759){
        return 4;
    }else if(color >= 0x9E6759 && color < 0x9E7E53){
        return 4;
    }else if(color >= 0x9E7E53 && color < 0x9E8022){
        return 4;
    }else if(color >= 0x9E8022 && color < 0x9ED1D3){
        return 1;
    }else if(color >= 0x9ED1D3 && color < 0x9F5F9F){
        return 3;
    }else if(color >= 0x9F5F9F && color < 0x9F715F){
        return 0;
    }else if(color >= 0x9F715F && color < 0x9F9B9D){
        return 4;
    }else if(color >= 0x9F9B9D && color < 0x9F9D91){
        return 5;
    }else if(color >= 0x9F9D91 && color < 0x9FA3A7){
        return 2;
    }else if(color >= 0x9FA3A7 && color < 0x9FB70A){
        return 5;
    }else if(color >= 0x9FB70A && color < 0x9FD385){
        return 2;
    }else if(color >= 0x9FD385 && color < 0xA0522D){
        return 2;
    }else if(color >= 0xA0522D && color < 0xA09F9C){
        return 4;
    }else if(color >= 0xA09F9C && color < 0xA0A197){
        return 5;
    }else if(color >= 0xA0A197 && color < 0xA0B1AE){
        return 5;
    }else if(color >= 0xA0B1AE && color < 0xA0CDD9){
        return 2;
    }else if(color >= 0xA0CDD9 && color < 0xA14743){
        return 3;
    }else if(color >= 0xA14743 && color < 0xA15226){
        return 0;
    }else if(color >= 0xA15226 && color < 0xA15F3B){
        return 1;
    }else if(color >= 0xA15F3B && color < 0xA19986){
        return 1;
    }else if(color >= 0xA19986 && color < 0xA19A7F){
        return 1;
    }else if(color >= 0xA19A7F && color < 0xA1A9A8){
        return 1;
    }else if(color >= 0xA1A9A8 && color < 0xA23D54){
        return 5;
    }else if(color >= 0xA23D54 && color < 0xA29589){
        return 0;
    }else if(color >= 0xA29589 && color < 0xA29ECD){
        return 4;
    }else if(color >= 0xA29ECD && color < 0xA2A1AC){
        return 3;
    }else if(color >= 0xA2A1AC && color < 0xA2A580){
        return 3;
    }else if(color >= 0xA2A580 && color < 0xA3876A){
        return 2;
    }else if(color >= 0xA3876A && color < 0xA39977){
        return 4;
    }else if(color >= 0xA39977 && color < 0xA39A87){
        return 1;
    }else if(color >= 0xA39A87 && color < 0xA3BD9C){
        return 1;
    }else if(color >= 0xA3BD9C && color < 0xA3E3ED){
        return 2;
    }else if(color >= 0xA3E3ED && color < 0xA4ADB0){
        return 3;
    }else if(color >= 0xA4ADB0 && color < 0xA4AFCD){
        return 5;
    }else if(color >= 0xA4AFCD && color < 0xA4B88F){
        return 3;
    }else if(color >= 0xA4B88F && color < 0xA4D2E0){
        return 2;
    }else if(color >= 0xA4D2E0 && color < 0xA4DCE6){
        return 3;
    }else if(color >= 0xA4DCE6 && color < 0xA50B5E){
        return 3;
    }else if(color >= 0xA50B5E && color < 0xA52A2A){
        return 0;
    }else if(color >= 0xA52A2A && color < 0xA56531){
        return 4;
    }else if(color >= 0xA56531 && color < 0xA56E75){
        return 1;
    }else if(color >= 0xA56E75 && color < 0xA58B6F){
        return 0;
    }else if(color >= 0xA58B6F && color < 0xA59784){
        return 4;
    }else if(color >= 0xA59784 && color < 0xA5A88F){
        return 4;
    }else if(color >= 0xA5A88F && color < 0xA5A9B2){
        return 2;
    }else if(color >= 0xA5A9B2 && color < 0xA5CEEC){
        return 3;
    }else if(color >= 0xA5CEEC && color < 0xA5D785){
        return 3;
    }else if(color >= 0xA5D785 && color < 0xA65648){
        return 2;
    }else if(color >= 0xA65648 && color < 0xA68064){
        return 0;
    }else if(color >= 0xA68064 && color < 0xA6D5D0){
        return 4;
    }else if(color >= 0xA6D5D0 && color < 0xA7752C){
        return 2;
    }else if(color >= 0xA7752C && color < 0xA78199){
        return 1;
    }else if(color >= 0xA78199 && color < 0xA79781){
        return 0;
    }else if(color >= 0xA79781 && color < 0xA7A07E){
        return 4;
    }else if(color >= 0xA7A07E && color < 0xA7A69D){
        return 2;
    }else if(color >= 0xA7A69D && color < 0xA7FC00){
        return 5;
    }else if(color >= 0xA7FC00 && color < 0xA85335){
        return 2;
    }else if(color >= 0xA85335 && color < 0xA85533){
        return 1;
    }else if(color >= 0xA85533 && color < 0xA8C3BC){
        return 1;
    }else if(color >= 0xA8C3BC && color < 0xA94064){
        return 2;
    }else if(color >= 0xA94064 && color < 0xA95249){
        return 0;
    }else if(color >= 0xA95249 && color < 0xA96A50){
        return 0;
    }else if(color >= 0xA96A50 && color < 0xA9844F){
        return 1;
    }else if(color >= 0xA9844F && color < 0xA98D36){
        return 1;
    }else if(color >= 0xA98D36 && color < 0xA99D9D){
        return 1;
    }else if(color >= 0xA99D9D && color < 0xA9A9A9){
        return 5;
    }else if(color >= 0xA9A9A9 && color < 0xA9AF99){
        return 5;
    }else if(color >= 0xA9AF99 && color < 0xA9C01C){
        return 2;
    }else if(color >= 0xA9C01C && color < 0xAA8CBC){
        return 2;
    }else if(color >= 0xAA8CBC && color < 0xAAA583){
        return 0;
    }else if(color >= 0xAAA583 && color < 0xAAB5B8){
        return 2;
    }else if(color >= 0xAAB5B8 && color < 0xAAF0D1){
        return 3;
    }else if(color >= 0xAAF0D1 && color < 0xAB495C){
        return 2;
    }else if(color >= 0xAB495C && color < 0xAB6E67){
        return 0;
    }else if(color >= 0xAB6E67 && color < 0xAB8953){
        return 0;
    }else if(color >= 0xAB8953 && color < 0xAB8D3F){
        return 1;
    }else if(color >= 0xAB8D3F && color < 0xAB9A1C){
        return 1;
    }else if(color >= 0xAB9A1C && color < 0xABCDEF){
        return 2;
    }else if(color >= 0xABCDEF && color < 0xAC512D){
        return 3;
    }else if(color >= 0xAC512D && color < 0xAC9B9B){
        return 1;
    }else if(color >= 0xAC9B9B && color < 0xACAEA9){
        return 5;
    }else if(color >= 0xACAEA9 && color < 0xACB6B2){
        return 5;
    }else if(color >= 0xACB6B2 && color < 0xACB9E8){
        return 2;
    }else if(color >= 0xACB9E8 && color < 0xACC9B2){
        return 3;
    }else if(color >= 0xACC9B2 && color < 0xACE1AF){
        return 2;
    }else if(color >= 0xACE1AF && color < 0xAD522E){
        return 2;
    }else if(color >= 0xAD522E && color < 0xAD6242){
        return 1;
    }else if(color >= 0xAD6242 && color < 0xAD8A3B){
        return 1;
    }else if(color >= 0xAD8A3B && color < 0xADD8E6){
        return 1;
    }else if(color >= 0xADD8E6 && color < 0xADD9D1){
        return 3;
    }else if(color >= 0xADD9D1 && color < 0xADDFAD){
        return 2;
    }else if(color >= 0xADDFAD && color < 0xADFF2F){
        return 2;
    }else if(color >= 0xADFF2F && color < 0xAE9041){
        return 2;
    }else if(color >= 0xAE9041 && color < 0xAE94AB){
        return 1;
    }else if(color >= 0xAE94AB && color < 0xAE99D2){
        return 0;
    }else if(color >= 0xAE99D2 && color < 0xAEAEAD){
        return 0;
    }else if(color >= 0xAEAEAD && color < 0xAEBBC1){
        return 5;
    }else if(color >= 0xAEBBC1 && color < 0xAEC9EB){
        return 3;
    }else if(color >= 0xAEC9EB && color < 0xAF4035){
        return 3;
    }else if(color >= 0xAF4035 && color < 0xAF6C3E){
        return 0;
    }else if(color >= 0xAF6C3E && color < 0xAF937D){
        return 1;
    }else if(color >= 0xAF937D && color < 0xAFC182){
        return 4;
    }else if(color >= 0xAFC182 && color < 0xAFE3D6){
        return 2;
    }else if(color >= 0xAFE3D6 && color < 0xAFEEEE){
        return 2;
    }else if(color >= 0xAFEEEE && color < 0xB0A99F){
        return 3;
    }else if(color >= 0xB0A99F && color < 0xB0AC94){
        return 4;
    }else if(color >= 0xB0AC94 && color < 0xB0C4C4){
        return 2;
    }else if(color >= 0xB0C4C4 && color < 0xB0C4DE){
        return 2;
    }else if(color >= 0xB0C4DE && color < 0xB0E0E6){
        return 3;
    }else if(color >= 0xB0E0E6 && color < 0xB0E313){
        return 3;
    }else if(color >= 0xB0E313 && color < 0xB1592F){
        return 2;
    }else if(color >= 0xB1592F && color < 0xB1948F){
        return 1;
    }else if(color >= 0xB1948F && color < 0xB1DD52){
        return 4;
    }else if(color >= 0xB1DD52 && color < 0xB22222){
        return 2;
    }else if(color >= 0xB22222 && color < 0xB26E33){
        return 0;
    }else if(color >= 0xB26E33 && color < 0xB2994B){
        return 1;
    }else if(color >= 0xB2994B && color < 0xB2C6B1){
        return 1;
    }else if(color >= 0xB2C6B1 && color < 0xB37084){
        return 2;
    }else if(color >= 0xB37084 && color < 0xB3ABB6){
        return 0;
    }else if(color >= 0xB3ABB6 && color < 0xB3BBB7){
        return 0;
    }else if(color >= 0xB3BBB7 && color < 0xB3C1B1){
        return 2;
    }else if(color >= 0xB3C1B1 && color < 0xB3C4D8){
        return 2;
    }else if(color >= 0xB3C4D8 && color < 0xB4C04C){
        return 3;
    }else if(color >= 0xB4C04C && color < 0xB4E1BB){
        return 2;
    }else if(color >= 0xB4E1BB && color < 0xB4E2D5){
        return 2;
    }else if(color >= 0xB4E2D5 && color < 0xB54B73){
        return 2;
    }else if(color >= 0xB54B73 && color < 0xB55067){
        return 0;
    }else if(color >= 0xB55067 && color < 0xB57B2E){
        return 0;
    }else if(color >= 0xB57B2E && color < 0xB5998E){
        return 1;
    }else if(color >= 0xB5998E && color < 0xB5A642){
        return 4;
    }else if(color >= 0xB5A642 && color < 0xB5AC94){
        return 1;
    }else if(color >= 0xB5AC94 && color < 0xB5B35C){
        return 1;
    }else if(color >= 0xB5B35C && color < 0xB6857A){
        return 2;
    }else if(color >= 0xB6857A && color < 0xB6935C){
        return 0;
    }else if(color >= 0xB6935C && color < 0xB69642){
        return 1;
    }else if(color >= 0xB69642 && color < 0xB6ECDE){
        return 1;
    }else if(color >= 0xB6ECDE && color < 0xB7410E){
        return 2;
    }else if(color >= 0xB7410E && color < 0xB79826){
        return 0;
    }else if(color >= 0xB79826 && color < 0xB7A8A3){
        return 1;
    }else if(color >= 0xB7A8A3 && color < 0xB7C61A){
        return 4;
    }else if(color >= 0xB7C61A && color < 0xB7E3A8){
        return 2;
    }else if(color >= 0xB7E3A8 && color < 0xB8860B){
        return 2;
    }else if(color >= 0xB8860B && color < 0xB88A3D){
        return 1;
    }else if(color >= 0xB88A3D && color < 0xB8A722){
        return 1;
    }else if(color >= 0xB8A722 && color < 0xB8AD8A){
        return 2;
    }else if(color >= 0xB8AD8A && color < 0xB8B5A1){
        return 1;
    }else if(color >= 0xB8B5A1 && color < 0xB8C6BE){
        return 2;
    }else if(color >= 0xB8C6BE && color < 0xB8CA9D){
        return 2;
    }else if(color >= 0xB8CA9D && color < 0xB8D4BB){
        return 2;
    }else if(color >= 0xB8D4BB && color < 0xB94E48){
        return 2;
    }else if(color >= 0xB94E48 && color < 0xB9ACBB){
        return 4;
    }else if(color >= 0xB9ACBB && color < 0xB9AD61){
        return 0;
    }else if(color >= 0xB9AD61 && color < 0xB9C3BE){
        return 2;
    }else if(color >= 0xB9C3BE && color < 0xBA55D3){
        return 5;
    }else if(color >= 0xBA55D3 && color < 0xBA782A){
        return 0;
    }else if(color >= 0xBA782A && color < 0xBAAB87){
        return 1;
    }else if(color >= 0xBAAB87 && color < 0xBAB9A9){
        return 1;
    }else if(color >= 0xBAB9A9 && color < 0xBAC00E){
        return 5;
    }else if(color >= 0xBAC00E && color < 0xBAC0B3){
        return 2;
    }else if(color >= 0xBAC0B3 && color < 0xBAC0B4){
        return 5;
    }else if(color >= 0xBAC0B4 && color < 0xBB3385){
        return 2;
    }else if(color >= 0xBB3385 && color < 0xBB5F34){
        return 0;
    }else if(color >= 0xBB5F34 && color < 0xBB7431){
        return 1;
    }else if(color >= 0xBB7431 && color < 0xBB8E34){
        return 1;
    }else if(color >= 0xBB8E34 && color < 0xBBADA1){
        return 1;
    }else if(color >= 0xBBADA1 && color < 0xBBB58D){
        return 4;
    }else if(color >= 0xBBB58D && color < 0xBBCDA5){
        return 2;
    }else if(color >= 0xBBCDA5 && color < 0xBBD0C9){
        return 2;
    }else if(color >= 0xBBD0C9 && color < 0xBC8F8F){
        return 2;
    }else if(color >= 0xBC8F8F && color < 0xBC9229){
        return 4;
    }else if(color >= 0xBC9229 && color < 0xBC987E){
        return 1;
    }else if(color >= 0xBC987E && color < 0xBC9B1B){
        return 5;
    }else if(color >= 0xBC9B1B && color < 0xBCBFA8){
        return 1;
    }else if(color >= 0xBCBFA8 && color < 0xBDB76B){
        return 2;
    }else if(color >= 0xBDB76B && color < 0xBDBAAE){
        return 1;
    }else if(color >= 0xBDBAAE && color < 0xBDBACE){
        return 2;
    }else if(color >= 0xBDBACE && color < 0xBDBBD7){
        return 0;
    }else if(color >= 0xBDBBD7 && color < 0xBDC07E){
        return 5;
    }else if(color >= 0xBDC07E && color < 0xBDCAA8){
        return 2;
    }else if(color >= 0xBDCAA8 && color < 0xBE5C48){
        return 2;
    }else if(color >= 0xBE5C48 && color < 0xBEB29A){
        return 1;
    }else if(color >= 0xBEB29A && color < 0xBEB4AB){
        return 1;
    }else if(color >= 0xBEB4AB && color < 0xBEBAA7){
        return 4;
    }else if(color >= 0xBEBAA7 && color < 0xBEBDB6){
        return 2;
    }else if(color >= 0xBEBDB6 && color < 0xBECA60){
        return 5;
    }else if(color >= 0xBECA60 && color < 0xBF00FF){
        return 2;
    }else if(color >= 0xBF00FF && color < 0xBF652E){
        return 0;
    }else if(color >= 0xBF652E && color < 0xBF8D3C){
        return 1;
    }else if(color >= 0xBF8D3C && color < 0xBF914B){
        return 1;
    }else if(color >= 0xBF914B && color < 0xBFB3B2){
        return 1;
    }else if(color >= 0xBFB3B2 && color < 0xBFB5A2){
        return 5;
    }else if(color >= 0xBFB5A2 && color < 0xBFBAAF){
        return 1;
    }else if(color >= 0xBFBAAF && color < 0xBFBDC1){
        return 1;
    }else if(color >= 0xBFBDC1 && color < 0xBFC0AB){
        return 5;
    }else if(color >= 0xBFC0AB && color < 0xBFC298){
        return 2;
    }else if(color >= 0xBFC298 && color < 0xBFCDC0){
        return 2;
    }else if(color >= 0xBFCDC0 && color < 0xC00000){
        return 2;
    }else if(color >= 0xC00000 && color < 0xC02E4C){
        return 0;
    }else if(color >= 0xC02E4C && color < 0xC0514A){
        return 0;
    }else if(color >= 0xC0514A && color < 0xC07C40){
        return 0;
    }else if(color >= 0xC07C40 && color < 0xC0B2D7){
        return 1;
    }else if(color >= 0xC0B2D7 && color < 0xC0BFC7){
        return 0;
    }else if(color >= 0xC0BFC7 && color < 0xC0C0C0){
        return 3;
    }else if(color >= 0xC0C0C0 && color < 0xC0E8D5){
        return 5;
    }else if(color >= 0xC0E8D5 && color < 0xC14D36){
        return 2;
    }else if(color >= 0xC14D36 && color < 0xC154C1){
        return 1;
    }else if(color >= 0xC154C1 && color < 0xC16F68){
        return 0;
    }else if(color >= 0xC16F68 && color < 0xC19156){
        return 0;
    }else if(color >= 0xC19156 && color < 0xC19A6B){
        return 1;
    }else if(color >= 0xC19A6B && color < 0xC19FB3){
        return 4;
    }else if(color >= 0xC19FB3 && color < 0xC1D8C5){
        return 0;
    }else if(color >= 0xC1D8C5 && color < 0xC28E88){
        return 2;
    }else if(color >= 0xC28E88 && color < 0xC2A9DB){
        return 0;
    }else if(color >= 0xC2A9DB && color < 0xC2B280){
        return 0;
    }else if(color >= 0xC2B280 && color < 0xC2BCB1){
        return 4;
    }else if(color >= 0xC2BCB1 && color < 0xC2D5C4){
        return 1;
    }else if(color >= 0xC2D5C4 && color < 0xC2D62E){
        return 2;
    }else if(color >= 0xC2D62E && color < 0xC2E6EC){
        return 2;
    }else if(color >= 0xC2E6EC && color < 0xC3988B){
        return 3;
    }else if(color >= 0xC3988B && color < 0xC3B9DD){
        return 4;
    }else if(color >= 0xC3B9DD && color < 0xC3BEBB){
        return 0;
    }else if(color >= 0xC3BEBB && color < 0xC3CDE6){
        return 5;
    }else if(color >= 0xC3CDE6 && color < 0xC3D6BD){
        return 3;
    }else if(color >= 0xC3D6BD && color < 0xC41E3A){
        return 2;
    }else if(color >= 0xC41E3A && color < 0xC45655){
        return 0;
    }else if(color >= 0xC45655 && color < 0xC4AA4D){
        return 4;
    }else if(color >= 0xC4AA4D && color < 0xC54B8C){
        return 1;
    }else if(color >= 0xC54B8C && color < 0xC54F33){
        return 0;
    }else if(color >= 0xC54F33 && color < 0xC5832E){
        return 1;
    }else if(color >= 0xC5832E && color < 0xC58F9D){
        return 1;
    }else if(color >= 0xC58F9D && color < 0xC5BAA0){
        return 0;
    }else if(color >= 0xC5BAA0 && color < 0xC5C3B0){
        return 1;
    }else if(color >= 0xC5C3B0 && color < 0xC5E7CD){
        return 2;
    }else if(color >= 0xC5E7CD && color < 0xC62D42){
        return 2;
    }else if(color >= 0xC62D42 && color < 0xC6723B){
        return 0;
    }else if(color >= 0xC6723B && color < 0xC68E3F){
        return 1;
    }else if(color >= 0xC68E3F && color < 0xC6A95E){
        return 1;
    }else if(color >= 0xC6A95E && color < 0xC6DA36){
        return 1;
    }else if(color >= 0xC6DA36 && color < 0xC6EA80){
        return 2;
    }else if(color >= 0xC6EA80 && color < 0xC6EADD){
        return 2;
    }else if(color >= 0xC6EADD && color < 0xC71585){
        return 2;
    }else if(color >= 0xC71585 && color < 0xC76155){
        return 0;
    }else if(color >= 0xC76155 && color < 0xC7A384){
        return 0;
    }else if(color >= 0xC7A384 && color < 0xC7B882){
        return 4;
    }else if(color >= 0xC7B882 && color < 0xC7CDD8){
        return 1;
    }else if(color >= 0xC7CDD8 && color < 0xC80815){
        return 3;
    }else if(color >= 0xC80815 && color < 0xC8A2C8){
        return 0;
    }else if(color >= 0xC8A2C8 && color < 0xC8B1C0){
        return 0;
    }else if(color >= 0xC8B1C0 && color < 0xC93413){
        return 0;
    }else if(color >= 0xC93413 && color < 0xC96138){
        return 1;
    }else if(color >= 0xC96138 && color < 0xC99AA0){
        return 1;
    }else if(color >= 0xC99AA0 && color < 0xC9A0DC){
        return 0;
    }else if(color >= 0xC9A0DC && color < 0xC9B59A){
        return 0;
    }else if(color >= 0xC9B59A && color < 0xCA3435){
        return 4;
    }else if(color >= 0xCA3435 && color < 0xCA8136){
        return 4;
    }else if(color >= 0xCA8136 && color < 0xCAB4D4){
        return 1;
    }else if(color >= 0xCAB4D4 && color < 0xCAB5B2){
        return 0;
    }else if(color >= 0xCAB5B2 && color < 0xCAB8A2){
        return 0;
    }else if(color >= 0xCAB8A2 && color < 0xCAC7B7){
        return 1;
    }else if(color >= 0xCAC7B7 && color < 0xCAE1D9){
        return 2;
    }else if(color >= 0xCAE1D9 && color < 0xCAE7E2){
        return 2;
    }else if(color >= 0xCAE7E2 && color < 0xCB6F4A){
        return 2;
    }else if(color >= 0xCB6F4A && color < 0xCBC9C0){
        return 1;
    }else if(color >= 0xCBC9C0 && color < 0xCBCDCD){
        return 5;
    }else if(color >= 0xCBCDCD && color < 0xCBCEC0){
        return 5;
    }else if(color >= 0xCBCEC0 && color < 0xCBD0CF){
        return 2;
    }else if(color >= 0xCBD0CF && color < 0xCBE8E8){
        return 5;
    }else if(color >= 0xCBE8E8 && color < 0xCC00CC){
        return 3;
    }else if(color >= 0xCC00CC && color < 0xCC3333){
        return 0;
    }else if(color >= 0xCC3333 && color < 0xCC7722){
        return 0;
    }else if(color >= 0xCC7722 && color < 0xCC8899){
        return 4;
    }else if(color >= 0xCC8899 && color < 0xCCA483){
        return 0;
    }else if(color >= 0xCCA483 && color < 0xCCB69B){
        return 4;
    }else if(color >= 0xCCB69B && color < 0xCCCCFF){
        return 4;
    }else if(color >= 0xCCCCFF && color < 0xCCCF82){
        return 3;
    }else if(color >= 0xCCCF82 && color < 0xCCFF00){
        return 2;
    }else if(color >= 0xCCFF00 && color < 0xCD525B){
        return 2;
    }else if(color >= 0xCD525B && color < 0xCD526C){
        return 0;
    }else if(color >= 0xCD526C && color < 0xCD5700){
        return 0;
    }else if(color >= 0xCD5700 && color < 0xCD5B45){
        return 1;
    }else if(color >= 0xCD5B45 && color < 0xCD5C5C){
        return 1;
    }else if(color >= 0xCD5C5C && color < 0xCD6D93){
        return 0;
    }else if(color >= 0xCD6D93 && color < 0xCD7F32){
        return 0;
    }else if(color >= 0xCD7F32 && color < 0xCD8431){
        return 4;
    }else if(color >= 0xCD8431 && color < 0xCD853F){
        return 1;
    }else if(color >= 0xCD853F && color < 0xCDA59C){
        return 4;
    }else if(color >= 0xCDA59C && color < 0xCDAE70){
        return 0;
    }else if(color >= 0xCDAE70 && color < 0xCDC6C5){
        return 1;
    }else if(color >= 0xCDC6C5 && color < 0xCDCDCD){
        return 5;
    }else if(color >= 0xCDCDCD && color < 0xCDD5D5){
        return 5;
    }else if(color >= 0xCDD5D5 && color < 0xCE1620){
        return 5;
    }else if(color >= 0xCE1620 && color < 0xCE7259){
        return 0;
    }else if(color >= 0xCE7259 && color < 0xCECDB8){
        return 1;
    }else if(color >= 0xCECDB8 && color < 0xCEEFE4){
        return 2;
    }else if(color >= 0xCEEFE4 && color < 0xCFB53B){
        return 2;
    }else if(color >= 0xCFB53B && color < 0xCFBEA5){
        return 1;
    }else if(color >= 0xCFBEA5 && color < 0xD05E34){
        return 1;
    }else if(color >= 0xD05E34 && color < 0xD0748B){
        return 1;
    }else if(color >= 0xD0748B && color < 0xD08363){
        return 0;
    }else if(color >= 0xD08363 && color < 0xD08A9B){
        return 1;
    }else if(color >= 0xD08A9B && color < 0xD0C117){
        return 0;
    }else if(color >= 0xD0C117 && color < 0xD0C383){
        return 2;
    }else if(color >= 0xD0C383 && color < 0xD0C8B0){
        return 1;
    }else if(color >= 0xD0C8B0 && color < 0xD0EAE8){
        return 1;
    }else if(color >= 0xD0EAE8 && color < 0xD0F0C0){
        return 2;
    }else if(color >= 0xD0F0C0 && color < 0xD19033){
        return 2;
    }else if(color >= 0xD19033 && color < 0xD19275){
        return 1;
    }else if(color >= 0xD19275 && color < 0xD1B399){
        return 0;
    }else if(color >= 0xD1B399 && color < 0xD1D3CC){
        return 4;
    }else if(color >= 0xD1D3CC && color < 0xD1E231){
        return 5;
    }else if(color >= 0xD1E231 && color < 0xD1EAEA){
        return 1;
    }else if(color >= 0xD1EAEA && color < 0xD1EF9F){
        return 3;
    }else if(color >= 0xD1EF9F && color < 0xD2691E){
        return 2;
    }else if(color >= 0xD2691E && color < 0xD27D46){
        return 4;
    }else if(color >= 0xD27D46 && color < 0xD29062){
        return 4;
    }else if(color >= 0xD29062 && color < 0xD2B3A9){
        return 1;
    }else if(color >= 0xD2B3A9 && color < 0xD2B48C){
        return 1;
    }else if(color >= 0xD2B48C && color < 0xD2B960){
        return 4;
    }else if(color >= 0xD2B960 && color < 0xD2C3A3){
        return 1;
    }else if(color >= 0xD2C3A3 && color < 0xD2C61F){
        return 1;
    }else if(color >= 0xD2C61F && color < 0xD2C6B6){
        return 2;
    }else if(color >= 0xD2C6B6 && color < 0xD2D1CD){
        return 1;
    }else if(color >= 0xD2D1CD && color < 0xD2D2C0){
        return 5;
    }else if(color >= 0xD2D2C0 && color < 0xD2D3B3){
        return 2;
    }else if(color >= 0xD2D3B3 && color < 0xD2DAED){
        return 2;
    }else if(color >= 0xD2DAED && color < 0xD2DB32){
        return 3;
    }else if(color >= 0xD2DB32 && color < 0xD3A194){
        return 2;
    }else if(color >= 0xD3A194 && color < 0xD3A95C){
        return 0;
    }else if(color >= 0xD3A95C && color < 0xD3D3D3){
        return 1;
    }else if(color >= 0xD3D3D3 && color < 0xD3DBCB){
        return 5;
    }else if(color >= 0xD3DBCB && color < 0xD3E5EF){
        return 2;
    }else if(color >= 0xD3E5EF && color < 0xD4574E){
        return 3;
    }else if(color >= 0xD4574E && color < 0xD46F31){
        return 0;
    }else if(color >= 0xD46F31 && color < 0xD4915D){
        return 1;
    }else if(color >= 0xD4915D && color < 0xD4AF37){
        return 1;
    }else if(color >= 0xD4AF37 && color < 0xD4B5B0){
        return 1;
    }else if(color >= 0xD4B5B0 && color < 0xD4BBB1){
        return 0;
    }else if(color >= 0xD4BBB1 && color < 0xD4CFB4){
        return 1;
    }else if(color >= 0xD4CFB4 && color < 0xD4CFC5){
        return 2;
    }else if(color >= 0xD4CFC5 && color < 0xD56C30){
        return 5;
    }else if(color >= 0xD56C30 && color < 0xD5B185){
        return 1;
    }else if(color >= 0xD5B185 && color < 0xD5C7E8){
        return 4;
    }else if(color >= 0xD5C7E8 && color < 0xD5CBB2){
        return 0;
    }else if(color >= 0xD5CBB2 && color < 0xD5D2D1){
        return 1;
    }else if(color >= 0xD5D2D1 && color < 0xD68B80){
        return 5;
    }else if(color >= 0xD68B80 && color < 0xD6CA3D){
        return 0;
    }else if(color >= 0xD6CA3D && color < 0xD6D1C0){
        return 2;
    }else if(color >= 0xD6D1C0 && color < 0xD6F0CD){
        return 2;
    }else if(color >= 0xD6F0CD && color < 0xD7CEC5){
        return 2;
    }else if(color >= 0xD7CEC5 && color < 0xD7E7D0){
        return 5;
    }else if(color >= 0xD7E7D0 && color < 0xD7EEE4){
        return 2;
    }else if(color >= 0xD7EEE4 && color < 0xD8625B){
        return 2;
    }else if(color >= 0xD8625B && color < 0xD8A723){
        return 0;
    }else if(color >= 0xD8A723 && color < 0xD8B4B6){
        return 1;
    }else if(color >= 0xD8B4B6 && color < 0xD8BFD8){
        return 0;
    }else if(color >= 0xD8BFD8 && color < 0xD8CC9B){
        return 0;
    }else if(color >= 0xD8CC9B && color < 0xD8DDDA){
        return 1;
    }else if(color >= 0xD8DDDA && color < 0xD8F0D2){
        return 5;
    }else if(color >= 0xD8F0D2 && color < 0xD9D0C1){
        return 2;
    }else if(color >= 0xD9D0C1 && color < 0xD9D6CF){
        return 1;
    }else if(color >= 0xD9D6CF && color < 0xD9D9F3){
        return 5;
    }else if(color >= 0xD9D9F3 && color < 0xD9DDD5){
        return 5;
    }else if(color >= 0xD9DDD5 && color < 0xD9DFCD){
        return 5;
    }else if(color >= 0xD9DFCD && color < 0xDA3287){
        return 2;
    }else if(color >= 0xDA3287 && color < 0xDA70D6){
        return 0;
    }else if(color >= 0xDA70D6 && color < 0xDA8A67){
        return 0;
    }else if(color >= 0xDA8A67 && color < 0xDA9429){
        return 0;
    }else if(color >= 0xDA9429 && color < 0xDA9790){
        return 1;
    }else if(color >= 0xDA9790 && color < 0xDAB160){
        return 0;
    }else if(color >= 0xDAB160 && color < 0xDABE82){
        return 1;
    }else if(color >= 0xDABE82 && color < 0xDAC01A){
        return 1;
    }else if(color >= 0xDAC01A && color < 0xDAC0CD){
        return 1;
    }else if(color >= 0xDAC0CD && color < 0xDAD6CC){
        return 0;
    }else if(color >= 0xDAD6CC && color < 0xDAE6DD){
        return 5;
    }else if(color >= 0xDAE6DD && color < 0xDAEA6F){
        return 5;
    }else if(color >= 0xDAEA6F && color < 0xDB5079){
        return 2;
    }else if(color >= 0xDB5079 && color < 0xDB7093){
        return 0;
    }else if(color >= 0xDB7093 && color < 0xDB817E){
        return 0;
    }else if(color >= 0xDB817E && color < 0xDBC2AB){
        return 0;
    }else if(color >= 0xDBC2AB && color < 0xDBD0CA){
        return 1;
    }else if(color >= 0xDBD0CA && color < 0xDBD9C2){
        return 5;
    }else if(color >= 0xDBD9C2 && color < 0xDBDB70){
        return 2;
    }else if(color >= 0xDBDB70 && color < 0xDBE0D0){
        return 1;
    }else if(color >= 0xDBE0D0 && color < 0xDBE4DC){
        return 2;
    }else if(color >= 0xDBE4DC && color < 0xDBE5D2){
        return 5;
    }else if(color >= 0xDBE5D2 && color < 0xDC143C){
        return 2;
    }else if(color >= 0xDC143C && color < 0xDC722A){
        return 0;
    }else if(color >= 0xDC722A && color < 0xDCB68A){
        return 1;
    }else if(color >= 0xDCB68A && color < 0xDCBFAC){
        return 1;
    }else if(color >= 0xDCBFAC && color < 0xDCC6A0){
        return 1;
    }else if(color >= 0xDCC6A0 && color < 0xDCD7D1){
        return 1;
    }else if(color >= 0xDCD7D1 && color < 0xDCD9CD){
        return 5;
    }else if(color >= 0xDCD9CD && color < 0xDCDCDC){
        return 5;
    }else if(color >= 0xDCDCDC && color < 0xDCDDDD){
        return 5;
    }else if(color >= 0xDCDDDD && color < 0xDD00FF){
        return 5;
    }else if(color >= 0xDD00FF && color < 0xDD6B38){
        return 0;
    }else if(color >= 0xDD6B38 && color < 0xDD8374){
        return 1;
    }else if(color >= 0xDD8374 && color < 0xDDA0DD){
        return 0;
    }else if(color >= 0xDDA0DD && color < 0xDDAD56){
        return 0;
    }else if(color >= 0xDDAD56 && color < 0xDDADAF){
        return 1;
    }else if(color >= 0xDDADAF && color < 0xDDC283){
        return 0;
    }else if(color >= 0xDDC283 && color < 0xDDCB46){
        return 1;
    }else if(color >= 0xDDCB46 && color < 0xDDD6E1){
        return 2;
    }else if(color >= 0xDDD6E1 && color < 0xDDDCDB){
        return 0;
    }else if(color >= 0xDDDCDB && color < 0xDDEDE9){
        return 5;
    }else if(color >= 0xDDEDE9 && color < 0xDE3163){
        return 3;
    }else if(color >= 0xDE3163 && color < 0xDEA681){
        return 0;
    }else if(color >= 0xDEA681 && color < 0xDEB7D9){
        return 4;
    }else if(color >= 0xDEB7D9 && color < 0xDEB887){
        return 0;
    }else if(color >= 0xDEB887 && color < 0xDEC371){
        return 4;
    }else if(color >= 0xDEC371 && color < 0xDECB81){
        return 1;
    }else if(color >= 0xDECB81 && color < 0xDED1B7){
        return 1;
    }else if(color >= 0xDED1B7 && color < 0xDED1C6){
        return 1;
    }else if(color >= 0xDED1C6 && color < 0xDEDDCB){
        return 1;
    }else if(color >= 0xDEDDCB && color < 0xDEE3E3){
        return 2;
    }else if(color >= 0xDEE3E3 && color < 0xDEEADC){
        return 5;
    }else if(color >= 0xDEEADC && color < 0xDEF1DD){
        return 2;
    }else if(color >= 0xDEF1DD && color < 0xDF73FF){
        return 2;
    }else if(color >= 0xDF73FF && color < 0xDF9D5B){
        return 0;
    }else if(color >= 0xDF9D5B && color < 0xDFB1B6){
        return 1;
    }else if(color >= 0xDFB1B6 && color < 0xDFB992){
        return 0;
    }else if(color >= 0xDFB992 && color < 0xDFC281){
        return 1;
    }else if(color >= 0xDFC281 && color < 0xDFD7BD){
        return 1;
    }else if(color >= 0xDFD7BD && color < 0xDFD7D2){
        return 1;
    }else if(color >= 0xDFD7D2 && color < 0xDFDDD6){
        return 5;
    }else if(color >= 0xDFDDD6 && color < 0xDFE6CF){
        return 5;
    }else if(color >= 0xDFE6CF && color < 0xDFEFEA){
        return 2;
    }else if(color >= 0xDFEFEA && color < 0xDFF0E2){
        return 2;
    }else if(color >= 0xDFF0E2 && color < 0xDFF1D6){
        return 2;
    }else if(color >= 0xDFF1D6 && color < 0xDFFF00){
        return 2;
    }else if(color >= 0xDFFF00 && color < 0xE0115F){
        return 1;
    }else if(color >= 0xE0115F && color < 0xE093AB){
        return 0;
    }else if(color >= 0xE093AB && color < 0xE09842){
        return 0;
    }else if(color >= 0xE09842 && color < 0xE0B0FF){
        return 1;
    }else if(color >= 0xE0B0FF && color < 0xE0B7C2){
        return 0;
    }else if(color >= 0xE0B7C2 && color < 0xE0B8B1){
        return 0;
    }else if(color >= 0xE0B8B1 && color < 0xE0D8A7){
        return 0;
    }else if(color >= 0xE0D8A7 && color < 0xE0DED7){
        return 2;
    }else if(color >= 0xE0DED7 && color < 0xE0E4DC){
        return 5;
    }else if(color >= 0xE0E4DC && color < 0xE0FFFF){
        return 5;
    }else if(color >= 0xE0FFFF && color < 0xE1634F){
        return 3;
    }else if(color >= 0xE1634F && color < 0xE1D5A6){
        return 1;
    }else if(color >= 0xE1D5A6 && color < 0xE1DABB){
        return 1;
    }else if(color >= 0xE1DABB && color < 0xE1DACB){
        return 2;
    }else if(color >= 0xE1DACB && color < 0xE1DBD0){
        return 1;
    }else if(color >= 0xE1DBD0 && color < 0xE1E4C5){
        return 1;
    }else if(color >= 0xE1E4C5 && color < 0xE1F8E7){
        return 2;
    }else if(color >= 0xE1F8E7 && color < 0xE2725B){
        return 5;
    }else if(color >= 0xE2725B && color < 0xE27945){
        return 0;
    }else if(color >= 0xE27945 && color < 0xE2813B){
        return 1;
    }else if(color >= 0xE2813B && color < 0xE2AF80){
        return 1;
    }else if(color >= 0xE2AF80 && color < 0xE2B227){
        return 1;
    }else if(color >= 0xE2B227 && color < 0xE2CDD5){
        return 1;
    }else if(color >= 0xE2CDD5 && color < 0xE2DDC7){
        return 0;
    }else if(color >= 0xE2DDC7 && color < 0xE2F2E4){
        return 2;
    }else if(color >= 0xE2F2E4 && color < 0xE30B5C){
        return 2;
    }else if(color >= 0xE30B5C && color < 0xE32636){
        return 0;
    }else if(color >= 0xE32636 && color < 0xE34234){
        return 0;
    }else if(color >= 0xE34234 && color < 0xE35BD8){
        return 0;
    }else if(color >= 0xE35BD8 && color < 0xE36F8A){
        return 0;
    }else if(color >= 0xE36F8A && color < 0xE3AC3D){
        return 0;
    }else if(color >= 0xE3AC3D && color < 0xE3B982){
        return 1;
    }else if(color >= 0xE3B982 && color < 0xE3D474){
        return 1;
    }else if(color >= 0xE3D474 && color < 0xE3D6E9){
        return 2;
    }else if(color >= 0xE3D6E9 && color < 0xE3DD39){
        return 0;
    }else if(color >= 0xE3DD39 && color < 0xE3DFD9){
        return 2;
    }else if(color >= 0xE3DFD9 && color < 0xE3E3DC){
        return 5;
    }else if(color >= 0xE3E3DC && color < 0xE3E5B1){
        return 5;
    }else if(color >= 0xE3E5B1 && color < 0xE49B0F){
        return 2;
    }else if(color >= 0xE49B0F && color < 0xE4C385){
        return 1;
    }else if(color >= 0xE4C385 && color < 0xE4CF99){
        return 1;
    }else if(color >= 0xE4CF99 && color < 0xE4D7E5){
        return 1;
    }else if(color >= 0xE4D7E5 && color < 0xE4DB55){
        return 0;
    }else if(color >= 0xE4DB55 && color < 0xE4DE8E){
        return 2;
    }else if(color >= 0xE4DE8E && color < 0xE4E2DC){
        return 2;
    }else if(color >= 0xE4E2DC && color < 0xE52B50){
        return 5;
    }else if(color >= 0xE52B50 && color < 0xE56D75){
        return 0;
    }else if(color >= 0xE56D75 && color < 0xE57F3D){
        return 0;
    }else if(color >= 0xE57F3D && color < 0xE5823A){
        return 1;
    }else if(color >= 0xE5823A && color < 0xE5CAC0){
        return 1;
    }else if(color >= 0xE5CAC0 && color < 0xE5E4DB){
        return 1;
    }else if(color >= 0xE5E4DB && color < 0xE5E6DF){
        return 5;
    }else if(color >= 0xE5E6DF && color < 0xE5F2E7){
        return 5;
    }else if(color >= 0xE5F2E7 && color < 0xE68095){
        return 2;
    }else if(color >= 0xE68095 && color < 0xE6B2A6){
        return 0;
    }else if(color >= 0xE6B2A6 && color < 0xE6D6CD){
        return 0;
    }else if(color >= 0xE6D6CD && color < 0xE6D8D4){
        return 1;
    }else if(color >= 0xE6D8D4 && color < 0xE6DBC7){
        return 0;
    }else if(color >= 0xE6DBC7 && color < 0xE6DFE7){
        return 1;
    }else if(color >= 0xE6DFE7 && color < 0xE6E6FA){
        return 0;
    }else if(color >= 0xE6E6FA && color < 0xE6F2EA){
        return 0;
    }else if(color >= 0xE6F2EA && color < 0xE75480){
        return 2;
    }else if(color >= 0xE75480 && color < 0xE77200){
        return 0;
    }else if(color >= 0xE77200 && color < 0xE77B75){
        return 1;
    }else if(color >= 0xE77B75 && color < 0xE79E88){
        return 0;
    }else if(color >= 0xE79E88 && color < 0xE7D2C8){
        return 1;
    }else if(color >= 0xE7D2C8 && color < 0xE7E4DE){
        return 1;
    }else if(color >= 0xE7E4DE && color < 0xE7E5E8){
        return 5;
    }else if(color >= 0xE7E5E8 && color < 0xE7F2E9){
        return 3;
    }else if(color >= 0xE7F2E9 && color < 0xE899BE){
        return 2;
    }else if(color >= 0xE899BE && color < 0xE8CD9A){
        return 0;
    }else if(color >= 0xE8CD9A && color < 0xE8D4A2){
        return 1;
    }else if(color >= 0xE8D4A2 && color < 0xE8ED69){
        return 1;
    }else if(color >= 0xE8ED69 && color < 0xE8F3E8){
        return 2;
    }else if(color >= 0xE8F3E8 && color < 0xE97451){
        return 2;
    }else if(color >= 0xE97451 && color < 0xE98C3A){
        return 4;
    }else if(color >= 0xE98C3A && color < 0xE9967A){
        return 1;
    }else if(color >= 0xE9967A && color < 0xE9BA81){
        return 1;
    }else if(color >= 0xE9BA81 && color < 0xE9D7AB){
        return 1;
    }else if(color >= 0xE9D7AB && color < 0xE9D9A9){
        return 1;
    }else if(color >= 0xE9D9A9 && color < 0xE9DCBE){
        return 1;
    }else if(color >= 0xE9DCBE && color < 0xE9E1D9){
        return 1;
    }else if(color >= 0xE9E1D9 && color < 0xE9E6DC){
        return 5;
    }else if(color >= 0xE9E6DC && color < 0xE9ECF1){
        return 2;
    }else if(color >= 0xE9ECF1 && color < 0xE9EEEB){
        return 3;
    }else if(color >= 0xE9EEEB && color < 0xEA8645){
        return 5;
    }else if(color >= 0xEA8645 && color < 0xEAB76A){
        return 1;
    }else if(color >= 0xEAB76A && color < 0xEAB852){
        return 1;
    }else if(color >= 0xEAB852 && color < 0xEACC4A){
        return 1;
    }else if(color >= 0xEACC4A && color < 0xEACE6A){
        return 1;
    }else if(color >= 0xEACE6A && color < 0xEADAC2){
        return 1;
    }else if(color >= 0xEADAC2 && color < 0xEAE0C8){
        return 1;
    }else if(color >= 0xEAE0C8 && color < 0xEAE3CD){
        return 1;
    }else if(color >= 0xEAE3CD && color < 0xEAE4DC){
        return 1;
    }else if(color >= 0xEAE4DC && color < 0xEAEAAE){
        return 5;
    }else if(color >= 0xEAEAAE && color < 0xEAF7C9){
        return 1;
    }else if(color >= 0xEAF7C9 && color < 0xEBB9B3){
        return 2;
    }else if(color >= 0xEBB9B3 && color < 0xEBC2AF){
        return 0;
    }else if(color >= 0xEBC2AF && color < 0xEBC79E){
        return 4;
    }else if(color >= 0xEBC79E && color < 0xEBC881){
        return 4;
    }else if(color >= 0xEBC881 && color < 0xEBD2D1){
        return 1;
    }else if(color >= 0xEBD2D1 && color < 0xEBD4AE){
        return 0;
    }else if(color >= 0xEBD4AE && color < 0xEBDE31){
        return 1;
    }else if(color >= 0xEBDE31 && color < 0xEBE1CE){
        return 2;
    }else if(color >= 0xEBE1CE && color < 0xEBE2D2){
        return 1;
    }else if(color >= 0xEBE2D2 && color < 0xEBE5D5){
        return 1;
    }else if(color >= 0xEBE5D5 && color < 0xEBF7E4){
        return 2;
    }else if(color >= 0xEBF7E4 && color < 0xEC5800){
        return 2;
    }else if(color >= 0xEC5800 && color < 0xECBD2C){
        return 0;
    }else if(color >= 0xECBD2C && color < 0xECE5DA){
        return 1;
    }else if(color >= 0xECE5DA && color < 0xECE67E){
        return 5;
    }else if(color >= 0xECE67E && color < 0xED9121){
        return 2;
    }else if(color >= 0xED9121 && color < 0xEDB8C7){
        return 1;
    }else if(color >= 0xEDB8C7 && color < 0xEDC9AF){
        return 0;
    }else if(color >= 0xEDC9AF && color < 0xEDD2A4){
        return 4;
    }else if(color >= 0xEDD2A4 && color < 0xEDD5A6){
        return 1;
    }else if(color >= 0xEDD5A6 && color < 0xEDE7C8){
        return 1;
    }else if(color >= 0xEDE7C8 && color < 0xEDE7E0){
        return 2;
    }else if(color >= 0xEDE7E0 && color < 0xEE82EE){
        return 5;
    }else if(color >= 0xEE82EE && color < 0xEE918D){
        return 0;
    }else if(color >= 0xEE918D && color < 0xEEB39E){
        return 0;
    }else if(color >= 0xEEB39E && color < 0xEEC051){
        return 1;
    }else if(color >= 0xEEC051 && color < 0xEEC7A2){
        return 1;
    }else if(color >= 0xEEC7A2 && color < 0xEECC24){
        return 1;
    }else if(color >= 0xEECC24 && color < 0xEED9B6){
        return 1;
    }else if(color >= 0xEED9B6 && color < 0xEED9C4){
        return 1;
    }else if(color >= 0xEED9C4 && color < 0xEEDC82){
        return 1;
    }else if(color >= 0xEEDC82 && color < 0xEEDD82){
        return 1;
    }else if(color >= 0xEEDD82 && color < 0xEEDFDE){
        return 1;
    }else if(color >= 0xEEDFDE && color < 0xEEE7C8){
        return 0;
    }else if(color >= 0xEEE7C8 && color < 0xEEE7DC){
        return 1;
    }else if(color >= 0xEEE7DC && color < 0xEEE8AA){
        return 5;
    }else if(color >= 0xEEE8AA && color < 0xEEEFDF){
        return 1;
    }else if(color >= 0xEEEFDF && color < 0xEEF293){
        return 2;
    }else if(color >= 0xEEF293 && color < 0xEEF3E5){
        return 2;
    }else if(color >= 0xEEF3E5 && color < 0xEF8E38){
        return 5;
    }else if(color >= 0xEF8E38 && color < 0xEF9548){
        return 1;
    }else if(color >= 0xEF9548 && color < 0xEF95AE){
        return 1;
    }else if(color >= 0xEF95AE && color < 0xEFD6DA){
        return 0;
    }else if(color >= 0xEFD6DA && color < 0xEFDCD4){
        return 0;
    }else if(color >= 0xEFDCD4 && color < 0xEFE6E6){
        return 1;
    }else if(color >= 0xEFE6E6 && color < 0xEFECDE){
        return 5;
    }else if(color >= 0xEFECDE && color < 0xEFF5D1){
        return 2;
    }else if(color >= 0xEFF5D1 && color < 0xEFF8AA){
        return 2;
    }else if(color >= 0xEFF8AA && color < 0xF08080){
        return 2;
    }else if(color >= 0xF08080 && color < 0xF091A9){
        return 1;
    }else if(color >= 0xF091A9 && color < 0xF0B253){
        return 0;
    }else if(color >= 0xF0B253 && color < 0xF0C420){
        return 1;
    }else if(color >= 0xF0C420 && color < 0xF0D555){
        return 1;
    }else if(color >= 0xF0D555 && color < 0xF0DC82){
        return 1;
    }else if(color >= 0xF0DC82 && color < 0xF0DFBB){
        return 1;
    }else if(color >= 0xF0DFBB && color < 0xF0E68C){
        return 1;
    }else if(color >= 0xF0E68C && color < 0xF0F590){
        return 1;
    }else if(color >= 0xF0F590 && color < 0xF0F5BB){
        return 2;
    }else if(color >= 0xF0F5BB && color < 0xF0F8FF){
        return 2;
    }else if(color >= 0xF0F8FF && color < 0xF0FFF0){
        return 3;
    }else if(color >= 0xF0FFF0 && color < 0xF0FFFF){
        return 5;
    }else if(color >= 0xF0FFFF && color < 0xF1919A){
        return 3;
    }else if(color >= 0xF1919A && color < 0xF1CC2B){
        return 0;
    }else if(color >= 0xF1CC2B && color < 0xF1D79E){
        return 1;
    }else if(color >= 0xF1D79E && color < 0xF1EAD7){
        return 1;
    }else if(color >= 0xF1EAD7 && color < 0xF1EBD9){
        return 1;
    }else if(color >= 0xF1EBD9 && color < 0xF1EBDA){
        return 1;
    }else if(color >= 0xF1EBDA && color < 0xF1EDD4){
        return 1;
    }else if(color >= 0xF1EDD4 && color < 0xF1F1C6){
        return 2;
    }else if(color >= 0xF1F1C6 && color < 0xF28500){
        return 2;
    }else if(color >= 0xF28500 && color < 0xF2CDBB){
        return 1;
    }else if(color >= 0xF2CDBB && color < 0xF2E5BF){
        return 1;
    }else if(color >= 0xF2E5BF && color < 0xF2E6DD){
        return 1;
    }else if(color >= 0xF2E6DD && color < 0xF2EDDD){
        return 1;
    }else if(color >= 0xF2EDDD && color < 0xF2F0E6){
        return 2;
    }else if(color >= 0xF2F0E6 && color < 0xF38653){
        return 5;
    }else if(color >= 0xF38653 && color < 0xF3D7B6){
        return 1;
    }else if(color >= 0xF3D7B6 && color < 0xF3E5C0){
        return 1;
    }else if(color >= 0xF3E5C0 && color < 0xF3E5DC){
        return 1;
    }else if(color >= 0xF3E5DC && color < 0xF400A1){
        return 1;
    }else if(color >= 0xF400A1 && color < 0xF49F35){
        return 0;
    }else if(color >= 0xF49F35 && color < 0xF4A460){
        return 1;
    }else if(color >= 0xF4A460 && color < 0xF4C430){
        return 4;
    }else if(color >= 0xF4C430 && color < 0xF4C8DB){
        return 1;
    }else if(color >= 0xF4C8DB && color < 0xF4D0A4){
        return 0;
    }else if(color >= 0xF4D0A4 && color < 0xF4EAE4){
        return 1;
    }else if(color >= 0xF4EAE4 && color < 0xF4EFE0){
        return 0;
    }else if(color >= 0xF4EFE0 && color < 0xF4F09B){
        return 1;
    }else if(color >= 0xF4F09B && color < 0xF4F0E6){
        return 2;
    }else if(color >= 0xF4F0E6 && color < 0xF4F6EC){
        return 5;
    }else if(color >= 0xF4F6EC && color < 0xF5B2C5){
        return 5;
    }else if(color >= 0xF5B2C5 && color < 0xF5B799){
        return 0;
    }else if(color >= 0xF5B799 && color < 0xF5CC23){
        return 1;
    }else if(color >= 0xF5CC23 && color < 0xF5CD82){
        return 1;
    }else if(color >= 0xF5CD82 && color < 0xF5D0C9){
        return 1;
    }else if(color >= 0xF5D0C9 && color < 0xF5D752){
        return 0;
    }else if(color >= 0xF5D752 && color < 0xF5D7DC){
        return 1;
    }else if(color >= 0xF5D7DC && color < 0xF5DEB3){
        return 0;
    }else if(color >= 0xF5DEB3 && color < 0xF5DEC4){
        return 4;
    }else if(color >= 0xF5DEC4 && color < 0xF5E6C4){
        return 1;
    }else if(color >= 0xF5E6C4 && color < 0xF5E6EA){
        return 1;
    }else if(color >= 0xF5E6EA && color < 0xF5EFEB){
        return 0;
    }else if(color >= 0xF5EFEB && color < 0xF5F171){
        return 5;
    }else if(color >= 0xF5F171 && color < 0xF5F3CE){
        return 2;
    }else if(color >= 0xF5F3CE && color < 0xF5F4C1){
        return 2;
    }else if(color >= 0xF5F4C1 && color < 0xF5F5CC){
        return 2;
    }else if(color >= 0xF5F5CC && color < 0xF5F5DC){
        return 2;
    }else if(color >= 0xF5F5DC && color < 0xF5F5F5){
        return 4;
    }else if(color >= 0xF5F5F5 && color < 0xF5F9CB){
        return 5;
    }else if(color >= 0xF5F9CB && color < 0xF5FFFA){
        return 2;
    }else if(color >= 0xF5FFFA && color < 0xF64A8A){
        return 5;
    }else if(color >= 0xF64A8A && color < 0xF6AE78){
        return 0;
    }else if(color >= 0xF6AE78 && color < 0xF6CCD7){
        return 1;
    }else if(color >= 0xF6CCD7 && color < 0xF6DEDA){
        return 0;
    }else if(color >= 0xF6DEDA && color < 0xF6E0A4){
        return 0;
    }else if(color >= 0xF6E0A4 && color < 0xF6E3DA){
        return 1;
    }else if(color >= 0xF6E3DA && color < 0xF6F493){
        return 1;
    }else if(color >= 0xF6F493 && color < 0xF6F5D7){
        return 2;
    }else if(color >= 0xF6F5D7 && color < 0xF7468A){
        return 2;
    }else if(color >= 0xF7468A && color < 0xF77FBE){
        return 0;
    }else if(color >= 0xF77FBE && color < 0xF7A233){
        return 0;
    }else if(color >= 0xF7A233 && color < 0xF7E5B7){
        return 1;
    }else if(color >= 0xF7E5B7 && color < 0xF7F0DB){
        return 1;
    }else if(color >= 0xF7F0DB && color < 0xF883C2){
        return 1;
    }else if(color >= 0xF883C2 && color < 0xF8AFA9){
        return 1;
    }else if(color >= 0xF8AFA9 && color < 0xF8DBE0){
        return 0;
    }else if(color >= 0xF8DBE0 && color < 0xF8E4E3){
        return 0;
    }else if(color >= 0xF8E4E3 && color < 0xF8EA97){
        return 0;
    }else if(color >= 0xF8EA97 && color < 0xF8EACA){
        return 2;
    }else if(color >= 0xF8EACA && color < 0xF8EADF){
        return 1;
    }else if(color >= 0xF8EADF && color < 0xF8EBDD){
        return 1;
    }else if(color >= 0xF8EBDD && color < 0xF8EDDB){
        return 1;
    }else if(color >= 0xF8EDDB && color < 0xF8F3C4){
        return 1;
    }else if(color >= 0xF8F3C4 && color < 0xF8F4FF){
        return 2;
    }else if(color >= 0xF8F4FF && color < 0xF8F6A8){
        return 5;
    }else if(color >= 0xF8F6A8 && color < 0xF8F6D8){
        return 2;
    }else if(color >= 0xF8F6D8 && color < 0xF8F6DF){
        return 2;
    }else if(color >= 0xF8F6DF && color < 0xF8F8FF){
        return 2;
    }else if(color >= 0xF8F8FF && color < 0xF984E5){
        return 5;
    }else if(color >= 0xF984E5 && color < 0xF9C0C4){
        return 0;
    }else if(color >= 0xF9C0C4 && color < 0xF9D054){
        return 0;
    }else if(color >= 0xF9D054 && color < 0xF9D3BE){
        return 1;
    }else if(color >= 0xF9D3BE && color < 0xF9D77E){
        return 1;
    }else if(color >= 0xF9D77E && color < 0xF9E176){
        return 1;
    }else if(color >= 0xF9E176 && color < 0xF9E496){
        return 1;
    }else if(color >= 0xF9E496 && color < 0xF9E4C5){
        return 1;
    }else if(color >= 0xF9E4C5 && color < 0xF9E4C6){
        return 1;
    }else if(color >= 0xF9E4C6 && color < 0xF9E8E2){
        return 1;
    }else if(color >= 0xF9E8E2 && color < 0xF9F59F){
        return 0;
    }else if(color >= 0xF9F59F && color < 0xF9F7DE){
        return 2;
    }else if(color >= 0xF9F7DE && color < 0xFA8072){
        return 2;
    }else if(color >= 0xFA8072 && color < 0xFA9D49){
        return 0;
    }else if(color >= 0xFA9D49 && color < 0xFADADD){
        return 1;
    }else if(color >= 0xFADADD && color < 0xFADFAD){
        return 0;
    }else if(color >= 0xFADFAD && color < 0xFAE6DF){
        return 1;
    }else if(color >= 0xFAE6DF && color < 0xFAEBD7){
        return 1;
    }else if(color >= 0xFAEBD7 && color < 0xFAF0E6){
        return 5;
    }else if(color >= 0xFAF0E6 && color < 0xFAF3DC){
        return 5;
    }else if(color >= 0xFAF3DC && color < 0xFAFAD2){
        return 1;
    }else if(color >= 0xFAFAD2 && color < 0xFB607F){
        return 1;
    }else if(color >= 0xFB607F && color < 0xFBA0E3){
        return 0;
    }else if(color >= 0xFBA0E3 && color < 0xFBAED2){
        return 0;
    }else if(color >= 0xFBAED2 && color < 0xFBCEB1){
        return 0;
    }else if(color >= 0xFBCEB1 && color < 0xFBD7CC){
        return 1;
    }else if(color >= 0xFBD7CC && color < 0xFBE7B2){
        return 0;
    }else if(color >= 0xFBE7B2 && color < 0xFBEB50){
        return 1;
    }else if(color >= 0xFBEB50 && color < 0xFBEB9B){
        return 2;
    }else if(color >= 0xFBEB9B && color < 0xFBEC5D){
        return 1;
    }else if(color >= 0xFBEC5D && color < 0xFBEEE8){
        return 1;
    }else if(color >= 0xFBEEE8 && color < 0xFBF073){
        return 0;
    }else if(color >= 0xFBF073 && color < 0xFBF0D6){
        return 2;
    }else if(color >= 0xFBF0D6 && color < 0xFBF2DB){
        return 1;
    }else if(color >= 0xFBF2DB && color < 0xFBF3D3){
        return 1;
    }else if(color >= 0xFBF3D3 && color < 0xFC0FC0){
        return 2;
    }else if(color >= 0xFC0FC0 && color < 0xFC80A5){
        return 0;
    }else if(color >= 0xFC80A5 && color < 0xFCAE60){
        return 0;
    }else if(color >= 0xFCAE60 && color < 0xFCB057){
        return 1;
    }else if(color >= 0xFCB057 && color < 0xFCC200){
        return 1;
    }else if(color >= 0xFCC200 && color < 0xFCD5CF){
        return 1;
    }else if(color >= 0xFCD5CF && color < 0xFCDBD2){
        return 0;
    }else if(color >= 0xFCDBD2 && color < 0xFCE9D7){
        return 0;
    }else if(color >= 0xFCE9D7 && color < 0xFCEDC5){
        return 1;
    }else if(color >= 0xFCEDC5 && color < 0xFD0E35){
        return 1;
    }else if(color >= 0xFD0E35 && color < 0xFD5B78){
        return 0;
    }else if(color >= 0xFD5B78 && color < 0xFDA470){
        return 0;
    }else if(color >= 0xFDA470 && color < 0xFDAE45){
        return 1;
    }else if(color >= 0xFDAE45 && color < 0xFDD7D8){
        return 1;
    }else if(color >= 0xFDD7D8 && color < 0xFDD7E4){
        return 0;
    }else if(color >= 0xFDD7E4 && color < 0xFDE336){
        return 0;
    }else if(color >= 0xFDE336 && color < 0xFDE910){
        return 2;
    }else if(color >= 0xFDE910 && color < 0xFDE9E0){
        return 1;
    }else if(color >= 0xFDE9E0 && color < 0xFDEFD3){
        return 0;
    }else if(color >= 0xFDEFD3 && color < 0xFDEFDB){
        return 1;
    }else if(color >= 0xFDEFDB && color < 0xFDF5E6){
        return 1;
    }else if(color >= 0xFDF5E6 && color < 0xFE28A2){
        return 5;
    }else if(color >= 0xFE28A2 && color < 0xFE4C40){
        return 0;
    }else if(color >= 0xFE4C40 && color < 0xFE6F5E){
        return 1;
    }else if(color >= 0xFE6F5E && color < 0xFEAB9A){
        return 1;
    }else if(color >= 0xFEAB9A && color < 0xFEB552){
        return 0;
    }else if(color >= 0xFEB552 && color < 0xFEBAAD){
        return 1;
    }else if(color >= 0xFEBAAD && color < 0xFED85D){
        return 0;
    }else if(color >= 0xFED85D && color < 0xFEDBB7){
        return 1;
    }else if(color >= 0xFEDBB7 && color < 0xFEDCC1){
        return 1;
    }else if(color >= 0xFEDCC1 && color < 0xFEE0A5){
        return 1;
    }else if(color >= 0xFEE0A5 && color < 0xFF0000){
        return 1;
    }else if(color >= 0xFF0000 && color < 0xFF00CC){
        return 0;
    }else if(color >= 0xFF00CC && color < 0xFF00FF){
        return 0;
    }else if(color >= 0xFF00FF && color < 0xFF1493){
        return 0;
    }else if(color >= 0xFF1493 && color < 0xFF1CAE){
        return 0;
    }else if(color >= 0xFF1CAE && color < 0xFF2400){
        return 0;
    }else if(color >= 0xFF2400 && color < 0xFF3399){
        return 0;
    }else if(color >= 0xFF3399 && color < 0xFF33CC){
        return 0;
    }else if(color >= 0xFF33CC && color < 0xFF355E){
        return 0;
    }else if(color >= 0xFF355E && color < 0xFF3F34){
        return 0;
    }else if(color >= 0xFF3F34 && color < 0xFF4040){
        return 1;
    }else if(color >= 0xFF4040 && color < 0xFF4500){
        return 0;
    }else if(color >= 0xFF4500 && color < 0xFF4D00){
        return 1;
    }else if(color >= 0xFF4D00 && color < 0xFF4F00){
        return 0;
    }else if(color >= 0xFF4F00 && color < 0xFF55A3){
        return 1;
    }else if(color >= 0xFF55A3 && color < 0xFF6037){
        return 0;
    }else if(color >= 0xFF6037 && color < 0xFF6347){
        return 1;
    }else if(color >= 0xFF6347 && color < 0xFF6600){
        return 0;
    }else if(color >= 0xFF6600 && color < 0xFF66FF){
        return 1;
    }else if(color >= 0xFF66FF && color < 0xFF69B4){
        return 0;
    }else if(color >= 0xFF69B4 && color < 0xFF6EC7){
        return 0;
    }else if(color >= 0xFF6EC7 && color < 0xFF6FFF){
        return 0;
    }else if(color >= 0xFF6FFF && color < 0xFF7034){
        return 0;
    }else if(color >= 0xFF7034 && color < 0xFF7518){
        return 1;
    }else if(color >= 0xFF7518 && color < 0xFF77FF){
        return 1;
    }else if(color >= 0xFF77FF && color < 0xFF7F50){
        return 0;
    }else if(color >= 0xFF7F50 && color < 0xFF8C00){
        return 1;
    }else if(color >= 0xFF8C00 && color < 0xFF9889){
        return 1;
    }else if(color >= 0xFF9889 && color < 0xFF9933){
        return 0;
    }else if(color >= 0xFF9933 && color < 0xFF9966){
        return 1;
    }else if(color >= 0xFF9966 && color < 0xFF9980){
        return 1;
    }else if(color >= 0xFF9980 && color < 0xFFA000){
        return 1;
    }else if(color >= 0xFFA000 && color < 0xFFA07A){
        return 1;
    }else if(color >= 0xFFA07A && color < 0xFFA500){
        return 1;
    }else if(color >= 0xFFA500 && color < 0xFFA6C9){
        return 1;
    }else if(color >= 0xFFA6C9 && color < 0xFFA812){
        return 0;
    }else if(color >= 0xFFA812 && color < 0xFFAE42){
        return 1;
    }else if(color >= 0xFFAE42 && color < 0xFFB437){
        return 1;
    }else if(color >= 0xFFB437 && color < 0xFFB6C1){
        return 1;
    }else if(color >= 0xFFB6C1 && color < 0xFFB7D5){
        return 0;
    }else if(color >= 0xFFB7D5 && color < 0xFFB97B){
        return 0;
    }else if(color >= 0xFFB97B && color < 0xFFBA00){
        return 1;
    }else if(color >= 0xFFBA00 && color < 0xFFBF00){
        return 1;
    }else if(color >= 0xFFBF00 && color < 0xFFC0CB){
        return 1;
    }else if(color >= 0xFFC0CB && color < 0xFFC152){
        return 0;
    }else if(color >= 0xFFC152 && color < 0xFFC5BB){
        return 1;
    }else if(color >= 0xFFC5BB && color < 0xFFC69E){
        return 0;
    }else if(color >= 0xFFC69E && color < 0xFFC878){
        return 1;
    }else if(color >= 0xFFC878 && color < 0xFFCBA4){
        return 1;
    }else if(color >= 0xFFCBA4 && color < 0xFFCC00){
        return 1;
    }else if(color >= 0xFFCC00 && color < 0xFFCC33){
        return 1;
    }else if(color >= 0xFFCC33 && color < 0xFFCC99){
        return 1;
    }else if(color >= 0xFFCC99 && color < 0xFFCD73){
        return 1;
    }else if(color >= 0xFFCD73 && color < 0xFFD59A){
        return 1;
    }else if(color >= 0xFFD59A && color < 0xFFD67B){
        return 1;
    }else if(color >= 0xFFD67B && color < 0xFFD700){
        return 1;
    }else if(color >= 0xFFD700 && color < 0xFFD7A0){
        return 1;
    }else if(color >= 0xFFD7A0 && color < 0xFFD800){
        return 1;
    }else if(color >= 0xFFD800 && color < 0xFFDAB9){
        return 1;
    }else if(color >= 0xFFDAB9 && color < 0xFFDB58){
        return 1;
    }else if(color >= 0xFFDB58 && color < 0xFFDEAD){
        return 1;
    }else if(color >= 0xFFDEAD && color < 0xFFDF00){
        return 4;
    }else if(color >= 0xFFDF00 && color < 0xFFE39B){
        return 1;
    }else if(color >= 0xFFE39B && color < 0xFFE4B5){
        return 1;
    }else if(color >= 0xFFE4B5 && color < 0xFFE4C4){
        return 1;
    }else if(color >= 0xFFE4C4 && color < 0xFFE4E1){
        return 4;
    }else if(color >= 0xFFE4E1 && color < 0xFFEBCD){
        return 0;
    }else if(color >= 0xFFEBCD && color < 0xFFEFD5){
        return 4;
    }else if(color >= 0xFFEFD5 && color < 0xFFF0F5){
        return 1;
    }else if(color >= 0xFFF0F5 && color < 0xFFF5EE){
        return 0;
    }else if(color >= 0xFFF5EE && color < 0xFFF8DC){
        return 5;
    }else if(color >= 0xFFF8DC && color < 0xFFFACD){
        return 1;
    }else if(color >= 0xFFFACD && color < 0xFFFAF0){
        return 1;
    }else if(color >= 0xFFFAF0 && color < 0xFFFAFA){
        return 5;
    }else if(color >= 0xFFFAFA && color < 0xFFFDD0){
        return 5;
    }else if(color >= 0xFFFDD0 && color < 0xFFFF00){
        return 5;
    }else if(color >= 0xFFFF00 && color < 0xFFFF66){
        return 1;
    }else if(color >= 0xFFFF66 && color < 0xFFFF99){
        return 1;
    }else if(color >= 0xFFFF99 && color < 0xFFFFE0){
        return 1;
    }else if(color >= 0xFFFFE0 && color < 0xFFFFF0){
        return 1;
    }else if(color >= 0xFFFFF0 && color < 0xFFFFFF){
        return 5;
    }
    return 5;
}