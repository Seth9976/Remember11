// 函数: sub_446fe0
// 地址: 0x446fe0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* const eax_2

if (arg1 s< 0)
    eax_2 = data_c7bbac * 0x4c + data_c7b7a4
else if (arg1 s>= data_c7b7a8)
    eax_2 = nullptr
else
    eax_2 = arg1 * 0x4c + data_c7b7a4

if (*(eax_2 + 0xd) == 3)
    return 0xffffffff

data_c7bbb0 += 1
void* const esi_2

for (int32_t i = sx.d(*(eax_2 + 8)); i != 0xffffffff; i = sx.d(*(esi_2 + 6)))
    sub_446fe0(i)
    
    if (i s< 0)
        esi_2 = data_c7bbac * 0x4c + data_c7b7a4
    else if (i s>= data_c7b7a8)
        esi_2 = nullptr
    else
        esi_2 = i * 0x4c + data_c7b7a4

data_c7bbb0 -= 1
sub_446ee0(arg1)
return sub_446f90(arg1)
