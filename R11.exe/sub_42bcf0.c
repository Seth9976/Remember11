// 函数: sub_42bcf0
// 地址: 0x42bcf0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* edi = data_4bf344
int32_t eax_1 = *((*(edi + 0xb218) << 2) + &data_4bf2e0)
void* entry_ebx
int32_t eax_2 = sx.d(*(entry_ebx + 0x10))

if (eax_2 == 0)
    int32_t esi_3 = arg2 << 5
    sub_43d220(edi + 0x15788, esi_3 + 0x4be488, 2, 0, 0xffffffff, 0x1000)
    sub_441740(data_4bf344 + 0x1f0f0, 0x280, 0xa)
    sub_441760(data_4bf344 + 0x1f0f0, 0, 0)
    sub_43d220(data_4bf344 + 0x19c3c, esi_3 + 0x4be498, 3, 0, 0xffffffff, 0xe14)
    edi = data_4bf344
    *(entry_ebx + 0x10) = 1
label_42c017:
    
    if (*(edi + 0xb224) == 1)
        sub_480ea0(edi + 0x590c, &data_2b5aa20, 0x590c)
        *(edi + 0xb21c) = 0
        *(edi + 0xb224) = 3
        *(entry_ebx + 0x10) = 2
else
    if (eax_2 == 1)
        goto label_42c017
    
    if (eax_2 == 2)
        int32_t eax_6 = sub_45e380(0xe9, 0xb1, 0x10f, 0x12, *((&data_4bf018)[eax_1 * 6] + 8))
        
        if (eax_6 s>= 0 && sub_45c4d0() != 0 && eax_6 != *((&data_4bf018)[eax_1 * 6] + 4))
            sub_4095a0(3)
            *((&data_4bf018)[eax_1 * 6] + 4) = eax_6
            *arg1 = *((&data_4bf018)[eax_1 * 6] + 4)
        
        int32_t eax_10
        int32_t eax_11
        
        if ((data_2b53608 & 0x2100) == 0)
            eax_10 = sub_45e350(0x40, 0x99, 0x42, 0x42, 0)
            
            if (eax_10 != 0)
                eax_11 = sub_45c4e0()
        
        if ((data_2b53608 & 0x2100) != 0 || (eax_10 != 0 && eax_11 != 0))
            sub_4095a0(0)
            
            if (arg3 != 0)
                *(eax_1 * 0x18 + &data_4bf010) = *((&data_4bf018)[eax_1 * 6] + 4)
            
            *(data_4bf344 + 0xb224) = 0
            *(entry_ebx + 0x10) = 1
            sub_42b560(arg2)
            return 0
        
        int32_t eax_12
        
        if ((data_2b53608 & 0x4400) == 0)
            eax_12 = sub_45c4f0()
        
        if ((data_2b53608 & 0x4400) != 0 || eax_12 != 0)
            sub_4095a0(1)
            void* edi_2 = data_4bf344
            sub_480ea0(&data_2b5aa20, edi_2 + 0x590c, 0x590c)
            *((&data_4bf018)[eax_1 * 6] + 4) = zx.d(*arg1)
            
            if (arg3 != 0)
                *(eax_1 * 0x18 + &data_4bf010) = zx.d(*arg1)
            
            *(edi_2 + 0xb224) = 0
            *(entry_ebx + 0x10) = 1
            sub_42b560(arg2)
            return 0
        
        int32_t eax_13 = data_2b53610
        
        if ((eax_13 & 0x900890) != 0)
            if (*((&data_4bf018)[eax_1 * 6] + 4) s> 0)
                sub_4095a0(3)
                void* eax_24 = (&data_4bf018)[eax_1 * 6]
                *(eax_24 + 4) -= 1
                eax_24.b = *((&data_4bf018)[eax_1 * 6] + 4)
                *arg1 = eax_24.b
                sub_42b560(arg2)
                return 0
            
            void* eax_27 = data_4bf344
            
            if (*(eax_27 + 0xb238) == 0)
                *(eax_27 + 0xb238) = 1
                sub_4095a0(2)
                sub_42b560(arg2)
                return 0
        else if ((eax_13 & 0x600260) != 0)
            void* eax_17 = (&data_4bf018)[eax_1 * 6]
            
            if (*(eax_17 + 4) s< *(eax_17 + 8) - 1)
                sub_4095a0(3)
                void* eax_18 = (&data_4bf018)[eax_1 * 6]
                *(eax_18 + 4) += 1
                eax_18.b = *((&data_4bf018)[eax_1 * 6] + 4)
                *arg1 = eax_18.b
                sub_42b560(arg2)
                return 0
            
            void* eax_21 = data_4bf344
            
            if (*(eax_21 + 0xb238) == 0)
                *(eax_21 + 0xb238) = 1
                sub_4095a0(2)
                sub_42b560(arg2)
                return 0
        else
            void* eax_14 = data_4bf344
            
            if (*(eax_14 + 0xb238) == 1 && (data_2b53604 & 0xf00af0) == 0)
                *(eax_14 + 0xb238) = 0
                sub_42b560(arg2)
                return 0

sub_42b560(arg2)
return 0
