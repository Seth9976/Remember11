// 函数: sub_43f9d0
// 地址: 0x43f9d0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* edx = arg4
uint32_t ecx = zx.d(*(edx + 2))
uint32_t eax_2 = ecx u>> 5 << 4
int32_t ecx_1 = ecx & 0x8000001f
uint32_t var_4c = eax_2

if (ecx_1 s< 0)
    ecx_1 = ((ecx_1 - 1) | 0xffffffe0) + 1

int32_t var_48 = ecx_1 << 4
int32_t* edi = *data_c7bbcc
int32_t esi = 0
int32_t var_3c = 0
int32_t* var_44 = edi
void* ecx_6 = &edi[0x10]
int32_t var_34 = 0

if (*(edx + 7) u<= 0)
    return eax_2

char* ebx_1 = arg6
int16_t x87control
bool cond:3_1

do
    int32_t var_28_1 = 0
    int32_t var_50_1 = ((*arg5 + zx.d(*(edx + 4)) * 0xe) << 4) + data_c7bbd0
    int16_t eax_15 = ((arg5[1] + (zx.d(*(edx + 5)) + var_34) * 0xe) << 4).w + (data_c7bbd4).w
    int32_t var_40_1 = var_50_1 + 0xe0
    
    if (*(edx + 6) u> 0)
        int32_t eax_19 = var_4c & 0x8000000f
        
        if (eax_19 s< 0)
            eax_19 = ((eax_19 - 1) | 0xfffffff0) + 1
        
        int32_t var_2c_1 = eax_19
        int32_t* var_38_1 = ((var_4c - 0x10) << 0xb) + arg1
        
        while (true)
            int32_t ebp_5 = *(ecx_6 + 4)
            int32_t esi_2 = var_48 << 4
            int32_t eax_26
            int32_t edx_5
            edx_5:eax_26 = sx.q((esi_2 + 0x11) & 0x3fff)
            *ecx_6 = eax_26 | (*ecx_6 & 0xffffc000)
            *(ecx_6 + 4) = edx_5 | ebp_5
            int32_t eax_30
            int32_t edx_7
            edx_7:eax_30 = sx.q(((eax_19 << 4) + 0x11) & 0x3fff)
            int32_t edx_8 = edx_7 << 0x10 | eax_30 u>> 0xfffffff0
            int32_t eax_32 = *ecx_6 & 0xc000ffff
            *(ecx_6 + 4) |= edx_8
            int32_t var_c_1 = edx_8
            edx_8.w = eax_15
            int32_t edi_4 = eax_30 << 0x10
            *ecx_6 = eax_32 | edi_4
            int32_t ebp_6 = *(ecx_6 + 0xc)
            *(ecx_6 + 8) = var_50_1.w
            *(ecx_6 + 0xa) = edx_8.w
            int32_t edx_9 = *(ecx_6 + 8)
            *(ecx_6 + 0xc) = (data_c7bbd8 & 0xffffff) | (ebp_6 & 0xff000000)
            *(ecx_6 + 0xc) |= 0xff000000
            *(ecx_6 + 8) = edx_9
            int32_t ebx_7 = *(ecx_6 + 0x10)
            int32_t eax_41
            int32_t edx_10
            edx_10:eax_41 = sx.q((esi_2 + 0xf1) & 0x3fff)
            *(ecx_6 + 0x14) |= edx_10
            *(ecx_6 + 0x14) |= var_c_1
            *(ecx_6 + 0x10) = ((eax_41 | (ebx_7 & 0xffffc000)) & 0xc000ffff) | edi_4
            int32_t ebp_9 = *(ecx_6 + 0x1c)
            *(ecx_6 + 0x18) = var_40_1.w
            *(ecx_6 + 0x1a) = eax_15
            int32_t eax_46 = *(ecx_6 + 0x18)
            *(ecx_6 + 0x1c) = (data_c7bbd8 & 0xffffff) | (ebp_9 & 0xff000000)
            *(ecx_6 + 0x18) = eax_46
            *(ecx_6 + 0x1c) |= 0xff000000
            int32_t edi_6 = *(ecx_6 + 0x20)
            int32_t eax_49
            int32_t edx_19
            edx_19:eax_49 = sx.q((esi_2 + 0x11) & 0x3fff)
            *(ecx_6 + 0x24) |= edx_19
            int32_t ebp_12 = *(ecx_6 + 0x24)
            *(ecx_6 + 0x20) = eax_49 | (edi_6 & 0xffffc000)
            int32_t eax_54
            int32_t edx_21
            edx_21:eax_54 = sx.q((((eax_19 + 0x10) << 4) - 0xf) & 0x3fff)
            int32_t edx_22 = edx_21 << 0x10 | eax_54 u>> 0xfffffff0
            int32_t eax_56 = *(ecx_6 + 0x20) & 0xc000ffff
            *(ecx_6 + 0x24) = ebp_12 | edx_22
            int32_t edi_9 = eax_54 << 0x10
            *(ecx_6 + 0x20) = eax_56 | edi_9
            int32_t ebp_14 = *(ecx_6 + 0x2c)
            *(ecx_6 + 0x28) = var_50_1.w
            *(ecx_6 + 0x2a) = eax_15 + 0xe0
            int32_t eax_59 = *(ecx_6 + 0x28)
            *(ecx_6 + 0x2c) = (data_c7bbd8 & 0xffffff) | (ebp_14 & 0xff000000)
            *(ecx_6 + 0x28) = eax_59
            *(ecx_6 + 0x2c) |= 0xff000000
            int32_t ebp_16 = *(ecx_6 + 0x34)
            int32_t eax_62
            int32_t edx_27
            edx_27:eax_62 = sx.q((esi_2 + 0xf1) & 0x3fff)
            *(ecx_6 + 0x30) = ((eax_62 | (*(ecx_6 + 0x30) & 0xffffc000)) & 0xc000ffff) | edi_9
            *(ecx_6 + 0x34) = edx_27 | ebp_16 | edx_22
            int32_t edi_10 = *(ecx_6 + 0x3c)
            *(ecx_6 + 0x38) = var_40_1.w
            *(ecx_6 + 0x3a) = eax_15 + 0xe0
            int32_t eax_67 = *(ecx_6 + 0x38)
            *(ecx_6 + 0x3c) = (data_c7bbd8 & 0xffffff) | (edi_10 & 0xff000000)
            *(ecx_6 + 0x3c) |= 0xff000000
            *(ecx_6 + 0x38) = eax_67
            ecx_6 += 0x40
            esi = var_3c + 1
            var_3c = esi
            bool cond:4_1 = var_48 + 0x10 s< 0x200
            var_48 += 0x10
            bool cond:6_1
            
            if (not(cond:4_1))
                var_38_1 = &var_38_1[0x2000]
                uint32_t eax_71 = var_4c + 0x10
                var_4c = eax_71
                int32_t eax_72 = eax_71 & 0x8000000f
                cond:6_1 = eax_72 != 0
                var_48 = 0
                
                if (eax_72 s< 0)
                    int32_t eax_74 = (eax_72 - 1) | 0xfffffff0
                    eax_72 = eax_74 + 1
                    cond:6_1 = eax_74 != 0xffffffff
                
                var_2c_1 = eax_72
            
            if (cond:4_1 || cond:6_1)
                edi = var_44
                ebx_1 = arg6
            else
                if (esi == 0)
                    ebx_1 = arg6
                else
                    int16_t* edi_12 = var_44
                    int32_t eax_75
                    eax_75, x87control = sub_43f900(x87control, edi_12, esi)
                    ebx_1 = arg6
                    int32_t eax_77
                    int32_t edx_34
                    edx_34:eax_77 = sx.q(zx.d(ebx_1[3]))
                    int32_t ecx_15 = eax_77 | 0x80000000
                    int32_t eax_79
                    int32_t edx_35
                    edx_35:eax_79 = sx.q(zx.d(ebx_1[2]))
                    int32_t ecx_17 = ecx_15 << 8 | eax_79
                    int32_t eax_81
                    int32_t edx_36
                    edx_36:eax_81 = sx.q(zx.d(ebx_1[1]))
                    int32_t ecx_19 = ecx_17 << 8 | eax_81
                    int32_t eax_83
                    int32_t edx_37
                    edx_37:eax_83 = sx.q(zx.d(*ebx_1))
                    *(edi_12 + 0x28) = 1
                    *(edi_12 + 0x2c) = 0
                    *(edi_12 + 0x20) = ecx_19 << 8 | eax_83
                    *(edi_12 + 0x24) = (((edx_34 | 0x3f) << 8 | ecx_15 u>> 0xffffffe8 | edx_35) << 8
                        | ecx_17 u>> 0xffffffe8 | edx_36) << 8 | ecx_19 u>> 0xffffffe8 | edx_37
                    sub_448880(data_c7bbc8, arg7, edi_12)
                    int32_t* eax_85 = data_c7bbcc
                    *eax_85 += eax_75 << 4
                    esi = 0
                    var_3c = 0
                
                sub_43f430(var_38_1, arg2, arg3, arg7)
                edi = *data_c7bbcc
                var_44 = edi
                ecx_6 = &edi[0x10]
            
            edx = arg4
            var_50_1 += 0xe0
            var_40_1 += 0xe0
            bool cond:7_1 = var_28_1 + 1 s< zx.d(*(edx + 6))
            var_28_1 += 1
            
            if (not(cond:7_1))
                break
            
            eax_19 = var_2c_1
    
    cond:3_1 = var_34 + 1 s< zx.d(*(edx + 7))
    var_34 += 1
