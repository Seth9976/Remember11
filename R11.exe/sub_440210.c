// 函数: sub_440210
// 地址: 0x440210
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* edx = arg4
uint32_t ecx = zx.d(*(edx + 2))
uint32_t eax_2 = ecx u>> 5 << 4
int32_t ecx_1 = ecx & 0x8000001f
uint32_t var_64 = eax_2

if (ecx_1 s< 0)
    ecx_1 = ((ecx_1 - 1) | 0xffffffe0) + 1

int32_t edi = data_e7e620
uint32_t esi = zx.d(*(edx + 4))
int32_t var_5c = ecx_1 << 4
uint32_t ecx_5 = zx.d(*(edx + 5))
int16_t* edi_1 = *data_c7bbcc
void* ebx_4 = &(&data_d7e620)[(ecx_5 * edi + esi) * 4]
void* ecx_10 = &(&data_d7e620)[((ecx_5 + 1) * edi + esi) * 4]
void* var_54 = ebx_4
void* var_68 = ecx_10
int32_t var_60 = 0
int16_t* var_44 = edi_1
void* esi_2 = &edi_1[0x20]
int32_t var_50 = 0

if (*(edx + 7) u<= 0)
    return eax_2

char* ebp_1 = arg5
int16_t x87control

while (true)
    int32_t var_40_1 = 0
    
    if (*(edx + 6) u> 0)
        int32_t* var_58_1 = ((eax_2 - 0x10) << 0xb) + arg1
        bool cond:5_1
        
        do
            if (sub_43f850(ebx_4, ebx_4 + 0x10, ecx_10, ecx_10 + 0x10) == 0)
                int32_t eax_9 = var_64 & 0x8000000f
                
                if (eax_9 s< 0)
                    eax_9 = ((eax_9 - 1) | 0xfffffff0) + 1
                
                int32_t edi_2 = *esi_2
                int32_t ecx_12 = var_5c << 4
                int32_t eax_16
                int32_t edx_4
                edx_4:eax_16 = sx.q((ecx_12 + 0x11) & 0x3fff)
                *(esi_2 + 4) |= edx_4
                int32_t ebp_3 = *(esi_2 + 4)
                *esi_2 = eax_16 | (edi_2 & 0xffffc000)
                int32_t eax_21
                int32_t edx_6
                edx_6:eax_21 = sx.q(((eax_9 << 4) + 0x11) & 0x3fff)
                int32_t edx_7 = edx_6 << 0x10 | eax_21 u>> 0xfffffff0
                int32_t eax_23 = *esi_2 & 0xc000ffff
                *(esi_2 + 4) = ebp_3 | edx_7
                int32_t edi_5 = eax_21 << 0x10
                *esi_2 = eax_23 | edi_5
                int32_t ebp_5 = *(esi_2 + 0xc)
                *(esi_2 + 8) = *ebx_4
                *(esi_2 + 0xa) = *(ebx_4 + 4)
                int32_t eax_26 = *(esi_2 + 8)
                *(esi_2 + 0xc) = (data_c7bbd8 & 0xffffff) | (ebp_5 & 0xff000000)
                *(esi_2 + 0xc) |= 0xff000000
                *(esi_2 + 8) = eax_26
                int32_t ebp_7 = *(esi_2 + 0x14)
                int32_t eax_29
                int32_t edx_13
                edx_13:eax_29 = sx.q((ecx_12 + 0xf1) & 0x3fff)
                *(esi_2 + 0x10) = ((eax_29 | (*(esi_2 + 0x10) & 0xffffc000)) & 0xc000ffff) | edi_5
                *(esi_2 + 0x14) = edx_13 | ebp_7 | edx_7
                int32_t ebx_8 = *(esi_2 + 0x1c)
                *(esi_2 + 0x18) = *(ebx_4 + 0x10)
                *(esi_2 + 0x1a) = *(var_54 + 0x14)
                int32_t edx_18 = *(esi_2 + 0x18)
                *(esi_2 + 0x1c) = (data_c7bbd8 & 0xffffff) | (ebx_8 & 0xff000000)
                *(esi_2 + 0x1c) |= 0xff000000
                *(esi_2 + 0x18) = edx_18
                int32_t edi_7 = *(esi_2 + 0x20)
                int32_t eax_41
                int32_t edx_19
                edx_19:eax_41 = sx.q((ecx_12 + 0x11) & 0x3fff)
                *(esi_2 + 0x24) |= edx_19
                int32_t ebx_11 = *(esi_2 + 0x24)
                *(esi_2 + 0x20) = eax_41 | (edi_7 & 0xffffc000)
                int32_t eax_46
                int32_t edx_21
                edx_21:eax_46 = sx.q((((eax_9 + 0x10) << 4) - 0xf) & 0x3fff)
                int32_t edx_22 = edx_21 << 0x10 | eax_46 u>> 0xfffffff0
                int32_t eax_48 = *(esi_2 + 0x20) & 0xc000ffff
                *(esi_2 + 0x24) = ebx_11 | edx_22
                int32_t edi_10 = eax_46 << 0x10
                *(esi_2 + 0x20) = eax_48 | edi_10
                int32_t ebp_8 = *(esi_2 + 0x2c)
                *(esi_2 + 0x28) = *var_68
                *(esi_2 + 0x2a) = *(var_68 + 4)
                int32_t eax_52 = *(esi_2 + 0x28)
                *(esi_2 + 0x2c) = (data_c7bbd8 & 0xffffff) | (ebp_8 & 0xff000000)
                *(esi_2 + 0x28) = eax_52
                *(esi_2 + 0x2c) |= 0xff000000
                int32_t ecx_13 = *(esi_2 + 0x30)
                int32_t eax_55
                int32_t edx_28
                edx_28:eax_55 = sx.q((ecx_12 + 0xf1) & 0x3fff)
                *(esi_2 + 0x34) |= edx_28
                *(esi_2 + 0x34) |= edx_22
                *(esi_2 + 0x30) = ((eax_55 | (ecx_13 & 0xffffc000)) & 0xc000ffff) | edi_10
                int32_t edi_11 = *(esi_2 + 0x3c)
                *(esi_2 + 0x38) = *(ecx_10 + 0x10)
                void* ecx_15
                ecx_15.w = *(var_68 + 0x14)
                *(esi_2 + 0x3a) = ecx_15.w
                int32_t eax_60 = *(esi_2 + 0x38)
                *(esi_2 + 0x3c) = (data_c7bbd8 & 0xffffff) | (edi_11 & 0xff000000)
                *(esi_2 + 0x3c) |= 0xff000000
                ebp_1 = arg5
                edi_1 = var_44
                *(esi_2 + 0x38) = eax_60
                esi_2 += 0x40
                var_60 += 1
            
            ebx_4 += 0x10
            var_68 = ecx_10 + 0x10
            bool cond:4_1 = var_5c + 0x10 s< 0x200
            var_54 = ebx_4
            var_5c += 0x10
            
            if (not(cond:4_1))
                var_58_1 = &var_58_1[0x2000]
                uint32_t eax_65 = var_64 + 0x10
                var_64 = eax_65
                int32_t eax_66 = eax_65 & 0x8000000f
                bool cond:7_1 = eax_66 != 0
                var_5c = 0
                
                if (eax_66 s< 0)
                    cond:7_1 = ((eax_66 - 1) | 0xfffffff0) != 0xffffffff
                
                if (not(cond:7_1))
                    if (var_60 != 0)
                        int32_t eax_71
                        eax_71, x87control = sub_43f900(x87control, edi_1, var_60)
                        int32_t eax_73
                        int32_t edx_38
                        edx_38:eax_73 = sx.q(zx.d(ebp_1[3]))
                        int32_t eax_75
                        int32_t edx_39
                        edx_39:eax_75 = sx.q(zx.d(ebp_1[2]))
                        int32_t eax_77
                        int32_t edx_40
                        edx_40:eax_77 = sx.q(zx.d(ebp_1[1]))
                        int32_t eax_79
                        int32_t edx_41
                        edx_41:eax_79 = sx.q(zx.d(*ebp_1))
                        int32_t ecx_18 = eax_73 | 0x80000000
                        int32_t ecx_20 = ecx_18 << 8 | eax_75
                        int32_t ecx_22 = ecx_20 << 8 | eax_77
                        int32_t var_1c_1 = edx_41
                        *(edi_1 + 0x20) = ecx_22 << 8 | eax_79
                        *(edi_1 + 0x28) = 1
                        *(edi_1 + 0x2c) = 0
                        *(edi_1 + 0x24) = (
                            ((edx_38 | 0x3f) << 8 | ecx_18 u>> 0xffffffe8 | edx_39) << 8
                            | ecx_20 u>> 0xffffffe8 | edx_40) << 8 | ecx_22 u>> 0xffffffe8 | edx_41
                        sub_448880(data_c7bbc8, arg6, edi_1)
                        int32_t* eax_88 = data_c7bbcc
                        *eax_88 += eax_71 << 4
                        var_60 = 0
                    
                    sub_43f430(var_58_1, arg2, arg3, arg6)
                    edi_1 = *data_c7bbcc
                    var_44 = edi_1
                    esi_2 = &edi_1[0x20]
            
            edx = arg4
            cond:5_1 = var_40_1 + 1 s< zx.d(*(edx + 6))
            ecx_10 = var_68
            var_40_1 += 1
        while (cond:5_1)
    
    var_50 += 1
    int32_t eax_94 = edi - zx.d(*(edx + 6))
    edx = arg4
    int32_t eax_95 = eax_94 << 4
    ebx_4 += eax_95
    ecx_10 += eax_95
    var_54 = ebx_4
    var_68 = ecx_10
    
    if (var_50 s>= zx.d(*(edx + 7)))
        break
    
    eax_2 = var_64

