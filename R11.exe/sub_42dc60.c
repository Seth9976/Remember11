// 函数: sub_42dc60
// 地址: 0x42dc60
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* esi = data_4bf344
int32_t eax_1 = *((*(esi + 0xb218) << 2) + &data_4bf2e0)
int32_t eax_2 = sx.d(*(arg1 + 0x10))

if (eax_2 == 0)
    sub_43d220(esi + 0x15788, 0x4be748, 2, 0, 0xffffffff, 0x1000)
    sub_441740(data_4bf344 + 0x1f0f0, 0x280, 0xa)
    sub_441760(data_4bf344 + 0x1f0f0, 0, 0)
    sub_43d220(data_4bf344 + 0x19c3c, 0x4be758, 3, 0, 0xffffffff, 0xe14)
    esi = data_4bf344
    *(arg1 + 0x10) = 1
label_42ded5:
    
    if (*(esi + 0xb224) == 1)
        sub_480ea0(esi + 0x590c, &data_2b5aa20, 0x590c)
        *(esi + 0xb224) = 3
        *(esi + 0xb22c) = 0
        *(arg1 + 0x10) = 2
else
    if (eax_2 == 1)
        goto label_42ded5
    
    if (eax_2 == 2)
        int32_t eax_6 = data_2b53608
        void* esi_1
        
        if ((eax_6 & 0x2100) == 0)
            int32_t eax_7
            
            if ((eax_6 & 0x4400) == 0)
                eax_7 = sub_45c4f0()
            
            if ((eax_6 & 0x4400) != 0 || eax_7 != 0)
                sub_4095a0(1)
                *(data_4bf344 + 0xb22c) = 0
                sub_406780(0, 0)
                esi_1 = data_4bf344
                sub_480ea0(&data_2b5aa20, esi_1 + 0x590c, 0x590c)
                *(esi_1 + 0xb224) = 0
                *(arg1 + 0x10) = 1
            else
                int32_t eax_8 = data_2b53610
                
                if ((eax_8 & 0x900890) != 0)
                    sub_4095a0(3)
                    esi_1 = data_4bf344
                    int32_t ebx_3 = *(eax_1 * 0x18 + 0x4bf014)
                    int32_t temp1_2 = mods.dp.d(sx.q(ebx_3 + *(esi_1 + 0xb21c) - 1), ebx_3)
                    *(esi_1 + 0xb21c) = temp1_2
                    data_2b5cf14 = temp1_2.b
                label_42dd4e:
                    
                    if (*(esi_1 + 0xb21c) != 0)
                        *(esi_1 + 0xb22c) = 0
                        sub_406780(0, 0)
                        esi_1 = data_4bf344
                    else
                        *(esi_1 + 0xb22c) = 0x23
                else
                    if ((eax_8 & 0x600260) != 0)
                        sub_4095a0(3)
                        esi_1 = data_4bf344
                        int32_t ebx_2 = *(eax_1 * 0x18 + 0x4bf014)
                        int32_t temp1_1 = mods.dp.d(sx.q(ebx_2 + *(esi_1 + 0xb21c) + 1), ebx_2)
                        *(esi_1 + 0xb21c) = temp1_1
                        data_2b5cf14 = temp1_1.b
                        goto label_42dd4e
                    
                    esi_1 = data_4bf344
        else
            sub_4095a0(0)
            *(data_4bf344 + 0xb22c) = 0
            sub_406780(0, 0)
            esi_1 = data_4bf344
            *(eax_1 * 0x18 + &data_4bf010) = *(esi_1 + 0xb21c)
            *(esi_1 + 0xb224) = 0
            *(arg1 + 0x10) = 1
        
        int32_t esi_2 = *(esi_1 + 0xb22c)
        int32_t var_10
        
        if (esi_2 s<= 0x1e)
            if (esi_2 == 0)
                sub_406780(0, 0)
                sub_42b560(0x16)
                return 0
            
            var_10 = 0xff
        else
            var_10 = 0
        
        sub_406780(0, var_10)
        void* eax_16 = data_4bf344
        *(eax_16 + 0xb22c) -= 1
        sub_42b560(0x16)
        return 0

sub_42b560(0x16)
return 0