while (cond:3_1)

if (esi != 0)
    int32_t eax_92 = sub_43f900(x87control, edi, esi)
    int32_t eax_94
    int32_t edx_40
    edx_40:eax_94 = sx.q(zx.d(ebx_1[3]))
    int32_t ecx_25 = eax_94 | 0x80000000
    int32_t eax_96
    int32_t edx_41
    edx_41:eax_96 = sx.q(zx.d(ebx_1[2]))
    int32_t ecx_27 = ecx_25 << 8 | eax_96
    int32_t eax_98
    int32_t edx_42
    edx_42:eax_98 = sx.q(zx.d(ebx_1[1]))
    int32_t ecx_29 = ecx_27 << 8 | eax_98
    int32_t eax_100
    int32_t edx_43
    edx_43:eax_100 = sx.q(zx.d(*ebx_1))
    edi[8] = ecx_29 << 8 | eax_100
    edi[0xa] = 1
    edi[0xb] = 0
    edi[9] = (((edx_40 | 0x3f) << 8 | ecx_25 u>> 0xffffffe8 | edx_41) << 8 | ecx_27 u>> 0xffffffe8
        | edx_42) << 8 | ecx_29 u>> 0xffffffe8 | edx_43
    sub_448880(data_c7bbc8, arg7, edi)
    int32_t* eax_101 = data_c7bbcc
    *eax_101 += eax_92 << 4

return var_4c
