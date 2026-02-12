// 函数: sub_40e340
// 地址: 0x40e340
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* eax
bool cond:0

if (*(*(arg1[0x11] + 8) + 1) != 2)
    if (*(data_e7e648 + 0x28c1) == 0)
        sub_415550()
    
    eax.b = data_2b5cf11
    cond:0 = eax.b == 1
else
    if (*(data_e7e648 + 0x28c1) == 0)
        sub_415550()
    
    eax.b = data_2b5cf11
    cond:0 = eax.b == 2

if (cond:0 || eax.b == 3)
    sub_415a50()

void* eax_1 = arg1[0x11]
*(eax_1 + 8) += 2
sub_40a8a0(arg1)
return 0
