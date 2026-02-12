// 函数: sub_479b90
// 地址: 0x479b90
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

EnterCriticalSection(&data_c7a9cc)
int32_t ebp_1 = *(arg1 + 0x3c) ^ 1

if (*(arg1 + (ebp_1 << 2) + 0x20) == 0)
    sub_479950(arg1, ebp_1)

int128_t* var_c
(*(*arg2 + 0xc))(arg2, &var_c)
int32_t* eax_2 = *(arg1 + (ebp_1 << 2) + 0x20)
int32_t var_20_3

if (*(arg1 + 0x2c) != 1)
    var_20_3 = 0
else
    var_20_3 = 0x2000

int32_t var_8
(*(*eax_2 + 0x4c))(eax_2, 0, &var_8, 0, var_20_3)
int32_t* eax_4 = *(arg1 + 0x34)
int32_t ebx = var_8
int32_t var_4
int128_t* edi_2 = (eax_4 - 1) * ebx + var_4

if (eax_4 s> 0)
    arg2 = eax_4
    int128_t* eax_5 = var_c
    int32_t* i
    
    do
        sub_480ea0(edi_2, eax_5, *(arg1 + 0x30) * 4)
        eax_5 = var_c + *(arg1 + 0x38)
        edi_2 -= ebx
        i = arg2
        arg2 -= 1
        var_c = eax_5
    while (i != 1)

int32_t* ebp_2 = *(arg1 + (ebp_1 << 2) + 0x20)
(*(*ebp_2 + 0x50))(ebp_2, 0)
*(arg1 + 0x3c) ^= 1
LeaveCriticalSection(&data_c7a9cc)
SetEvent(*(arg1 + 0x44))
return 0
