// 函数: sub_41db10
// 地址: 0x41db10
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t edi = arg1
int32_t ebp

if (edi != 0xffffffff)
    ebp = edi + 1
else
    edi = 0
    ebp = 3

if (edi s>= ebp)
    return 

int32_t esi_2 = edi * 0xa

do
    *(esi_2 + data_e7e648 + 0x20979) = 0
    *(esi_2 + data_e7e648 + 0x2097a) = 0
    sub_4090d0(*((edi << 2) + &data_4b17e0))
    
    if (sub_4148e0() != 0)
        int32_t i
        
        do
            int32_t var_10_2 = 0
            int32_t var_14_1 = 0
            i = sub_4148e0()
        while (i != 0)
    
    *(esi_2 + data_e7e648 + 0x20974) = 0xffff
    edi += 1
    esi_2 += 0xa
while (edi s< ebp)
