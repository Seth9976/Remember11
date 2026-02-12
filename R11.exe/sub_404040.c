// 函数: sub_404040
// 地址: 0x404040
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* edi = *(arg1 + 0x44)
int32_t eax

if (*(edi + 2) != 0)
    eax = sub_4025e0(arg1)
else
    eax = sub_4024c0(arg1)

if (eax == 0)
    sub_403fc0(edi, -0x80 - (*(edi + 0xc)).b)

return 0
