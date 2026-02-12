// 函数: sub_40b380
// 地址: 0x40b380
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* edi = *(arg1[0x11] + 8)
int32_t ecx_1 = sx.d(arg1[4].w)

if (ecx_1 == 0)
    *(data_e7e648 + 0x13224) = zx.d(*(edi + 2))
    arg1[4].w = 1
label_40b3dd:
    *(data_e7e648 + 0x13220) = data_2b603a4 - *(data_e7e648 + 0x13228)
    void* ecx_7 = data_e7e648
    int16_t edx_4 = *(ecx_7 + 0x28a4)
    
    if (edx_4 != 0 && *(ecx_7 + 0x28a6) == 1)
        void* ecx_8 = arg1[0x11]
        *(ecx_8 + 8) = zx.d(edx_4) + *(ecx_8 + 0xc)
        *(data_e7e648 + 0x28a4) = 0
        *(data_e7e648 + 0x28a6) = 0
        sub_40a8a0(arg1)
        return 0
    
    int32_t edx_8 = *(ecx_7 + 0x13220)
    int32_t esi_1 = 0
    
    if (*(ecx_7 + 0x13224) s<= edx_8)
        esi_1 = 1
    
    if (edx_8 s< 0)
        esi_1 = 1
    
    if (*(edi + 1) == 0)
        if (esi_1 == 1)
            goto label_40b469
    else if (*(ecx_7 + 0x289c) == 1 || esi_1 == 1)
    label_40b469:
        void* ecx_10 = arg1[0x11]
        *(ecx_10 + 8) += 4
        sub_40a8a0(arg1)
        return 0
else if (ecx_1 == 1)
    goto label_40b3dd

*(arg1 + 0xe) = 0
*(arg1 + 0xd) = 0
return 0
