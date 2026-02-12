// 函数: sub_407190
// 地址: 0x407190
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t eax = sx.d(*(arg1 + 0x10))
int32_t* ebx = *(arg1 + 0x44)

if (eax == 0)
    data_2b603a0 = 1
    data_2b60388 = 0
    data_2b60384 = 0
    data_2b60380 = 0
    *ebx = 0
    *(arg1 + 0x10) = 1
label_4071ce:
    void* eax_3 = data_c7cc70
    int32_t ecx = *(eax_3 + 8)
    
    if ((ecx & 0x2000) != 0)
        data_2b55e64 = *ebx
        return 1
    
    char eax_6 = (*(eax_3 + 0x10)).b
    
    if ((eax_6 & 0x10) != 0)
        *ebx = mods.dp.d(sx.q(*ebx + 0x18), 0x19)
    else if ((eax_6 & 0x40) != 0)
        *ebx = mods.dp.d(sx.q(*ebx + 0x1a), 0x19)
    else if ((ecx & 0xd000) != 0)
        *ebx = 0xe
else if (eax == 1)
    goto label_4071ce

char const (** i)[0x6] = &data_4af004
int32_t edi = 0

do
    if (*ebx != edi)
        void* const var_10_2 = &data_49dd04
    else
        void* const var_10_1 = &data_49dd08
    
    char const (* var_10_3)[0x6] = *i
    void* const var_14_1 = &data_49d6ac
    i = &i[3]
    edi += 1
while (i s< 0x4af130)

return 0
