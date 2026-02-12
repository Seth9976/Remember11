// 函数: sub_418a50
// 地址: 0x418a50
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t eax = sx.d(*(arg1 + 0x10))
void* ecx = *(arg1 + 0x44)
data_4b13a8 = ecx

switch (eax)
    case 0
        sub_405e30(7, 0x12, ecx + 0x5c, ecx + 0x20005c)
        
        for (void* i = nullptr; i u< 0x10; i += 8)
            void* eax_2 = data_4b13a8
            sub_4427e0(*(i + 0x4b13ac) * 0x2c + eax_2 + 4, 0x900, 0, 
                ((*(eax_2 + (*(i + 0x4b13b0) << 2) + 0x60)
                    + (((*(eax_2 + 0x5c) << 2) + 0x13) u>> 4)) << 4) + eax_2 + 0x5c)
        
        int32_t* eax_3 = data_4b13a8
        sub_423a30(eax_3, &eax_3[1])
        sub_4050d0(2, 0xa)
        *(arg1 + 0x10) = 1
        goto label_418afd
    case 1
    label_418afd:
        
        if (sub_405130() == 1)
            *(arg1 + 0x10) = 2
    case 2
        int32_t eax_8
        
        if ((data_2b53608 & 0x6500) == 0)
            eax_8 = sub_45c4f0()
        
        if ((data_2b53608 & 0x6500) != 0 || eax_8 != 0)
            sub_4095a0(1)
            sub_4050d0(3, 0xa)
            *(arg1 + 0x10) = 3
    case 3
        uint32_t result = sub_405130()
        
        if (result == 1)
            return result

void* eax_6 = data_4b13a8 + 0x30
int32_t var_8 = 0
int32_t var_4 = 0xfffffff0
sub_444110(eax_6, &var_8, nullptr, 1)
sub_442c30(data_4b13a8 + 0x30, 1)
sub_423a40(data_4b13a8, 1)
return 0
