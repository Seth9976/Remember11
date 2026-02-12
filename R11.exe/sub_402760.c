// 函数: sub_402760
// 地址: 0x402760
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* eax_2 = arg1
void* edi = *(eax_2 + 0x44)
int32_t eax

if (*(edi + 2) != 0)
    eax = sub_4025e0(eax_2)
else
    eax = sub_4024c0(eax_2)

if (eax == 0)
    arg1:2.b = eax.b
    arg1:1.b = eax.b
    arg1.b = eax.b
    eax.b = 0x80
    eax.b = 0x80 - *(edi + 0xc)
    arg1:3.b = eax.b
    sub_4437c0(&data_4cd170, &arg1, *(edi + 4))

return 0
