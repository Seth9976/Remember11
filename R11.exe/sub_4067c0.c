// 函数: sub_4067c0
// 地址: 0x4067c0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

char* esi = nullptr
int32_t ebp = 0

while (true)
    *(esi * 0x22 + &data_2b53780) = 0xff
    
    switch (sub_44f7c0(esi, 0))
        case 0, 1, 7
            esi[0x2b5375a] = 0
        case 2
            int32_t eax_4
            eax_4.b = esi[0x2b5375a]
            
            if (eax_4.b == 0)
                esi[0x2b5375a] = 3
            label_40680e:
                void* var_14_1 = esi * 0x22 + &data_2b53780
                int32_t var_18_2 = 0
                sub_44f770(esi)
            else if (eax_4.b == 3)
                goto label_40680e
        case 6
            int32_t var_14_2 = 0
            int32_t eax_5 = sub_44f7f0(esi, 0, 2)
            
            switch (zx.d(esi[0x2b5375a]))
                case 0
                    int32_t var_14_3 = 3
                    int32_t var_18_3 = 1
                    int32_t var_1c_2 = 0
                    char* var_20_2 = esi
                    esi[0x2b5375a] = 1
                case 1
                    int32_t var_14_4 = 0x4af300
                    int32_t var_18_4 = 0
                    char* var_1c_3 = esi
                    esi[0x2b5375a] = 2
                    esi[0x2b53758] = eax_5.b
                case 2
                    esi[0x2b5375a] = 3
                label_406894:
                    
                    if (eax_5 != zx.d(esi[0x2b53758]))
                        esi[0x2b5375a] = 1
                    else
                        void* var_14_5 = esi * 6 + &data_2b53760
                        int32_t var_18_5 = 0
                        char* var_1c_4 = esi
                        void* var_20_3 = esi * 0x22 + &data_2b53780
                        int32_t var_24_1 = 0
                        sub_44f770(esi)
                case 3
                    goto label_406894
    
    char* temp0_1 = esi
    esi = &esi[1]
    bool c_1 = temp0_1 u>= 0xffffffff
    int32_t temp1_1 = ebp
    ebp = adc.d(temp1_1, 0, c_1)
    bool s_1 = adc.d(temp1_1, 0, c_1) s< 0
    bool o_1 = unimplemented  {adc ebp, 0x0}
    
    if (not(s_1))
        if (adc.d(temp1_1, 0, c_1) != 0 && s_1 == o_1)
            break
        
        if (esi u>= 2)
            break

return sub_442120() __tailcall
