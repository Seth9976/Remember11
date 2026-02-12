// 函数: sub_42cb40
// 地址: 0x42cb40
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* esi = data_4bf344
int32_t eax_1 = *((*(esi + 0xb218) << 2) + &data_4bf2e0)
int32_t eax_2 = sx.d(*(arg1 + 0x10))

if (eax_2 == 0)
    sub_43d220(esi + 0x15788, 0x4be4e8, 2, 0, 0xffffffff, 0x1000)
    sub_441740(data_4bf344 + 0x1f0f0, 0x280, 0xa)
    sub_441760(data_4bf344 + 0x1f0f0, 0, 0)
    sub_43d220(data_4bf344 + 0x19c3c, 0x4be4f8, 3, 0, 0xffffffff, 0xe14)
    esi = data_4bf344
    *(arg1 + 0x10) = 1
label_42cdca:
    
    if (*(esi + 0xb224) == 1)
        sub_480ea0(esi + 0x590c, &data_2b5aa20, 0x590c)
        *(esi + 0xb224) = 3
        *(arg1 + 0x10) = 2
else
    if (eax_2 == 1)
        goto label_42cdca
    
    if (eax_2 == 2)
        int32_t i = 0
        
        if (*(eax_1 * 0x18 + 0x4bf014) s> 0)
            int32_t ebx_1 = 0x8d
            
            do
                if (sub_45e350(0xd0, ebx_1, 0x14, 0x14, 0) != 0 && sub_45c4d0() != 0
                        && i != *(data_4bf344 + 0xb21c))
                    sub_4095a0(3)
                    void* eax_8 = data_4bf344
                    *(eax_8 + 0xb21c) = i
                    void* var_18_1 = eax_8 + 0x11f210
                    data_2b5cf0b = *(eax_8 + 0xb21c)
                    sub_43c5b0()
                
                i += 1
                ebx_1 += 0x20
            while (i s< *(eax_1 * 0x18 + 0x4bf014))
        
        if ((data_2b53608 & 0x2100) != 0)
        label_42cd1b:
            sub_4095a0(0)
            void* eax_22 = data_4bf344
            *(eax_1 * 0x18 + &data_4bf010) = *(eax_22 + 0xb21c)
            *(eax_22 + 0xb224) = 0
            *(arg1 + 0x10) = 1
            sub_42b560(3)
            return 0
        
        if (sub_45e350(0x40, 0x99, 0x42, 0x42, 0) != 0 && sub_45c4e0() != 0)
            goto label_42cd1b
        
        int32_t eax_12
        
        if ((data_2b53608 & 0x4400) == 0)
            eax_12 = sub_45c4f0()
        
        if ((data_2b53608 & 0x4400) != 0 || eax_12 != 0)
            sub_4095a0(1)
            void* esi_1 = data_4bf344
            sub_480ea0(&data_2b5aa20, esi_1 + 0x590c, 0x590c)
            void* var_20_2 = esi_1 + 0x11f210
            sub_43c5b0()
            *(data_4bf344 + 0xb224) = 0
            *(arg1 + 0x10) = 1
            sub_42b560(3)
            return 0
        
        int32_t eax_13 = data_2b53610
        int32_t eax_15
        void* ecx_2
        int32_t edi_2
        
        if ((eax_13 & 0x900890) != 0)
            sub_4095a0(3)
            ecx_2 = data_4bf344
            edi_2 = *(eax_1 * 0x18 + 0x4bf014)
            eax_15 = edi_2 + *(ecx_2 + 0xb21c) - 1
        label_42cc93:
            int32_t temp1 = mods.dp.d(sx.q(eax_15), edi_2)
            void* var_14 = ecx_2 + 0x11f210
            *(ecx_2 + 0xb21c) = temp1
            data_2b5cf0b = temp1.b
            sub_43c5b0()
            sub_42b560(3)
            return 0
        
        if ((eax_13 & 0x600260) != 0)
            sub_4095a0(3)
            ecx_2 = data_4bf344
            edi_2 = *(eax_1 * 0x18 + 0x4bf014)
            eax_15 = edi_2 + *(ecx_2 + 0xb21c) + 1
            goto label_42cc93

sub_42b560(3)
return 0
