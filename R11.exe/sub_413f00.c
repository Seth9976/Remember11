// 函数: sub_413f00
// 地址: 0x413f00
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t eax = sx.d(*(arg1 + 0x10))

if (eax == 0)
    *(data_e7e648 + 0x2082e) = 0
    *(arg1 + 0x10) = 1
else if (eax != 1)
    return 0

void* eax_5 = data_e7e648
int16_t ecx = *(eax_5 + 0x2082e)

if (ecx u> 0x4b0)
    sub_412f90(0, 0, 0)
    return 0

uint32_t ebx
int32_t esi

if (ecx u> 0x3b0)
    *(eax_5 + 0x2082e) += 4
    esi = 0
    ebx = 0x4b0 - zx.d(*(data_e7e648 + 0x2082e))
else if (ecx u> 0x258)
    *(eax_5 + 0x2082e) += 0xa
    uint32_t ecx_2 = zx.d(*(data_e7e648 + 0x2082e))
    esi = 0x358 - ecx_2
    
    if (0x358 - ecx_2 s< 0)
        esi = 0
    
    ebx = 0x100
else if (ecx u<= 0x100)
    *(eax_5 + 0x2082e) += 4
    ebx = zx.d(*(data_e7e648 + 0x2082e))
    esi = 0
else
    *(eax_5 + 0x2082e) += 0xa
    esi = zx.d(*(data_e7e648 + 0x2082e)) - 0x100
    
    if (esi s> 0x100)
        esi = 0xff
    
    ebx = 0x100

sub_442e20()
data_c7bbe0 = 0xa
int32_t var_64 = 0x80
int32_t var_68 = 0x80
int32_t var_6c = 0x80
int32_t var_1c = 0x80
int32_t var_20 = 0x80
int32_t var_24 = 0x80

for (int32_t i = 0; i s< 0x10800; i += 0x800)
    uint32_t eax_9 = sub_441360(i)
    uint32_t eax_10 = sub_441360(i + 0x800)
    uint32_t eax_11 = sub_441380(i)
    uint32_t eax_12 = sub_441380(i + 0x800)
    void* ecx_3 = data_e7e648
    int32_t var_3c_1 = 0xff
    int32_t var_84_1 = 0xff
    uint32_t var_80_1 = zx.d(*(ecx_3 + 0x2082a))
    uint32_t var_7c_1 = zx.d(*(ecx_3 + 0x2082c))
    uint32_t var_38_1 = zx.d(*(ecx_3 + 0x2082a))
    uint32_t var_34_1 = zx.d(*(ecx_3 + 0x2082c))
    int32_t eax_17
    int16_t edx_5
    edx_5:eax_17 = sx.q(eax_10 * 0x3c0)
    int32_t eax_21
    int16_t edx_7
    edx_7:eax_21 = sx.q(eax_12 * 0x500)
    int32_t eax_25
    int16_t edx_9
    edx_9:eax_25 = sx.q(eax_9 * 0x3c0)
    int32_t eax_27 = (eax_25 + zx.d(edx_9)) s>> 0x10
    int32_t eax_30
    int16_t edx_11
    edx_11:eax_30 = sx.q(eax_11 * 0x500)
    int32_t edi_4 = (eax_21 + zx.d(edx_7)) s>> 0x10
    int32_t ebp_3 = (eax_17 + zx.d(edx_5)) s>> 0x10
    int32_t eax_32 = (eax_30 + zx.d(edx_11)) s>> 0x10
    int32_t var_ac_1 = eax_32
    int32_t var_b0_1 = ebp_3
    int32_t var_b4 = edi_4
    int32_t var_b8_1 = eax_27
    int32_t var_a8_1 = esi - 0xff
    int32_t var_bc_2 = 8
    
    while (true)
        int32_t eax_35
        int32_t edx_14
        edx_14:eax_35 = sx.q(var_a8_1)
        int32_t var_18_1 = ((eax_35 + (edx_14 & 7)) s>> 3) + 0xff
        int32_t var_60_1 = ((eax_35 + (edx_14 & 7)) s>> 3) + 0xff
        int32_t eax_40
        int32_t edx_16
        edx_16:eax_40 = sx.q(var_ac_1)
        int32_t eax_44
        char edx_18
        edx_18:eax_44 = sx.q(((eax_40 + (edx_16 & 7)) s>> 3) * ebx)
        int32_t var_5c_1 = ((eax_44 + zx.d(edx_18)) s>> 8) + zx.d(*(ecx_3 + 0x2082a))
        int32_t eax_49
        int32_t edx_21
        edx_21:eax_49 = sx.q(var_b8_1)
        int32_t eax_53
        char edx_23
        edx_23:eax_53 = sx.q(((eax_49 + (edx_21 & 7)) s>> 3) * ebx)
        int32_t var_58_1 = ((eax_53 + zx.d(edx_23)) s>> 8) + zx.d(*(ecx_3 + 0x2082c))
        int32_t eax_58
        int32_t edx_26
        edx_26:eax_58 = sx.q(var_b4)
        int32_t eax_62
        char edx_28
        edx_28:eax_62 = sx.q(((eax_58 + (edx_26 & 7)) s>> 3) * ebx)
        int32_t var_14_1 = ((eax_62 + zx.d(edx_28)) s>> 8) + zx.d(*(ecx_3 + 0x2082a))
        int32_t eax_67
        int32_t edx_31
        edx_31:eax_67 = sx.q(var_b0_1)
        int32_t eax_71
        char edx_33
        edx_33:eax_71 = sx.q(((eax_67 + (edx_31 & 7)) s>> 3) * ebx)
        int32_t var_10_1 = ((eax_71 + zx.d(edx_33)) s>> 8) + zx.d(*(ecx_3 + 0x2082c))
        void var_90
        sub_443570(&var_90, 3)
        var_a8_1 += esi - 0xff
        var_b8_1 += eax_27
        __builtin_memcpy(&var_90, &var_6c, 0x24)
        void var_48
        __builtin_memcpy(&var_48, &var_24, 0x24)
        var_ac_1 += eax_32
        var_b4 += edi_4
        var_b0_1 += ebp_3
        int32_t temp3_1 = var_bc_2
        var_bc_2 -= 1
        
        if (temp3_1 == 1)
            break
        
        ecx_3 = data_e7e648

sub_442f40()
return 0
