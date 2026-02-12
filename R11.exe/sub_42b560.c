// 函数: sub_42b560
// 地址: 0x42b560
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* ecx = data_4bf344
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(0x180 - *(ecx + 0x15a44))
int32_t var_18 = ((eax_1 - edx) s>> 1) + 0xb0
int32_t var_14 = 0x58
sub_43c040(ecx + 0x15834, &var_18, nullptr, 0xa)
int32_t esi = *(arg1 * 0x18 + 0x4bf014)

if (esi + 1 s> 1)
    void* ecx_3 = data_4bf344
    int32_t ebp_1 = 0x10
    int32_t edi_1 = 0x21c
    int32_t var_20_1 = 0
    int32_t var_1c_1 = 0x88
    int32_t esi_6
    
    do
        data_4bf3e8 = 0xb0
        int32_t eax_8
        
        if (esi s<= 4)
            eax_8 = var_1c_1
        else
            eax_8 = divs.dp.d(0xa0, esi) * var_20_1 + 0x78
        
        int32_t edx_3 = (&data_4bf018)[arg1 * 6]
        data_4bf3ec = eax_8
        int32_t var_14_1 = eax_8
        int32_t edx_4 = *(edx_3 + ebp_1 - 0x10)
        
        if (edx_4 u<= 6)
            int32_t edx_11
            
            switch (edx_4)
                case 0
                    var_18 = 0xf0
                    sub_43c100(edi_1 + ecx_3 + 0x15834, &var_18, nullptr, 0xa)
                    int32_t eax_9 = (&data_4bf018)[arg1 * 6]
                    var_18 += 0xea
                    sub_42b230(eax_9, &var_18, *(eax_9 + ebp_1 - 0xc), &var_18, nullptr, 0xa, 0)
                case 1
                    bool cond:0_1 = var_20_1 == *(arg1 * 0x18 + &data_4bf010)
                    var_18 = 0xf0
                    void* esi_2 = &data_4bf3cc
                    
                    if (not(cond:0_1))
                        esi_2 = &data_4bf3b4
                    
                    *esi_2 = 0xf0
                    *esi_2 -= 0x20
                    *(esi_2 + 4) = eax_8
                    sub_43c040(edi_1 + ecx_3 + 0x15834, &var_18, nullptr, 0xa)
                    void* ecx_6 = data_4bf344
                    *(esi_2 + 4) += 4
                    sub_445470(ecx_6 + 0x1f15c, esi_2, 0x4bf3e4, 0xa)
                    sub_442c30(data_4bf344 + 0x1f15c, 0xa)
                case 2
                    bool cond:1_1 = var_20_1 == *(arg1 * 0x18 + &data_4bf010)
                    var_18 = 0xf0
                    void* esi_4 = &data_4bf3cc
                    
                    if (not(cond:1_1))
                        esi_4 = &data_4bf3b4
                    
                    *(esi_4 + 4) = eax_8
                    *esi_4 = 0xf0
                    *esi_4 -= 0x20
                    sub_43c100(edi_1 + ecx_3 + 0x15834, &var_18, nullptr, 0xa)
                    void* edx_8 = data_4bf344
                    *(esi_4 + 4) += 4
                    sub_445470(edx_8 + 0x1f15c, esi_4, 0x4bf3e4, 0xa)
                    sub_442c30(data_4bf344 + 0x1f15c, 0xa)
                case 3
                    var_18 = 0xc0
                    sub_43c040(edi_1 + ecx_3 + 0x15834, &var_18, nullptr, 0xa)
                case 4
                    int32_t eax_15
                    int32_t edx_10
                    edx_10:eax_15 = sx.q(0x160 - *(edi_1 + ecx_3 + 0x15a44))
                    var_18 = ((eax_15 - edx_10) s>> 1) + 0xc0
                    sub_43c040(edi_1 + ecx_3 + 0x15834, &var_18, nullptr, 0xa)
                case 5
                    var_18 = 0xc0
                    sub_43c100(edi_1 + ecx_3 + 0x15834, &var_18, nullptr, 0xa)
                    void* ecx_9 = (&data_4bf018)[arg1 * 6]
                    var_18 += 0x4e
                    edx_11 = *(ecx_9 + ebp_1 - 0xc)
                    sub_42b350(&var_18, edx_11, *(ecx_9 + ebp_1 - 8), edx_11)
                case 6
                    int32_t var_14_2 = 0xab
                    data_4bf3ec = 0xab
                    var_18 = 0xe7
                    sub_43c100(edi_1 + ecx_3 + 0x15834, &var_18, nullptr, 0xa)
                    edx_11 = (&data_4bf018)[arg1 * 6]
                    sub_42b350(&var_18, edx_11, *(edx_11 + ebp_1 - 8), *(edx_11 + ebp_1 - 0xc))
            
            ecx_3 = data_4bf344
        
        esi_6 = var_20_1 + 1
        
        if (*(ecx_3 + 0xb21c) + 1 == esi_6 && *(arg1 * 0x18 + 0x4bf014) != 0)
            int32_t eax_22 = *(ecx_3 + 0xb224)
            
            if (eax_22 == 1 || eax_22 == 3)
                int32_t var_34_1 = 0xa
                sub_439e50(nullptr, &data_4bf3e8, 0)
                ecx_3 = data_4bf344
        
        var_1c_1 += 0x20
        esi = *(arg1 * 0x18 + 0x4bf014)
        var_20_1 = esi_6
        edi_1 += 0x21c
        ebp_1 += 0x10
    while (esi_6 + 1 s< esi + 1)

