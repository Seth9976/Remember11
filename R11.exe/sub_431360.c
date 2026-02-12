// 函数: sub_431360
// 地址: 0x431360
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ecx
int32_t var_4_1 = ecx
int32_t eax = sx.d(*(arg1 + 0x10))
int32_t ebp = 0
int32_t ebx = 0
int32_t edi = 0
int32_t var_4 = 0
data_a5dd08 = &data_e7e660

switch (eax)
    case 0
        sub_4312a0()
        *(data_a5dd08 + 8) = 0
        sub_4050d0(2, 0xa)
        *(arg1 + 0x10) = 1
        sub_430ed0()
        return 0
    case 1
        if (sub_405130() != 0)
            *(arg1 + 0x10) = 2
    case 2
        if (sub_45e350(0x28, 0x44, 0x18, 0x18, 0) != 0)
            edi = sub_45c500()
        
        if (sub_45e350(0x240, 0x44, 0x18, 0x18, 0) != 0)
            ebx = sub_45c500()
        
        if (*(data_a5dd08 + 4) != 0)
            if (sub_45e350(0x2c, 0x6c, 0x18, 0x18, 0) != 0)
                ebp = sub_45c500()
            
            if (sub_45e350(0x2c, 0x170, 0x18, 0x18, 0) != 0)
                var_4 = sub_45c500()
        
        int32_t eax_13
        
        if ((*(data_c7cc70 + 8) & 0x4000) == 0)
            eax_13 = sub_45c4f0()
        
        if ((*(data_c7cc70 + 8) & 0x4000) != 0 || eax_13 != 0)
            sub_4095a0(1)
            sub_4050d0(3, 0xa)
            *(arg1 + 0x10) = 4
            sub_430ed0()
            return 0
        
        int32_t ecx_4 = *(data_c7cc70 + 0x10)
        
        if (ecx_4.b s< 0 || (ecx_4 & 0x800500) != 0 || edi != 0)
            sub_4095a0(3)
            sub_441740(data_a5dd08 + 0x18, 0, 8)
            sub_441760(data_a5dd08 + 0x18, 0x280, 0)
            int32_t* eax_37 = data_a5dd08
            int32_t ecx_23 = eax_37[1]
            *eax_37 = ecx_23
            int32_t ecx_25 = (ecx_23 + 3) & 0x80000003
            
            if (ecx_25 s< 0)
                ecx_25 = ((ecx_25 - 1) | 0xfffffffc) + 1
            
            eax_37[1] = ecx_25
            eax_37[3] = 1
            eax_37[2] = 1
            *(arg1 + 0x10) = 3
            sub_430ed0()
            return 0
        
        if ((ecx_4.b & 0x20) != 0 || (ecx_4 & 0x200a00) != 0 || ebx != 0)
            sub_4095a0(3)
            sub_441740(data_a5dd08 + 0x18, 0, 8)
            sub_441760(data_a5dd08 + 0x18, 0x280, 0)
            int32_t* eax_35 = data_a5dd08
            int32_t ecx_15 = eax_35[1]
            *eax_35 = ecx_15
            int32_t ecx_17 = (ecx_15 + 1) & 0x80000003
            
            if (ecx_17 s< 0)
                ecx_17 = ((ecx_17 - 1) | 0xfffffffc) + 1
            
            eax_35[1] = ecx_17
            eax_35[3] = 0
            eax_35[2] = 1
            *(arg1 + 0x10) = 3
            sub_430ed0()
            return 0
        
        void* edx_2 = data_a5dd08
        int32_t eax_15 = *(edx_2 + 4)
        
        if (eax_15 == 1)
            if ((ecx_4.b & 0x10) != 0 || (ecx_4 & 0x100000) != 0 || ebp != 0)
                if (*(edx_2 + 0x30) != 0)
                    sub_4095a0(3)
                    void* eax_31 = data_a5dd08
                    *(eax_31 + 0x30) -= 1
                    sub_430ed0()
                    return 0
            else if (((ecx_4.b & 0x40) != 0 || (ecx_4 & &__dos_header) != 0 || var_4 != ebp)
                    && *(edx_2 + 0x30) != data_2b55ef8 - 0xa)
                sub_4095a0(3)
                void* eax_29 = data_a5dd08
                *(eax_29 + 0x30) += 1
                sub_430ed0()
                return 0
        else if (eax_15 == 2)
            if ((ecx_4.b & 0x10) != 0 || (ecx_4 & 0x100000) != 0 || ebp != 0)
                if (*(edx_2 + 0x34) != 0)
                    sub_4095a0(3)
                    void* eax_27 = data_a5dd08
                    *(eax_27 + 0x34) -= 1
                    sub_430ed0()
                    return 0
            else if (((ecx_4.b & 0x40) != 0 || (ecx_4 & &__dos_header) != 0 || var_4 != ebp)
                    && *(edx_2 + 0x34) != data_2b55e8c - 0xa)
                sub_4095a0(3)
                void* eax_25 = data_a5dd08
                *(eax_25 + 0x34) += 1
                sub_430ed0()
                return 0
        else if (eax_15 == 3)
            if ((ecx_4.b & 0x10) != 0 || (ecx_4 & 0x100000) != 0 || ebp != 0)
                if (*(edx_2 + 0x38) != 0)
                    sub_4095a0(3)
                    void* eax_21 = data_a5dd08
                    *(eax_21 + 0x38) -= 1
                    sub_430ed0()
                    return 0
            else if (((ecx_4.b & 0x40) != 0 || (ecx_4 & &__dos_header) != 0 || var_4 != ebp)
                    && *(edx_2 + 0x38) != data_2b5a740 - 0xa)
                sub_4095a0(3)
                void* eax_19 = data_a5dd08
                *(eax_19 + 0x38) += 1
                sub_430ed0()
                return 0
    case 3
        sub_4417a0(0xe7e678)
        
        if (sub_441790(data_a5dd08 + 0x18) s>= 0x280)
            *(data_a5dd08 + 8) = 0
            *(arg1 + 0x10) = 2
            sub_430ed0()
            return 0
    case 4
        if (sub_405130() != 0)
            *(arg1 + 0x10) = 5
            sub_430ed0()
            return 0
    case 5
        data_2b55e64 = 3
        return 1

sub_430ed0()
return 0
