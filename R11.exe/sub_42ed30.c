// 函数: sub_42ed30
// 地址: 0x42ed30
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* esi = data_4bf344
int32_t eax_1 = *((*(esi + 0xb218) << 2) + &data_4bf2e0)
int32_t eax_2 = sx.d(*(arg1 + 0x10))

if (eax_2 == 0)
    sub_43d220(esi + 0x15788, 0x4be828, 2, 0, 0xffffffff, 0x1000)
    sub_441740(data_4bf344 + 0x1f0f0, 0x280, 0xa)
    sub_441760(data_4bf344 + 0x1f0f0, 0, 0)
    sub_43d220(data_4bf344 + 0x19c3c, 0x4be838, 3, 0, 0xffffffff, 0xe14)
    esi = data_4bf344
    *(arg1 + 0x10) = 1
label_42ef2d:
    
    if (*(esi + 0xb224) == 1)
        sub_480ea0(esi + 0x590c, &data_2b5aa20, 0x590c)
        *(eax_1 * 0x18 + 0x4bf014) = 4
        *(esi + 0xb21c) = 3
        *(esi + 0xb224) = 3
        *(arg1 + 0x10) = 2
else
    if (eax_2 == 1)
        goto label_42ef2d
    
    if (eax_2 == 2)
        int32_t ebx_1 = eax_2
        
        for (int32_t i = 0xc6; i s< 0x106; )
            if (sub_45e320(0x140, i, 0x56, 0x20, 0) != 0 && *(data_4bf344 + 0xb21c) != ebx_1)
                sub_4095a0(3)
                *(data_4bf344 + 0xb21c) = ebx_1
            
            i += 0x20
            ebx_1 += 1
        
        bool cond:1_1 = sub_45c4b0() != 0
        int32_t eax_8
        
        if (not(cond:1_1))
            eax_8 = data_2b53608
        
        if (cond:1_1 || (eax_8 & 0x2100) != 0)
            if (*(data_4bf344 + 0xb21c) == 2)
                sub_4095a0(0)
                void* ecx_7 = data_4bf344
                *(eax_1 * 0x18 + 0x4bf014) = 0
                *(ecx_7 + 0xb224) = 4
                *(arg1 + 0x10) = 1
                sub_42b560(0x1d)
                return 0
            
        label_42ee84:
            sub_4095a0(1)
            void* edx_2 = data_4bf344
            *(eax_1 * 0x18 + 0x4bf014) = 0
            *(edx_2 + 0xb224) = 0
            *(arg1 + 0x10) = 1
            sub_42b560(0x1d)
            return 0
        
        if ((eax_8 & 0x4400) != 0)
            goto label_42ee84
        
        if (sub_45c4f0() != 0)
            goto label_42ee84
        
        if ((data_2b53610 & 0x500a50) != 0)
            sub_4095a0(3)
            void* eax_10 = data_4bf344
            int32_t ecx_3 = *(eax_10 + 0xb21c) - 2
            int32_t ecx_4 = neg.d(ecx_3)
            *(eax_10 + 0xb21c) = sbb.d(ecx_4, ecx_4, ecx_3 != 0) + 3
            sub_42b560(0x1d)
            return 0

sub_42b560(0x1d)
return 0
