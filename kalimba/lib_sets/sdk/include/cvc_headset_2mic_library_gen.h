// -----------------------------------------------------------------------------
// Copyright (c) 2010 - 2015 Qualcomm Technologies International, Ltd.
// Generated by DerivationEngine.py
// source v1.1, namespace com.csr.cps.2 on 2016-10-11 20:47:31 by SHA-Audio_Dev
// from cvc_headset_2mic.xml $Revision: #2 $
// last modifed with $Change: 2627201 $ by $Author: bs26 $ on $DateTime: 2016/08/29 10:46:35 $
// -----------------------------------------------------------------------------
#ifndef __CVC_HEADSET_2MIC_LIBRARY_GEN_H__
#define __CVC_HEADSET_2MIC_LIBRARY_GEN_H__

// Algorithm IDs
.CONST $CVC_HEADSET_2MIC_SYSID     	0xB10E;

// Piecewise Enables
.CONST $M.CVC_HEADSET_2MIC.CONFIG.CNGENA            		0x200000;
.CONST $M.CVC_HEADSET_2MIC.CONFIG.BYPASS_RCVAGC     		0x008000;
.CONST $M.CVC_HEADSET_2MIC.CONFIG.AEQENA            		0x004000;
.CONST $M.CVC_HEADSET_2MIC.CONFIG.PLCENA            		0x002000;
.CONST $M.CVC_HEADSET_2MIC.CONFIG.BYPASS_NDVC       		0x000800;
.CONST $M.CVC_HEADSET_2MIC.CONFIG.BYPASS_SNDAGC     		0x000400;
.CONST $M.CVC_HEADSET_2MIC.CONFIG.RCVOMSENA         		0x000020;
.CONST $M.CVC_HEADSET_2MIC.CONFIG.SIDETONEENA       		0x000010;
.CONST $M.CVC_HEADSET_2MIC.CONFIG.RERENA            		0x000004;
.CONST $M.CVC_HEADSET_2MIC.CONFIG.AECENA            		0x000002;
.CONST $M.CVC_HEADSET_2MIC.CONFIG.BEXENA            		0x000001;
.CONST $M.CVC_HEADSET_2MIC.CONFIG.HDBYP             		0x001000;
.CONST $M.CVC_HEADSET_2MIC.CONFIG.BYPASS_AGCPERSIST 		0x000100;
.CONST $M.CVC_HEADSET_2MIC.CONFIG.BYPASS_MGDC       		0x000002;
.CONST $M.CVC_HEADSET_2MIC.CONFIG.BYPASS_SPP        		0x000040;
.CONST $M.CVC_HEADSET_2MIC.CONFIG.BYPASS_GSMOOTH    		0x000080;
.CONST $M.CVC_HEADSET_2MIC.CONFIG.BYPASS_NFLOOR     		0x000100;
.CONST $M.CVC_HEADSET_2MIC.CONFIG.GSCHEME           		0x000200;
.CONST $M.CVC_HEADSET_2MIC.CONFIG.DMSS_MODE         		0x000001;
.CONST $M.CVC_HEADSET_2MIC.CONFIG.BYPASS_ADF        		0x000008;
.CONST $M.CVC_HEADSET_2MIC.CONFIG.BYPASS_NC         		0x000010;
.CONST $M.CVC_HEADSET_2MIC.CONFIG.BYPASS_WNR        		0x000004;
.CONST $M.CVC_HEADSET_2MIC.CONFIG.BYPASS_DMS        		0x000020;
.CONST $M.CVC_HEADSET_2MIC.CONFIG.BYPASS_MGDCPERSIST		0x000400;

