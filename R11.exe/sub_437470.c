// 函数: sub_437470
// 地址: 0x437470
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t eax = sx.d(*(arg1 + 0x10))
int32_t* ecx = &data_e7e660
data_a5dd0c = &data_e7e660

switch (eax)
    case 0
        sub_437420()
        void* eax_1 = data_a5dd0c
        int32_t __saved_ebp_1
        
        if (data_2b55e68 == 0xf)
            __saved_ebp_1 = 3
        else
            __saved_ebp_1 = 5
        
        sub_426080(eax_1 + 0xefc8, eax_1 + 0x25186c, eax_1 + 0xdfbc, 0x80, 1, __saved_ebp_1)
        sub_437090()
        void* eax_3 = data_a5dd0c
        *(eax_3 + 0xf020) = *(eax_3 + 0xefc4)
        *(eax_3 + 0xefcc) = 1
        sub_426700(0)
        sub_4050d0(2, 0xa)
        *(arg1 + 0x10) = 1
        goto label_43750c
    case 1
    label_43750c:
        
        if (sub_405130() == 1)
            *(arg1 + 0x10) = 2
    case 2
        int32_t eax_6 = data_2b53608
        
        if ((eax_6 & 0x2100) != 0 || data_e7e638 != 0)
            void* eax_12 = &(&data_e7e660)[data_e8d630 * 8]
            data_e7e638 = 0
            
            if (*(eax_12 + 0xdfc4) == 0 && *(eax_12 + 0xdfc1) == 0)
                sub_4095a0(0)
                sub_43d220(data_a5dd0c + 0x2303b8, 0x4bf74c, 1, 0, 0xffffffff, 0x1000)
                *(data_a5dd0c + 0xefc0) = 1
                sub_431800()
                *(arg1 + 0x10) = 3
                sub_425330()
                return 0
            
            sub_4095a0(2)
            sub_425330()
            return 0
        
        if ((eax_6 & 0x4400) == 0 && sub_45c4f0() == 0 && (data_2b53608 & 0x400) == 0)
            sub_4263d0()
            sub_425330()
            return 0
        
        sub_4095a0(1)
        sub_4050d0(3, 0xa)
        *(data_a5dd0c + 0xefc0) = 1
        *(arg1 + 0x10) = 4
        sub_425330()
        return 0
    case 3
        int32_t edx_3 = data_10aea1c
        int32_t eax_17 = data_e7e634
        
        if (eax_17 s>= edx_3 - 2 && eax_17 - edx_3 + 2 != data_e8d620)
            sub_4095a0(3)
            ecx = data_a5dd0c
            ecx[0x3bf0] = data_e7e634 - ecx[0x8c0ef] + 2
            eax_17 = data_e7e634
        
        if (eax_17 s< ecx[0x8c0ef] - 2)
            data_e7e630 = 0
        
        int32_t eax_18 = data_2b53608
        
        if ((eax_18 & 0x2100) != 0 || data_e7e630 != 0)
            data_e7e630 = 0
            
            if (ecx[0x3bf0] != 0)
                sub_4095a0(1)
                *(arg1 + 0x10) = 2
            else
                sub_4095a0(0)
                sub_4050d0(3, 0xa)
                *(data_a5dd0c + 0xefc0) = 2
                *(arg1 + 0x10) = 4
        else if ((eax_18 & 0x4400) != 0)
            sub_4095a0(1)
            *(arg1 + 0x10) = 2
        else if (sub_45c4f0() != 0)
            sub_4095a0(1)
            *(arg1 + 0x10) = 2
        else if ((data_2b53610 & 0xf00af0) != 0)
            sub_4095a0(3)
            void* eax_20 = data_a5dd0c
            int32_t ecx_4
            ecx_4.b = *(eax_20 + 0xefc0) == 0
            *(eax_20 + 0xefc0) = ecx_4
        
        void* eax_21 = data_a5dd0c
        int32_t var_8 = 0x140
        int32_t var_4 = 0xe0
        sub_43d2c0(eax_21 + 0x2303b8, &var_8, nullptr, *(eax_21 + 0xefc0) - 2, 1, 1)
        sub_425330()
        return 0
    case 4
        if (sub_405130() == 1)
            sub_405e20()
            void* eax_25 = data_a5dd0c
            
            if (*(eax_25 + 0xefc0) != 2)
                data_2b55e64 = 3
                return *(eax_25 + 0xefc0)
            
            sub_408ef0()
            sub_401620()
            sub_4016c0()
            void* eax_26 = data_a5dd0c
            data_2b5a930 = *(*(eax_26 + 0xefd0) * 0x1bc + eax_26 + 0x28c)
            int32_t ecx_8
            ecx_8.w = *(eax_26 + 0xefbc)
            data_2b5a92e = ecx_8.w
            data_2b55e64 = 1
            return *(eax_26 + 0xefc0)

sub_425330()
return 0
