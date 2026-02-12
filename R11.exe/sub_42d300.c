// 函数: sub_42d300
// 地址: 0x42d300
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* edi = data_4bf344
int32_t eax_1 = *((*(edi + 0xb218) << 2) + &data_4bf2e0)
int32_t eax_2 = sx.d(*(arg1 + 0x10))

if (eax_2 == 0)
    sub_43d220(edi + 0x15788, 0x4be528, 2, 0, 0xffffffff, 0x1000)
    sub_441740(data_4bf344 + 0x1f0f0, 0x280, 0xa)
    sub_441760(data_4bf344 + 0x1f0f0, 0, 0)
    sub_43d220(data_4bf344 + 0x19c3c, 0x4be538, 3, 0, 0xffffffff, 0xe14)
    edi = data_4bf344
    *(arg1 + 0x10) = 1
label_42d5ef:
    
    if (*(edi + 0xb224) == 1)
        sub_480ea0(edi + 0x590c, &data_2b5aa20, 0x590c)
        *(edi + 0xb224) = 3
        *(arg1 + 0x10) = 2
else
    if (eax_2 == 1)
        goto label_42d5ef
    
    if (eax_2 == 2)
        int32_t eax_6 = data_2b53608
        
        if ((eax_6 & 0x2100) != 0)
            sub_4095a0(0)
            sub_4090d0(2)
            void* eax_7 = data_4bf344
            *(eax_1 * 0x18 + &data_4bf010) = *(eax_7 + 0xb21c)
            *(eax_7 + 0xb224) = 0
            *(arg1 + 0x10) = 1
            sub_42b560(5)
            return 0
        
        int32_t eax_9
        
        if ((eax_6 & 0x4400) == 0)
            eax_9 = sub_45c4f0()
        
        if ((eax_6 & 0x4400) != 0 || eax_9 != 0)
            sub_4095a0(1)
            sub_480ea0(&data_2b5aa20, data_4bf344 + 0x590c, 0x590c)
            sub_4090d0(2)
            sub_409010(3, 0xffff)
            sub_409010(4, 0xffff)
            sub_409010(5, 0xffff)
            *(data_4bf344 + 0xb224) = 0
            *(arg1 + 0x10) = 1
            sub_42b560(5)
            return 0
        
        if ((data_2b53608 & 0x8000) != 0)
            sub_409010(3, 0x80)
            sub_409010(4, 0x80)
            sub_409010(5, 0x80)
            sub_409010(2, 0x80)
            sub_409100(2, *((modu.dp.d(0:(sub_448760()), 0xd) << 2) + &data_4be8fc) & 0xfff)
            sub_42b560(5)
            return 0
        
        int32_t eax_13 = data_2b53610
        
        if ((eax_13 & 0x900890) != 0)
            sub_4095a0(3)
            void* ecx_3 = data_4bf344
            int32_t ebx_3 = *(eax_1 * 0x18 + 0x4bf014)
            int32_t temp1_2 = mods.dp.d(sx.q(*(ecx_3 + 0xb21c) + ebx_3 - 1), ebx_3)
            *(ecx_3 + 0xb21c) = temp1_2
            data_2b5cf03 = *((temp1_2 << 2) + &data_4af320)
            sub_409010(3, 0xffff)
            sub_409010(4, 0xffff)
            sub_409010(5, 0xffff)
            sub_409010(2, sub_4090b0(3))
            sub_42b560(5)
            return 0
        
        if ((eax_13 & 0x600260) != 0)
            sub_4095a0(3)
            void* ecx_2 = data_4bf344
            int32_t ebx_2 = *(eax_1 * 0x18 + 0x4bf014)
            int32_t temp1_1 = mods.dp.d(sx.q(*(ecx_2 + 0xb21c) + ebx_2 + 1), ebx_2)
            *(ecx_2 + 0xb21c) = temp1_1
            ecx_2.b = *((temp1_1 << 2) + &data_4af320)
            data_2b5cf03 = ecx_2.b
            sub_409010(3, 0xffff)
            sub_409010(4, 0xffff)
            sub_409010(5, 0xffff)
            sub_409010(2, sub_4090b0(3))
            sub_42b560(5)
            return 0

sub_42b560(5)
return 0