// SPI Status Block
.CONST $M.CVC_HEADSET_2MIC.STATUS.CUR_MODE_OFFSET      		0;
.CONST $M.CVC_HEADSET_2MIC.STATUS.CALL_STATE_OFFSET    		1;
.CONST $M.CVC_HEADSET_2MIC.STATUS.SYS_CONTROL_OFFSET   		2;
.CONST $M.CVC_HEADSET_2MIC.STATUS.CUR_DAC_OFFSET       		3;
.CONST $M.CVC_HEADSET_2MIC.STATUS.PRIM_PSKEY_OFFSET    		4;
.CONST $M.CVC_HEADSET_2MIC.STATUS.SEC_STAT_OFFSET      		5;
.CONST $M.CVC_HEADSET_2MIC.STATUS.PEAK_DAC_OFFSET      		6;
.CONST $M.CVC_HEADSET_2MIC.STATUS.PEAK_ADC_LEFT_OFFSET 		7;
.CONST $M.CVC_HEADSET_2MIC.STATUS.PEAK_ADC_RIGHT_OFFSET		8;
.CONST $M.CVC_HEADSET_2MIC.STATUS.PEAK_SCO_IN_OFFSET   		9;
.CONST $M.CVC_HEADSET_2MIC.STATUS.PEAK_SCO_OUT_OFFSET  		10;
.CONST $M.CVC_HEADSET_2MIC.STATUS.PEAK_MIPS_OFFSET     		11;
.CONST $M.CVC_HEADSET_2MIC.STATUS.NDVC_NOISE_EST_OFFSET		12;
.CONST $M.CVC_HEADSET_2MIC.STATUS.PEAK_AUX_OFFSET      		13;
.CONST $M.CVC_HEADSET_2MIC.STATUS.COMPILED_CONFIG      		14;
.CONST $M.CVC_HEADSET_2MIC.STATUS.CONNSTAT             		15;
.CONST $M.CVC_HEADSET_2MIC.STATUS.SIDETONE_GAIN        		16;
.CONST $M.CVC_HEADSET_2MIC.STATUS.VOLUME               		17;
.CONST $M.CVC_HEADSET_2MIC.STATUS.PLC_PACKET_LOSS      		18;
.CONST $M.CVC_HEADSET_2MIC.STATUS.AEQ_GAIN_LOW         		19;
.CONST $M.CVC_HEADSET_2MIC.STATUS.AEQ_GAIN_HIGH        		20;
.CONST $M.CVC_HEADSET_2MIC.STATUS.AEQ_STATE            		21;
.CONST $M.CVC_HEADSET_2MIC.STATUS.AEQ_POWER_TEST       		22;
.CONST $M.CVC_HEADSET_2MIC.STATUS.AEQ_TONE_POWER       		23;
.CONST $M.CVC_HEADSET_2MIC.STATUS.PEAK_SIDETONE        		24;
.CONST $M.CVC_HEADSET_2MIC.STATUS.SND_AGC_SPEECH_LVL   		25;
.CONST $M.CVC_HEADSET_2MIC.STATUS.SND_AGC_GAIN         		26;
.CONST $M.CVC_HEADSET_2MIC.STATUS.RCV_AGC_SPEECH_LVL   		27;
.CONST $M.CVC_HEADSET_2MIC.STATUS.RCV_AGC_GAIN         		28;
.CONST $M.CVC_HEADSET_2MIC.STATUS.AEC_COUPLING_OFFSET  		29;
.CONST $M.CVC_HEADSET_2MIC.STATUS.WNR_POWER            		30;
.CONST $M.CVC_HEADSET_2MIC.STATUS.WNR_WIND_PHASE       		31;
.CONST $M.CVC_HEADSET_2MIC.STATUS.WIND_FLAG            		32;
.CONST $M.CVC_HEADSET_2MIC.STATUS.INTERFACE_TYPE       		33;
.CONST $M.CVC_HEADSET_2MIC.STATUS.INPUT_RATE           		34;
.CONST $M.CVC_HEADSET_2MIC.STATUS.OUTPUT_RATE          		35;
.CONST $M.CVC_HEADSET_2MIC.STATUS.CODEC_RATE           		36;
.CONST $M.CVC_HEADSET_2MIC.STATUS.DSP_VOL_FLAG         		37;
.CONST $M.CVC_HEADSET_2MIC.STATUS.DSP_VOL              		38;
.CONST $M.CVC_HEADSET_2MIC.STATUS.BLOCK_SIZE                		39;