__builtin_memcpy(&var_18, 
    "\xb0\x00\x00\x00\x58\x00\x00\x00\x80\x01\x00\x00\xc0\x00\x00\x00\x20\x00\x00\x00\x20\x00\x00\x00", 
    0x18)
sub_43d1f0(&var_18, 0xa)
sub_4417a0(data_4bf344 + 0x1f0f0)
var_18 = sub_441790(data_4bf344 + 0x1f0f0) + 0x40
void* eax_27 = data_4bf344
int32_t var_14_3 = 0x148
int32_t var_10 = 0x200
int32_t var_c = 0x60

if (*(eax_27 + 0xb230) == 0)
    sub_43d2c0(eax_27 + 0x19c3c, &var_18, nullptr, 0x100, 0x100, 0xa)

int32_t edi_2 = 0
var_18 = 0x1d6
int32_t var_14_4 = 0x28
int32_t esi_7 = 0xa
int32_t edx_22

do
    int32_t temp1_2 = mods.dp.d(sx.q(divs.dp.d(sx.q(*(data_4bf344 + 0xb218) + 1), esi_7)), 0xa)
    
    if (temp1_2 != 0)
        edi_2 = 1
    
    if (esi_7 == 1)
        edi_2 = esi_7
        sub_43c570(0x4be9d0, temp1_2.w, &var_18, nullptr, 0xa)
    else if (edi_2 == 1)
        sub_43c570(0x4be9d0, temp1_2.w, &var_18, nullptr, 0xa)
    
    var_18 += 0x16
    int32_t eax_35
    int32_t edx_21
    edx_21:eax_35 = muls.dp.d(0x66666667, esi_7)
    edx_22 = edx_21 s>> 2
    esi_7 s/= 0xa
while (edx_22 u>> 0x1f != neg.d(edx_22))
sub_43c570(0x4be9d0, 0xd, &var_18, nullptr, 0xa)
var_18 += 0x16
int32_t edi_3 = 0
int32_t esi_8 = 0xa
int32_t result
int32_t edx_27

do
    uint32_t temp1_3 = modu.dp.d(0:(divu.dp.d(0:0xd, esi_8)), 0xa)
    
    if (temp1_3 != 0)
        edi_3 = 1
    
    if (esi_8 == 1)
        edi_3 = esi_8
        sub_43c570(0x4be9d0, temp1_3.w, &var_18, nullptr, 0xa)
    else if (edi_3 == 1)
        sub_43c570(0x4be9d0, temp1_3.w, &var_18, nullptr, 0xa)
    
    var_18 += 0x16
    int32_t edx_26
    edx_26:result = muls.dp.d(0x66666667, esi_8)
    edx_27 = edx_26 s>> 2
    esi_8 s/= 0xa
while (edx_27 u>> 0x1f != neg.d(edx_27))
return result
