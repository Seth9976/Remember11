// 函数: sub_458110
// 地址: 0x458110
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t* esi = arg1

if (esi == arg2)
    return arg3

int32_t* edi = arg3

do
    *edi = *esi
    sub_456bf0(&edi[1], &esi[1])
    esi = &esi[5]
    edi = &edi[5]
while (esi != arg2)

return edi
