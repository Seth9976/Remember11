// 函数: sub_4107d0
// 地址: 0x4107d0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* ecx = *(arg1 + 0x44)
int16_t* ebp = *(ecx + 0x4c)
bool cond:0 = *(ecx + 0xc) != 1
data_a59b24 = ecx
data_a59b1c = ebp

if (not(cond:0))
    *(ecx + 0x10) = 1
    *(ecx + 8) = 0
    *(arg1 + 0x10) = 0x64

switch (sx.d(*(arg1 + 0x10)))
    case 0
        bool cond:1_1 = *(ecx + 0x29) != 1
        *(ecx + 8) = 0
        *(ecx + 0x14) = 0
        *(ecx + 0x18) = 0
        *(ecx + 0x1c) = 0
        
        if (cond:1_1)
            *(arg1 + 0x10) = 1
        label_41095e:
            int16_t eax_54 = *(ecx + 0x2a)
            
            if (eax_54 != 0)
                int32_t edx_22 = *(ecx + 8)
                
                if (edx_22 s>= zx.d(eax_54))
                    void* edx_23 = data_e7e648
                    *(edx_23 + 0x1f5d0) = 0
                    *(data_e7e648 + 0x1f5d4) = 0
                    int32_t var_14_1 = 0
                    sub_40fca0(ecx, edx_23.b)
                    return 0
                
                *(ecx + 8) = edx_22 + 1
            
            if (*(arg1 + 0x10) != 2)
                int32_t edi_6 = sx.d(ebp[4])
                
                if (edi_6 == 0)
                    edi_6 = 1
                
                *(ecx + 0x1c) += divs.dp.d(0x400, edi_6) + 1
                
                if (*(ecx + 0x1c) s>= 0x400)
                    *(ecx + 0x1c) = 0x400
                    *(arg1 + 0x10) = 2
        else
            *(ecx + 0x14) = 0
            *(ecx + 0x18) = 0
            *(ecx + 0x1c) = 0x400
            *(arg1 + 0x10) = 2
    case 1, 2
        goto label_41095e
    case 0x64
        int32_t esi_5 = sx.d(ebp[4])
        
        if (esi_5 == 0)
            esi_5 = 1
        
        *(ecx + 0x1c) += 0xffffffff - divs.dp.d(0x400, esi_5)
        
        if (*(ecx + 0x1c) s<= 0)
            *(data_e7e648 + 0x1f5d0) = 0
            void* edx_29 = data_e7e648
            int32_t var_14_2 = 0
            *(edx_29 + 0x1f5d4) = 0
            sub_40fca0(ecx, edx_29.b)
            return 0

int32_t esi_1 = sx.d(ebp[2])

if (esi_1 == 0)
    esi_1 = 1

*(ecx + 0x14) += divs.dp.d(0x200, esi_1)
int32_t esi_2 = sx.d(ebp[3])

if (esi_2 == 0)
    esi_2 = 1

*(ecx + 0x18) += divs.dp.d(0x200, esi_2)
int32_t esi_3 = sx.d(*ebp)
int32_t eax_8
int32_t edx_4
edx_4:eax_8 = sx.q(*(ecx + 0x14) << 0x10)
int32_t eax_14
int16_t edx_6
edx_6:eax_14 = sx.q((sub_441360((eax_8 + (edx_4 & 0x3ff)) s>> 0xa) * esi_3) << 0xc)
int32_t eax_18
int32_t edx_8
edx_8:eax_18 = sx.q(((eax_14 + zx.d(edx_6)) s>> 0x10) + 0x800)
void* ecx_1 = data_a59b24
int32_t eax_22
int32_t edx_9
edx_9:eax_22 = sx.q(esi_3 << 0xc)
int32_t eax_26
int32_t edx_10
edx_10:eax_26 =
    sx.q(((((eax_18 - edx_8) s>> 1) + ((eax_22 - edx_9) s>> 1)) s>> 0xc) * *(ecx_1 + 0x1c))
*(data_e7e648 + 0x1f5d0) = (eax_26 + (edx_10 & 0x3ff)) s>> 0xa
int32_t esi_4 = sx.d(*(data_a59b1c + 2))
int32_t eax_32
int32_t edx_13
edx_13:eax_32 = sx.q(*(ecx_1 + 0x18) << 0x10)
int32_t eax_38
int16_t edx_15
edx_15:eax_38 = sx.q((sub_441360((eax_32 + (edx_13 & 0x3ff)) s>> 0xa) * esi_4) << 0xc)
int32_t eax_42
int32_t edx_17
edx_17:eax_42 = sx.q(((eax_38 + zx.d(edx_15)) s>> 0x10) + 0x800)
int32_t eax_46
int32_t edx_18
edx_18:eax_46 = sx.q(esi_4 << 0xc)
int32_t eax_50
int32_t edx_20
edx_20:eax_50 =
    sx.q(((((eax_42 - edx_17) s>> 1) + ((eax_46 - edx_18) s>> 1)) s>> 0xc) * *(data_a59b24 + 0x1c))
*(data_e7e648 + 0x1f5d4) = (eax_50 + (edx_20 & 0x3ff)) s>> 0xa
return 0
