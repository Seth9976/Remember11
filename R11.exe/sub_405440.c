// 函数: sub_405440
// 地址: 0x405440
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t* esi = *(arg1 + 0x44)
void* ecx = *esi
int32_t eax = 0

if (esi[1].b == 1)
    eax = sx.d(*(arg1 + 0x10))
    *(arg1 + 0x10) = 0x64

switch (sx.d(*(arg1 + 0x10)))
    case 0
        if (data_2b68260 == 0)
            data_2b68260 = 1
            int32_t var_14_1 = esi[0x42]
            void* eax_2 = sub_44e4e0(*(ecx + 4))
            esi[0x56] = eax_2
            int32_t eax_3 = sub_44cd70(eax_2)
            int32_t edx_2 = esi[0x58]
            esi[0x5a] = eax_3
            sub_44cda0(esi[0x56], eax_3, edx_2)
            esi[0x5a] <<= 0xb
            *(arg1 + 0x10) = 1
        label_4054e5:
            int32_t eax_5 = sub_44ce00(esi[0x56])
            
            if (eax_5 == 3)
                sub_44dce0(esi[0x56])
                data_2b68260 = 0
                
                if (*(esi + 5) != 0)
                    if (sub_448390(esi[0x58], esi[0x5a]) == 0)
                        int32_t result = sub_448750(esi[0x58])
                        
                        if (result == 0)
                            *(arg1 + 0x10) = 2
                            return result
                    
                    sub_480ea0(esi[0x57], esi[0x58], esi[0x5a])
                
                return 1
            
            if (eax_5 == 4)
                sub_44dce0(esi[0x56])
                data_2b68260 = 0
                *(arg1 + 0x10) = 0
    case 1
        goto label_4054e5
    case 2
        if (data_2b68264 == 0)
            data_2b68264 = 1
            sub_405170(esi)
            sub_4423a0(esi[0x58], esi[0x57])
            *(arg1 + 0x10) = 3
        label_4055ce:
            
            for (void* i = sub_442400(data_c7bc20, 0x800); i != 0xffffffff; 
                    i = sub_442400(data_c7bc20, 0x800))
                int32_t* eax_16 = data_4ca040
                data_c7bc20 += 0x800 - i
                
                if (sub_448340(eax_16) u>= 0xdc)
                    return 0
            
            esi[0x5a] = data_c7bc28
            data_2b68264 = 0
            return 1
    case 3
        goto label_4055ce
    case 0x64
        if (eax == 1)
            int32_t var_14_10 = esi[0x56]
            sub_44ce50()
            sub_44dce0(esi[0x56])
        
        data_2b68260 = 0
        data_2b68264 = 0
        esi[1].b = 0
        return 1

return 0
