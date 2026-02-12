// 函数: sub_42d040
// 地址: 0x42d040
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* esi = data_4bf344
int32_t eax_1 = *((*(esi + 0xb218) << 2) + &data_4bf2e0)
int32_t eax_2 = sx.d(*(arg1 + 0x10))

if (eax_2 == 0)
    sub_43d220(esi + 0x15788, 0x4be508, 2, 0, 0xffffffff, 0x1000)
    sub_441740(data_4bf344 + 0x1f0f0, 0x280, 0xa)
    sub_441760(data_4bf344 + 0x1f0f0, 0, 0)
    sub_43d220(data_4bf344 + 0x19c3c, 0x4be518, 3, 0, 0xffffffff, 0xe14)
    esi = data_4bf344
    *(arg1 + 0x10) = 1
label_42d2b9:
    
    if (*(esi + 0xb224) == 1)
        sub_480ea0(esi + 0x590c, &data_2b5aa20, 0x590c)
        *(esi + 0xb224) = 3
        *(arg1 + 0x10) = 2
else
    if (eax_2 == 1)
        goto label_42d2b9
    
    if (eax_2 == 2)
        int32_t eax_6 = data_2b53608
        
        if ((eax_6 & 0x2100) != 0)
            sub_4095a0(0)
            sub_4090d0(0)
            void* eax_7 = data_4bf344
            *(eax_1 * 0x18 + &data_4bf010) = *(eax_7 + 0xb21c)
            *(eax_7 + 0xb224) = 0
            *(arg1 + 0x10) = 1
            sub_42b560(4)
            return 0
        
        int32_t eax_9
        
        if ((eax_6 & 0x4400) == 0)
            eax_9 = sub_45c4f0()
        
        if ((eax_6 & 0x4400) != 0 || eax_9 != 0)
            sub_4095a0(1)
            sub_480ea0(&data_2b5aa20, data_4bf344 + 0x590c, 0x590c)
            sub_4090d0(0)
            sub_409010(0, 0xffff)
            *(data_4bf344 + 0xb224) = 0
            *(arg1 + 0x10) = 1
            sub_42b560(4)
            return 0
        
        if ((data_2b53608 & 0x8000) != 0)
            sub_409010(eax_9, 0x80)
            int32_t var_10 = 0
            int32_t eax_10 = sub_448760()
            void* ecx_2 = data_4bf344
            *(ecx_2 + 0xb23c)
            sub_409100(0, *(ecx_2 + (mods.dp.d(sx.q(eax_10), *(ecx_2 + 0xb23c)) << 2) + 0xb240))
            sub_42b560(4)
            return 0
        
        int32_t eax_14 = data_2b53610
        
        if ((eax_14 & 0x900890) != 0)
            sub_4095a0(3)
            void* ecx_4 = data_4bf344
            int32_t ebx_3 = *(eax_1 * 0x18 + 0x4bf014)
            int32_t temp1_2 = mods.dp.d(sx.q(*(ecx_4 + 0xb21c) + ebx_3 - 1), ebx_3)
            *(ecx_4 + 0xb21c) = temp1_2
            data_2b5cf04 = *((temp1_2 << 2) + &data_4af308)
            sub_409010(0, 0xffff)
            sub_42b560(4)
            return 0
        
        if ((eax_14 & 0x600260) != 0)
            sub_4095a0(3)
            void* ecx_3 = data_4bf344
            int32_t ebx_2 = *(eax_1 * 0x18 + 0x4bf014)
            int32_t temp1_1 = mods.dp.d(sx.q(*(ecx_3 + 0xb21c) + ebx_2 + 1), ebx_2)
            *(ecx_3 + 0xb21c) = temp1_1
            ecx_3.b = *((temp1_1 << 2) + &data_4af308)
            data_2b5cf04 = ecx_3.b
            sub_409010(0, 0xffff)
            sub_42b560(4)
            return 0

sub_42b560(4)
return 0
