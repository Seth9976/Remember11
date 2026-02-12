// 函数: sub_4494f0
// 地址: 0x4494f0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

*arg1 = 0x66
arg1[1] = 0

if (data_4ca070 == 0)
    arg1[2] = 2
    arg1[3] = 0
else
    bool cond:1_1 = data_4ca074 == 0
    arg1[3] = 0
    
    if (cond:1_1)
        arg1[2] = 1
    else
        arg1[2] = 3

int32_t edi = sx.d(arg3)
int32_t eax_3
int32_t edx
edx:eax_3 = sx.q((edi + 0x3f) s>> 6 & 0x3f)
int32_t eax_6
int32_t edx_1
edx_1:eax_6 = sx.q(zx.d(arg2) & 0xf)
int32_t ecx_1 = eax_3 | eax_6 << 6
arg1[4] = ecx_1 << 9
arg1[5] = (edx | edx_1 << 6 | eax_6 u>> 0xffffffe6) << 9 | ecx_1 u>> 0xffffffe9
int32_t eax_7
eax_7.w = data_4ca072
int32_t eax_51
int32_t ebx_10
int32_t edi_13
int32_t eax_33
int32_t ecx_10
int32_t edi_5

if (eax_7.w != 2)
    if (eax_7.w != 3)
        int32_t var_14 = sx.d(eax_7.w)
        char const* const var_18 = "sceGsDefDispEnv:Not support displaymode for %d!!\n"
        int32_t eax_94 = sub_447f40()
        arg1[8] = 0
        arg1[9] = 0
        return eax_94
    
    int32_t temp0_1 = divs.dp.d(sx.q(edi + 0x9ff), edi)
    
    if (data_4ca070 == 1)
        int32_t eax_58
        int32_t edx_19
        edx_19:eax_58 = sx.q((sx.d(arg4) << (data_4ca074 != 0)) - 1)
        arg3.d = edx_19 << 0xc | eax_58 u>> 0xffffffec
        int32_t eax_64
        int32_t edx_21
        edx_21:eax_64 = sx.q(temp0_1 * edi - 1)
        int32_t ecx_15 = eax_58 << 0xc | eax_64
        int32_t eax_69
        int32_t edx_22
        edx_22:eax_69 = sx.q(temp0_1 - 1)
        int32_t ecx_17 = ecx_15 << 9 | eax_69
        int32_t eax_73
        int32_t edx_23
        edx_23:eax_73 = sx.q((arg6 + 0x48) & 0xfff)
        int32_t ecx_19 = ecx_17 << 0xb | eax_73
        edi_5 = (((arg3.d | edx_21) << 9 | ecx_15 u>> 0xffffffe9 | edx_22) << 0xb
            | ecx_17 u>> 0xffffffeb | edx_23) << 0xc | ecx_19 u>> 0xffffffec
        int32_t eax_76
        int32_t edx_24
        edx_24:eax_76 = sx.q(sx.d(arg5) * temp0_1)
        ecx_10 = ecx_19 << 0xc
        eax_33 = eax_76 + 0x290
        goto label_449606
    
    int32_t eax_79
    int32_t edx_25
    edx_25:eax_79 = sx.q(temp0_1 * edi - 1)
    int32_t eax_82
    int32_t edx_26
    edx_26:eax_82 = sx.q(sx.d(arg4) - 1)
    int32_t edi_19 = eax_79 | eax_82 << 0xc
    int32_t eax_85
    int32_t edx_28
    edx_28:eax_85 = sx.q(temp0_1 - 1)
    int32_t edi_21 = edi_19 << 9 | eax_85
    int32_t eax_89
    int32_t edx_29
    edx_29:eax_89 = sx.q((arg6 + 0x24) & 0xfff)
    int32_t edi_23 = edi_21 << 0xb | eax_89
    ebx_10 = (((edx_25 | edx_26 << 0xc | eax_82 u>> 0xffffffec) << 9 | edi_19 u>> 0xffffffe9
        | edx_28) << 0xb | edi_21 u>> 0xffffffeb | edx_29) << 0xc | edi_23 u>> 0xffffffec
    int32_t eax_92
    int32_t edx_30
    edx_30:eax_92 = sx.q(sx.d(arg5) * temp0_1)
    edi_13 = edi_23 << 0xc
    eax_51 = eax_92 + 0x290
else
    int32_t temp0 = divs.dp.d(sx.q(edi + 0x9ff), edi)
    
    if (data_4ca070 == 1)
        int32_t eax_14
        int32_t edx_5
        edx_5:eax_14 = sx.q((sx.d(arg4) << (data_4ca074 != 0)) - 1)
        arg3.d = edx_5 << 0xc | eax_14 u>> 0xffffffec
        int32_t eax_20
        int32_t edx_7
        edx_7:eax_20 = sx.q(temp0 * edi - 1)
        int32_t ecx_5 = eax_14 << 0xc | eax_20
        int32_t eax_25
        int32_t edx_8
        edx_8:eax_25 = sx.q(temp0 - 1)
        int32_t ecx_7 = ecx_5 << 9 | eax_25
        int32_t eax_29
        int32_t edx_9
        edx_9:eax_29 = sx.q((arg6 + 0x32) & 0xfff)
        int32_t ecx_9 = ecx_7 << 0xb | eax_29
        edi_5 = (((arg3.d | edx_7) << 9 | ecx_5 u>> 0xffffffe9 | edx_8) << 0xb
            | ecx_7 u>> 0xffffffeb | edx_9) << 0xc | ecx_9 u>> 0xffffffec
        int32_t eax_32
        int32_t edx_10
        edx_10:eax_32 = sx.q(sx.d(arg5) * temp0)
        ecx_10 = ecx_9 << 0xc
        eax_33 = eax_32 + 0x27c
    label_449606:
        int32_t eax_34 = eax_33 & 0xfff
        arg1[7] = edi_5
        arg1[8] = 0
        arg1[9] = 0
        arg1[6] = ecx_10 | eax_34
        return eax_34
    
    int32_t eax_37
    int32_t edx_11
    edx_11:eax_37 = sx.q(temp0 * edi - 1)
    int32_t eax_40
    int32_t edx_12
    edx_12:eax_40 = sx.q(sx.d(arg4) - 1)
    int32_t edi_8 = eax_37 | eax_40 << 0xc
    int32_t eax_43
    int32_t edx_14
    edx_14:eax_43 = sx.q(temp0 - 1)
    int32_t edi_10 = edi_8 << 9 | eax_43
    int32_t eax_47
    int32_t edx_15
    edx_15:eax_47 = sx.q((arg6 + 0x19) & 0xfff)
    int32_t edi_12 = edi_10 << 0xb | eax_47
    ebx_10 = (((edx_11 | edx_12 << 0xc | eax_40 u>> 0xffffffec) << 9 | edi_8 u>> 0xffffffe9
        | edx_14) << 0xb | edi_10 u>> 0xffffffeb | edx_15) << 0xc | edi_12 u>> 0xffffffec
    int32_t eax_50
    int32_t edx_16
    edx_16:eax_50 = sx.q(sx.d(arg5) * temp0)
    edi_13 = edi_12 << 0xc
    eax_51 = eax_50 + 0x27c
int32_t eax_93 = eax_51 & 0xfff
arg1[6] = edi_13 | eax_93
arg1[7] = ebx_10
arg1[8] = 0
arg1[9] = 0
return eax_93
