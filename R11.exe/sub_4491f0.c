// 函数: sub_4491f0
// 地址: 0x4491f0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ebx_2
int32_t esi_3

if (arg4 != 0)
    int32_t eax_32
    int32_t edx_15
    edx_15:eax_32 = sx.q(arg2[8])
    int32_t eax_35
    int32_t edx_16
    edx_16:eax_35 = sx.q(arg2[1])
    esi_3 = arg1
    int32_t eax_37
    int32_t edx_17
    edx_17:eax_37 = sx.q(arg2[7])
    *(esi_3 + 0x20) = 0
    *(esi_3 + 0x24) = (eax_32 << 8 | eax_35) << 0x10 | eax_37
    int16_t eax_38 = arg2[2]
    
    if (eax_38 == 0x14)
        *(esi_3 + 0x40) = 8
        *(esi_3 + 0x44) = 2
        int32_t eax_41
        int32_t edx_19
        edx_19:eax_41 = sx.q(sub_460120(sx.d(arg2[8])) << 4)
        int32_t eax_44
        int32_t edx_21
        edx_21:eax_44 = sx.q((eax_41 + (edx_19 & 0xf)) s>> 4)
        ebx_2 = (eax_44 + (edx_21 & 7)) s>> 3
    else if (eax_38 != 0x13)
        sub_465480(".\emu.cpp", 0xa82)
        ebx_2 = arg1
    else
        *(esi_3 + 0x40) = 0x10
        *(esi_3 + 0x44) = 0x10
        int32_t eax_49
        int32_t edx_23
        edx_23:eax_49 = sx.q(sub_460120(sx.d(arg2[8])) << 4)
        int32_t eax_52
        int32_t edx_25
        edx_25:eax_52 = sx.q((eax_49 + (edx_23 & 0xf)) s>> 4)
        ebx_2 = (eax_52 + (edx_25 & 0xf)) s>> 4
    
    *(esi_3 + 0x34) = 0
else
    data_c5e164 = sx.d(arg2[2])
    int32_t ecx = sx.d(arg2[1])
    
    if (ecx == 0)
        int32_t eax_3
        int32_t edx_1
        edx_1:eax_3 = sx.q(sx.d(arg2[5]) + 0x3f)
        ecx = (eax_3 + (edx_1 & 0x3f)) s>> 6
    
    int32_t eax_6
    int32_t edx_3
    edx_3:eax_6 = sx.q(arg2[2])
    int32_t eax_9
    int32_t edx_4
    edx_4:eax_9 = sx.q(ecx)
    int32_t eax_11
    int32_t edx_5
    edx_5:eax_11 = sx.q(*arg2)
    esi_3 = arg1
    *(esi_3 + 0x20) = 0
    *(esi_3 + 0x24) = (eax_6 << 8 | eax_9) << 0x10 | eax_11
    int32_t ebx = sx.d(arg2[5])
    int32_t ebp_1 = sx.d(arg2[6])
    int32_t eax_15
    int32_t edx_7
    edx_7:eax_15 = sx.q(sub_460120(sx.d(arg2[2])) * ebp_1 * ebx)
    int32_t eax_18
    int32_t edx_9
    edx_9:eax_18 = sx.q((eax_15 + (edx_7 & 0xf)) s>> 4)
    ebx_2 = (eax_18 + (edx_9 & 7)) s>> 3
    
    if (sub_448500(arg3) != 0)
        ebx_2 = 0x100
    
    int32_t eax_23
    int32_t edx_11
    edx_11:eax_23 = sx.q(ebp_1)
    int32_t eax_25
    int32_t edx_12
    edx_12:eax_25 = sx.q(ebx)
    *(esi_3 + 0x40) = eax_25
    *(esi_3 + 0x44) = eax_23 | edx_12
    int32_t eax_27
    int32_t edx_13
    edx_13:eax_27 = sx.q(arg2[4])
    int32_t eax_30
    int32_t edx_14
    edx_14:eax_30 = sx.q(arg2[3])
    *(esi_3 + 0x34) = eax_27 << 0x10 | eax_30

*(esi_3 + 0x30) = 0
*(esi_3 + 0x50) = 0
*(esi_3 + 0x54) = 0

if (ebx_2 s>= 0x100000)
    sub_465480(".\emu.cpp", 0xa89)

int32_t ebp_4 = *(esi_3 + 0x64)
*(esi_3 + 0x62) = (ebx_2 s>> 0xf).w
int32_t eax_56
int32_t edx_27
edx_27:eax_56 = sx.q(ebx_2 & 0x7fff)
int32_t eax_57 = eax_56 | (*(esi_3 + 0x60) & 0xffff8000)
*(esi_3 + 0x60) = eax_57
uint32_t ebp_5 = zx.d(*(esi_3 + 0x62))
*(esi_3 + 0x64) = edx_27 | ebp_4
int32_t ebp_7 = ebp_5 << 0xf | (eax_57 & 0x7fff)

if (ebx_2 != ebp_7)
    sub_465480(".\emu.cpp", 0xa96)

if (ebp_7 == 0)
    sub_465480(".\emu.cpp", 0xa99)

int32_t* result = arg3
*(esi_3 + 0x70) = ebx_2.w
*(esi_3 + 0x73) = 0x30
*(esi_3 + 0x74) = result
*(esi_3 + 0x78) = ebx_2 s>> 0x10

if (arg4 == 0)
    int32_t eax_61
    int32_t edx_32
    edx_32:eax_61 = sx.q(sub_460120(sx.d(arg2[2])) * sx.d(arg2[6]) * sx.d(arg2[5]))
    int32_t eax_65
    char edx_34
    edx_34:eax_65 = sx.q(((eax_61 + (edx_32 & 7)) s>> 3) + 0xff)
    result = ((eax_65 + zx.d(edx_34)) s>> 8) + sx.d(*arg2)
    
    if (result s> 0x4000)
        int32_t* result_1 = result
        return sub_4653f0("%x\n")

return result
