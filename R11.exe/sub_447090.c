// 函数: sub_447090
// 地址: 0x447090
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

__builtin_memset(&data_c7b7ac, 0xffffffff, 0x400)
sub_446a00(arg1)
int32_t i = sub_446ab0()
int32_t eax_1
int32_t ecx_1

if (i == 0xffffffff)
    ecx_1 = data_c7bbac
    eax_1 = data_c7b7a4
else
    do
        sub_446ee0(i)
        ecx_1 = data_c7bbac
        eax_1 = data_c7b7a4
        void* esi_2
        
        if (i s< 0)
            esi_2 = ecx_1 * 0x4c + eax_1
        else if (i s>= data_c7b7a8)
            esi_2 = nullptr
        else
            esi_2 = i * 0x4c + eax_1
        
        i = sx.d(*(esi_2 + 0xa))
    while (i != 0xffffffff)

void* esi_4

if (arg1 s< 0)
    esi_4 = ecx_1 * 0x4c + eax_1
else if (arg1 s>= data_c7b7a8)
    esi_4 = nullptr
else
    esi_4 = arg1 * 0x4c + eax_1

if (*(esi_4 + 0x12) != 0)
    sub_446d40(arg1)

return sx.d(*(esi_4 + 0x12))
