// 函数: sub_427830
// 地址: 0x427830
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

char var_84[0x80]
int32_t eax_1 = __security_cookie ^ &var_84
int32_t* esi = *(arg1 + 0x44)
int32_t eax_7

switch (sx.d(*(arg1 + 0x10)))
    case 0
        esi[0x8c] = sub_427650(esi, esi[1], esi[2])
        *(arg1 + 0x10) = 1
    case 1
        int32_t eax_6 = sub_446f90(esi[0x8c])
        eax_7 = eax_6 - 1
        
        if (eax_6 != 1)
        label_427a0d:
            
            if (eax_7 == 1)
                sub_480cd2(eax_1 ^ &var_84)
                return 2
        else
            int32_t eax_8 = esi[0x84]
            
            if (eax_8 != 0xffffffff)
                if (eax_8 != 0)
                    sub_480cd2(eax_1 ^ &var_84)
                    return 2
                
                if (*esi == 1 && data_2b60370 != eax_8)
                    sub_480cd2(eax_1 ^ &var_84)
                    return 1
            
            char* eax_10 = &esi[3]
            char i
            
            do
                i = *eax_10
                *("data.dat" - &esi[3] + eax_10) = i
                eax_10 = &eax_10[1]
            while (i != 0)
            
            data_4be168 = esi[0x8b]
            
            if (*esi != 1)
                __builtin_strncpy("icon.ico", "lemu.ico", 9)
                data_4be26c = 0x410e
            else
                char* eax_12 = data_4b20b0
                char* edx_3 = "icon.ico" - eax_12
                
                do
                    i = *eax_12
                    *(edx_3 + eax_12) = i
                    eax_12 = &eax_12[1]
                while (i != 0)
                
                data_4be26c = 0xbf94
            
            esi[0x8c] = sub_4276e0(esi, esi[1], esi[2], &esi[3], esi[0x8b], "data.dat", 3)
            *(arg1 + 0x10) = 2
    case 2
        int32_t eax_15 = sub_446f90(esi[0x8c])
        eax_7 = eax_15 - 1
        
        if (eax_15 != 1)
            goto label_427a0d
        
        void* __saved_edi_4 = &esi[3]
        void* var_94_2 = &esi[3]
        sub_480b92(&var_84, "/%s/%s")
        esi[0x8c] = sub_427750(esi, esi[1], esi[2], &var_84, esi[0x89], esi[0x8b], 0xffffffff)
        *(arg1 + 0x10) = 3
    case 3
        int32_t eax_20 = sub_446f90(esi[0x8c])
        eax_7 = eax_20 - 1
        
        if (eax_20 != 1)
            goto label_427a0d
        
        sub_480cd2(eax_1 ^ &var_84)
        return 1

sub_480cd2(eax_1 ^ &var_84)
return 0
