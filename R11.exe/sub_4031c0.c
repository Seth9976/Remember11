// 函数: sub_4031c0
// 地址: 0x4031c0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* edi = *(arg1 + 0x44)
int32_t eax

if (*(edi + 2) != 0)
    eax = sub_4025e0(arg1)
else
    eax = sub_4024c0(arg1)

if (eax == 0)
    sub_402f10(edi, 0x80 - *(edi + 0xc))

return 0
