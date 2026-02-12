// 函数: sub_447790
// 地址: 0x447790
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t eax_5
int32_t eax_17
int32_t eax_50
int32_t eax_70
int32_t edx
int32_t edx_2
int32_t edx_7
int32_t edx_10

switch (arg1)
    case 0x2001
        edx_7:eax_50 = sx.q(arg2 * 3 + 1)
        return ((eax_50 - edx_7) s>> 1) + 4
    case 0x2004
        int32_t eax_11
        int32_t edx_1
        edx_1:eax_11 = sx.q(arg2 * 2 + 3)
        return ((eax_11 - edx_1) s>> 1) + 4
    case 0x2009
        edx:eax_5 = sx.q((arg2 << 2) + 1)
        return ((eax_5 - edx) s>> 1) + 4
    case 0x200c
        edx_2:eax_17 = sx.q(arg2 * 2 + 5)
        return ((eax_17 - edx_2) s>> 1) + 4
    case 0x2114
        int32_t eax_36
        int32_t edx_5
        edx_5:eax_36 = sx.q(arg2 * 3 + 5)
        return ((eax_36 - edx_5) s>> 1) + 4
    case 0x2116
        if (arg2 != 1)
            sub_465480(".\emu.cpp", 0x929)
        
        int32_t eax_30
        int32_t edx_4
        edx_4:eax_30 = sx.q(arg2 * 5 + 1)
        return ((eax_30 - edx_4) s>> 1) + 4
    case 0x211c
        if (arg2 != 2)
            sub_465480(".\emu.cpp", 0x937)
        
        int32_t eax_25
        int32_t edx_3
        edx_3:eax_25 = sx.q(arg2 * 3 + 7)
        return ((eax_25 - edx_3) s>> 1) + 4
    case 0x2801
        edx_10:eax_70 = sx.q(arg2 * 2 + 1)
        return ((eax_70 - edx_10) s>> 1) + 4
    case 0x2803
        edx_7:eax_50 = sx.q(arg2 * 3 + 1)
        return ((eax_50 - edx_7) s>> 1) + 4
    case 0x2804
        int32_t eax_44
        int32_t edx_6
        edx_6:eax_44 = sx.q(arg2 + 3)
        return ((eax_44 - edx_6) s>> 1) + 4
    case 0x2806
        if (arg2 != 1)
            sub_465480(".\emu.cpp", 0x92e)
        
        int32_t eax_55
        int32_t edx_8
        edx_8:eax_55 = sx.q(arg2 * 2 + 1)
        return ((eax_55 - edx_8) s>> 1) + 4
    case 0x2910
        edx_10:eax_70 = sx.q(arg2 * 2 + 1)
        return ((eax_70 - edx_10) s>> 1) + 4
    case 0x2913
        int32_t eax_64
        int32_t edx_9
        edx_9:eax_64 = sx.q(arg2 * 6 + 1)
        return ((eax_64 - edx_9) s>> 1) + 4
    case 0x2914
        edx_2:eax_17 = sx.q(arg2 * 2 + 5)
        return ((eax_17 - edx_2) s>> 1) + 4
    case 0x2916
        edx:eax_5 = sx.q((arg2 << 2) + 1)
        return ((eax_5 - edx) s>> 1) + 4
    case 0x4000
        if (arg2 != 0)
            sub_465480(".\emu.cpp", 0x94d)
        
        return 6
    case 0x5000
        if (arg2 != 0)
            sub_465480(".\emu.cpp", 0x952)
        
        return 5
    case 0x7000
        if (arg2 != 0)
            sub_465480(".\emu.cpp", 0x946)
        
        return 0xb
    case 0x9000
        return arg2 + 2

sub_465480(".\emu.cpp", 0x956)
return 0
