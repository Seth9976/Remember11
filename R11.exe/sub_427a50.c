// 函数: sub_427a50
// 地址: 0x427a50
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void var_84
int32_t eax_1 = __security_cookie ^ &var_84
void* esi = *(arg1 + 0x44)
int32_t eax_11

switch (sx.d(*(arg1 + 0x10)))
    case 0
        void* eax_3 = esi + 0xc
        void* edx_2 = esi + 0x10c - eax_3
        char i
        
        do
            i = *eax_3
            *(edx_2 + eax_3) = i
            eax_3 += 1
        while (i != 0)
        *(arg1 + 0x10) = 1
    case 1
        void* var_94_1 = esi + 0x210
        int32_t eax_6 = sub_4502a0(1, esi + 0x20c)
        
        if (eax_6 == 0xffffffff)
            void* var_94_3 = esi + 0x10c
            sub_480b92(&var_84, "/%s")
            sub_450540(*(esi + 4), *(esi + 8), &var_84)
        else if (eax_6 == 1)
            int32_t edi_2 = *(esi + 0x210)
            
            if (edi_2 != 0xfffffffc && edi_2 != 0)
                sub_480cd2(eax_1 ^ &var_84)
                return 2
            
            void* var_94_2 = esi + 0xc
            void* var_98_2 = esi + 0x10c
            sub_480b92(&var_84, "/%s/%s")
            *(esi + 0x230) =
                sub_4277c0(esi, *(esi + 4), *(esi + 8), &var_84, &data_22366c0, 0xd400, 0xffffffff)
            *(arg1 + 0x10) = 2
    case 2
        int32_t eax_10 = sub_446f90(*(esi + 0x230))
        eax_11 = eax_10 - 1
        
        if (eax_10 == 1)
            void* var_94_5 = esi + 0x10c
            sub_480b92(&var_84, "/%s/icon.ico")
            *(esi + 0x230) =
                sub_4277c0(esi, *(esi + 4), *(esi + 8), &var_84, 0x4b20c8, 0xbf94, 0xffffffff)
            *(arg1 + 0x10) = 3
        else
        label_427b7e:
            
            if (eax_11 == 1)
                sub_480cd2(eax_1 ^ &var_84)
                return 2
    case 3
        int32_t eax_16 = sub_446f90(*(esi + 0x230))
        eax_11 = eax_16 - 1
        
        if (eax_16 != 1)
            goto label_427b7e
        
        void* var_94_7 = esi + 0x10c
        sub_480b92(&var_84, "/%s/icon.sys")
        sub_426fb0()
        *(esi + 0x230) =
            sub_4277c0(esi, *(esi + 4), *(esi + 8), &var_84, &data_a5d920, 0x3c4, 0xffffffff)
        *(arg1 + 0x10) = 4
    case 4
        int32_t eax_19 = sub_446f90(*(esi + 0x230))
        eax_11 = eax_19 - 1
        
        if (eax_19 != 1)
            goto label_427b7e
        
        sub_480cd2(eax_1 ^ &var_84)
        return 1

sub_480cd2(eax_1 ^ &var_84)
return 0