if (var_60 != 0)
    int32_t eax_98 = sub_43f900(x87control, edi_1, var_60)
    int32_t eax_100
    int32_t edx_45
    edx_45:eax_100 = sx.q(zx.d(ebp_1[3]))
    int32_t ecx_30 = eax_100 | 0x80000000
    int32_t eax_102
    int32_t edx_46
    edx_46:eax_102 = sx.q(zx.d(ebp_1[2]))
    int32_t ecx_32 = ecx_30 << 8 | eax_102
    int32_t eax_104
    int32_t edx_47
    edx_47:eax_104 = sx.q(zx.d(ebp_1[1]))
    int32_t ecx_34 = ecx_32 << 8 | eax_104
    int32_t eax_106
    int32_t edx_48
    edx_48:eax_106 = sx.q(zx.d(*ebp_1))
    *(edi_1 + 0x20) = ecx_34 << 8 | eax_106
    *(edi_1 + 0x28) = 1
    *(edi_1 + 0x2c) = 0
    *(edi_1 + 0x24) = (((edx_45 | 0x3f) << 8 | ecx_30 u>> 0xffffffe8 | edx_46) << 8
        | ecx_32 u>> 0xffffffe8 | edx_47) << 8 | ecx_34 u>> 0xffffffe8 | edx_48
    sub_448880(data_c7bbc8, arg6, edi_1)
    int32_t* eax_107 = data_c7bbcc
    *eax_107 += eax_98 << 4

return var_64
