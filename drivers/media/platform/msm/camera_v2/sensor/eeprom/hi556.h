/* Copyright (c) 2011-2014, The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */
#ifndef CUSTOM_DEFINE_OTP_INIT_MAP_H
#define CUSTOM_DEFINE_OTP_INIT_MAP_H

#include <media/msmb_camera.h>

static struct msm_camera_i2c_reg_array init_otp_array[] = {
	{0x0a02, 0x01, 0},
	{0x0a00, 0x00, 10},
	{0x0F02, 0x00, 0},
	{0x011A, 0x01, 0},
	{0x011B, 0x09, 0},
	{0x0D04, 0x01, 0},
	{0x0D02, 0x07, 0},
	{0x003E, 0x10, 0},
	{0x0a00, 0x01, 0},
	{0x010A, 0x04, 0},
	{0x010B, 0x01, 0},
	{0x0102, 0x01, 10},	
};


static struct msm_camera_i2c_reg_array otp_to_norm_mode_array[] = {
	{0x0a00, 0x00, 10},
	{0x004A, 0x00, 0},
	{0x0D04, 0x00, 0},
	{0x003E, 0x00, 0},
	{0x004A, 0x01, 0},
	{0x0A00, 0x01, 0},	
};

static struct msm_camera_i2c_reg_array init_reg_array0[] = {
	{0x0a00, 0x0000}, //stream off
	{0x0e00, 0x0102}, 
	{0x0e02, 0x0102}, 
	{0x0e0c, 0x0100}, 
	{0x2000, 0x7400},
	{0x2002, 0x001c},
	{0x2004, 0x0242},
	{0x2006, 0x0942},
	{0x2008, 0x7007},
	{0x200a, 0x0fd9},
	{0x200c, 0x0259},
	{0x200e, 0x7008},
	{0x2010, 0x160e},
	{0x2012, 0x0047},
	{0x2014, 0x2118},
	{0x2016, 0x0041},
	{0x2018, 0x00d8},
	{0x201a, 0x0145},
	{0x201c, 0x0006},
	{0x201e, 0x0181},
	{0x2020, 0x13cc},
	{0x2022, 0x2057},
	{0x2024, 0x7001},
	{0x2026, 0x0fca},
	{0x2028, 0x00cb},
	{0x202a, 0x009f},
	{0x202c, 0x7002},
	{0x202e, 0x13cc},
	{0x2030, 0x019b},
	{0x2032, 0x014d},
	{0x2034, 0x2987},
	{0x2036, 0x2766},
	{0x2038, 0x0020},
	{0x203a, 0x2060},
	{0x203c, 0x0e5d},
	{0x203e, 0x181d},
	{0x2040, 0x2066},
	{0x2042, 0x20c4},
	{0x2044, 0x5000},
	{0x2046, 0x0005},
	{0x2048, 0x0000},
	{0x204a, 0x01db},
	{0x204c, 0x025a},
	{0x204e, 0x00c0},
	{0x2050, 0x0005},
	{0x2052, 0x0006},
	{0x2054, 0x0ad9},
	{0x2056, 0x0259},
	{0x2058, 0x0618},
	{0x205a, 0x0258},
	{0x205c, 0x2266},
	{0x205e, 0x20c8},
	{0x2060, 0x2060},
	{0x2062, 0x707b},
	{0x2064, 0x0fdd},
	{0x2066, 0x81b8},
	{0x2068, 0x5040},
	{0x206a, 0x0020},
	{0x206c, 0x5060},
	{0x206e, 0x3143},
	{0x2070, 0x5081},
	{0x2072, 0x025c},
	{0x2074, 0x7800},
	{0x2076, 0x7400},
	{0x2078, 0x001c},
	{0x207a, 0x0242},
	{0x207c, 0x0942},
	{0x207e, 0x0bd9},
	{0x2080, 0x0259},
	{0x2082, 0x7008},
	{0x2084, 0x160e},
	{0x2086, 0x0047},
	{0x2088, 0x2118},
	{0x208a, 0x0041},
	{0x208c, 0x00d8},
	{0x208e, 0x0145},
	{0x2090, 0x0006},
	{0x2092, 0x0181},
	{0x2094, 0x13cc},
	{0x2096, 0x2057},
	{0x2098, 0x7001},
	{0x209a, 0x0fca},
	{0x209c, 0x00cb},
	{0x209e, 0x009f},
	{0x20a0, 0x7002},
	{0x20a2, 0x13cc},
	{0x20a4, 0x019b},
	{0x20a6, 0x014d},
	{0x20a8, 0x2987},
	{0x20aa, 0x2766},
	{0x20ac, 0x0020},
	{0x20ae, 0x2060},
	{0x20b0, 0x0e5d},
	{0x20b2, 0x181d},
	{0x20b4, 0x2066},
	{0x20b6, 0x20c4},
	{0x20b8, 0x50a0},
	{0x20ba, 0x0005},
	{0x20bc, 0x0000},
	{0x20be, 0x01db},
	{0x20c0, 0x025a},
	{0x20c2, 0x00c0},
	{0x20c4, 0x0005},
	{0x20c6, 0x0006},
	{0x20c8, 0x0ad9},
	{0x20ca, 0x0259},
	{0x20cc, 0x0618},
	{0x20ce, 0x0258},
	{0x20d0, 0x2266},
	{0x20d2, 0x20c8},
	{0x20d4, 0x2060},
	{0x20d6, 0x707b},
	{0x20d8, 0x0fdd},
	{0x20da, 0x86b8},
	{0x20dc, 0x50e0},
	{0x20de, 0x0020},
	{0x20e0, 0x5100},
	{0x20e2, 0x3143},
	{0x20e4, 0x5121},
	{0x20e6, 0x7800},
	{0x20e8, 0x3140},
	{0x20ea, 0x01c4},
	{0x20ec, 0x01c1},
	{0x20ee, 0x01c0},
	{0x20f0, 0x01c4},
	{0x20f2, 0x2700},
	{0x20f4, 0x3d40},
	{0x20f6, 0x7800},
	{0x20f8, 0xffff},
	{0x27fe, 0xe000},
	{0x3000, 0x60f8},
	{0x3002, 0x187f},
	{0x3004, 0x7060},
	{0x3006, 0x0114},
	{0x3008, 0x60b0},
	{0x300a, 0x1473},
	{0x300c, 0x0013},
	{0x300e, 0x140f},
	{0x3010, 0x0040},
	{0x3012, 0x100f},
	{0x3014, 0x60f8},
	{0x3016, 0x187f},
	{0x3018, 0x7060},
	{0x301a, 0x0114},
	{0x301c, 0x60b0},
	{0x301e, 0x1473},
	{0x3020, 0x0013},
	{0x3022, 0x140f},
	{0x3024, 0x0040},
	{0x3026, 0x000f},
	
