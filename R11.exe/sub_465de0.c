// 函数: sub_465de0
// 地址: 0x465de0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* eax = *(arg1 + 0x30)

if (eax != 0)
    j_sub_4813df(eax)
    *(arg1 + 0x30) = 0

*(arg1 + 0x48) = 0
int128_t* edi = *(arg1 + 0x3c)

if (*(arg1 + 0x38) u> edi)
    __invalid_parameter_noinfo()

int128_t* ebx = *(arg1 + 0x38)

if (ebx u> *(arg1 + 0x3c))
    __invalid_parameter_noinfo()

if (ebx != edi)
    void* eax_2 = *(arg1 + 0x3c) - edi
    
    if (eax_2 s> 0)
        sub_481dca(ebx, eax_2, edi, eax_2)
    
    *(arg1 + 0x3c) = eax_2 + ebx

*(arg1 + 0x44) = 0
*(arg1 + 0x4c) = 0
return 0
