
/* Autogen header for Unicorn Engine - DONOT MODIFY */
#ifndef UNICORN_ARM__CPREG_INFO_H
#define UNICORN_ARM__CPREG_INFO_H

#define UC_ARM_CPREG_INFO_LIST \
{ UC_ARM_REG_ACTLR           ,   15,    1,    0,    0,    0,    1 },\
{ UC_ARM_REG_ACTLR2          ,   15,    1,    0,    0,    0,    3 },\
{ UC_ARM_REG_ADFSR           ,   15,    5,    1,    0,    0,    0 },\
{ UC_ARM_REG_AIDR            ,   15,    0,    0,    0,    1,    7 },\
{ UC_ARM_REG_AIFSR           ,   15,    5,    1,    0,    0,    1 },\
{ UC_ARM_REG_AMAIR0          ,   15,   10,    3,    0,    0,    0 },\
{ UC_ARM_REG_AMAIR1          ,   15,   10,    3,    0,    0,    1 },\
{ UC_ARM_REG_CCSIDR          ,   15,    0,    0,    0,    1,    0 },\
{ UC_ARM_REG_CCSIDR2         ,   15,    0,    0,    0,    1,    2 },\
{ UC_ARM_REG_CLIDR           ,   15,    0,    0,    0,    1,    1 },\
{ UC_ARM_REG_CNTFRQ          ,   15,   14,    0,    0,    0,    0 },\
{ UC_ARM_REG_CNTHCTL         ,   15,   14,    1,    0,    4,    0 },\
{ UC_ARM_REG_CNTHP_CTL       ,   15,   14,    2,    0,    0,    1 },\
{ UC_ARM_REG_CNTHP_CVAL      ,   15,    0,   14,    0,    2,    0 },\
{ UC_ARM_REG_CNTHP_TVAL      ,   15,   14,    2,    0,    0,    0 },\
{ UC_ARM_REG_CNTHV_CTL       ,   15,   14,    3,    0,    0,    1 },\
{ UC_ARM_REG_CNTHV_CVAL      ,   15,    0,   14,    0,    3,    0 },\
{ UC_ARM_REG_CNTHV_TVAL      ,   15,   14,    3,    0,    0,    0 },\
{ UC_ARM_REG_CNTKCTL         ,   15,   14,    1,    0,    0,    0 },\
{ UC_ARM_REG_CNTPCT          ,   15,    0,   14,    0,    0,    0 },\
{ UC_ARM_REG_CNTP_CTL        ,   15,   14,    2,    0,    0,    1 },\
{ UC_ARM_REG_CNTP_CVAL       ,   15,    0,   14,    0,    2,    0 },\
{ UC_ARM_REG_CNTP_TVAL       ,   15,   14,    2,    0,    0,    0 },\
{ UC_ARM_REG_CNTVCT          ,   15,    0,   14,    0,    1,    0 },\
{ UC_ARM_REG_CNTVOFF         ,   15,    0,   14,    0,    4,    0 },\
{ UC_ARM_REG_CNTV_CTL        ,   15,   14,    3,    0,    0,    1 },\
{ UC_ARM_REG_CNTV_CVAL       ,   15,    0,   14,    0,    3,    0 },\
{ UC_ARM_REG_CNTV_TVAL       ,   15,   14,    3,    0,    0,    0 },\
{ UC_ARM_REG_CONTEXTIDR      ,   15,   13,    0,    0,    0,    1 },\
{ UC_ARM_REG_CPACR           ,   15,    1,    0,    0,    0,    2 },\
{ UC_ARM_REG_CSSELR          ,   15,    0,    0,    0,    2,    0 },\
{ UC_ARM_REG_CTR             ,   15,    0,    0,    0,    0,    1 },\
{ UC_ARM_REG_DACR            ,   15,    3,    0,    0,    0,    0 },\
{ UC_ARM_REG_DBGAUTHSTATUS   ,   14,    7,   14,    0,    0,    6 },\
{ UC_ARM_REG_DBGBCR0         ,   14,    0,    0,    0,    0,    5 },\
{ UC_ARM_REG_DBGBCR1         ,   14,    0,    1,    0,    0,    5 },\
{ UC_ARM_REG_DBGBCR2         ,   14,    0,    2,    0,    0,    5 },\
{ UC_ARM_REG_DBGBCR3         ,   14,    0,    3,    0,    0,    5 },\
{ UC_ARM_REG_DBGBCR4         ,   14,    0,    4,    0,    0,    5 },\
{ UC_ARM_REG_DBGBCR5         ,   14,    0,    5,    0,    0,    5 },\
{ UC_ARM_REG_DBGBCR6         ,   14,    0,    6,    0,    0,    5 },\
{ UC_ARM_REG_DBGBCR7         ,   14,    0,    7,    0,    0,    5 },\
{ UC_ARM_REG_DBGBCR8         ,   14,    0,    8,    0,    0,    5 },\
{ UC_ARM_REG_DBGBCR9         ,   14,    0,    9,    0,    0,    5 },\
{ UC_ARM_REG_DBGBCR10        ,   14,    0,   10,    0,    0,    5 },\
{ UC_ARM_REG_DBGBCR11        ,   14,    0,   11,    0,    0,    5 },\
{ UC_ARM_REG_DBGBCR12        ,   14,    0,   12,    0,    0,    5 },\
{ UC_ARM_REG_DBGBCR13        ,   14,    0,   13,    0,    0,    5 },\
{ UC_ARM_REG_DBGBCR14        ,   14,    0,   14,    0,    0,    5 },\
{ UC_ARM_REG_DBGBVR0         ,   14,    0,    0,    0,    0,    4 },\
{ UC_ARM_REG_DBGBVR1         ,   14,    0,    1,    0,    0,    4 },\
{ UC_ARM_REG_DBGBVR2         ,   14,    0,    2,    0,    0,    4 },\
{ UC_ARM_REG_DBGBVR3         ,   14,    0,    3,    0,    0,    4 },\
{ UC_ARM_REG_DBGBVR4         ,   14,    0,    4,    0,    0,    4 },\
{ UC_ARM_REG_DBGBVR5         ,   14,    0,    5,    0,    0,    4 },\
{ UC_ARM_REG_DBGBVR6         ,   14,    0,    6,    0,    0,    4 },\
{ UC_ARM_REG_DBGBVR7         ,   14,    0,    7,    0,    0,    4 },\
{ UC_ARM_REG_DBGBVR8         ,   14,    0,    8,    0,    0,    4 },\
{ UC_ARM_REG_DBGBVR9         ,   14,    0,    9,    0,    0,    4 },\
{ UC_ARM_REG_DBGBVR10        ,   14,    0,   10,    0,    0,    4 },\
{ UC_ARM_REG_DBGBVR11        ,   14,    0,   11,    0,    0,    4 },\
{ UC_ARM_REG_DBGBVR12        ,   14,    0,   12,    0,    0,    4 },\
{ UC_ARM_REG_DBGBVR13        ,   14,    0,   13,    0,    0,    4 },\
{ UC_ARM_REG_DBGBVR14        ,   14,    0,   14,    0,    0,    4 },\
{ UC_ARM_REG_DBGBXVR0        ,   14,    1,    0,    0,    0,    1 },\
{ UC_ARM_REG_DBGBXVR1        ,   14,    1,    1,    0,    0,    1 },\
{ UC_ARM_REG_DBGBXVR2        ,   14,    1,    2,    0,    0,    1 },\
{ UC_ARM_REG_DBGBXVR3        ,   14,    1,    3,    0,    0,    1 },\
{ UC_ARM_REG_DBGBXVR4        ,   14,    1,    4,    0,    0,    1 },\
{ UC_ARM_REG_DBGBXVR5        ,   14,    1,    5,    0,    0,    1 },\
{ UC_ARM_REG_DBGBXVR6        ,   14,    1,    6,    0,    0,    1 },\
{ UC_ARM_REG_DBGBXVR7        ,   14,    1,    7,    0,    0,    1 },\
{ UC_ARM_REG_DBGBXVR8        ,   14,    1,    8,    0,    0,    1 },\
{ UC_ARM_REG_DBGBXVR9        ,   14,    1,    9,    0,    0,    1 },\
{ UC_ARM_REG_DBGBXVR10       ,   14,    1,   10,    0,    0,    1 },\
{ UC_ARM_REG_DBGBXVR11       ,   14,    1,   11,    0,    0,    1 },\
{ UC_ARM_REG_DBGBXVR12       ,   14,    1,   12,    0,    0,    1 },\
{ UC_ARM_REG_DBGBXVR13       ,   14,    1,   13,    0,    0,    1 },\
{ UC_ARM_REG_DBGBXVR14       ,   14,    1,   14,    0,    0,    1 },\
{ UC_ARM_REG_DBGCLAIMCLR     ,   14,    7,    9,    0,    0,    6 },\
{ UC_ARM_REG_DBGCLAIMSET     ,   14,    7,    8,    0,    0,    6 },\
{ UC_ARM_REG_DBGDCCINT       ,   14,    0,    2,    0,    0,    0 },\
{ UC_ARM_REG_DBGDEVID        ,   14,    7,    2,    0,    0,    7 },\
{ UC_ARM_REG_DBGDEVID1       ,   14,    7,    1,    0,    0,    7 },\
{ UC_ARM_REG_DBGDEVID2       ,   14,    7,    0,    0,    0,    7 },\
{ UC_ARM_REG_DBGDIDR         ,   14,    0,    0,    0,    0,    0 },\
{ UC_ARM_REG_DBGDRAR         ,   14,    1,    0,    0,    0,    0 },\
{ UC_ARM_REG_DBGDSAR         ,   14,    2,    0,    0,    0,    0 },\
{ UC_ARM_REG_DBGDSCRext      ,   14,    0,    2,    0,    0,    2 },\
{ UC_ARM_REG_DBGDSCRint      ,   14,    0,    1,    0,    0,    0 },\
{ UC_ARM_REG_DBGDTRRXext     ,   14,    0,    0,    0,    0,    2 },\
{ UC_ARM_REG_DBGDTRRXint     ,   14,    0,    5,    0,    0,    0 },\
{ UC_ARM_REG_DBGDTRTXext     ,   14,    0,    3,    0,    0,    2 },\
{ UC_ARM_REG_DBGDTRTXint     ,   14,    0,    5,    0,    0,    0 },\
{ UC_ARM_REG_DBGOSDLR        ,   14,    1,    3,    0,    0,    4 },\
{ UC_ARM_REG_DBGOSECCR       ,   14,    0,    6,    0,    0,    2 },\
{ UC_ARM_REG_DBGOSLAR        ,   14,    1,    0,    0,    0,    4 },\
{ UC_ARM_REG_DBGOSLSR        ,   14,    1,    1,    0,    0,    4 },\
{ UC_ARM_REG_DBGPRCR         ,   14,    1,    4,    0,    0,    4 },\
{ UC_ARM_REG_DBGVCR          ,   14,    0,    7,    0,    0,    0 },\
{ UC_ARM_REG_DBGWCR0         ,   14,    0,    0,    0,    0,    7 },\
{ UC_ARM_REG_DBGWCR1         ,   14,    0,    1,    0,    0,    7 },\
{ UC_ARM_REG_DBGWCR2         ,   14,    0,    2,    0,    0,    7 },\
{ UC_ARM_REG_DBGWCR3         ,   14,    0,    3,    0,    0,    7 },\
{ UC_ARM_REG_DBGWCR4         ,   14,    0,    4,    0,    0,    7 },\
{ UC_ARM_REG_DBGWCR5         ,   14,    0,    5,    0,    0,    7 },\
{ UC_ARM_REG_DBGWCR6         ,   14,    0,    6,    0,    0,    7 },\
{ UC_ARM_REG_DBGWCR7         ,   14,    0,    7,    0,    0,    7 },\
{ UC_ARM_REG_DBGWCR8         ,   14,    0,    8,    0,    0,    7 },\
{ UC_ARM_REG_DBGWCR9         ,   14,    0,    9,    0,    0,    7 },\
{ UC_ARM_REG_DBGWCR10        ,   14,    0,   10,    0,    0,    7 },\
{ UC_ARM_REG_DBGWCR11        ,   14,    0,   11,    0,    0,    7 },\
{ UC_ARM_REG_DBGWCR12        ,   14,    0,   12,    0,    0,    7 },\
{ UC_ARM_REG_DBGWCR13        ,   14,    0,   13,    0,    0,    7 },\
{ UC_ARM_REG_DBGWCR14        ,   14,    0,   14,    0,    0,    7 },\
{ UC_ARM_REG_DBGWFAR         ,   14,    0,    6,    0,    0,    0 },\
{ UC_ARM_REG_DBGWVR0         ,   14,    0,    0,    0,    0,    6 },\
{ UC_ARM_REG_DBGWVR1         ,   14,    0,    1,    0,    0,    6 },\
{ UC_ARM_REG_DBGWVR2         ,   14,    0,    2,    0,    0,    6 },\
{ UC_ARM_REG_DBGWVR3         ,   14,    0,    3,    0,    0,    6 },\
{ UC_ARM_REG_DBGWVR4         ,   14,    0,    4,    0,    0,    6 },\
{ UC_ARM_REG_DBGWVR5         ,   14,    0,    5,    0,    0,    6 },\
{ UC_ARM_REG_DBGWVR6         ,   14,    0,    6,    0,    0,    6 },\
{ UC_ARM_REG_DBGWVR7         ,   14,    0,    7,    0,    0,    6 },\
{ UC_ARM_REG_DBGWVR8         ,   14,    0,    8,    0,    0,    6 },\
{ UC_ARM_REG_DBGWVR9         ,   14,    0,    9,    0,    0,    6 },\
{ UC_ARM_REG_DBGWVR10        ,   14,    0,   10,    0,    0,    6 },\
{ UC_ARM_REG_DBGWVR11        ,   14,    0,   11,    0,    0,    6 },\
{ UC_ARM_REG_DBGWVR12        ,   14,    0,   12,    0,    0,    6 },\
{ UC_ARM_REG_DBGWVR13        ,   14,    0,   13,    0,    0,    6 },\
{ UC_ARM_REG_DBGWVR14        ,   14,    0,   14,    0,    0,    6 },\
{ UC_ARM_REG_DFAR            ,   15,    6,    0,    0,    0,    0 },\
{ UC_ARM_REG_DFSR            ,   15,    5,    0,    0,    0,    0 },\
{ UC_ARM_REG_DLR             ,   15,    4,    5,    0,    3,    1 },\
{ UC_ARM_REG_DSPSR           ,   15,    4,    5,    0,    3,    0 },\
{ UC_ARM_REG_FCSEIDR         ,   15,   13,    0,    0,    0,    0 },\
{ UC_ARM_REG_HACR            ,   15,    1,    1,    0,    4,    7 },\
{ UC_ARM_REG_HACTLR          ,   15,    1,    0,    0,    4,    1 },\
{ UC_ARM_REG_HACTLR2         ,   15,    1,    0,    0,    4,    3 },\
{ UC_ARM_REG_HADFSR          ,   15,    5,    1,    0,    4,    0 },\
{ UC_ARM_REG_HAIFSR          ,   15,    5,    1,    0,    4,    1 },\
{ UC_ARM_REG_HAMAIR0         ,   15,   10,    3,    0,    4,    0 },\
{ UC_ARM_REG_HAMAIR1         ,   15,   10,    3,    0,    4,    1 },\
{ UC_ARM_REG_HCPTR           ,   15,    1,    1,    0,    4,    2 },\
{ UC_ARM_REG_HCR             ,   15,    1,    1,    0,    4,    0 },\
{ UC_ARM_REG_HCR2            ,   15,    1,    1,    0,    4,    4 },\
{ UC_ARM_REG_HDCR            ,   15,    1,    1,    0,    4,    1 },\
{ UC_ARM_REG_HDFAR           ,   15,    6,    0,    0,    4,    0 },\
{ UC_ARM_REG_HIFAR           ,   15,    6,    0,    0,    4,    2 },\
{ UC_ARM_REG_HMAIR0          ,   15,   10,    2,    0,    4,    0 },\
{ UC_ARM_REG_HMAIR1          ,   15,   10,    2,    0,    4,    1 },\
{ UC_ARM_REG_HPFAR           ,   15,    6,    0,    0,    4,    4 },\
{ UC_ARM_REG_HRMR            ,   15,   12,    0,    0,    4,    2 },\
{ UC_ARM_REG_HSCTLR          ,   15,    1,    0,    0,    4,    0 },\
{ UC_ARM_REG_HSR             ,   15,    5,    2,    0,    4,    0 },\
{ UC_ARM_REG_HSTR            ,   15,    1,    1,    0,    4,    3 },\
{ UC_ARM_REG_HTCR            ,   15,    2,    0,    0,    4,    2 },\
{ UC_ARM_REG_HTPIDR          ,   15,   13,    0,    0,    4,    2 },\
{ UC_ARM_REG_HTTBR           ,   15,    0,    2,    0,    4,    0 },\
{ UC_ARM_REG_HVBAR           ,   15,   12,    0,    0,    4,    0 },\
{ UC_ARM_REG_ICC_AP0R0       ,   15,   12,    8,    0,    0,    4 },\
{ UC_ARM_REG_ICC_AP0R1       ,   15,   12,    8,    0,    0,    5 },\
{ UC_ARM_REG_ICC_AP0R2       ,   15,   12,    8,    0,    0,    6 },\
{ UC_ARM_REG_ICC_AP1R0       ,   15,   12,    9,    0,    0,    0 },\
{ UC_ARM_REG_ICC_AP1R1       ,   15,   12,    9,    0,    0,    1 },\
{ UC_ARM_REG_ICC_AP1R2       ,   15,   12,    9,    0,    0,    2 },\
{ UC_ARM_REG_ICC_ASGI1R      ,   15,    0,   12,    0,    1,    0 },\
{ UC_ARM_REG_ICC_BPR0        ,   15,   12,    8,    0,    0,    3 },\
{ UC_ARM_REG_ICC_BPR1        ,   15,   12,   12,    0,    0,    3 },\
{ UC_ARM_REG_ICC_CTLR        ,   15,   12,   12,    0,    0,    4 },\
{ UC_ARM_REG_ICC_DIR         ,   15,   12,   11,    0,    0,    1 },\
{ UC_ARM_REG_ICC_EOIR0       ,   15,   12,    8,    0,    0,    1 },\
{ UC_ARM_REG_ICC_EOIR1       ,   15,   12,   12,    0,    0,    1 },\
{ UC_ARM_REG_ICC_HPPIR0      ,   15,   12,    8,    0,    0,    2 },\
{ UC_ARM_REG_ICC_HPPIR1      ,   15,   12,   12,    0,    0,    2 },\
{ UC_ARM_REG_ICC_HSRE        ,   15,   12,    9,    0,    4,    5 },\
{ UC_ARM_REG_ICC_IAR0        ,   15,   12,    8,    0,    0,    0 },\
{ UC_ARM_REG_ICC_IAR1        ,   15,   12,   12,    0,    0,    0 },\
{ UC_ARM_REG_ICC_IGRPEN0     ,   15,   12,   12,    0,    0,    6 },\
{ UC_ARM_REG_ICC_IGRPEN1     ,   15,   12,   12,    0,    0,    7 },\
{ UC_ARM_REG_ICC_MCTLR       ,   15,   12,   12,    0,    6,    4 },\
{ UC_ARM_REG_ICC_MGRPEN1     ,   15,   12,   12,    0,    6,    7 },\
{ UC_ARM_REG_ICC_MSRE        ,   15,   12,   12,    0,    6,    5 },\
{ UC_ARM_REG_ICC_PMR         ,   15,    4,    6,    0,    0,    0 },\
{ UC_ARM_REG_ICC_RPR         ,   15,   12,   11,    0,    0,    3 },\
{ UC_ARM_REG_ICC_SGI0R       ,   15,    0,   12,    0,    2,    0 },\
{ UC_ARM_REG_ICC_SGI1R       ,   15,    0,   12,    0,    0,    0 },\
{ UC_ARM_REG_ICC_SRE         ,   15,   12,   12,    0,    0,    5 },\
{ UC_ARM_REG_ICH_AP0R0       ,   15,   12,    8,    0,    4,    0 },\
{ UC_ARM_REG_ICH_AP0R1       ,   15,   12,    8,    0,    4,    1 },\
{ UC_ARM_REG_ICH_AP0R2       ,   15,   12,    8,    0,    4,    2 },\
{ UC_ARM_REG_ICH_AP1R0       ,   15,   12,    9,    0,    4,    0 },\
{ UC_ARM_REG_ICH_AP1R1       ,   15,   12,    9,    0,    4,    1 },\
{ UC_ARM_REG_ICH_AP1R2       ,   15,   12,    9,    0,    4,    2 },\
{ UC_ARM_REG_ICH_EISR        ,   15,   12,   11,    0,    4,    3 },\
{ UC_ARM_REG_ICH_ELRSR       ,   15,   12,   11,    0,    4,    5 },\
{ UC_ARM_REG_ICH_HCR         ,   15,   12,   11,    0,    4,    0 },\
{ UC_ARM_REG_ICH_LR0         ,   15,   12,    4,    0,    4,    0 },\
{ UC_ARM_REG_ICH_LR1         ,   15,   12,   12,    0,    4,    1 },\
{ UC_ARM_REG_ICH_LR2         ,   15,   12,    4,    0,    4,    2 },\
{ UC_ARM_REG_ICH_LR3         ,   15,   12,   12,    0,    4,    3 },\
{ UC_ARM_REG_ICH_LR4         ,   15,   12,    4,    0,    4,    4 },\
{ UC_ARM_REG_ICH_LR5         ,   15,   12,   12,    0,    4,    5 },\
{ UC_ARM_REG_ICH_LR6         ,   15,   12,    4,    0,    4,    6 },\
{ UC_ARM_REG_ICH_LR7         ,   15,   12,   12,    0,    4,    7 },\
{ UC_ARM_REG_ICH_LR8         ,   15,   12,    4,    0,    4,    0 },\
{ UC_ARM_REG_ICH_LR9         ,   15,   12,   12,    0,    4,    1 },\
{ UC_ARM_REG_ICH_LR10        ,   15,   12,    4,    0,    4,    2 },\
{ UC_ARM_REG_ICH_LR11        ,   15,   12,   12,    0,    4,    3 },\
{ UC_ARM_REG_ICH_LR12        ,   15,   12,    4,    0,    4,    4 },\
{ UC_ARM_REG_ICH_LR13        ,   15,   12,   12,    0,    4,    5 },\
{ UC_ARM_REG_ICH_LR14        ,   15,   12,    4,    0,    4,    6 },\
{ UC_ARM_REG_ICH_LRC0        ,   15,   12,    6,    0,    4,    0 },\
{ UC_ARM_REG_ICH_LRC1        ,   15,   12,   14,    0,    4,    1 },\
{ UC_ARM_REG_ICH_LRC2        ,   15,   12,    6,    0,    4,    2 },\
{ UC_ARM_REG_ICH_LRC3        ,   15,   12,   14,    0,    4,    3 },\
{ UC_ARM_REG_ICH_LRC4        ,   15,   12,    6,    0,    4,    4 },\
{ UC_ARM_REG_ICH_LRC5        ,   15,   12,   14,    0,    4,    5 },\
{ UC_ARM_REG_ICH_LRC6        ,   15,   12,    6,    0,    4,    6 },\
{ UC_ARM_REG_ICH_LRC7        ,   15,   12,   14,    0,    4,    7 },\
{ UC_ARM_REG_ICH_LRC8        ,   15,   12,    6,    0,    4,    0 },\
{ UC_ARM_REG_ICH_LRC9        ,   15,   12,   14,    0,    4,    1 },\
{ UC_ARM_REG_ICH_LRC10       ,   15,   12,    6,    0,    4,    2 },\
{ UC_ARM_REG_ICH_LRC11       ,   15,   12,   14,    0,    4,    3 },\
{ UC_ARM_REG_ICH_LRC12       ,   15,   12,    6,    0,    4,    4 },\
{ UC_ARM_REG_ICH_LRC13       ,   15,   12,   14,    0,    4,    5 },\
{ UC_ARM_REG_ICH_LRC14       ,   15,   12,    6,    0,    4,    6 },\
{ UC_ARM_REG_ICH_MISR        ,   15,   12,   11,    0,    4,    2 },\
{ UC_ARM_REG_ICH_VMCR        ,   15,   12,   11,    0,    4,    7 },\
{ UC_ARM_REG_ICH_VTR         ,   15,   12,   11,    0,    4,    1 },\
{ UC_ARM_REG_ICV_AP0R0       ,   15,   12,    8,    0,    0,    4 },\
{ UC_ARM_REG_ICV_AP0R1       ,   15,   12,    8,    0,    0,    5 },\
{ UC_ARM_REG_ICV_AP0R2       ,   15,   12,    8,    0,    0,    6 },\
{ UC_ARM_REG_ICV_AP1R0       ,   15,   12,    9,    0,    0,    0 },\
{ UC_ARM_REG_ICV_AP1R1       ,   15,   12,    9,    0,    0,    1 },\
{ UC_ARM_REG_ICV_AP1R2       ,   15,   12,    9,    0,    0,    2 },\
{ UC_ARM_REG_ICV_BPR0        ,   15,   12,    8,    0,    0,    3 },\
{ UC_ARM_REG_ICV_BPR1        ,   15,   12,   12,    0,    0,    3 },\
{ UC_ARM_REG_ICV_CTLR        ,   15,   12,   12,    0,    0,    4 },\
{ UC_ARM_REG_ICV_DIR         ,   15,   12,   11,    0,    0,    1 },\
{ UC_ARM_REG_ICV_EOIR0       ,   15,   12,    8,    0,    0,    1 },\
{ UC_ARM_REG_ICV_EOIR1       ,   15,   12,   12,    0,    0,    1 },\
{ UC_ARM_REG_ICV_HPPIR0      ,   15,   12,    8,    0,    0,    2 },\
{ UC_ARM_REG_ICV_HPPIR1      ,   15,   12,   12,    0,    0,    2 },\
{ UC_ARM_REG_ICV_IAR0        ,   15,   12,    8,    0,    0,    0 },\
{ UC_ARM_REG_ICV_IAR1        ,   15,   12,   12,    0,    0,    0 },\
{ UC_ARM_REG_ICV_IGRPEN0     ,   15,   12,   12,    0,    0,    6 },\
{ UC_ARM_REG_ICV_IGRPEN1     ,   15,   12,   12,    0,    0,    7 },\
{ UC_ARM_REG_ICV_PMR         ,   15,    4,    6,    0,    0,    0 },\
{ UC_ARM_REG_ICV_RPR         ,   15,   12,   11,    0,    0,    3 },\
{ UC_ARM_REG_ID_AFR0         ,   15,    0,    1,    0,    0,    3 },\
{ UC_ARM_REG_ID_DFR0         ,   15,    0,    1,    0,    0,    2 },\
{ UC_ARM_REG_ID_ISAR0        ,   15,    0,    2,    0,    0,    0 },\
{ UC_ARM_REG_ID_ISAR1        ,   15,    0,    2,    0,    0,    1 },\
{ UC_ARM_REG_ID_ISAR2        ,   15,    0,    2,    0,    0,    2 },\
{ UC_ARM_REG_ID_ISAR3        ,   15,    0,    2,    0,    0,    3 },\
{ UC_ARM_REG_ID_ISAR4        ,   15,    0,    2,    0,    0,    4 },\
{ UC_ARM_REG_ID_ISAR5        ,   15,    0,    2,    0,    0,    5 },\
{ UC_ARM_REG_ID_ISAR6        ,   15,    0,    2,    0,    0,    7 },\
{ UC_ARM_REG_ID_MMFR0        ,   15,    0,    1,    0,    0,    4 },\
{ UC_ARM_REG_ID_MMFR1        ,   15,    0,    1,    0,    0,    5 },\
{ UC_ARM_REG_ID_MMFR2        ,   15,    0,    1,    0,    0,    6 },\
{ UC_ARM_REG_ID_MMFR3        ,   15,    0,    1,    0,    0,    7 },\
{ UC_ARM_REG_ID_MMFR4        ,   15,    0,    2,    0,    0,    6 },\
{ UC_ARM_REG_ID_PFR0         ,   15,    0,    1,    0,    0,    0 },\
{ UC_ARM_REG_ID_PFR1         ,   15,    0,    1,    0,    0,    1 },\
{ UC_ARM_REG_IFAR            ,   15,    6,    0,    0,    0,    2 },\
{ UC_ARM_REG_IFSR            ,   15,    5,    0,    0,    0,    1 },\
{ UC_ARM_REG_ISR             ,   15,   12,    1,    0,    0,    0 },\
{ UC_ARM_REG_JIDR            ,   14,    0,    0,    0,    7,    0 },\
{ UC_ARM_REG_JMCR            ,   14,    2,    0,    0,    7,    0 },\
{ UC_ARM_REG_JOSCR           ,   14,    1,    0,    0,    7,    0 },\
{ UC_ARM_REG_MAIR0           ,   15,   10,    2,    0,    0,    0 },\
{ UC_ARM_REG_MAIR1           ,   15,   10,    2,    0,    0,    1 },\
{ UC_ARM_REG_MIDR            ,   15,    0,    0,    0,    0,    0 },\
{ UC_ARM_REG_MPIDR           ,   15,    0,    0,    0,    0,    5 },\
{ UC_ARM_REG_MVBAR           ,   15,   12,    0,    0,    0,    1 },\
{ UC_ARM_REG_NMRR            ,   15,   10,    2,    0,    0,    1 },\
{ UC_ARM_REG_NSACR           ,   15,    1,    1,    0,    0,    2 },\
{ UC_ARM_REG_PAR             ,   15,    7,    4,    0,    0,    0 },\
{ UC_ARM_REG_PMCCFILTR       ,   15,   14,   15,    0,    0,    7 },\
{ UC_ARM_REG_PMCCNTR         ,   15,    9,   13,    0,    0,    0 },\
{ UC_ARM_REG_PMCEID0         ,   15,    9,   12,    0,    0,    6 },\
{ UC_ARM_REG_PMCEID1         ,   15,    9,   12,    0,    0,    7 },\
{ UC_ARM_REG_PMCEID2         ,   15,    9,   14,    0,    0,    4 },\
{ UC_ARM_REG_PMCEID3         ,   15,    9,   14,    0,    0,    5 },\
{ UC_ARM_REG_PMCNTENCLR      ,   15,    9,   12,    0,    0,    2 },\
{ UC_ARM_REG_PMCNTENSET      ,   15,    9,   12,    0,    0,    1 },\
{ UC_ARM_REG_PMCR            ,   15,    9,   12,    0,    0,    0 },\
{ UC_ARM_REG_PMEVCNTR0       ,   15,   14,    8,    0,    0,    0 },\
{ UC_ARM_REG_PMEVCNTR1       ,   15,   14,    8,    0,    0,    1 },\
{ UC_ARM_REG_PMEVCNTR2       ,   15,   14,   24,    0,    0,    2 },\
{ UC_ARM_REG_PMEVCNTR3       ,   15,   14,   24,    0,    0,    3 },\
{ UC_ARM_REG_PMEVCNTR4       ,   15,   14,    8,    0,    0,    4 },\
{ UC_ARM_REG_PMEVCNTR5       ,   15,   14,    8,    0,    0,    5 },\
{ UC_ARM_REG_PMEVCNTR6       ,   15,   14,   24,    0,    0,    6 },\
{ UC_ARM_REG_PMEVCNTR7       ,   15,   14,   24,    0,    0,    7 },\
{ UC_ARM_REG_PMEVCNTR8       ,   15,   14,    8,    0,    0,    0 },\
{ UC_ARM_REG_PMEVCNTR9       ,   15,   14,    8,    0,    0,    1 },\
{ UC_ARM_REG_PMEVCNTR10      ,   15,   14,   24,    0,    0,    2 },\
{ UC_ARM_REG_PMEVCNTR11      ,   15,   14,   24,    0,    0,    3 },\
{ UC_ARM_REG_PMEVCNTR12      ,   15,   14,    8,    0,    0,    4 },\
{ UC_ARM_REG_PMEVCNTR13      ,   15,   14,    8,    0,    0,    5 },\
{ UC_ARM_REG_PMEVCNTR14      ,   15,   14,   24,    0,    0,    6 },\
{ UC_ARM_REG_PMEVCNTR15      ,   15,   14,   24,    0,    0,    7 },\
{ UC_ARM_REG_PMEVCNTR16      ,   15,   14,    8,    0,    0,    0 },\
{ UC_ARM_REG_PMEVCNTR17      ,   15,   14,    8,    0,    0,    1 },\
{ UC_ARM_REG_PMEVCNTR18      ,   15,   14,   24,    0,    0,    2 },\
{ UC_ARM_REG_PMEVCNTR19      ,   15,   14,   24,    0,    0,    3 },\
{ UC_ARM_REG_PMEVCNTR20      ,   15,   14,    8,    0,    0,    4 },\
{ UC_ARM_REG_PMEVCNTR21      ,   15,   14,    8,    0,    0,    5 },\
{ UC_ARM_REG_PMEVCNTR22      ,   15,   14,   24,    0,    0,    6 },\
{ UC_ARM_REG_PMEVCNTR23      ,   15,   14,   24,    0,    0,    7 },\
{ UC_ARM_REG_PMEVCNTR24      ,   15,   14,    8,    0,    0,    0 },\
{ UC_ARM_REG_PMEVCNTR25      ,   15,   14,    8,    0,    0,    1 },\
{ UC_ARM_REG_PMEVCNTR26      ,   15,   14,   24,    0,    0,    2 },\
{ UC_ARM_REG_PMEVCNTR27      ,   15,   14,   24,    0,    0,    3 },\
{ UC_ARM_REG_PMEVCNTR28      ,   15,   14,    8,    0,    0,    4 },\
{ UC_ARM_REG_PMEVCNTR29      ,   15,   14,    8,    0,    0,    5 },\
{ UC_ARM_REG_PMEVTYPER0      ,   15,   14,    8,    0,    0,    0 },\
{ UC_ARM_REG_PMEVTYPER1      ,   15,   14,    8,    0,    0,    1 },\
{ UC_ARM_REG_PMEVTYPER2      ,   15,   14,   24,    0,    0,    2 },\
{ UC_ARM_REG_PMEVTYPER3      ,   15,   14,   24,    0,    0,    3 },\
{ UC_ARM_REG_PMEVTYPER4      ,   15,   14,    8,    0,    0,    4 },\
{ UC_ARM_REG_PMEVTYPER5      ,   15,   14,    8,    0,    0,    5 },\
{ UC_ARM_REG_PMEVTYPER6      ,   15,   14,   24,    0,    0,    6 },\
{ UC_ARM_REG_PMEVTYPER7      ,   15,   14,   24,    0,    0,    7 },\
{ UC_ARM_REG_PMEVTYPER8      ,   15,   14,    8,    0,    0,    0 },\
{ UC_ARM_REG_PMEVTYPER9      ,   15,   14,    8,    0,    0,    1 },\
{ UC_ARM_REG_PMEVTYPER10     ,   15,   14,   24,    0,    0,    2 },\
{ UC_ARM_REG_PMEVTYPER11     ,   15,   14,   24,    0,    0,    3 },\
{ UC_ARM_REG_PMEVTYPER12     ,   15,   14,    8,    0,    0,    4 },\
{ UC_ARM_REG_PMEVTYPER13     ,   15,   14,    8,    0,    0,    5 },\
{ UC_ARM_REG_PMEVTYPER14     ,   15,   14,   24,    0,    0,    6 },\
{ UC_ARM_REG_PMEVTYPER15     ,   15,   14,   24,    0,    0,    7 },\
{ UC_ARM_REG_PMEVTYPER16     ,   15,   14,    8,    0,    0,    0 },\
{ UC_ARM_REG_PMEVTYPER17     ,   15,   14,    8,    0,    0,    1 },\
{ UC_ARM_REG_PMEVTYPER18     ,   15,   14,   24,    0,    0,    2 },\
{ UC_ARM_REG_PMEVTYPER19     ,   15,   14,   24,    0,    0,    3 },\
{ UC_ARM_REG_PMEVTYPER20     ,   15,   14,    8,    0,    0,    4 },\
{ UC_ARM_REG_PMEVTYPER21     ,   15,   14,    8,    0,    0,    5 },\
{ UC_ARM_REG_PMEVTYPER22     ,   15,   14,   24,    0,    0,    6 },\
{ UC_ARM_REG_PMEVTYPER23     ,   15,   14,   24,    0,    0,    7 },\
{ UC_ARM_REG_PMEVTYPER24     ,   15,   14,    8,    0,    0,    0 },\
{ UC_ARM_REG_PMEVTYPER25     ,   15,   14,    8,    0,    0,    1 },\
{ UC_ARM_REG_PMEVTYPER26     ,   15,   14,   24,    0,    0,    2 },\
{ UC_ARM_REG_PMEVTYPER27     ,   15,   14,   24,    0,    0,    3 },\
{ UC_ARM_REG_PMEVTYPER28     ,   15,   14,    8,    0,    0,    4 },\
{ UC_ARM_REG_PMEVTYPER29     ,   15,   14,    8,    0,    0,    5 },\
{ UC_ARM_REG_PMINTENCLR      ,   15,    9,   14,    0,    0,    2 },\
{ UC_ARM_REG_PMINTENSET      ,   15,    9,   14,    0,    0,    1 },\
{ UC_ARM_REG_PMOVSR          ,   15,    9,   12,    0,    0,    3 },\
{ UC_ARM_REG_PMOVSSET        ,   15,    9,   14,    0,    0,    3 },\
{ UC_ARM_REG_PMSELR          ,   15,    9,   12,    0,    0,    5 },\
{ UC_ARM_REG_PMSWINC         ,   15,    9,   12,    0,    0,    4 },\
{ UC_ARM_REG_PMUSERENR       ,   15,    9,   14,    0,    0,    0 },\
{ UC_ARM_REG_PMXEVCNTR       ,   15,    9,   13,    0,    0,    2 },\
{ UC_ARM_REG_PMXEVTYPER      ,   15,    9,   13,    0,    0,    1 },\
{ UC_ARM_REG_PRRR            ,   15,   10,    2,    0,    0,    0 },\
{ UC_ARM_REG_REVIDR          ,   15,    0,    0,    0,    0,    6 },\
{ UC_ARM_REG_RMR             ,   15,   12,    0,    0,    0,    2 },\
{ UC_ARM_REG_RVBAR           ,   15,   12,    0,    0,    0,    1 },\
{ UC_ARM_REG_SCR             ,   15,    1,    1,    0,    0,    0 },\
{ UC_ARM_REG_SCTLR           ,   15,    1,    0,    0,    0,    0 },\
{ UC_ARM_REG_SDCR            ,   15,    1,    3,    0,    0,    1 },\
{ UC_ARM_REG_SDER            ,   15,    1,    1,    0,    0,    1 },\
{ UC_ARM_REG_TCMTR           ,   15,    0,    0,    0,    0,    2 },\
{ UC_ARM_REG_TLBTR           ,   15,    0,    0,    0,    0,    3 },\
{ UC_ARM_REG_TPIDRPRW        ,   15,   13,    0,    0,    0,    4 },\
{ UC_ARM_REG_TPIDRURO        ,   15,   13,    0,    0,    0,    3 },\
{ UC_ARM_REG_TPIDRURW        ,   15,   13,    0,    0,    0,    2 },\
{ UC_ARM_REG_TTBCR           ,   15,    2,    0,    0,    0,    2 },\
{ UC_ARM_REG_TTBCR2          ,   15,    2,    0,    0,    0,    3 },\
{ UC_ARM_REG_TTBR0           ,   15,    2,    0,    0,    0,    0 },\
{ UC_ARM_REG_TTBR1           ,   15,    2,    0,    0,    0,    1 },\
{ UC_ARM_REG_VBAR            ,   15,   12,    0,    0,    0,    0 },\
{ UC_ARM_REG_VMPIDR          ,   15,    0,    0,    0,    4,    5 },\
{ UC_ARM_REG_VPIDR           ,   15,    0,    0,    0,    4,    0 },\
{ UC_ARM_REG_VTCR            ,   15,    2,    1,    0,    4,    2 },\
{ UC_ARM_REG_VTTBR           ,   15,    0,    2,    0,    6,    0 },\


#endif