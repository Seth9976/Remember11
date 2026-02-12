// 函数: sub_407ac0
// 地址: 0x407ac0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* eax_2 = data_886f1c
int32_t ecx_2

do
    int32_t ecx_1 = *(eax_2 + 4)
    
    if ((&data_2243af0)[ecx_1] == 6 && *(eax_2 + (ecx_1 << 2) + 8) != 0)
        char* eax_1 = *(eax_2 + (ecx_1 << 2) + 8) + (ecx_1 << 2) + 0x2243abf
        int32_t edx_1 = (zx.d(*eax_1) + arg1 + 0x100) & 0x800000ff
        
        if (edx_1 s< 0)
            edx_1 = ((edx_1 - 1) | 0xffffff00) + 1
        
        *eax_1 = edx_1.b
        return eax_1
    
    int32_t ebx_2 = (zx.d((&data_2243af0)[ecx_1]) + arg1 + 8) & 0x80000007
    
    if (ebx_2 s< 0)
        ebx_2 = ((ebx_2 - 1) | 0xfffffff8) + 1
    
    (&data_2243af0)[ecx_1] = ebx_2.b
    ecx_2 = *(eax_2 + 4)
while (*(zx.d((&data_2243af0)[ecx_2]) + (ecx_2 << 3) + 0x4af9c8) == 0)
return eax_2
