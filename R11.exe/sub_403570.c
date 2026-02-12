// 函数: sub_403570
// 地址: 0x403570
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* ecx_1 = arg1
void* esi = *(ecx_1 + 0x44)
int32_t eax

if (*(esi + 2) != 0)
    eax = sub_402650(ecx_1)
else
    eax = sub_402530(ecx_1, ecx_1)

if (eax == 0)
    arg1 = *(esi + 0x15)
    arg1:3.b = *(esi + 0xc)
    sub_4437c0(&data_4cd170, &arg1, *(esi + 4))

return 0
