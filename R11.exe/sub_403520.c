// 函数: sub_403520
// 地址: 0x403520
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* eax_3 = arg1
void* edi = *(eax_3 + 0x44)
int32_t eax

if (*(edi + 2) != 0)
    eax = sub_4025e0(eax_3)
else
    eax = sub_4024c0(eax_3)

if (eax == 0)
    arg1 = *(edi + 0x15)
    arg1:3.b = 0x80 - *(edi + 0xc)
    sub_4437c0(&data_4cd170, &arg1, *(edi + 4))

return 0
