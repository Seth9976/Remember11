// 函数: sub_4399a0
// 地址: 0x4399a0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

data_a5dd18 = &data_e7e660
int32_t eax = sub_409160(0)
void* ecx = data_a5dd18
*(ecx + 0x14) = eax

switch (sx.d(*(arg1 + 0x10)))
    case 0
        sub_439900()
        *data_a5dd18 = 0
        sub_4050d0(2, 0xa)
        *(arg1 + 0x10) = 1
    case 1
        if (sub_405130() != 0)
            *(arg1 + 0x10) = 2
            sub_439780()
            return 0
    case 2
        if ((*(data_c7cc70 + 8) & 0x4000) != 0)
            sub_4095a0(1)
            
            if (*(data_a5dd18 + 0x14) != 0)
                sub_4090d0(0)
            else
                sub_4050d0(3, 0xa)
                *(arg1 + 0x10) = 4
            
            ecx = data_a5dd18
        
        void* eax_7 = data_c7cc70
        
        if ((*(eax_7 + 8) & 0x2000) != 0)
            if (*(*(ecx + 8) * 0x14 + &data_4bf8d8) == 0)
                sub_4095a0(2)
                sub_439780()
                return 0
            
            sub_409010(0, 0x80)
            sub_409100(0, *(*(data_a5dd18 + 8) * 0x14 + &data_4bf8e0))
            sub_439780()
            return 0
        
        int32_t eax_13 = *(eax_7 + 0x10)
        
        if ((eax_13.b & 0x90) != 0 || (eax_13 & 0x900000) != 0)
            if (*(ecx + 8) != 0)
                sub_4095a0(3)
                void* eax_16 = data_a5dd18
                *(eax_16 + 8) -= 1
                sub_439780()
                return 0
        else if (((eax_13.b & 0x60) != 0 || (eax_13 & 0x600000) != 0) && *(ecx + 8) != 9)
            sub_4095a0(3)
            void* eax_14 = data_a5dd18
            *(eax_14 + 8) += 1
            sub_439780()
            return 0
    case 4
        if (sub_405130() != 0)
            sub_4090d0(0)
            *(arg1 + 0x10) = 5
            sub_439780()
            return 0
    case 5
        data_2b55e64 = 3
        return 1

sub_439780()
return 0
