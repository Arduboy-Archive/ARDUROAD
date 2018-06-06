#pragma once

#include <Arduboy2.h>

const unsigned char PROGMEM mainCar[] = {
43, 25,

//frame0
0x00, 0x00, 0x00, 0x00, 0xa0, 0x50, 0xa8, 0xa8, 0x88, 0xb0, 0x88, 0xb4, 0xba, 0xba, 0x92, 0xaa, 0x94, 0x88, 0xb8, 0xa8, 0xa8, 0x88, 0xa8, 0x88, 0xa8, 0xa8, 0xa8, 0xa8, 0x98, 0xa8, 0xb4, 0xb4, 0x94, 0xa8, 0x98, 0xa8, 0xa8, 0x50, 0xa0, 0x00, 0x00, 0x00, 0x00, 
0x00, 0xf0, 0x0c, 0x13, 0xc8, 0x26, 0x15, 0x56, 0x92, 0x52, 0x92, 0x12, 0x12, 0x12, 0x12, 0x16, 0x10, 0x1f, 0x10, 0xd2, 0x52, 0xd2, 0x52, 0xd2, 0x10, 0x1f, 0x10, 0x16, 0x12, 0x12, 0x12, 0x12, 0x92, 0x52, 0x92, 0x56, 0x15, 0x26, 0xcc, 0x13, 0x0c, 0xf0, 0x00, 
0x00, 0x00, 0x7f, 0x80, 0xa0, 0xa1, 0xa2, 0xa2, 0x8a, 0x8a, 0x6a, 0x2a, 0x2a, 0x2a, 0x2a, 0x2a, 0x52, 0x52, 0x5a, 0x52, 0x52, 0x5a, 0x52, 0x52, 0x5a, 0x52, 0x52, 0x6a, 0x2a, 0x2a, 0x2a, 0x2a, 0x6a, 0x8a, 0xaa, 0xa2, 0xa2, 0xa1, 0xa0, 0x80, 0x7f, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

//frame1
0x00, 0x00, 0x00, 0x00, 0xa0, 0x50, 0xa8, 0xa8, 0x88, 0xb0, 0x88, 0xb4, 0xba, 0xba, 0x92, 0xaa, 0x94, 0x88, 0xb8, 0xa8, 0xa8, 0x88, 0xa8, 0x88, 0xa8, 0xa8, 0xa8, 0xa8, 0x98, 0xa8, 0xb4, 0xb4, 0x94, 0xa8, 0x98, 0xa8, 0xa8, 0x50, 0xa0, 0x00, 0x00, 0x00, 0x00, 
0x00, 0xf0, 0x0c, 0x13, 0xc8, 0x26, 0x15, 0x56, 0x92, 0x52, 0x92, 0x12, 0x12, 0x12, 0x12, 0x16, 0x10, 0x1f, 0x10, 0xd2, 0x52, 0xd2, 0x52, 0xd2, 0x10, 0x1f, 0x10, 0x16, 0x12, 0x12, 0x12, 0x12, 0x92, 0x52, 0x92, 0x56, 0x15, 0x26, 0xcc, 0x13, 0x0c, 0xf0, 0x00, 
0x00, 0x00, 0x7f, 0x80, 0x94, 0x91, 0x92, 0x82, 0x8a, 0x8a, 0x6a, 0x2a, 0x2a, 0x2a, 0x2a, 0x2a, 0x52, 0x52, 0x5a, 0x52, 0x52, 0x5a, 0x52, 0x52, 0x5a, 0x52, 0x52, 0x6a, 0x2a, 0x2a, 0x2a, 0x2a, 0x6a, 0x8a, 0x8a, 0x82, 0x92, 0x91, 0x90, 0x80, 0x7f, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

const unsigned char PROGMEM mainCarMask[] = {
0x00, 0x00, 0x00, 0xa0, 0xf0, 0xf8, 0xfc, 0xfc, 0xfc, 0xf8, 0xfc, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfe, 0xfe, 0xfe, 0xfc, 0xfc, 0xfc, 0xfc, 0xf8, 0xf0, 0xa0, 0x00, 0x00, 0x00, 
0xf0, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0xf0, 
0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x7f, 0x7f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x00, 
0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 
};

const unsigned char PROGMEM RearView[] = {
40, 11,
0x00, 0xfc, 0x84, 0x02, 0x03, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x03, 0x00, 0x00, 0x00, 0x00, 0x03, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x86, 0xfd, 0x02, 0xfc, 0x00, 
0x00, 0x00, 0x01, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x03, 0x02, 0x01, 0x00, 0x00, 
};

const unsigned char PROGMEM RearViewMask[] = {
0xfc, 0xfe, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfc, 
0x00, 0x01, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x03, 0x01, 0x00, 
};

const unsigned char PROGMEM dirtCloudframe0[] = {
// width, height,
43, 6,

//frame0
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x38, 0x3c, 0x3c, 0x38, 0x38, 0x30, 0x20, 0x30, 0x30, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x30, 0x30, 0x20, 0x30, 0x38, 0x38, 0x3c, 0x3c, 0x38, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

//frame1
0x00, 0x10, 0x0c, 0x36, 0x1a, 0x2a, 0x3c, 0x3c, 0x3e, 0x3e, 0x3c, 0x3c, 0x38, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x38, 0x3c, 0x3c, 0x3e, 0x3e, 0x3c, 0x3c, 0x2a, 0x1a, 0x36, 0x0c, 0x10, 0x00, 

//frame2
0x00, 0x00, 0x00, 0x30, 0x18, 0x28, 0x38, 0x30, 0x30, 0x20, 0x30, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x30, 0x20, 0x30, 0x30, 0x38, 0x28, 0x18, 0x30, 0x00, 0x00, 0x00, 
};

const unsigned char PROGMEM dirtCloudframe0Mask[] = {

//frame0
0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x3c, 0x3c, 0x3e, 0x3e, 0x3c, 0x3c, 0x38, 0x30, 0x38, 0x38, 0x30, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x30, 0x38, 0x38, 0x30, 0x38, 0x3c, 0x3c, 0x3e, 0x3e, 0x3c, 0x3c, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 

//frame1
0x10, 0x3c, 0x3e, 0x3f, 0x3f, 0x3f, 0x3e, 0x3e, 0x3f, 0x3f, 0x3e, 0x3e, 0x3c, 0x38, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x38, 0x3c, 0x3e, 0x3e, 0x3f, 0x3f, 0x3e, 0x3e, 0x3f, 0x3f, 0x3f, 0x3e, 0x3c, 0x10, 

//frame2
0x00, 0x00, 0x30, 0x38, 0x3c, 0x3c, 0x3c, 0x38, 0x38, 0x30, 0x38, 0x38, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x38, 0x38, 0x30, 0x38, 0x38, 0x3c, 0x3c, 0x3c, 0x38, 0x30, 0x00, 0x00, 
};



const unsigned char PROGMEM opp_car_1[] = {
41, 22,
0x00, 0x00, 0x00, 0xe0, 0x10, 0xd0, 0x48, 0x54, 0x54, 0x5a, 0x5a, 0x5a, 0x5a, 0x5a, 0x5a, 0xda, 0x1a, 0xda, 0x5a, 0x5a, 0x5a, 0x5a, 0x5a, 0xda, 0x1a, 0xda, 0x5a, 0x5a, 0x5a, 0x5a, 0x5a, 0x5a, 0x54, 0x54, 0x48, 0xd0, 0x10, 0xe0, 0x00, 0x00, 0x00, 
0x00, 0x1c, 0xa2, 0x4d, 0xb6, 0x5a, 0x6a, 0x5b, 0x6b, 0x5b, 0x33, 0x4b, 0x7b, 0x7b, 0x7a, 0x7b, 0x78, 0x7b, 0x4b, 0x4b, 0x4b, 0x4b, 0x4b, 0x7b, 0x78, 0x7b, 0x7a, 0x7b, 0x7b, 0x4b, 0x33, 0x5b, 0x6b, 0x5b, 0x6a, 0x5a, 0xb6, 0x4c, 0xa3, 0x1c, 0x00, 
0x00, 0x00, 0x0f, 0x10, 0x14, 0x15, 0x15, 0x11, 0x0d, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x0b, 0x0b, 0x09, 0x0b, 0x0b, 0x09, 0x0b, 0x0b, 0x09, 0x0b, 0x0b, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x0d, 0x11, 0x15, 0x15, 0x14, 0x10, 0x0f, 0x00, 0x00, 
};

const unsigned char PROGMEM opp_car_1_mask[] = {
0x00, 0x00, 0xe0, 0xf0, 0xf8, 0xf8, 0xfc, 0xfe, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfe, 0xfc, 0xf8, 0xf8, 0xf0, 0xe0, 0x00, 0x00, 
0x1c, 0xbe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xbf, 0x1c, 
0x00, 0x0f, 0x1f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x1f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x1f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x1f, 0x0f, 0x00, 
};

const unsigned char PROGMEM opp_car_2[] = {
33, 16,
0x00, 0x00, 0x80, 0x64, 0xba, 0xaa, 0xaa, 0xaa, 0x2a, 0xaa, 0xaa, 0xaa, 0xba, 0x82, 0xba, 0xaa, 0xaa, 0xaa, 0xba, 0x82, 0xba, 0xaa, 0xaa, 0xaa, 0x2a, 0xaa, 0xaa, 0xaa, 0xba, 0x64, 0x80, 0x00, 0x00, 
0x00, 0x07, 0x38, 0x47, 0x49, 0x4a, 0x3a, 0x29, 0x2b, 0x28, 0x2b, 0x2b, 0x3b, 0x3b, 0x28, 0x38, 0x28, 0x38, 0x2b, 0x3b, 0x3b, 0x2b, 0x2b, 0x28, 0x2b, 0x29, 0x3a, 0x4a, 0x49, 0x47, 0x38, 0x07, 0x00, 
};

const unsigned char PROGMEM opp_car_2_mask[] = {
0x00, 0x80, 0xe4, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xe4, 0x80, 0x00, 
0x07, 0x3f, 0x7f, 0xff, 0xff, 0xff, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0xff, 0xff, 0xff, 0x7f, 0x3f, 0x07, 
};

const unsigned char PROGMEM opp_car_3[] = {
22, 11,
0x00, 0xc0, 0x2c, 0x12, 0xd2, 0xaa, 0xe2, 0xaa, 0xea, 0xaa, 0xea, 0xea, 0xaa, 0xea, 0xaa, 0xe2, 0xaa, 0xd2, 0x12, 0x2c, 0xc0, 0x00, 
0x00, 0x01, 0x02, 0x02, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x02, 0x02, 0x01, 0x00, 
};

const unsigned char PROGMEM opp_car_3_mask[] = {
0xc0, 0xec, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xec, 0xc0, 
0x01, 0x03, 0x07, 0x07, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x07, 0x07, 0x03, 0x01, 
};

const unsigned char PROGMEM opp_car_4[] = {
15, 8,
0x00, 0x30, 0x4a, 0x3a, 0x32, 0x26, 0x26, 0x32, 0x26, 0x26, 0x32, 0x3a, 0x4a, 0x30, 0x00, 
};

const unsigned char PROGMEM opp_car_4_mask[] = {
0x30, 0x7e, 0xff, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0xff, 0x7e, 0x30, 
};

const unsigned char PROGMEM opp_car_5[] = {
12, 7,
0x00, 0x10, 0x2a, 0x1a, 0x12, 0x16, 0x16, 0x12, 0x1a, 0x2a, 0x10, 0x00, 
};

const unsigned char PROGMEM opp_car_5_mask[] = {
0x10, 0x3e, 0x7f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x7f, 0x3e, 0x10, 
};

const unsigned char PROGMEM opp_car_6[] = {
8, 6,
0x00, 0x0a, 0x1a, 0x0e, 0x0e, 0x1a, 0x0a, 0x00, 
};

const unsigned char PROGMEM opp_car_6_mask[] = {
0x0e, 0x1f, 0x3f, 0x1f, 0x1f, 0x3f, 0x1f, 0x0e, 
};

const unsigned char PROGMEM gearbox[] = {
18, 17,
0x00, 0xfc, 0x02, 0x02, 0x7c, 0x40, 0x40, 0x7c, 0x02, 0x02, 0x7c, 0x40, 0x40, 0x40, 0x40, 0x80, 0x00, 0x00, 
0x00, 0x7f, 0x80, 0x80, 0x7e, 0x02, 0x02, 0x7e, 0x80, 0x80, 0x7e, 0x02, 0x02, 0x7e, 0x80, 0x80, 0x7f, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

const unsigned char PROGMEM gearbox_mask[] = {
0xfc, 0xfe, 0xff, 0xff, 0xfe, 0xfc, 0xfc, 0xfe, 0xff, 0xff, 0xfe, 0xfc, 0xe0, 0xe0, 0xe0, 0xc0, 0x80, 0x00, 
0x7f, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0x7f, 
0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 
};