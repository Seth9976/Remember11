// 函数: sub_4263d0
// 地址: 0x4263d0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ebp = 0
*(data_4b1de0 + 0x52) = 1

if (sub_45e350(0x25c, 0xd2, 0x18, 0x18, 0) != 0)
    sub_45c500()

if (sub_45e350(0x25c, 0x124, 0x18, 0x18, 0) != 0)
    sub_45c500()

sub_45c4b0()
int32_t esi = 0

for (int32_t i = 0xcf; i s< 0x197; )
    if (sub_45e320(0x36, i, 0x220, 0x18, 0) != 0)
        void* ecx_1 = data_4b1de0
        int32_t edx_1 = *(ecx_1 + 0xc)
        
        if (edx_1 != esi)
            int32_t ebx_1 = *(ecx_1 + 0x58)
            int32_t eax_6 = ebx_1 - edx_1 + esi + *(ecx_1 + 8)
            *(ecx_1 + 0xc) = esi
            *(ecx_1 + 8) = mods.dp.d(sx.q(eax_6), ebx_1)
    
    i += 0x19
    esi += 1

data_e7e638 = sub_45c4b0()
void* eax_18

if (sub_45c510() != 0)
    void* esi_1 = data_4b1de0
    int32_t edi = *(esi_1 + 0x58)
    int32_t temp1_2 = mods.dp.d(sx.q(edi + *(esi_1 + 8) - 1), edi)
    int32_t ecx_5 = (*(esi_1 + 0x14) + 7) & 0x80000007
    *(esi_1 + 8) = temp1_2
    
    if (ecx_5 s< 0)
        ecx_5 = ((ecx_5 - 1) | 0xfffffff8) + 1
    
    int32_t eax_16
    int32_t edx_6
    edx_6:eax_16 = sx.q(temp1_2 - *(esi_1 + 0xc) + edi)
    *(esi_1 + 0x14) = ecx_5
    sub_425c10(mods.dp.d(edx_6:eax_16, edi), ecx_5)
    eax_18 = data_4b1de0
    goto label_426524

if (sub_45c520() == 0)
    int32_t eax_26 = data_2b53610
    void* ecx_18
    
    if ((eax_26 & 0x900890) == 0)
        if ((eax_26 & 0x600260) != 0)
            sub_4095a0(3)
            ecx_18 = data_4b1de0
            int32_t esi_7 = *(ecx_18 + 0x58)
            int32_t temp1_7 = mods.dp.d(sx.q(esi_7 + *(ecx_18 + 8) + 1), esi_7)
            int32_t eax_38 = *(ecx_18 + 0xc)
            *(ecx_18 + 8) = temp1_7
            
            if (eax_38 s>= 7)
                sub_425c10(temp1_7, *(ecx_18 + 0x14))
                ecx_18 = data_4b1de0
                int32_t edx_23 = (*(ecx_18 + 0x14) + 1) & 0x80000007
                
                if (edx_23 s< 0)
                    edx_23 = ((edx_23 - 1) | 0xfffffff8) + 1
                
                *(ecx_18 + 0x14) = edx_23
            else
                *(ecx_18 + 0xc) = eax_38 + 1
            
            goto label_42661a
        
        ebp = 1
    else
        sub_4095a0(3)
        ecx_18 = data_4b1de0
        int32_t esi_6 = *(ecx_18 + 0x58)
        int32_t temp1_6 = mods.dp.d(sx.q(esi_6 + *(ecx_18 + 8) - 1), esi_6)
        int32_t eax_29 = *(ecx_18 + 0xc)
        *(ecx_18 + 8) = temp1_6
        
        if (eax_29 s<= 0)
            int32_t eax_33 = (*(ecx_18 + 0x14) + 7) & 0x80000007
            
            if (eax_33 s< 0)
                eax_33 = ((eax_33 - 1) | 0xfffffff8) + 1
            
            *(ecx_18 + 0x14) = eax_33
            sub_425c10(temp1_6, eax_33)
            ecx_18 = data_4b1de0
        else
            *(ecx_18 + 0xc) = eax_29 - 1
        
    label_42661a:
        int32_t edx_26 = *(ecx_18 + 8)
        void* eax_43 = (edx_26 << 5) + *(ecx_18 + 0x54)
        *(ecx_18 + 0xc758) = *(eax_43 + 0x10)
        *(ecx_18 + 0xc768) = *(eax_43 + 0x14)
        sub_425410(sx.d(*(eax_43 + 5)), edx_26)
else
    void* ecx_8 = data_4b1de0
    int32_t esi_2 = *(ecx_8 + 0x58)
    int32_t temp1_4 = mods.dp.d(sx.q(esi_2 + *(ecx_8 + 8) + 1), esi_2)
    int32_t eax_22 = *(ecx_8 + 0x14)
    *(ecx_8 + 8) = temp1_4
    sub_425c10(mods.dp.d(sx.q(temp1_4 - *(ecx_8 + 0xc) + esi_2 + 7), esi_2), eax_22)
    eax_18 = data_4b1de0
    int32_t ecx_11 = (*(eax_18 + 0x14) + 1) & 0x80000007
    
    if (ecx_11 s< 0)
        ecx_11 = ((ecx_11 - 1) | 0xfffffff8) + 1
    
    *(eax_18 + 0x14) = ecx_11
label_426524:
    int32_t edx_14 = *(eax_18 + 8)
    void* ecx_16 = (edx_14 << 5) + *(eax_18 + 0x54)
    *(eax_18 + 0xc758) = *(ecx_16 + 0x10)
    *(eax_18 + 0xc768) = *(ecx_16 + 0x14)
    sub_425410(sx.d(*(ecx_16 + 5)), edx_14)

void* result = data_4b1de0

if (*result != 1 && ebp == 1)
    int32_t ecx_20 = data_2b53608
    ebp = 0
    
    if ((ecx_20 & 0x1000) != 0)
        sub_4095a0(0)
        result = data_4b1de0
        *(result + 0x50) = *(result + 0x50) == 0
    else if ((ecx_20 & 0x8000) == 0)
        ebp = 1
    else
        sub_4095a0(0)
        result = data_4b1de0
        *(result + 0x51) = *(result + 0x51) == 0

if (*(result + 0x10) != 4 || ebp != 1 || (data_2b53608.b & 1) == 0)
    return result

if (*((*(result + 8) << 5) + *(result + 0x54) + 5) == 0 && sub_423ab0() == ebp)
    return sub_4095a0(4)

return sub_4095a0(7)