	{0x0b00, 0x0000}, 
	{0x0b02, 0x0045}, 
	{0x0b04, 0xb405}, 
	{0x0b06, 0xc403}, 
	{0x0b08, 0x0081}, 
	{0x0b0a, 0x8252}, 
	{0x0b0c, 0xf814}, 
	{0x0b0e, 0xc618}, 
	{0x0b10, 0xa828}, 
	{0x0b12, 0x004c}, 
	{0x0b14, 0x4068}, 
	{0x0b16, 0x0000}, 
	{0x0f30, 0x6e25}, //pll
	{0x0f32, 0x7067}, //pll
	{0x0954, 0x0009}, 
	{0x0956, 0x1100}, 
	{0x0958, 0xcc80}, 
	{0x095a, 0x0000}, 
	{0x0c00, 0x1110}, 
	{0x0c02, 0x0011}, 
	{0x0c04, 0x0000}, 
	{0x0c06, 0x0200}, 
	{0x0c10, 0x0040}, //OB 
	{0x0c12, 0x0040}, //OB 
	{0x0c14, 0x0040}, //OB 
	{0x0c16, 0x0040}, //OB 
	{0x0a10, 0x4000}, //pedestal_data
	{0x3068, 0xf800}, 
	{0x306a, 0xf876}, 
	{0x006c, 0x0000}, 
	{0x005e, 0x0200}, 
	//{0x000e, 0x0000}, //image orient
	{0x0e0a, 0x0001}, 
	{0x004a, 0x0100}, 
	{0x004c, 0x0000}, 
	{0x004e, 0x0100}, 
	{0x000c, 0x0022}, 
	{0x0008, 0x0b00}, //line length pck 2816
	{0x005a, 0x0202}, 
	{0x0012, 0x000e}, 
	{0x0018, 0x0a31}, 
	{0x0022, 0x0008}, 
	{0x0028, 0x0017}, 
	{0x0024, 0x0028}, 
	{0x002a, 0x002d}, 
	{0x0026, 0x0030}, 
	{0x002c, 0x07c7}, 
	{0x002e, 0x1111}, 
	{0x0030, 0x1111}, 
	{0x0032, 0x1111}, 
	{0x0006, 0x0823}, //frame length lines min 0x07BC
	{0x0a22, 0x0000}, 
	{0x0a12, 0x0a20}, //x output size 2592
	{0x0a14, 0x0798}, //y output size 1944
	{0x003e, 0x0000}, 
	{0x0074, 0x0821}, //coarse integ time
	{0x0070, 0x0411}, 
	{0x0002, 0x0000}, 
	{0x0a02, 0x0100}, 
	{0x0a24, 0x0100},  
	{0x0076, 0x0000}, //analog gain 1x
	{0x0060, 0x0000}, 
	{0x0062, 0x0530}, 
	{0x0064, 0x0500}, 
	{0x0066, 0x0530}, 
	{0x0068, 0x0500}, 
	{0x0122, 0x0300}, 
	{0x015a, 0xff08}, 
	{0x0804, 0x0200}, 
	{0x005c, 0x0102}, 
	{0x0a1a, 0x0800}, //DGain pedestal enable
};

#endif
