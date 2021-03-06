// For Unicorn Engine. AUTO-GENERATED FILE, DO NOT EDIT

package unicorn;

public interface ArmConst {

// ARM registers

   public static final int UC_ARM_REG_INVALID = 0;
   public static final int UC_ARM_REG_APSR = 1;
   public static final int UC_ARM_REG_APSR_NZCV = 2;
   public static final int UC_ARM_REG_CPSR = 3;
   public static final int UC_ARM_REG_FPEXC = 4;
   public static final int UC_ARM_REG_FPINST = 5;
   public static final int UC_ARM_REG_FPSCR = 6;
   public static final int UC_ARM_REG_FPSCR_NZCV = 7;
   public static final int UC_ARM_REG_FPSID = 8;
   public static final int UC_ARM_REG_ITSTATE = 9;
   public static final int UC_ARM_REG_LR = 10;
   public static final int UC_ARM_REG_PC = 11;
   public static final int UC_ARM_REG_SP = 12;
   public static final int UC_ARM_REG_SPSR = 13;
   public static final int UC_ARM_REG_D0 = 14;
   public static final int UC_ARM_REG_D1 = 15;
   public static final int UC_ARM_REG_D2 = 16;
   public static final int UC_ARM_REG_D3 = 17;
   public static final int UC_ARM_REG_D4 = 18;
   public static final int UC_ARM_REG_D5 = 19;
   public static final int UC_ARM_REG_D6 = 20;
   public static final int UC_ARM_REG_D7 = 21;
   public static final int UC_ARM_REG_D8 = 22;
   public static final int UC_ARM_REG_D9 = 23;
   public static final int UC_ARM_REG_D10 = 24;
   public static final int UC_ARM_REG_D11 = 25;
   public static final int UC_ARM_REG_D12 = 26;
   public static final int UC_ARM_REG_D13 = 27;
   public static final int UC_ARM_REG_D14 = 28;
   public static final int UC_ARM_REG_D15 = 29;
   public static final int UC_ARM_REG_D16 = 30;
   public static final int UC_ARM_REG_D17 = 31;
   public static final int UC_ARM_REG_D18 = 32;
   public static final int UC_ARM_REG_D19 = 33;
   public static final int UC_ARM_REG_D20 = 34;
   public static final int UC_ARM_REG_D21 = 35;
   public static final int UC_ARM_REG_D22 = 36;
   public static final int UC_ARM_REG_D23 = 37;
   public static final int UC_ARM_REG_D24 = 38;
   public static final int UC_ARM_REG_D25 = 39;
   public static final int UC_ARM_REG_D26 = 40;
   public static final int UC_ARM_REG_D27 = 41;
   public static final int UC_ARM_REG_D28 = 42;
   public static final int UC_ARM_REG_D29 = 43;
   public static final int UC_ARM_REG_D30 = 44;
   public static final int UC_ARM_REG_D31 = 45;
   public static final int UC_ARM_REG_FPINST2 = 46;
   public static final int UC_ARM_REG_MVFR0 = 47;
   public static final int UC_ARM_REG_MVFR1 = 48;
   public static final int UC_ARM_REG_MVFR2 = 49;
   public static final int UC_ARM_REG_Q0 = 50;
   public static final int UC_ARM_REG_Q1 = 51;
   public static final int UC_ARM_REG_Q2 = 52;
   public static final int UC_ARM_REG_Q3 = 53;
   public static final int UC_ARM_REG_Q4 = 54;
   public static final int UC_ARM_REG_Q5 = 55;
   public static final int UC_ARM_REG_Q6 = 56;
   public static final int UC_ARM_REG_Q7 = 57;
   public static final int UC_ARM_REG_Q8 = 58;
   public static final int UC_ARM_REG_Q9 = 59;
   public static final int UC_ARM_REG_Q10 = 60;
   public static final int UC_ARM_REG_Q11 = 61;
   public static final int UC_ARM_REG_Q12 = 62;
   public static final int UC_ARM_REG_Q13 = 63;
   public static final int UC_ARM_REG_Q14 = 64;
   public static final int UC_ARM_REG_Q15 = 65;
   public static final int UC_ARM_REG_R0 = 66;
   public static final int UC_ARM_REG_R1 = 67;
   public static final int UC_ARM_REG_R2 = 68;
   public static final int UC_ARM_REG_R3 = 69;
   public static final int UC_ARM_REG_R4 = 70;
   public static final int UC_ARM_REG_R5 = 71;
   public static final int UC_ARM_REG_R6 = 72;
   public static final int UC_ARM_REG_R7 = 73;
   public static final int UC_ARM_REG_R8 = 74;
   public static final int UC_ARM_REG_R9 = 75;
   public static final int UC_ARM_REG_R10 = 76;
   public static final int UC_ARM_REG_R11 = 77;
   public static final int UC_ARM_REG_R12 = 78;
   public static final int UC_ARM_REG_S0 = 79;
   public static final int UC_ARM_REG_S1 = 80;
   public static final int UC_ARM_REG_S2 = 81;
   public static final int UC_ARM_REG_S3 = 82;
   public static final int UC_ARM_REG_S4 = 83;
   public static final int UC_ARM_REG_S5 = 84;
   public static final int UC_ARM_REG_S6 = 85;
   public static final int UC_ARM_REG_S7 = 86;
   public static final int UC_ARM_REG_S8 = 87;
   public static final int UC_ARM_REG_S9 = 88;
   public static final int UC_ARM_REG_S10 = 89;
   public static final int UC_ARM_REG_S11 = 90;
   public static final int UC_ARM_REG_S12 = 91;
   public static final int UC_ARM_REG_S13 = 92;
   public static final int UC_ARM_REG_S14 = 93;
   public static final int UC_ARM_REG_S15 = 94;
   public static final int UC_ARM_REG_S16 = 95;
   public static final int UC_ARM_REG_S17 = 96;
   public static final int UC_ARM_REG_S18 = 97;
   public static final int UC_ARM_REG_S19 = 98;
   public static final int UC_ARM_REG_S20 = 99;
   public static final int UC_ARM_REG_S21 = 100;
   public static final int UC_ARM_REG_S22 = 101;
   public static final int UC_ARM_REG_S23 = 102;
   public static final int UC_ARM_REG_S24 = 103;
   public static final int UC_ARM_REG_S25 = 104;
   public static final int UC_ARM_REG_S26 = 105;
   public static final int UC_ARM_REG_S27 = 106;
   public static final int UC_ARM_REG_S28 = 107;
   public static final int UC_ARM_REG_S29 = 108;
   public static final int UC_ARM_REG_S30 = 109;
   public static final int UC_ARM_REG_S31 = 110;

// CP registers
   public static final int UC_ARM_REG_ACTLR = 111;
   public static final int UC_ARM_REG_ACTLR2 = 112;
   public static final int UC_ARM_REG_ADFSR = 113;
   public static final int UC_ARM_REG_AIDR = 114;
   public static final int UC_ARM_REG_AIFSR = 115;
   public static final int UC_ARM_REG_AMAIR0 = 116;
   public static final int UC_ARM_REG_AMAIR1 = 117;
   public static final int UC_ARM_REG_CCSIDR = 118;
   public static final int UC_ARM_REG_CCSIDR2 = 119;
   public static final int UC_ARM_REG_CLIDR = 120;
   public static final int UC_ARM_REG_CNTFRQ = 121;
   public static final int UC_ARM_REG_CNTHCTL = 122;
   public static final int UC_ARM_REG_CNTHP_CTL = 123;
   public static final int UC_ARM_REG_CNTHP_CVAL = 124;
   public static final int UC_ARM_REG_CNTHP_TVAL = 125;
   public static final int UC_ARM_REG_CNTHV_CTL = 126;
   public static final int UC_ARM_REG_CNTHV_CVAL = 127;
   public static final int UC_ARM_REG_CNTHV_TVAL = 128;
   public static final int UC_ARM_REG_CNTKCTL = 129;
   public static final int UC_ARM_REG_CNTPCT = 130;
   public static final int UC_ARM_REG_CNTP_CTL = 131;
   public static final int UC_ARM_REG_CNTP_CVAL = 132;
   public static final int UC_ARM_REG_CNTP_TVAL = 133;
   public static final int UC_ARM_REG_CNTVCT = 134;
   public static final int UC_ARM_REG_CNTVOFF = 135;
   public static final int UC_ARM_REG_CNTV_CTL = 136;
   public static final int UC_ARM_REG_CNTV_CVAL = 137;
   public static final int UC_ARM_REG_CNTV_TVAL = 138;
   public static final int UC_ARM_REG_CONTEXTIDR = 139;
   public static final int UC_ARM_REG_CPACR = 140;
   public static final int UC_ARM_REG_CSSELR = 141;
   public static final int UC_ARM_REG_CTR = 142;
   public static final int UC_ARM_REG_DACR = 143;
   public static final int UC_ARM_REG_DBGAUTHSTATUS = 144;
   public static final int UC_ARM_REG_DBGBCR0 = 145;
   public static final int UC_ARM_REG_DBGBCR1 = 146;
   public static final int UC_ARM_REG_DBGBCR2 = 147;
   public static final int UC_ARM_REG_DBGBCR3 = 148;
   public static final int UC_ARM_REG_DBGBCR4 = 149;
   public static final int UC_ARM_REG_DBGBCR5 = 150;
   public static final int UC_ARM_REG_DBGBCR6 = 151;
   public static final int UC_ARM_REG_DBGBCR7 = 152;
   public static final int UC_ARM_REG_DBGBCR8 = 153;
   public static final int UC_ARM_REG_DBGBCR9 = 154;
   public static final int UC_ARM_REG_DBGBCR10 = 155;
   public static final int UC_ARM_REG_DBGBCR11 = 156;
   public static final int UC_ARM_REG_DBGBCR12 = 157;
   public static final int UC_ARM_REG_DBGBCR13 = 158;
   public static final int UC_ARM_REG_DBGBCR14 = 159;
   public static final int UC_ARM_REG_DBGBVR0 = 160;
   public static final int UC_ARM_REG_DBGBVR1 = 161;
   public static final int UC_ARM_REG_DBGBVR2 = 162;
   public static final int UC_ARM_REG_DBGBVR3 = 163;
   public static final int UC_ARM_REG_DBGBVR4 = 164;
   public static final int UC_ARM_REG_DBGBVR5 = 165;
   public static final int UC_ARM_REG_DBGBVR6 = 166;
   public static final int UC_ARM_REG_DBGBVR7 = 167;
   public static final int UC_ARM_REG_DBGBVR8 = 168;
   public static final int UC_ARM_REG_DBGBVR9 = 169;
   public static final int UC_ARM_REG_DBGBVR10 = 170;
   public static final int UC_ARM_REG_DBGBVR11 = 171;
   public static final int UC_ARM_REG_DBGBVR12 = 172;
   public static final int UC_ARM_REG_DBGBVR13 = 173;
   public static final int UC_ARM_REG_DBGBVR14 = 174;
   public static final int UC_ARM_REG_DBGBXVR0 = 175;
   public static final int UC_ARM_REG_DBGBXVR1 = 176;
   public static final int UC_ARM_REG_DBGBXVR2 = 177;
   public static final int UC_ARM_REG_DBGBXVR3 = 178;
   public static final int UC_ARM_REG_DBGBXVR4 = 179;
   public static final int UC_ARM_REG_DBGBXVR5 = 180;
   public static final int UC_ARM_REG_DBGBXVR6 = 181;
   public static final int UC_ARM_REG_DBGBXVR7 = 182;
   public static final int UC_ARM_REG_DBGBXVR8 = 183;
   public static final int UC_ARM_REG_DBGBXVR9 = 184;
   public static final int UC_ARM_REG_DBGBXVR10 = 185;
   public static final int UC_ARM_REG_DBGBXVR11 = 186;
   public static final int UC_ARM_REG_DBGBXVR12 = 187;
   public static final int UC_ARM_REG_DBGBXVR13 = 188;
   public static final int UC_ARM_REG_DBGBXVR14 = 189;
   public static final int UC_ARM_REG_DBGCLAIMCLR = 190;
   public static final int UC_ARM_REG_DBGCLAIMSET = 191;
   public static final int UC_ARM_REG_DBGDCCINT = 192;
   public static final int UC_ARM_REG_DBGDEVID = 193;
   public static final int UC_ARM_REG_DBGDEVID1 = 194;
   public static final int UC_ARM_REG_DBGDEVID2 = 195;
   public static final int UC_ARM_REG_DBGDIDR = 196;
   public static final int UC_ARM_REG_DBGDRAR = 197;
   public static final int UC_ARM_REG_DBGDSAR = 198;
   public static final int UC_ARM_REG_DBGDSCRext = 199;
   public static final int UC_ARM_REG_DBGDSCRint = 200;
   public static final int UC_ARM_REG_DBGDTRRXext = 201;
   public static final int UC_ARM_REG_DBGDTRRXint = 202;
   public static final int UC_ARM_REG_DBGDTRTXext = 203;
   public static final int UC_ARM_REG_DBGDTRTXint = 204;
   public static final int UC_ARM_REG_DBGOSDLR = 205;
   public static final int UC_ARM_REG_DBGOSECCR = 206;
   public static final int UC_ARM_REG_DBGOSLAR = 207;
   public static final int UC_ARM_REG_DBGOSLSR = 208;
   public static final int UC_ARM_REG_DBGPRCR = 209;
   public static final int UC_ARM_REG_DBGVCR = 210;
   public static final int UC_ARM_REG_DBGWCR0 = 211;
   public static final int UC_ARM_REG_DBGWCR1 = 212;
   public static final int UC_ARM_REG_DBGWCR2 = 213;
   public static final int UC_ARM_REG_DBGWCR3 = 214;
   public static final int UC_ARM_REG_DBGWCR4 = 215;
   public static final int UC_ARM_REG_DBGWCR5 = 216;
   public static final int UC_ARM_REG_DBGWCR6 = 217;
   public static final int UC_ARM_REG_DBGWCR7 = 218;
   public static final int UC_ARM_REG_DBGWCR8 = 219;
   public static final int UC_ARM_REG_DBGWCR9 = 220;
   public static final int UC_ARM_REG_DBGWCR10 = 221;
   public static final int UC_ARM_REG_DBGWCR11 = 222;
   public static final int UC_ARM_REG_DBGWCR12 = 223;
   public static final int UC_ARM_REG_DBGWCR13 = 224;
   public static final int UC_ARM_REG_DBGWCR14 = 225;
   public static final int UC_ARM_REG_DBGWFAR = 226;
   public static final int UC_ARM_REG_DBGWVR0 = 227;
   public static final int UC_ARM_REG_DBGWVR1 = 228;
   public static final int UC_ARM_REG_DBGWVR2 = 229;
   public static final int UC_ARM_REG_DBGWVR3 = 230;
   public static final int UC_ARM_REG_DBGWVR4 = 231;
   public static final int UC_ARM_REG_DBGWVR5 = 232;
   public static final int UC_ARM_REG_DBGWVR6 = 233;
   public static final int UC_ARM_REG_DBGWVR7 = 234;
   public static final int UC_ARM_REG_DBGWVR8 = 235;
   public static final int UC_ARM_REG_DBGWVR9 = 236;
   public static final int UC_ARM_REG_DBGWVR10 = 237;
   public static final int UC_ARM_REG_DBGWVR11 = 238;
   public static final int UC_ARM_REG_DBGWVR12 = 239;
   public static final int UC_ARM_REG_DBGWVR13 = 240;
   public static final int UC_ARM_REG_DBGWVR14 = 241;
   public static final int UC_ARM_REG_DFAR = 242;
   public static final int UC_ARM_REG_DFSR = 243;
   public static final int UC_ARM_REG_DLR = 244;
   public static final int UC_ARM_REG_DSPSR = 245;
   public static final int UC_ARM_REG_FCSEIDR = 246;
   public static final int UC_ARM_REG_HACR = 247;
   public static final int UC_ARM_REG_HACTLR = 248;
   public static final int UC_ARM_REG_HACTLR2 = 249;
   public static final int UC_ARM_REG_HADFSR = 250;
   public static final int UC_ARM_REG_HAIFSR = 251;
   public static final int UC_ARM_REG_HAMAIR0 = 252;
   public static final int UC_ARM_REG_HAMAIR1 = 253;
   public static final int UC_ARM_REG_HCPTR = 254;
   public static final int UC_ARM_REG_HCR = 255;
   public static final int UC_ARM_REG_HCR2 = 256;
   public static final int UC_ARM_REG_HDCR = 257;
   public static final int UC_ARM_REG_HDFAR = 258;
   public static final int UC_ARM_REG_HIFAR = 259;
   public static final int UC_ARM_REG_HMAIR0 = 260;
   public static final int UC_ARM_REG_HMAIR1 = 261;
   public static final int UC_ARM_REG_HPFAR = 262;
   public static final int UC_ARM_REG_HRMR = 263;
   public static final int UC_ARM_REG_HSCTLR = 264;
   public static final int UC_ARM_REG_HSR = 265;
   public static final int UC_ARM_REG_HSTR = 266;
   public static final int UC_ARM_REG_HTCR = 267;
   public static final int UC_ARM_REG_HTPIDR = 268;
   public static final int UC_ARM_REG_HTTBR = 269;
   public static final int UC_ARM_REG_HVBAR = 270;
   public static final int UC_ARM_REG_ICC_AP0R0 = 271;
   public static final int UC_ARM_REG_ICC_AP0R1 = 272;
   public static final int UC_ARM_REG_ICC_AP0R2 = 273;
   public static final int UC_ARM_REG_ICC_AP1R0 = 274;
   public static final int UC_ARM_REG_ICC_AP1R1 = 275;
   public static final int UC_ARM_REG_ICC_AP1R2 = 276;
   public static final int UC_ARM_REG_ICC_ASGI1R = 277;
   public static final int UC_ARM_REG_ICC_BPR0 = 278;
   public static final int UC_ARM_REG_ICC_BPR1 = 279;
   public static final int UC_ARM_REG_ICC_CTLR = 280;
   public static final int UC_ARM_REG_ICC_DIR = 281;
   public static final int UC_ARM_REG_ICC_EOIR0 = 282;
   public static final int UC_ARM_REG_ICC_EOIR1 = 283;
   public static final int UC_ARM_REG_ICC_HPPIR0 = 284;
   public static final int UC_ARM_REG_ICC_HPPIR1 = 285;
   public static final int UC_ARM_REG_ICC_HSRE = 286;
   public static final int UC_ARM_REG_ICC_IAR0 = 287;
   public static final int UC_ARM_REG_ICC_IAR1 = 288;
   public static final int UC_ARM_REG_ICC_IGRPEN0 = 289;
   public static final int UC_ARM_REG_ICC_IGRPEN1 = 290;
   public static final int UC_ARM_REG_ICC_MCTLR = 291;
   public static final int UC_ARM_REG_ICC_MGRPEN1 = 292;
   public static final int UC_ARM_REG_ICC_MSRE = 293;
   public static final int UC_ARM_REG_ICC_PMR = 294;
   public static final int UC_ARM_REG_ICC_RPR = 295;
   public static final int UC_ARM_REG_ICC_SGI0R = 296;
   public static final int UC_ARM_REG_ICC_SGI1R = 297;
   public static final int UC_ARM_REG_ICC_SRE = 298;
   public static final int UC_ARM_REG_ICH_AP0R0 = 299;
   public static final int UC_ARM_REG_ICH_AP0R1 = 300;
   public static final int UC_ARM_REG_ICH_AP0R2 = 301;
   public static final int UC_ARM_REG_ICH_AP1R0 = 302;
   public static final int UC_ARM_REG_ICH_AP1R1 = 303;
   public static final int UC_ARM_REG_ICH_AP1R2 = 304;
   public static final int UC_ARM_REG_ICH_EISR = 305;
   public static final int UC_ARM_REG_ICH_ELRSR = 306;
   public static final int UC_ARM_REG_ICH_HCR = 307;
   public static final int UC_ARM_REG_ICH_LR0 = 308;
   public static final int UC_ARM_REG_ICH_LR1 = 309;
   public static final int UC_ARM_REG_ICH_LR2 = 310;
   public static final int UC_ARM_REG_ICH_LR3 = 311;
   public static final int UC_ARM_REG_ICH_LR4 = 312;
   public static final int UC_ARM_REG_ICH_LR5 = 313;
   public static final int UC_ARM_REG_ICH_LR6 = 314;
   public static final int UC_ARM_REG_ICH_LR7 = 315;
   public static final int UC_ARM_REG_ICH_LR8 = 316;
   public static final int UC_ARM_REG_ICH_LR9 = 317;
   public static final int UC_ARM_REG_ICH_LR10 = 318;
   public static final int UC_ARM_REG_ICH_LR11 = 319;
   public static final int UC_ARM_REG_ICH_LR12 = 320;
   public static final int UC_ARM_REG_ICH_LR13 = 321;
   public static final int UC_ARM_REG_ICH_LR14 = 322;
   public static final int UC_ARM_REG_ICH_LRC0 = 323;
   public static final int UC_ARM_REG_ICH_LRC1 = 324;
   public static final int UC_ARM_REG_ICH_LRC2 = 325;
   public static final int UC_ARM_REG_ICH_LRC3 = 326;
   public static final int UC_ARM_REG_ICH_LRC4 = 327;
   public static final int UC_ARM_REG_ICH_LRC5 = 328;
   public static final int UC_ARM_REG_ICH_LRC6 = 329;
   public static final int UC_ARM_REG_ICH_LRC7 = 330;
   public static final int UC_ARM_REG_ICH_LRC8 = 331;
   public static final int UC_ARM_REG_ICH_LRC9 = 332;
   public static final int UC_ARM_REG_ICH_LRC10 = 333;
   public static final int UC_ARM_REG_ICH_LRC11 = 334;
   public static final int UC_ARM_REG_ICH_LRC12 = 335;
   public static final int UC_ARM_REG_ICH_LRC13 = 336;
   public static final int UC_ARM_REG_ICH_LRC14 = 337;
   public static final int UC_ARM_REG_ICH_MISR = 338;
   public static final int UC_ARM_REG_ICH_VMCR = 339;
   public static final int UC_ARM_REG_ICH_VTR = 340;
   public static final int UC_ARM_REG_ICV_AP0R0 = 341;
   public static final int UC_ARM_REG_ICV_AP0R1 = 342;
   public static final int UC_ARM_REG_ICV_AP0R2 = 343;
   public static final int UC_ARM_REG_ICV_AP1R0 = 344;
   public static final int UC_ARM_REG_ICV_AP1R1 = 345;
   public static final int UC_ARM_REG_ICV_AP1R2 = 346;
   public static final int UC_ARM_REG_ICV_BPR0 = 347;
   public static final int UC_ARM_REG_ICV_BPR1 = 348;
   public static final int UC_ARM_REG_ICV_CTLR = 349;
   public static final int UC_ARM_REG_ICV_DIR = 350;
   public static final int UC_ARM_REG_ICV_EOIR0 = 351;
   public static final int UC_ARM_REG_ICV_EOIR1 = 352;
   public static final int UC_ARM_REG_ICV_HPPIR0 = 353;
   public static final int UC_ARM_REG_ICV_HPPIR1 = 354;
   public static final int UC_ARM_REG_ICV_IAR0 = 355;
   public static final int UC_ARM_REG_ICV_IAR1 = 356;
   public static final int UC_ARM_REG_ICV_IGRPEN0 = 357;
   public static final int UC_ARM_REG_ICV_IGRPEN1 = 358;
   public static final int UC_ARM_REG_ICV_PMR = 359;
   public static final int UC_ARM_REG_ICV_RPR = 360;
   public static final int UC_ARM_REG_ID_AFR0 = 361;
   public static final int UC_ARM_REG_ID_DFR0 = 362;
   public static final int UC_ARM_REG_ID_ISAR0 = 363;
   public static final int UC_ARM_REG_ID_ISAR1 = 364;
   public static final int UC_ARM_REG_ID_ISAR2 = 365;
   public static final int UC_ARM_REG_ID_ISAR3 = 366;
   public static final int UC_ARM_REG_ID_ISAR4 = 367;
   public static final int UC_ARM_REG_ID_ISAR5 = 368;
   public static final int UC_ARM_REG_ID_ISAR6 = 369;
   public static final int UC_ARM_REG_ID_MMFR0 = 370;
   public static final int UC_ARM_REG_ID_MMFR1 = 371;
   public static final int UC_ARM_REG_ID_MMFR2 = 372;
   public static final int UC_ARM_REG_ID_MMFR3 = 373;
   public static final int UC_ARM_REG_ID_MMFR4 = 374;
   public static final int UC_ARM_REG_ID_PFR0 = 375;
   public static final int UC_ARM_REG_ID_PFR1 = 376;
   public static final int UC_ARM_REG_IFAR = 377;
   public static final int UC_ARM_REG_IFSR = 378;
   public static final int UC_ARM_REG_ISR = 379;
   public static final int UC_ARM_REG_JIDR = 380;
   public static final int UC_ARM_REG_JMCR = 381;
   public static final int UC_ARM_REG_JOSCR = 382;
   public static final int UC_ARM_REG_MAIR0 = 383;
   public static final int UC_ARM_REG_MAIR1 = 384;
   public static final int UC_ARM_REG_MIDR = 385;
   public static final int UC_ARM_REG_MPIDR = 386;
   public static final int UC_ARM_REG_MVBAR = 387;
   public static final int UC_ARM_REG_NMRR = 388;
   public static final int UC_ARM_REG_NSACR = 389;
   public static final int UC_ARM_REG_PAR = 390;
   public static final int UC_ARM_REG_PMCCFILTR = 391;
   public static final int UC_ARM_REG_PMCCNTR = 392;
   public static final int UC_ARM_REG_PMCEID0 = 393;
   public static final int UC_ARM_REG_PMCEID1 = 394;
   public static final int UC_ARM_REG_PMCEID2 = 395;
   public static final int UC_ARM_REG_PMCEID3 = 396;
   public static final int UC_ARM_REG_PMCNTENCLR = 397;
   public static final int UC_ARM_REG_PMCNTENSET = 398;
   public static final int UC_ARM_REG_PMCR = 399;
   public static final int UC_ARM_REG_PMEVCNTR0 = 400;
   public static final int UC_ARM_REG_PMEVCNTR1 = 401;
   public static final int UC_ARM_REG_PMEVCNTR2 = 402;
   public static final int UC_ARM_REG_PMEVCNTR3 = 403;
   public static final int UC_ARM_REG_PMEVCNTR4 = 404;
   public static final int UC_ARM_REG_PMEVCNTR5 = 405;
   public static final int UC_ARM_REG_PMEVCNTR6 = 406;
   public static final int UC_ARM_REG_PMEVCNTR7 = 407;
   public static final int UC_ARM_REG_PMEVCNTR8 = 408;
   public static final int UC_ARM_REG_PMEVCNTR9 = 409;
   public static final int UC_ARM_REG_PMEVCNTR10 = 410;
   public static final int UC_ARM_REG_PMEVCNTR11 = 411;
   public static final int UC_ARM_REG_PMEVCNTR12 = 412;
   public static final int UC_ARM_REG_PMEVCNTR13 = 413;
   public static final int UC_ARM_REG_PMEVCNTR14 = 414;
   public static final int UC_ARM_REG_PMEVCNTR15 = 415;
   public static final int UC_ARM_REG_PMEVCNTR16 = 416;
   public static final int UC_ARM_REG_PMEVCNTR17 = 417;
   public static final int UC_ARM_REG_PMEVCNTR18 = 418;
   public static final int UC_ARM_REG_PMEVCNTR19 = 419;
   public static final int UC_ARM_REG_PMEVCNTR20 = 420;
   public static final int UC_ARM_REG_PMEVCNTR21 = 421;
   public static final int UC_ARM_REG_PMEVCNTR22 = 422;
   public static final int UC_ARM_REG_PMEVCNTR23 = 423;
   public static final int UC_ARM_REG_PMEVCNTR24 = 424;
   public static final int UC_ARM_REG_PMEVCNTR25 = 425;
   public static final int UC_ARM_REG_PMEVCNTR26 = 426;
   public static final int UC_ARM_REG_PMEVCNTR27 = 427;
   public static final int UC_ARM_REG_PMEVCNTR28 = 428;
   public static final int UC_ARM_REG_PMEVCNTR29 = 429;
   public static final int UC_ARM_REG_PMEVTYPER0 = 430;
   public static final int UC_ARM_REG_PMEVTYPER1 = 431;
   public static final int UC_ARM_REG_PMEVTYPER2 = 432;
   public static final int UC_ARM_REG_PMEVTYPER3 = 433;
   public static final int UC_ARM_REG_PMEVTYPER4 = 434;
   public static final int UC_ARM_REG_PMEVTYPER5 = 435;
   public static final int UC_ARM_REG_PMEVTYPER6 = 436;
   public static final int UC_ARM_REG_PMEVTYPER7 = 437;
   public static final int UC_ARM_REG_PMEVTYPER8 = 438;
   public static final int UC_ARM_REG_PMEVTYPER9 = 439;
   public static final int UC_ARM_REG_PMEVTYPER10 = 440;
   public static final int UC_ARM_REG_PMEVTYPER11 = 441;
   public static final int UC_ARM_REG_PMEVTYPER12 = 442;
   public static final int UC_ARM_REG_PMEVTYPER13 = 443;
   public static final int UC_ARM_REG_PMEVTYPER14 = 444;
   public static final int UC_ARM_REG_PMEVTYPER15 = 445;
   public static final int UC_ARM_REG_PMEVTYPER16 = 446;
   public static final int UC_ARM_REG_PMEVTYPER17 = 447;
   public static final int UC_ARM_REG_PMEVTYPER18 = 448;
   public static final int UC_ARM_REG_PMEVTYPER19 = 449;
   public static final int UC_ARM_REG_PMEVTYPER20 = 450;
   public static final int UC_ARM_REG_PMEVTYPER21 = 451;
   public static final int UC_ARM_REG_PMEVTYPER22 = 452;
   public static final int UC_ARM_REG_PMEVTYPER23 = 453;
   public static final int UC_ARM_REG_PMEVTYPER24 = 454;
   public static final int UC_ARM_REG_PMEVTYPER25 = 455;
   public static final int UC_ARM_REG_PMEVTYPER26 = 456;
   public static final int UC_ARM_REG_PMEVTYPER27 = 457;
   public static final int UC_ARM_REG_PMEVTYPER28 = 458;
   public static final int UC_ARM_REG_PMEVTYPER29 = 459;
   public static final int UC_ARM_REG_PMINTENCLR = 460;
   public static final int UC_ARM_REG_PMINTENSET = 461;
   public static final int UC_ARM_REG_PMOVSR = 462;
   public static final int UC_ARM_REG_PMOVSSET = 463;
   public static final int UC_ARM_REG_PMSELR = 464;
   public static final int UC_ARM_REG_PMSWINC = 465;
   public static final int UC_ARM_REG_PMUSERENR = 466;
   public static final int UC_ARM_REG_PMXEVCNTR = 467;
   public static final int UC_ARM_REG_PMXEVTYPER = 468;
   public static final int UC_ARM_REG_PRRR = 469;
   public static final int UC_ARM_REG_REVIDR = 470;
   public static final int UC_ARM_REG_RMR = 471;
   public static final int UC_ARM_REG_RVBAR = 472;
   public static final int UC_ARM_REG_SCR = 473;
   public static final int UC_ARM_REG_SCTLR = 474;
   public static final int UC_ARM_REG_SDCR = 475;
   public static final int UC_ARM_REG_SDER = 476;
   public static final int UC_ARM_REG_TCMTR = 477;
   public static final int UC_ARM_REG_TLBTR = 478;
   public static final int UC_ARM_REG_TPIDRPRW = 479;
   public static final int UC_ARM_REG_TPIDRURO = 480;
   public static final int UC_ARM_REG_TPIDRURW = 481;
   public static final int UC_ARM_REG_TTBCR = 482;
   public static final int UC_ARM_REG_TTBCR2 = 483;
   public static final int UC_ARM_REG_TTBR0 = 484;
   public static final int UC_ARM_REG_TTBR1 = 485;
   public static final int UC_ARM_REG_VBAR = 486;
   public static final int UC_ARM_REG_VMPIDR = 487;
   public static final int UC_ARM_REG_VPIDR = 488;
   public static final int UC_ARM_REG_VTCR = 489;
   public static final int UC_ARM_REG_VTTBR = 490;
   public static final int UC_ARM_REG_ENDING = 491;

// alias registers
   public static final int UC_ARM_REG_R13 = 12;
   public static final int UC_ARM_REG_R14 = 10;
   public static final int UC_ARM_REG_R15 = 11;
   public static final int UC_ARM_REG_SB = 75;
   public static final int UC_ARM_REG_SL = 76;
   public static final int UC_ARM_REG_FP = 77;
   public static final int UC_ARM_REG_IP = 78;
   public static final int UC_ARM_REG_C1_C0_2 = 140;
   public static final int UC_ARM_REG_C13_C0_2 = 481;
   public static final int UC_ARM_REG_C13_C0_3 = 480;

}