// System Mode
.CONST $M.CVC_HEADSET_2MIC.SYSMODE.STANDBY      		0;
.CONST $M.CVC_HEADSET_2MIC.SYSMODE.HFK          		1;
.CONST $M.CVC_HEADSET_2MIC.SYSMODE.SSR          		2;
.CONST $M.CVC_HEADSET_2MIC.SYSMODE.PSTHRGH_LEFT 		3;
.CONST $M.CVC_HEADSET_2MIC.SYSMODE.PSTHRGH_RIGHT		4;
.CONST $M.CVC_HEADSET_2MIC.SYSMODE.LPBACK       		5;
.CONST $M.CVC_HEADSET_2MIC.SYSMODE.LOWVOLUME    		7;
.CONST $M.CVC_HEADSET_2MIC.SYSMODE.MAX_MODES    		8;

// Call State
.CONST $M.CVC_HEADSET_2MIC.CALLST.UNKNOWN   		0;
.CONST $M.CVC_HEADSET_2MIC.CALLST.CONNECTED 		1;
.CONST $M.CVC_HEADSET_2MIC.CALLST.CONNECTING		2;
.CONST $M.CVC_HEADSET_2MIC.CALLST.MUTE      		3;

// System Control
.CONST $M.CVC_HEADSET_2MIC.CONTROL.DAC_OVERRIDE      		0x8000;
.CONST $M.CVC_HEADSET_2MIC.CONTROL.CALLSTATE_OVERRIDE		0x4000;
.CONST $M.CVC_HEADSET_2MIC.CONTROL.MODE_OVERRIDE     		0x2000;

// AEQ State

// System Control

// W_Flag

// Interface
.CONST $M.CVC_HEADSET_2MIC.INTERFACE.ANALOG		0;
.CONST $M.CVC_HEADSET_2MIC.INTERFACE.I2S   		1;

