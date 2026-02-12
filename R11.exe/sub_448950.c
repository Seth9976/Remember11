// 函数: sub_448950
// 地址: 0x448950
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t eax_11
int32_t ebx_5
int16_t* edi

switch (arg2)
    case 0x2001
        edi = arg1
        *edi = sub_447790(0x2001, arg3) - 1
        *(edi + 3) = 0x20
        *(edi + 4) = 0
        int32_t eax_22
        int32_t edx_5
        edx_5:eax_22 = sx.q(data_c5f710)
        int32_t eax_25
        int32_t edx_6
        edx_6:eax_25 = sx.q(data_c5f70c)
        int32_t edx_7
        edx_7:eax_11 = sx.q(arg3)
        ebx_5 = ((eax_22 * 2) | eax_25) << 0x15 | edx_7 | 0x3480c000
        *(edi + 0x38) = 0x441
        goto label_448ee8
    case 0x2004
        edi = arg1
        *edi = sub_447790(0x2004, arg3) - 1
        *(edi + 3) = 0x20
        *(edi + 4) = 0
        int32_t eax_15
        int32_t edx_3
        edx_3:eax_15 = sx.q(data_c5f710)
        int32_t eax_18
        int32_t edx_4
        edx_4:eax_18 = sx.q(data_c5f70c)
        ebx_5 = ((eax_15 * 2) | eax_18) << 0x15 | 0x64024000
        *(edi + 0x30) = 0x8001
        *(edi + 0x38) = 0x414441
        goto label_448eeb
    case 0x2009
        edi = arg1
        *edi = sub_447790(0x2009, arg3) - 1
        *(edi + 3) = 0x20
        *(edi + 4) = 0
        int32_t eax_6
        int32_t edx
        edx:eax_6 = sx.q(data_c5f710)
        int32_t eax_9
        int32_t edx_1
        edx_1:eax_9 = sx.q(data_c5f70c)
        int32_t edx_2
        edx_2:eax_11 = sx.q(arg3 * 2)
        ebx_5 = ((eax_6 * 2) | eax_9) << 0x15 | edx_2 | 0x2404c000
        *(edi + 0x38) = 0x41
        goto label_448ee8
    case 0x200c
        edi = arg1
        *edi = sub_447790(0x200c, arg3) - 1
        *(edi + 3) = 0x20
        *(edi + 4) = 0
        int32_t eax_30
        int32_t edx_8
        edx_8:eax_30 = sx.q(data_c5f710)
        int32_t eax_33
        int32_t edx_9
        edx_9:eax_33 = sx.q(data_c5f70c)
        int32_t edx_10
        edx_10:eax_11 = sx.q(arg3 + 2)
        ebx_5 = ((eax_30 * 2) | eax_33) << 0x15 | edx_10 | 0x24064000
        *(edi + 0x38) = 0x41
        goto label_448ee8
    case 0x2114
        if (arg3 != 2)
            sub_465480(".\emu.cpp", 0x8b6)
        
        *arg1 = sub_447790(0x2114, arg3) - 1
        *(arg1 + 3) = 0x20
        *(arg1 + 4) = 0
        int32_t eax_56
        int32_t edx_16
        edx_16:eax_56 = sx.q(data_c5f710)
        int32_t eax_59
        int32_t edx_17
        edx_17:eax_59 = sx.q(data_c5f70c)
        *(arg1 + 0x30) = 0x8001
        *(arg1 + 0x34) = ((eax_56 * 2) | eax_59) << 0x15 | 0xa48a4000
        *(arg1 + 0x38) = 0x14343431
        *(arg1 + 0x3c) = 0x43
        sub_448900(arg1)
        return sub_447790(arg2, arg3)
    case 0x2116
        edi = arg1
        *edi = sub_447790(0x2116, arg3) - 1
        *(edi + 3) = 0x20
        *(edi + 4) = 0
        int32_t eax_49
        int32_t edx_14
        edx_14:eax_49 = sx.q(data_c5f710)
        int32_t eax_52
        int32_t edx_15
        edx_15:eax_52 = sx.q(data_c5f70c)
        ebx_5 = ((eax_49 * 2) | eax_52) << 0x15 | 0x548b4000
        *(edi + 0x30) = 0x8001
        *(edi + 0x38) = 0x43431
        goto label_448eeb
    case 0x211c
        edi = arg1
        *edi = sub_447790(0x211c, arg3) - 1
        *(edi + 3) = 0x20
        *(edi + 4) = 0
        int32_t eax_41
        int32_t edx_11
        edx_11:eax_41 = sx.q(data_c5f710)
        int32_t eax_44
        int32_t edx_12
        edx_12:eax_44 = sx.q(data_c5f70c)
        int32_t edx_13
        edx_13:eax_11 = sx.q(arg3 + 2)
        ebx_5 = ((eax_41 * 2) | eax_44) << 0x15 | edx_13 | 0x348e4000
        *(edi + 0x38) = 0x413
        goto label_448ee8
    case 0x2801
        edi = arg1
        *edi = sub_447790(0x2801, arg3) - 1
        *(edi + 3) = 0x20
        *(edi + 4) = 0
        int32_t eax_64
        int32_t edx_18
        edx_18:eax_64 = sx.q(data_c5f710)
        int32_t eax_67
        int32_t edx_19
        edx_19:eax_67 = sx.q(data_c5f70c)
        int32_t edx_20
        edx_20:eax_11 = sx.q(arg3)
        ebx_5 = ((eax_64 * 2) | eax_67) << 0x15 | edx_20 | 0x2400c000
        *(edi + 0x38) = 0x44
    label_448ee8:
        *(edi + 0x30) = eax_11 | 0x8000
    label_448eeb:
        *(edi + 0x34) = ebx_5
        *(edi + 0x3c) = 0
        sub_448900(edi)
        return sub_447790(arg2, arg3)
    case 0x2803
        edi = arg1
        *edi = sub_447790(0x2803, arg3) - 1
        *(edi + 3) = 0x20
        *(edi + 4) = 0
        int32_t eax_90
        int32_t edx_26
        edx_26:eax_90 = sx.q(data_c5f710)
        int32_t eax_93
        int32_t edx_27
        edx_27:eax_93 = sx.q(data_c5f70c)
        int32_t edx_28
        edx_28:eax_11 = sx.q(arg3)
        ebx_5 = ((eax_90 * 2) | eax_93) << 0x15 | edx_28 | 0x3401c000
        *(edi + 0x38) = 0x444
        goto label_448ee8
    case 0x2804
        edi = arg1
        *edi = sub_447790(0x2804, arg3) - 1
        *(edi + 3) = 0x20
        *(edi + 4) = 0
        int32_t eax_82
        int32_t edx_23
        edx_23:eax_82 = sx.q(data_c5f710)
        int32_t eax_85
        int32_t edx_24
        edx_24:eax_85 = sx.q(data_c5f70c)
        int32_t edx_25
        edx_25:eax_11 = sx.q(arg3 + 2)
        ebx_5 = ((eax_82 * 2) | eax_85) << 0x15 | edx_25 | 0x14824000
        *(edi + 0x38) = 4
        goto label_448ee8
    case 0x2806
        edi = arg1
        *edi = sub_447790(0x2806, arg3) - 1
        *(edi + 3) = 0x20
        *(edi + 4) = 0
        int32_t eax_75
        int32_t edx_21
        edx_21:eax_75 = sx.q(data_c5f710)
        int32_t eax_78
        int32_t edx_22
        edx_22:eax_78 = sx.q(data_c5f70c)
        ebx_5 = ((eax_75 * 2) | eax_78) << 0x15 | 0x24034000
        *(edi + 0x30) = 0x8001
        *(edi + 0x38) = 0x44
        goto label_448eeb
    case 0x2910
        edi = arg1
        *edi = sub_447790(0x2910, arg3) - 1
        *(edi + 3) = 0x20
        *(edi + 4) = 0
        int32_t eax_98
        int32_t edx_29
        edx_29:eax_98 = sx.q(data_c5f710)
        int32_t eax_101
        int32_t edx_30
        edx_30:eax_101 = sx.q(data_c5f70c)
        int32_t edx_31
        edx_31:eax_11 = sx.q(arg3)
        ebx_5 = ((eax_98 * 2) | eax_101) << 0x15 | edx_31 | 0x24884000
        *(edi + 0x38) = 0x43
        goto label_448ee8
    case 0x2913
        edi = arg1
        *edi = sub_447790(0x2913, arg3) - 1
        *(edi + 3) = 0x20
        *(edi + 4) = 0
        int32_t eax_127
        int32_t edx_38
        edx_38:eax_127 = sx.q(data_c5f710)
        int32_t eax_130
        int32_t edx_39
        edx_39:eax_130 = sx.q(data_c5f70c)
        int32_t edx_40
        edx_40:eax_11 = sx.q(arg3)
        ebx_5 = ((eax_127 * 2) | eax_130) << 0x15 | edx_40 | 0x6409c000
        *(edi + 0x38) = 0x434343
        goto label_448ee8
    case 0x2914
        edi = arg1
        *edi = sub_447790(0x2914, arg3) - 1
        *(edi + 3) = 0x20
        *(edi + 4) = 0
        int32_t eax_119
        int32_t edx_35
        edx_35:eax_119 = sx.q(data_c5f710)
        int32_t eax_122
        int32_t edx_36
        edx_36:eax_122 = sx.q(data_c5f70c)
        int32_t edx_37
        edx_37:eax_11 = sx.q(arg3 + 2)
        ebx_5 = ((eax_119 * 2) | eax_122) << 0x15 | edx_37 | 0x248a4000
        *(edi + 0x38) = 0x43
        goto label_448ee8
    case 0x2916
        edi = arg1
        *edi = sub_447790(0x2916, arg3) - 1
        *(edi + 3) = 0x20
        *(edi + 4) = 0
        int32_t eax_111
        int32_t edx_32
        edx_32:eax_111 = sx.q(data_c5f710)
        int32_t eax_114
        int32_t edx_33
        edx_33:eax_114 = sx.q(data_c5f70c)
        int32_t edx_34
        edx_34:eax_11 = sx.q(arg3)
        ebx_5 = ((eax_111 * 2) | eax_114) << 0x15 | edx_34 | 0x448b4000
        *(edi + 0x38) = 0x4343
        goto label_448ee8

sub_465480(".\emu.cpp", 0x90a)
return sub_447790(arg2, arg3)
