// 函数: sub_42ce10
// 地址: 0x42ce10
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* esi = data_4bf344
int32_t eax_1 = *((*(esi + 0xb218) << 2) + &data_4bf2e0)
int32_t eax_2 = sx.d(*(arg1 + 0x10))

if (eax_2 == 0)
    sub_43d220(esi + 0x15788, 0x4be4c8, 2, 0, 0xffffffff, 0x1000)
    sub_441740(data_4bf344 + 0x1f0f0, 0x280, 0xa)
    sub_441760(data_4bf344 + 0x1f0f0, 0, 0)
    sub_43d220(data_4bf344 + 0x19c3c, 0x4be4d8, 3, 0, 0xffffffff, 0xe14)
    esi = data_4bf344
    *(arg1 + 0x10) = 1
label_42cff8:
    
    if (*(esi + 0xb224) == 1)
        sub_480ea0(esi + 0x590c, &data_2b5aa20, 0x590c)
        *(esi + 0xb224) = 3
        *(arg1 + 0x10) = 2
else
    if (eax_2 == 1)
        goto label_42cff8
    
    if (eax_2 == 2)
        int32_t eax_6 = data_2b53608
        
        if ((eax_6 & 0x2100) != 0)
            sub_4095a0(0)
            void* eax_7 = data_4bf344
            *(eax_1 * 0x18 + &data_4bf010) = *(eax_7 + 0xb21c)
            *(eax_7 + 0xb224) = 0
            *(arg1 + 0x10) = 1
            sub_42b560(2)
            return 0
        
        int32_t eax_9
        
        if ((eax_6 & 0x4400) == 0)
            eax_9 = sub_45c4f0()
        
        if ((eax_6 & 0x4400) != 0 || eax_9 != 0)
            sub_4095a0(1)
            void* esi_1 = data_4bf344
            sub_480ea0(&data_2b5aa20, esi_1 + 0x590c, 0x590c)
            void* var_20 = esi_1 + 0x11f210
            sub_43c5b0()
            *(data_4bf344 + 0xb224) = 0
            *(arg1 + 0x10) = 1
            sub_42b560(2)
            return 0
        
        int32_t eax_10 = data_2b53610
        int32_t eax_11
        void* ecx_2
        int32_t ebx_2
        
        if ((eax_10 & 0x900890) != 0)
            sub_4095a0(3)
            ecx_2 = data_4bf344
            ebx_2 = *(eax_1 * 0x18 + 0x4bf014)
            eax_11 = *(ecx_2 + 0xb21c) + ebx_2 - 1
        label_42cef7:
            int32_t temp1 = mods.dp.d(sx.q(eax_11), ebx_2)
            void* var_14 = ecx_2 + 0x11f210
            *(ecx_2 + 0xb21c) = temp1
            data_2b5cf0a = temp1.b
            sub_43c5b0()
            sub_42b560(2)
            return 0
        
        if ((eax_10 & 0x600260) != 0)
            sub_4095a0(3)
            ecx_2 = data_4bf344
            ebx_2 = *(eax_1 * 0x18 + 0x4bf014)
            eax_11 = *(ecx_2 + 0xb21c) + ebx_2 + 1
            goto label_42cef7

sub_42b560(2)
return 0
