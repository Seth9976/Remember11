// 函数: sub_446790
// 地址: 0x446790
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t* eax_2

if (arg1 s< 0)
    eax_2 = data_c7bbac * 0x4c + data_c7b7a4
else if (arg1 s>= data_c7b7a8)
    eax_2 = nullptr
else
    eax_2 = arg1 * 0x4c + data_c7b7a4

*eax_2 = arg2
eax_2[4].w = 0
*(eax_2 + 0x12) = 0
eax_2[0x11] = arg3
eax_2[0x12] = arg4

if (arg5 == 0)
    *(eax_2 + 0xe) = 0
    eax_2[3].b = 0x80
    *(eax_2 + 0xd) = 0
    eax_2[1].w = 0xffff
    *(eax_2 + 6) = 0xffff
    eax_2[2].w = 0xffff
else
    if (arg5 == 1)
        int32_t edi_3 = data_c7bbac
        int32_t ebx_1 = data_c7b7a8
        int32_t edx_3 = data_c7b7a4
        void* ecx_11
        
        if (edi_3 s< 0)
            ecx_11 = edi_3 * 0x4c + edx_3
        else if (edi_3 s>= ebx_1)
            ecx_11 = nullptr
        else
            ecx_11 = edi_3 * 0x4c + edx_3
        
        while (*(ecx_11 + 6) != 0xffff)
            int32_t ecx_14 = sx.d(*(ecx_11 + 6))
            
            if (ecx_14 s< 0)
                ecx_11 = edi_3 * 0x4c + edx_3
            else if (ecx_14 s>= ebx_1)
                ecx_11 = nullptr
            else
                ecx_11 = ecx_14 * 0x4c + edx_3
        
        edx_3.w = *(ecx_11 + 4)
        *(ecx_11 + 6) = arg1.w
        eax_2[1].w = edx_3.w
        *(eax_2 + 6) = 0xffff
        eax_2[2].w = 0xffff
        int16_t ecx_18 = *(ecx_11 + 4)
        
        if (ecx_18 == 0xffff)
            eax_2[3].b = 0x80
            *(eax_2 + 0xd) = 0
            *(eax_2 + 0xe) = 0
            return arg1
        
        int32_t ecx_19 = sx.d(ecx_18)
        void* const ecx_21
        
        if (ecx_19 s< 0)
            ecx_21 = data_c7bbac * 0x4c + data_c7b7a4
        else if (ecx_19 s< data_c7b7a8)
            ecx_21 = ecx_19 * 0x4c + data_c7b7a4
        else
            ecx_21 = nullptr
        
        eax_2[3].b = *(ecx_21 + 0xc)
        *(eax_2 + 0xd) = *(ecx_21 + 0xd)
        ecx_21.w = *(ecx_21 + 0xe)
        *(eax_2 + 0xe) = ecx_21.w
        return arg1
    
    if (arg5 == 2)
        int32_t edx = data_c7bbac
        void* const ecx_6
        
        if (edx s< 0)
            ecx_6 = edx * 0x4c + data_c7b7a4
        else if (edx s>= data_c7b7a8)
            ecx_6 = nullptr
        else
            ecx_6 = edx * 0x4c + data_c7b7a4
        
        if (*(ecx_6 + 8) != 0xffff)
            eax_2[1].w = edx.w
            int32_t esi = data_c7bbac
            data_c7bbac = sx.d(*(ecx_6 + 8))
            sub_446790(arg1, arg2, arg3, arg4, 1)
            data_c7bbac = esi
            return arg1
        
        char edx_1 = *(ecx_6 + 0xc)
        *(ecx_6 + 8) = arg1.w
        eax_2[3].b = edx_1
        *(eax_2 + 0xd) = *(ecx_6 + 0xd)
        ecx_6.w = *(ecx_6 + 0xe)
        *(eax_2 + 0xe) = ecx_6.w
        uint16_t edx_2 = data_c7bbac.w
        *(eax_2 + 6) = 0xffff
        eax_2[2].w = 0xffff
        eax_2[1].w = edx_2

return arg1
