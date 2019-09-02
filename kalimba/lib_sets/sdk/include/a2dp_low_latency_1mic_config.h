// -----------------------------------------------------------------------------
// Copyright (c) 2010 - 2015 Qualcomm Technologies International, Ltd.
// Generated by DerivationEngine.py
// source v1.1, namespace com.csr.cps.2 on 2016-10-11 20:47:33 by SHA-Audio_Dev
// from a2dp_low_latency_1mic.xml $Revision: #2 $
// last modifed with $Change: 2627201 $ by $Author: bs26 $ on $DateTime: 2016/08/29 10:46:35 $
// -----------------------------------------------------------------------------
#ifndef __A2DP_LOW_LATENCY_1MIC_CONFIG_H__
#define __A2DP_LOW_LATENCY_1MIC_CONFIG_H__

#define uses_SPKR_EQ_RAW_COEFS 	0
#define uses_USER_EQ_RAW_COEFS 	0
#define uses_BASS_MANAGER      	1
#define uses_SPKR_EQ           	1
#define uses_BASS_BOOST        	1
#define uses_USER_EQ           	1
#define uses_STEREO_ENHANCEMENT	1
#define uses_DITHER            	1
#define uses_COMPANDER         	1
#define uses_SUBWOOFER         	0
#define uses_VOLUME_CONTROL    	1
#define uses_SIGNAL_DETECTION  	1
#define uses_DCBLOCK           	1
#define uses_SND_PEQ           	1
#define uses_AEC               	1
#define uses_SND_NS            	1
#define uses_SND_AGC           	1
#define uses_DIGITAL_MIC       	0

#define flag_uses_SPKR_EQ_RAW_COEFS 	0x200000
#define flag_uses_USER_EQ_RAW_COEFS 	0x080000
#define flag_uses_BASS_MANAGER      	0x040000
#define flag_uses_SPKR_EQ           	0x020000
#define flag_uses_BASS_BOOST        	0x010000
#define flag_uses_USER_EQ           	0x008000
#define flag_uses_STEREO_ENHANCEMENT	0x004000
#define flag_uses_DITHER            	0x002000
#define flag_uses_COMPANDER         	0x001000
#define flag_uses_SUBWOOFER         	0x000800
#define flag_uses_VOLUME_CONTROL    	0x000400
#define flag_uses_SIGNAL_DETECTION  	0x000200
#define flag_uses_DCBLOCK           	0x000100
#define flag_uses_SND_PEQ           	0x000080
#define flag_uses_AEC               	0x000040
#define flag_uses_SND_NS            	0x000020
#define flag_uses_SND_AGC           	0x000010
#define flag_uses_DIGITAL_MIC       	0x000008


// Bit-mask flags to return in SPI status, which tells the Parameter Manager
// (Windows Realtime Tuning GUI) which modules are included in the build.  The
// mask is also written to the kap file so that the build configuration can be
// identified using a text editor.

#define A2DP_LOW_LATENCY_1MIC_CONFIG_FLAG	uses_SPKR_EQ_RAW_COEFS*flag_uses_SPKR_EQ_RAW_COEFS +  uses_USER_EQ_RAW_COEFS*flag_uses_USER_EQ_RAW_COEFS +  uses_BASS_MANAGER*flag_uses_BASS_MANAGER +  uses_SPKR_EQ*flag_uses_SPKR_EQ +  uses_BASS_BOOST*flag_uses_BASS_BOOST +  uses_USER_EQ*flag_uses_USER_EQ +  uses_STEREO_ENHANCEMENT*flag_uses_STEREO_ENHANCEMENT +  uses_DITHER*flag_uses_DITHER +  uses_COMPANDER*flag_uses_COMPANDER +  uses_SUBWOOFER*flag_uses_SUBWOOFER +  uses_VOLUME_CONTROL*flag_uses_VOLUME_CONTROL +  uses_SIGNAL_DETECTION*flag_uses_SIGNAL_DETECTION +  uses_DCBLOCK*flag_uses_DCBLOCK +  uses_SND_PEQ*flag_uses_SND_PEQ +  uses_AEC*flag_uses_AEC +  uses_SND_NS*flag_uses_SND_NS +  uses_SND_AGC*flag_uses_SND_AGC +  uses_DIGITAL_MIC*flag_uses_DIGITAL_MIC


#endif // __A2DP_LOW_LATENCY_1MIC_CONFIG_H__
