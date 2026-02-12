// 函数: sub_42ba40
// 地址: 0x42ba40
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* edi = data_4bf344
int32_t eax_1 = *((*(edi + 0xb218) << 2) + &data_4bf2e0)
int32_t eax_2 = sx.d(*(arg1 + 0x10))

if (eax_2 == 0)
    int32_t esi_3 = arg3 << 5
    sub_43d220(edi + 0x15788, esi_3 + 0x4be488, 2, 0, 0xffffffff, 0x1000)
    sub_441740(data_4bf344 + 0x1f0f0, 0x280, 0xa)
    sub_441760(data_4bf344 + 0x1f0f0, 0, 0)
    sub_43d220(data_4bf344 + 0x19c3c, esi_3 + 0x4be498, 3, 0, 0xffffffff, 0xe14)
    edi = data_4bf344
    *(arg1 + 0x10) = 1
label_42bca7:
    
    if (*(edi + 0xb224) == 1)
        sub_480ea0(edi + 0x590c, &data_2b5aa20, 0x590c)
        *(edi + 0xb224) = 3
        *(arg1 + 0x10) = 2
else
    if (eax_2 == 1)
        goto label_42bca7
    
    if (eax_2 == 2)
        int32_t i = 0
        
        if (*(eax_1 * 0x18 + 0x4bf014) s> 0)
            int32_t edi_1 = 0x8d
            
            do
                if (sub_45e350(0xd0, edi_1, 0x14, 0x14, 0) != 0 && sub_45c4d0() != 0
                        && i != *(data_4bf344 + 0xb21c))
                    sub_4095a0(3)
                    void* eax_8 = data_4bf344
                    *(eax_8 + 0xb21c) = i
                    *arg2 = *(eax_8 + 0xb21c)
                
                i += 1
                edi_1 += 0x20
            while (i s< *(eax_1 * 0x18 + 0x4bf014))
        
        if ((data_2b53608 & 0x2100) != 0)
        label_42bbef:
            sub_4095a0(0)
            void* eax_21 = data_4bf344
            *(eax_1 * 0x18 + &data_4bf010) = *(eax_21 + 0xb21c)
            *(eax_21 + 0xb224) = 0
            *(arg1 + 0x10) = 1
            sub_42b560(arg3)
            return 0
        
        if (sub_45e350(0x40, 0x99, 0x42, 0x42, 0) != 0 && sub_45c4e0() != 0)
            goto label_42bbef
        
        int32_t eax_12
        
        if ((data_2b53608 & 0x4400) == 0)
            eax_12 = sub_45c4f0()
        
        if ((data_2b53608 & 0x4400) != 0 || eax_12 != 0)
            sub_4095a0(1)
            void* esi_1 = data_4bf344
            sub_480ea0(&data_2b5aa20, esi_1 + 0x590c, 0x590c)
            *(esi_1 + 0xb224) = 0
            *(arg1 + 0x10) = 1
            sub_42b560(arg3)
            return 0
        
        int32_t eax_13 = data_2b53610
        int32_t eax_14
        void* ecx_2
        int32_t ebx_2
        
        if ((eax_13 & 0x900890) != 0)
            sub_4095a0(3)
            ecx_2 = data_4bf344
            ebx_2 = *(eax_1 * 0x18 + 0x4bf014)
            eax_14 = ebx_2 + *(ecx_2 + 0xb21c) - 1
        label_42bb83:
            int32_t temp1 = mods.dp.d(sx.q(eax_14), ebx_2)
            *(ecx_2 + 0xb21c) = temp1
            *arg2 = temp1.b
            sub_42b560(arg3)
            return 0
        
        if ((eax_13 & 0x600260) != 0)
            sub_4095a0(3)
            ecx_2 = data_4bf344
            ebx_2 = *(eax_1 * 0x18 + 0x4bf014)
            eax_14 = ebx_2 + *(ecx_2 + 0xb21c) + 1
            goto label_42bb83

sub_42b560(arg3)
return 0
