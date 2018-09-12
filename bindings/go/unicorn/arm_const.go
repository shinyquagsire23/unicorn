package unicorn
// For Unicorn Engine. AUTO-GENERATED FILE, DO NOT EDIT [arm_const.go]
const (

// ARM registers

	ARM_REG_INVALID = 0
	ARM_REG_APSR = 1
	ARM_REG_APSR_NZCV = 2
	ARM_REG_CPSR = 3
	ARM_REG_FPEXC = 4
	ARM_REG_FPINST = 5
	ARM_REG_FPSCR = 6
	ARM_REG_FPSCR_NZCV = 7
	ARM_REG_FPSID = 8
	ARM_REG_ITSTATE = 9
	ARM_REG_LR = 10
	ARM_REG_PC = 11
	ARM_REG_SP = 12
	ARM_REG_SPSR = 13
	ARM_REG_D0 = 14
	ARM_REG_D1 = 15
	ARM_REG_D2 = 16
	ARM_REG_D3 = 17
	ARM_REG_D4 = 18
	ARM_REG_D5 = 19
	ARM_REG_D6 = 20
	ARM_REG_D7 = 21
	ARM_REG_D8 = 22
	ARM_REG_D9 = 23
	ARM_REG_D10 = 24
	ARM_REG_D11 = 25
	ARM_REG_D12 = 26
	ARM_REG_D13 = 27
	ARM_REG_D14 = 28
	ARM_REG_D15 = 29
	ARM_REG_D16 = 30
	ARM_REG_D17 = 31
	ARM_REG_D18 = 32
	ARM_REG_D19 = 33
	ARM_REG_D20 = 34
	ARM_REG_D21 = 35
	ARM_REG_D22 = 36
	ARM_REG_D23 = 37
	ARM_REG_D24 = 38
	ARM_REG_D25 = 39
	ARM_REG_D26 = 40
	ARM_REG_D27 = 41
	ARM_REG_D28 = 42
	ARM_REG_D29 = 43
	ARM_REG_D30 = 44
	ARM_REG_D31 = 45
	ARM_REG_FPINST2 = 46
	ARM_REG_MVFR0 = 47
	ARM_REG_MVFR1 = 48
	ARM_REG_MVFR2 = 49
	ARM_REG_Q0 = 50
	ARM_REG_Q1 = 51
	ARM_REG_Q2 = 52
	ARM_REG_Q3 = 53
	ARM_REG_Q4 = 54
	ARM_REG_Q5 = 55
	ARM_REG_Q6 = 56
	ARM_REG_Q7 = 57
	ARM_REG_Q8 = 58
	ARM_REG_Q9 = 59
	ARM_REG_Q10 = 60
	ARM_REG_Q11 = 61
	ARM_REG_Q12 = 62
	ARM_REG_Q13 = 63
	ARM_REG_Q14 = 64
	ARM_REG_Q15 = 65
	ARM_REG_R0 = 66
	ARM_REG_R1 = 67
	ARM_REG_R2 = 68
	ARM_REG_R3 = 69
	ARM_REG_R4 = 70
	ARM_REG_R5 = 71
	ARM_REG_R6 = 72
	ARM_REG_R7 = 73
	ARM_REG_R8 = 74
	ARM_REG_R9 = 75
	ARM_REG_R10 = 76
	ARM_REG_R11 = 77
	ARM_REG_R12 = 78
	ARM_REG_S0 = 79
	ARM_REG_S1 = 80
	ARM_REG_S2 = 81
	ARM_REG_S3 = 82
	ARM_REG_S4 = 83
	ARM_REG_S5 = 84
	ARM_REG_S6 = 85
	ARM_REG_S7 = 86
	ARM_REG_S8 = 87
	ARM_REG_S9 = 88
	ARM_REG_S10 = 89
	ARM_REG_S11 = 90
	ARM_REG_S12 = 91
	ARM_REG_S13 = 92
	ARM_REG_S14 = 93
	ARM_REG_S15 = 94
	ARM_REG_S16 = 95
	ARM_REG_S17 = 96
	ARM_REG_S18 = 97
	ARM_REG_S19 = 98
	ARM_REG_S20 = 99
	ARM_REG_S21 = 100
	ARM_REG_S22 = 101
	ARM_REG_S23 = 102
	ARM_REG_S24 = 103
	ARM_REG_S25 = 104
	ARM_REG_S26 = 105
	ARM_REG_S27 = 106
	ARM_REG_S28 = 107
	ARM_REG_S29 = 108
	ARM_REG_S30 = 109
	ARM_REG_S31 = 110

// CP registers
	ARM_REG_ACTLR = 111
	ARM_REG_ACTLR2 = 112
	ARM_REG_ADFSR = 113
	ARM_REG_AIDR = 114
	ARM_REG_AIFSR = 115
	ARM_REG_AMAIR0 = 116
	ARM_REG_AMAIR1 = 117
	ARM_REG_CCSIDR = 118
	ARM_REG_CCSIDR2 = 119
	ARM_REG_CLIDR = 120
	ARM_REG_CNTFRQ = 121
	ARM_REG_CNTHCTL = 122
	ARM_REG_CNTHP_CTL = 123
	ARM_REG_CNTHP_CVAL = 124
	ARM_REG_CNTHP_TVAL = 125
	ARM_REG_CNTHV_CTL = 126
	ARM_REG_CNTHV_CVAL = 127
	ARM_REG_CNTHV_TVAL = 128
	ARM_REG_CNTKCTL = 129
	ARM_REG_CNTPCT = 130
	ARM_REG_CNTP_CTL = 131
	ARM_REG_CNTP_CVAL = 132
	ARM_REG_CNTP_TVAL = 133
	ARM_REG_CNTVCT = 134
	ARM_REG_CNTVOFF = 135
	ARM_REG_CNTV_CTL = 136
	ARM_REG_CNTV_CVAL = 137
	ARM_REG_CNTV_TVAL = 138
	ARM_REG_CONTEXTIDR = 139
	ARM_REG_CPACR = 140
	ARM_REG_CSSELR = 141
	ARM_REG_CTR = 142
	ARM_REG_DACR = 143
	ARM_REG_DBGAUTHSTATUS = 144
	ARM_REG_DBGBCR0 = 145
	ARM_REG_DBGBCR1 = 146
	ARM_REG_DBGBCR2 = 147
	ARM_REG_DBGBCR3 = 148
	ARM_REG_DBGBCR4 = 149
	ARM_REG_DBGBCR5 = 150
	ARM_REG_DBGBCR6 = 151
	ARM_REG_DBGBCR7 = 152
	ARM_REG_DBGBCR8 = 153
	ARM_REG_DBGBCR9 = 154
	ARM_REG_DBGBCR10 = 155
	ARM_REG_DBGBCR11 = 156
	ARM_REG_DBGBCR12 = 157
	ARM_REG_DBGBCR13 = 158
	ARM_REG_DBGBCR14 = 159
	ARM_REG_DBGBVR0 = 160
	ARM_REG_DBGBVR1 = 161
	ARM_REG_DBGBVR2 = 162
	ARM_REG_DBGBVR3 = 163
	ARM_REG_DBGBVR4 = 164
	ARM_REG_DBGBVR5 = 165
	ARM_REG_DBGBVR6 = 166
	ARM_REG_DBGBVR7 = 167
	ARM_REG_DBGBVR8 = 168
	ARM_REG_DBGBVR9 = 169
	ARM_REG_DBGBVR10 = 170
	ARM_REG_DBGBVR11 = 171
	ARM_REG_DBGBVR12 = 172
	ARM_REG_DBGBVR13 = 173
	ARM_REG_DBGBVR14 = 174
	ARM_REG_DBGBXVR0 = 175
	ARM_REG_DBGBXVR1 = 176
	ARM_REG_DBGBXVR2 = 177
	ARM_REG_DBGBXVR3 = 178
	ARM_REG_DBGBXVR4 = 179
	ARM_REG_DBGBXVR5 = 180
	ARM_REG_DBGBXVR6 = 181
	ARM_REG_DBGBXVR7 = 182
	ARM_REG_DBGBXVR8 = 183
	ARM_REG_DBGBXVR9 = 184
	ARM_REG_DBGBXVR10 = 185
	ARM_REG_DBGBXVR11 = 186
	ARM_REG_DBGBXVR12 = 187
	ARM_REG_DBGBXVR13 = 188
	ARM_REG_DBGBXVR14 = 189
	ARM_REG_DBGCLAIMCLR = 190
	ARM_REG_DBGCLAIMSET = 191
	ARM_REG_DBGDCCINT = 192
	ARM_REG_DBGDEVID = 193
	ARM_REG_DBGDEVID1 = 194
	ARM_REG_DBGDEVID2 = 195
	ARM_REG_DBGDIDR = 196
	ARM_REG_DBGDRAR = 197
	ARM_REG_DBGDSAR = 198
	ARM_REG_DBGDSCRext = 199
	ARM_REG_DBGDSCRint = 200
	ARM_REG_DBGDTRRXext = 201
	ARM_REG_DBGDTRRXint = 202
	ARM_REG_DBGDTRTXext = 203
	ARM_REG_DBGDTRTXint = 204
	ARM_REG_DBGOSDLR = 205
	ARM_REG_DBGOSECCR = 206
	ARM_REG_DBGOSLAR = 207
	ARM_REG_DBGOSLSR = 208
	ARM_REG_DBGPRCR = 209
	ARM_REG_DBGVCR = 210
	ARM_REG_DBGWCR0 = 211
	ARM_REG_DBGWCR1 = 212
	ARM_REG_DBGWCR2 = 213
	ARM_REG_DBGWCR3 = 214
	ARM_REG_DBGWCR4 = 215
	ARM_REG_DBGWCR5 = 216
	ARM_REG_DBGWCR6 = 217
	ARM_REG_DBGWCR7 = 218
	ARM_REG_DBGWCR8 = 219
	ARM_REG_DBGWCR9 = 220
	ARM_REG_DBGWCR10 = 221
	ARM_REG_DBGWCR11 = 222
	ARM_REG_DBGWCR12 = 223
	ARM_REG_DBGWCR13 = 224
	ARM_REG_DBGWCR14 = 225
	ARM_REG_DBGWFAR = 226
	ARM_REG_DBGWVR0 = 227
	ARM_REG_DBGWVR1 = 228
	ARM_REG_DBGWVR2 = 229
	ARM_REG_DBGWVR3 = 230
	ARM_REG_DBGWVR4 = 231
	ARM_REG_DBGWVR5 = 232
	ARM_REG_DBGWVR6 = 233
	ARM_REG_DBGWVR7 = 234
	ARM_REG_DBGWVR8 = 235
	ARM_REG_DBGWVR9 = 236
	ARM_REG_DBGWVR10 = 237
	ARM_REG_DBGWVR11 = 238
	ARM_REG_DBGWVR12 = 239
	ARM_REG_DBGWVR13 = 240
	ARM_REG_DBGWVR14 = 241
	ARM_REG_DFAR = 242
	ARM_REG_DFSR = 243
	ARM_REG_DLR = 244
	ARM_REG_DSPSR = 245
	ARM_REG_FCSEIDR = 246
	ARM_REG_HACR = 247
	ARM_REG_HACTLR = 248
	ARM_REG_HACTLR2 = 249
	ARM_REG_HADFSR = 250
	ARM_REG_HAIFSR = 251
	ARM_REG_HAMAIR0 = 252
	ARM_REG_HAMAIR1 = 253
	ARM_REG_HCPTR = 254
	ARM_REG_HCR = 255
	ARM_REG_HCR2 = 256
	ARM_REG_HDCR = 257
	ARM_REG_HDFAR = 258
	ARM_REG_HIFAR = 259
	ARM_REG_HMAIR0 = 260
	ARM_REG_HMAIR1 = 261
	ARM_REG_HPFAR = 262
	ARM_REG_HRMR = 263
	ARM_REG_HSCTLR = 264
	ARM_REG_HSR = 265
	ARM_REG_HSTR = 266
	ARM_REG_HTCR = 267
	ARM_REG_HTPIDR = 268
	ARM_REG_HTTBR = 269
	ARM_REG_HVBAR = 270
	ARM_REG_ICC_AP0R0 = 271
	ARM_REG_ICC_AP0R1 = 272
	ARM_REG_ICC_AP0R2 = 273
	ARM_REG_ICC_AP1R0 = 274
	ARM_REG_ICC_AP1R1 = 275
	ARM_REG_ICC_AP1R2 = 276
	ARM_REG_ICC_ASGI1R = 277
	ARM_REG_ICC_BPR0 = 278
	ARM_REG_ICC_BPR1 = 279
	ARM_REG_ICC_CTLR = 280
	ARM_REG_ICC_DIR = 281
	ARM_REG_ICC_EOIR0 = 282
	ARM_REG_ICC_EOIR1 = 283
	ARM_REG_ICC_HPPIR0 = 284
	ARM_REG_ICC_HPPIR1 = 285
	ARM_REG_ICC_HSRE = 286
	ARM_REG_ICC_IAR0 = 287
	ARM_REG_ICC_IAR1 = 288
	ARM_REG_ICC_IGRPEN0 = 289
	ARM_REG_ICC_IGRPEN1 = 290
	ARM_REG_ICC_MCTLR = 291
	ARM_REG_ICC_MGRPEN1 = 292
	ARM_REG_ICC_MSRE = 293
	ARM_REG_ICC_PMR = 294
	ARM_REG_ICC_RPR = 295
	ARM_REG_ICC_SGI0R = 296
	ARM_REG_ICC_SGI1R = 297
	ARM_REG_ICC_SRE = 298
	ARM_REG_ICH_AP0R0 = 299
	ARM_REG_ICH_AP0R1 = 300
	ARM_REG_ICH_AP0R2 = 301
	ARM_REG_ICH_AP1R0 = 302
	ARM_REG_ICH_AP1R1 = 303
	ARM_REG_ICH_AP1R2 = 304
	ARM_REG_ICH_EISR = 305
	ARM_REG_ICH_ELRSR = 306
	ARM_REG_ICH_HCR = 307
	ARM_REG_ICH_LR0 = 308
	ARM_REG_ICH_LR1 = 309
	ARM_REG_ICH_LR2 = 310
	ARM_REG_ICH_LR3 = 311
	ARM_REG_ICH_LR4 = 312
	ARM_REG_ICH_LR5 = 313
	ARM_REG_ICH_LR6 = 314
	ARM_REG_ICH_LR7 = 315
	ARM_REG_ICH_LR8 = 316
	ARM_REG_ICH_LR9 = 317
	ARM_REG_ICH_LR10 = 318
	ARM_REG_ICH_LR11 = 319
	ARM_REG_ICH_LR12 = 320
	ARM_REG_ICH_LR13 = 321
	ARM_REG_ICH_LR14 = 322
	ARM_REG_ICH_LRC0 = 323
	ARM_REG_ICH_LRC1 = 324
	ARM_REG_ICH_LRC2 = 325
	ARM_REG_ICH_LRC3 = 326
	ARM_REG_ICH_LRC4 = 327
	ARM_REG_ICH_LRC5 = 328
	ARM_REG_ICH_LRC6 = 329
	ARM_REG_ICH_LRC7 = 330
	ARM_REG_ICH_LRC8 = 331
	ARM_REG_ICH_LRC9 = 332
	ARM_REG_ICH_LRC10 = 333
	ARM_REG_ICH_LRC11 = 334
	ARM_REG_ICH_LRC12 = 335
	ARM_REG_ICH_LRC13 = 336
	ARM_REG_ICH_LRC14 = 337
	ARM_REG_ICH_MISR = 338
	ARM_REG_ICH_VMCR = 339
	ARM_REG_ICH_VTR = 340
	ARM_REG_ICV_AP0R0 = 341
	ARM_REG_ICV_AP0R1 = 342
	ARM_REG_ICV_AP0R2 = 343
	ARM_REG_ICV_AP1R0 = 344
	ARM_REG_ICV_AP1R1 = 345
	ARM_REG_ICV_AP1R2 = 346
	ARM_REG_ICV_BPR0 = 347
	ARM_REG_ICV_BPR1 = 348
	ARM_REG_ICV_CTLR = 349
	ARM_REG_ICV_DIR = 350
	ARM_REG_ICV_EOIR0 = 351
	ARM_REG_ICV_EOIR1 = 352
	ARM_REG_ICV_HPPIR0 = 353
	ARM_REG_ICV_HPPIR1 = 354
	ARM_REG_ICV_IAR0 = 355
	ARM_REG_ICV_IAR1 = 356
	ARM_REG_ICV_IGRPEN0 = 357
	ARM_REG_ICV_IGRPEN1 = 358
	ARM_REG_ICV_PMR = 359
	ARM_REG_ICV_RPR = 360
	ARM_REG_ID_AFR0 = 361
	ARM_REG_ID_DFR0 = 362
	ARM_REG_ID_ISAR0 = 363
	ARM_REG_ID_ISAR1 = 364
	ARM_REG_ID_ISAR2 = 365
	ARM_REG_ID_ISAR3 = 366
	ARM_REG_ID_ISAR4 = 367
	ARM_REG_ID_ISAR5 = 368
	ARM_REG_ID_ISAR6 = 369
	ARM_REG_ID_MMFR0 = 370
	ARM_REG_ID_MMFR1 = 371
	ARM_REG_ID_MMFR2 = 372
	ARM_REG_ID_MMFR3 = 373
	ARM_REG_ID_MMFR4 = 374
	ARM_REG_ID_PFR0 = 375
	ARM_REG_ID_PFR1 = 376
	ARM_REG_IFAR = 377
	ARM_REG_IFSR = 378
	ARM_REG_ISR = 379
	ARM_REG_JIDR = 380
	ARM_REG_JMCR = 381
	ARM_REG_JOSCR = 382
	ARM_REG_MAIR0 = 383
	ARM_REG_MAIR1 = 384
	ARM_REG_MIDR = 385
	ARM_REG_MPIDR = 386
	ARM_REG_MVBAR = 387
	ARM_REG_NMRR = 388
	ARM_REG_NSACR = 389
	ARM_REG_PAR = 390
	ARM_REG_PMCCFILTR = 391
	ARM_REG_PMCCNTR = 392
	ARM_REG_PMCEID0 = 393
	ARM_REG_PMCEID1 = 394
	ARM_REG_PMCEID2 = 395
	ARM_REG_PMCEID3 = 396
	ARM_REG_PMCNTENCLR = 397
	ARM_REG_PMCNTENSET = 398
	ARM_REG_PMCR = 399
	ARM_REG_PMEVCNTR0 = 400
	ARM_REG_PMEVCNTR1 = 401
	ARM_REG_PMEVCNTR2 = 402
	ARM_REG_PMEVCNTR3 = 403
	ARM_REG_PMEVCNTR4 = 404
	ARM_REG_PMEVCNTR5 = 405
	ARM_REG_PMEVCNTR6 = 406
	ARM_REG_PMEVCNTR7 = 407
	ARM_REG_PMEVCNTR8 = 408
	ARM_REG_PMEVCNTR9 = 409
	ARM_REG_PMEVCNTR10 = 410
	ARM_REG_PMEVCNTR11 = 411
	ARM_REG_PMEVCNTR12 = 412
	ARM_REG_PMEVCNTR13 = 413
	ARM_REG_PMEVCNTR14 = 414
	ARM_REG_PMEVCNTR15 = 415
	ARM_REG_PMEVCNTR16 = 416
	ARM_REG_PMEVCNTR17 = 417
	ARM_REG_PMEVCNTR18 = 418
	ARM_REG_PMEVCNTR19 = 419
	ARM_REG_PMEVCNTR20 = 420
	ARM_REG_PMEVCNTR21 = 421
	ARM_REG_PMEVCNTR22 = 422
	ARM_REG_PMEVCNTR23 = 423
	ARM_REG_PMEVCNTR24 = 424
	ARM_REG_PMEVCNTR25 = 425
	ARM_REG_PMEVCNTR26 = 426
	ARM_REG_PMEVCNTR27 = 427
	ARM_REG_PMEVCNTR28 = 428
	ARM_REG_PMEVCNTR29 = 429
	ARM_REG_PMEVTYPER0 = 430
	ARM_REG_PMEVTYPER1 = 431
	ARM_REG_PMEVTYPER2 = 432
	ARM_REG_PMEVTYPER3 = 433
	ARM_REG_PMEVTYPER4 = 434
	ARM_REG_PMEVTYPER5 = 435
	ARM_REG_PMEVTYPER6 = 436
	ARM_REG_PMEVTYPER7 = 437
	ARM_REG_PMEVTYPER8 = 438
	ARM_REG_PMEVTYPER9 = 439
	ARM_REG_PMEVTYPER10 = 440
	ARM_REG_PMEVTYPER11 = 441
	ARM_REG_PMEVTYPER12 = 442
	ARM_REG_PMEVTYPER13 = 443
	ARM_REG_PMEVTYPER14 = 444
	ARM_REG_PMEVTYPER15 = 445
	ARM_REG_PMEVTYPER16 = 446
	ARM_REG_PMEVTYPER17 = 447
	ARM_REG_PMEVTYPER18 = 448
	ARM_REG_PMEVTYPER19 = 449
	ARM_REG_PMEVTYPER20 = 450
	ARM_REG_PMEVTYPER21 = 451
	ARM_REG_PMEVTYPER22 = 452
	ARM_REG_PMEVTYPER23 = 453
	ARM_REG_PMEVTYPER24 = 454
	ARM_REG_PMEVTYPER25 = 455
	ARM_REG_PMEVTYPER26 = 456
	ARM_REG_PMEVTYPER27 = 457
	ARM_REG_PMEVTYPER28 = 458
	ARM_REG_PMEVTYPER29 = 459
	ARM_REG_PMINTENCLR = 460
	ARM_REG_PMINTENSET = 461
	ARM_REG_PMOVSR = 462
	ARM_REG_PMOVSSET = 463
	ARM_REG_PMSELR = 464
	ARM_REG_PMSWINC = 465
	ARM_REG_PMUSERENR = 466
	ARM_REG_PMXEVCNTR = 467
	ARM_REG_PMXEVTYPER = 468
	ARM_REG_PRRR = 469
	ARM_REG_REVIDR = 470
	ARM_REG_RMR = 471
	ARM_REG_RVBAR = 472
	ARM_REG_SCR = 473
	ARM_REG_SCTLR = 474
	ARM_REG_SDCR = 475
	ARM_REG_SDER = 476
	ARM_REG_TCMTR = 477
	ARM_REG_TLBTR = 478
	ARM_REG_TPIDRPRW = 479
	ARM_REG_TPIDRURO = 480
	ARM_REG_TPIDRURW = 481
	ARM_REG_TTBCR = 482
	ARM_REG_TTBCR2 = 483
	ARM_REG_TTBR0 = 484
	ARM_REG_TTBR1 = 485
	ARM_REG_VBAR = 486
	ARM_REG_VMPIDR = 487
	ARM_REG_VPIDR = 488
	ARM_REG_VTCR = 489
	ARM_REG_VTTBR = 490
	ARM_REG_ENDING = 491

// alias registers
	ARM_REG_R13 = 12
	ARM_REG_R14 = 10
	ARM_REG_R15 = 11
	ARM_REG_SB = 75
	ARM_REG_SL = 76
	ARM_REG_FP = 77
	ARM_REG_IP = 78
	ARM_REG_C1_C0_2 = 140
	ARM_REG_C13_C0_2 = 481
	ARM_REG_C13_C0_3 = 480
)