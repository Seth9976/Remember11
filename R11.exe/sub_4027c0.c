// 函数: sub_4027c0
// 地址: 0x4027c0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* ecx_1 = arg1
void* esi = *(ecx_1 + 0x44)
int32_t eax

if (*(esi + 2) != 0)
    eax = sub_402650(ecx_1)
else
    eax = sub_402530(ecx_1, ecx_1)

if (eax == 0)
    arg1:2.b = eax.b
    arg1:1.b = eax.b
    arg1.b = eax.b
    eax.b = *(esi + 0xc)
    arg1:3.b = eax.b
    sub_4437c0(&data_4cd170, &arg1, *(esi + 4))

return 0
