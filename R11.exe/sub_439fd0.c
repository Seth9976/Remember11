// 函数: sub_439fd0
// 地址: 0x439fd0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t eax_7
int16_t edx_3
edx_3:eax_7 = sx.q(sub_441360((arg1 << 0x10) s/ 0x3c) * 4)
int32_t eax_9
int32_t edx_5
edx_5:eax_9 = muls.dp.d(0x88888889, arg1)
int32_t edx_7 = (edx_5 + arg1) s>> 5
int32_t ecx_4 = arg1 s/ 0x3c
int32_t edi_4

if (edx_7 u>> 0x1f != neg.d(edx_7))
    bool cond:0_1
    
    if (ecx_4 s> 0xa)
        int32_t edx_20 = ecx_4 & 0x80000003
        cond:0_1 = edx_20 != 0
        
        if (edx_20 s< 0)
            cond:0_1 = ((edx_20 - 1) | 0xfffffffc) != 0xffffffff
    
    if (ecx_4 s<= 0xa || cond:0_1)
        edi_4 = 0
    else
        int32_t eax_24
        int32_t edx_24
        edx_24:eax_24 = sx.q(arg2[2] + 0x14)
        int32_t edi_6 = (eax_24 - edx_24) s>> 1
        int32_t eax_34
        int16_t edx_28
        edx_28:eax_34 = sx.q(sub_441380(((arg1 s% 0x3c) << 0x10) s/ 0x3c) * edi_6)
        edi_4 = ((eax_34 + zx.d(edx_28)) s>> 0x10) + edi_6
else
    int32_t eax_12
    int32_t edx_8
    edx_8:eax_12 = sx.q(arg2[2] + 0x14)
    int32_t edi_1 = (eax_12 - edx_8) s>> 1
    int32_t eax_20
    int16_t edx_17
    edx_17:eax_20 = sx.q(sub_441380(((arg1 s% 0x3c) << 0x10) s/ 0x3c) * edi_1)
    edi_4 = ((eax_20 + zx.d(edx_17)) s>> 0x10) + edi_1

int32_t var_28 = *arg2 + edi_4 - 0xd
int32_t eax_38
int32_t edx_31
edx_31:eax_38 = sx.q(0x20 - arg2[3])
int32_t var_24 = ((eax_38 - edx_31) s>> 1) + arg2[1] + ((eax_7 + zx.d(edx_3)) s>> 0x10) + 0xc
int32_t var_2c = ((arg1 s% 0xb4) << 0x10) s/ 0xb4
int32_t* ecx_17 = data_c7bbc0
int32_t var_20 = 0
int32_t var_1c
__builtin_memcpy(&var_1c, 
    "\x60\x00\x00\x00\x20\x00\x00\x00\x20\x00\x00\x00\x10\x00\x00\x00\x10\x00\x00\x00\x00\x00\x01\x00\x"
"00\x00\x01\x00", 
    0x1c)
int32_t var_30 = 0
int32_t var_34 = 0
sub_445ff0(*ecx_17 + 0x134, &var_28, &var_34, 0, arg4)
var_28 += arg2[2] + ((0xa - edi_4) << 1)
sub_445ff0(*data_c7bbc0 + 0x134, &var_28, &var_34, 0, arg4)
sub_442c30(*data_c7bbc0 + 0x134, arg4)
int32_t var_78 = arg4
return sub_439d90(nullptr, &arg2[4], arg3)