// Parameter Block
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_HFK_CONFIG               		0;
// Microphone
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_ADC_GAIN_LEFT            		1;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_ADC_GAIN_RIGHT           		2;
// NDVC
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_NDVC_HYSTERESIS          		3;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_NDVC_ATK_TC              		4;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_NDVC_DEC_TC              		5;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_NDVC_NUMVOLSTEPS         		6;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_NDVC_MAXNOISELVL         		7;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_NDVC_MINNOISELVL         		8;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_NDVC_LB                  		9;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_NDVC_HB                  		10;
// Send PEQ
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_SND_PEQ_CONFIG           		11;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_SND_PEQ_GAIN_EXP         		12;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_SND_PEQ_GAIN_MANT        		13;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_SND_PEQ_STAGE1_B2        		14;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_SND_PEQ_STAGE1_B1        		15;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_SND_PEQ_STAGE1_B0        		16;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_SND_PEQ_STAGE1_A2        		17;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_SND_PEQ_STAGE1_A1        		18;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_SND_PEQ_STAGE2_B2        		19;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_SND_PEQ_STAGE2_B1        		20;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_SND_PEQ_STAGE2_B0        		21;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_SND_PEQ_STAGE2_A2        		22;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_SND_PEQ_STAGE2_A1        		23;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_SND_PEQ_STAGE3_B2        		24;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_SND_PEQ_STAGE3_B1        		25;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_SND_PEQ_STAGE3_B0        		26;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_SND_PEQ_STAGE3_A2        		27;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_SND_PEQ_STAGE3_A1        		28;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_SND_PEQ_STAGE4_B2        		29;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_SND_PEQ_STAGE4_B1        		30;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_SND_PEQ_STAGE4_B0        		31;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_SND_PEQ_STAGE4_A2        		32;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_SND_PEQ_STAGE4_A1        		33;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_SND_PEQ_STAGE5_B2        		34;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_SND_PEQ_STAGE5_B1        		35;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_SND_PEQ_STAGE5_B0        		36;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_SND_PEQ_STAGE5_A2        		37;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_SND_PEQ_STAGE5_A1        		38;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_SND_PEQ_SCALE1           		39;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_SND_PEQ_SCALE2           		40;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_SND_PEQ_SCALE3           		41;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_SND_PEQ_SCALE4           		42;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_SND_PEQ_SCALE5           		43;
// Receive PEQ
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_RCV_PEQ_CONFIG           		44;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_RCV_PEQ_GAIN_EXP         		45;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_RCV_PEQ_GAIN_MANT        		46;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_RCV_PEQ_STAGE1_B2        		47;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_RCV_PEQ_STAGE1_B1        		48;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_RCV_PEQ_STAGE1_B0        		49;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_RCV_PEQ_STAGE1_A2        		50;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_RCV_PEQ_STAGE1_A1        		51;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_RCV_PEQ_STAGE2_B2        		52;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_RCV_PEQ_STAGE2_B1        		53;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_RCV_PEQ_STAGE2_B0        		54;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_RCV_PEQ_STAGE2_A2        		55;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_RCV_PEQ_STAGE2_A1        		56;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_RCV_PEQ_STAGE3_B2        		57;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_RCV_PEQ_STAGE3_B1        		58;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_RCV_PEQ_STAGE3_B0        		59;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_RCV_PEQ_STAGE3_A2        		60;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_RCV_PEQ_STAGE3_A1        		61;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_RCV_PEQ_STAGE4_B2        		62;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_RCV_PEQ_STAGE4_B1        		63;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_RCV_PEQ_STAGE4_B0        		64;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_RCV_PEQ_STAGE4_A2        		65;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_RCV_PEQ_STAGE4_A1        		66;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_RCV_PEQ_STAGE5_B2        		67;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_RCV_PEQ_STAGE5_B1        		68;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_RCV_PEQ_STAGE5_B0        		69;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_RCV_PEQ_STAGE5_A2        		70;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_RCV_PEQ_STAGE5_A1        		71;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_RCV_PEQ_SCALE1           		72;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_RCV_PEQ_SCALE2           		73;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_RCV_PEQ_SCALE3           		74;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_RCV_PEQ_SCALE4           		75;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_RCV_PEQ_SCALE5           		76;
// Inverse DAC Table
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_INV_DAC_GAIN_TABLE       		77;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_INV_DAC_GAIN_TABLE1      		78;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_INV_DAC_GAIN_TABLE2      		79;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_INV_DAC_GAIN_TABLE3      		80;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_INV_DAC_GAIN_TABLE4      		81;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_INV_DAC_GAIN_TABLE5      		82;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_INV_DAC_GAIN_TABLE6      		83;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_INV_DAC_GAIN_TABLE7      		84;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_INV_DAC_GAIN_TABLE8      		85;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_INV_DAC_GAIN_TABLE9      		86;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_INV_DAC_GAIN_TABLE10     		87;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_INV_DAC_GAIN_TABLE11     		88;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_INV_DAC_GAIN_TABLE12     		89;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_INV_DAC_GAIN_TABLE13     		90;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_INV_DAC_GAIN_TABLE14     		91;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_INV_DAC_GAIN_TABLE15     		92;
// Hard Clipper
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_CLIP_POINT               		93;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_SIDETONE_LIMIT           		94;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_BOOST                    		95;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_BOOST_CLIP_POINT         		96;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_G_ALFA                   		97;
// Sidetone with High-Pass Filters
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_ST_CLIP_POINT            		98;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_ST_ADJUST_LIMIT          		99;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_STF_SWITCH               		100;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_STF_NOISE_LOW_THRES      		101;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_STF_NOISE_HIGH_THRES     		102;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_STF_GAIN_EXP             		103;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_STF_GAIN_MANTISSA        		104;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_ST_PEQ_CONFIG            		105;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_ST_PEQ_GAIN_EXP          		106;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_ST_PEQ_GAIN_MANT         		107;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_ST_PEQ_STAGE1_B2         		108;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_ST_PEQ_STAGE1_B1         		109;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_ST_PEQ_STAGE1_B0         		110;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_ST_PEQ_STAGE1_A2         		111;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_ST_PEQ_STAGE1_A1         		112;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_ST_PEQ_STAGE2_B2         		113;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_ST_PEQ_STAGE2_B1         		114;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_ST_PEQ_STAGE2_B0         		115;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_ST_PEQ_STAGE2_A2         		116;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_ST_PEQ_STAGE2_A1         		117;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_ST_PEQ_STAGE3_B2         		118;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_ST_PEQ_STAGE3_B1         		119;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_ST_PEQ_STAGE3_B0         		120;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_ST_PEQ_STAGE3_A2         		121;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_ST_PEQ_STAGE3_A1         		122;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_ST_PEQ_SCALE1            		123;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_ST_PEQ_SCALE2            		124;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_ST_PEQ_SCALE3            		125;
// Pre-Gain and Pass-Through Gain
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_SNDGAIN_MANTISSA         		126;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_SNDGAIN_EXPONENT         		127;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_RCVGAIN_MANTISSA         		128;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_RCVGAIN_EXPONENT         		129;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_PT_SNDGAIN_MANTISSA      		130;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_PT_SNDGAIN_EXPONENT      		131;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_PT_RCVGAIN_MANTISSA      		132;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_PT_RCVGAIN_EXPONENT      		133;
// Send AGC
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_SND_AGC_G_INITIAL        		134;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_SND_AGC_TARGET           		135;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_SND_AGC_ATTACK_TC        		136;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_SND_AGC_DECAY_TC         		137;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_SND_AGC_A_90_PK          		138;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_SND_AGC_D_90_PK          		139;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_SND_AGC_G_MAX            		140;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_SND_AGC_START_COMP       		141;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_SND_AGC_COMP             		142;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_SND_AGC_INP_THRESH       		143;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_SND_AGC_SP_ATTACK        		144;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_SND_AGC_AD_THRESH1       		145;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_SND_AGC_AD_THRESH2       		146;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_SND_AGC_G_MIN            		147;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_SND_AGC_ECHO_HOLD_TIME   		148;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_SND_AGC_NOISE_HOLD_TIME  		149;
// Receive VAD
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_RCV_VAD_ATTACK_TC        		150;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_RCV_VAD_DECAY_TC         		151;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_RCV_VAD_ENVELOPE_TC      		152;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_RCV_VAD_INIT_FRAME_THRESH		153;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_RCV_VAD_RATIO            		154;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_RCV_VAD_MIN_SIGNAL       		155;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_RCV_VAD_MIN_MAX_ENVELOPE 		156;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_RCV_VAD_DELTA_THRESHOLD  		157;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_RCV_VAD_COUNT_THRESHOLD  		158;
// Receive AGC
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_RCV_AGC_G_INITIAL        		159;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_RCV_AGC_TARGET           		160;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_RCV_AGC_ATTACK_TC        		161;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_RCV_AGC_DECAY_TC         		162;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_RCV_AGC_A_90_PK          		163;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_RCV_AGC_D_90_PK          		164;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_RCV_AGC_G_MAX            		165;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_RCV_AGC_START_COMP       		166;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_RCV_AGC_COMP             		167;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_RCV_AGC_INP_THRESH       		168;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_RCV_AGC_SP_ATTACK        		169;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_RCV_AGC_AD_THRESH1       		170;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_RCV_AGC_AD_THRESH2       		171;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_RCV_AGC_G_MIN            		172;
// AEC
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_ENABLE_AEC_REUSE         		173;
// Adaptive EQ
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_AEQ_ATK_TC               		174;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_AEQ_ATK_1MTC             		175;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_AEQ_DEC_TC               		176;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_AEQ_DEC_1MTC             		177;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_AEQ_LO_GOAL_LOW          		178;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_AEQ_LO_GOAL_MID          		179;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_AEQ_LO_GOAL_HIGH         		180;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_AEQ_HI_GOAL_LOW          		181;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_AEQ_HI_GOAL_MID          		182;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_AEQ_HI_GOAL_HIGH         		183;
// DMSS Control
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_DMSS_LPN_MIC             		184;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_DMSS_CONFIG              		185;
// ASF
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_ASF_MIC_DISTANCE         		186;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_ASF_WNR_AGGR             		187;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_ASF_WNR_THRESHOLD        		188;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_ASF_BETA0                		189;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_ASF_BETA1                		190;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_WNR_THRESH_PHASE         		191;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_WNR_THRESH_COHERENCE     		192;
// MGDC
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_MGDC_MAXCOMP             		193;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_MGDC_TH                  		194;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_MGDC_TH_L2FBPX           		195;
// Send NS
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_ASR_OMS_AGGR             		196;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_DMS_AGGR                 		197;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_RESIDUAL_NFLOOR          		198;
// Bandwidth Expansion
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_BEX_HI2_GOAL_LOW         		199;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_BEX_HI2_GOAL_MID         		200;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_BEX_HI2_GOAL_HIGH        		201;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_BEX_TOTAL_ATT_LOW        		202;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_BEX_TOTAL_ATT_MID        		203;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_BEX_TOTAL_ATT_HIGH       		204;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_BEX_NOISE_LVL_FLAGS      		205;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_BEX_LOW_STEP             		206;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_BEX_HIGH_STEP            		207;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_AEQ_POWER_TH             		208;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_AEQ_MIN_GAIN             		209;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_AEQ_MAX_GAIN             		210;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_AEQ_VOL_STEP_UP_TH1      		211;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_AEQ_VOL_STEP_UP_TH2      		212;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_AEQ_LOW_STEP             		213;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_AEQ_LOW_STEP_INV         		214;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_AEQ_HIGH_STEP            		215;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_AEQ_HIGH_STEP_INV        		216;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_AEQ_LOW_BAND_INDEX       		217;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_AEQ_LOW_BANDWIDTH        		218;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_AEQ_LOG2_LOW_BANDWIDTH   		219;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_AEQ_MID_BANDWIDTH        		220;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_AEQ_LOG2_MID_BANDWIDTH   		221;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_AEQ_HIGH_BANDWIDTH       		222;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_AEQ_LOG2_HIGH_BANDWIDTH  		223;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_AEQ_MID1_BAND_INDEX      		224;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_AEQ_MID2_BAND_INDEX      		225;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_AEQ_HIGH_BAND_INDEX      		226;
// Packet Loss
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_PLC_STAT_INTERVAL        		227;
// Receive OMS
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_RCV_OMS_HFK_AGGR         		228;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_OMS_HI_RES_MODE          		229;
// User Parameters
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_DSP_USER_0               		230;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_DSP_USER_1               		231;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_DSP_USER_2               		232;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_DSP_USER_3               		233;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_DSP_USER_4               		234;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_DSP_USER_5               		235;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_DSP_USER_6               		236;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_DSP_USER_7               		237;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_DSP_USER_8               		238;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_DSP_USER_9               		239;
// AEC
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_LVMODE_THRES             		240;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_REF_DELAY                		241;
// Microphone
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_ADCGAIN_SSR              		242;
// Comfort Noise
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_CNG_Q                    		243;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_CNG_SHAPE                		244;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_DTC_AGGR                 		245;
// Aux Gain
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_AUX_GAIN                 		246;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_SCO_STREAM_MIX           		247;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_AUX_STREAM_MIX           		248;
// AEC Half-Duplex
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.OFFSET_HD_THRESH_GAIN           		249;
.CONST $M.CVC_HEADSET_2MIC.PARAMETERS.STRUCT_SIZE                    		250;


#endif // __CVC_HEADSET_2MIC_LIBRARY_GEN_H__
