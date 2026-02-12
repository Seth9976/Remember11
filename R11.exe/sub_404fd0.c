// 函数: sub_404fd0
// 地址: 0x404fd0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* edi = *(arg1 + 0x44)
int32_t eax

if (*(edi + 2) != 0)
    eax = sub_402650(arg1)
else
    eax = sub_402530(arg1, arg1)

if (eax == 0)
    sub_404db0(0x80 - *(edi + 0xc), edi)

return 0
