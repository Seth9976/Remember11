// 函数: sub_41d160
// 地址: 0x41d160
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

char eax = data_2b5cf16
int32_t esi = 0

if (eax == 0 && *(data_e7e648 + 0xbf0c8) != 0)
    esi = 1

void* ecx_3 = data_a5d908

if (zx.d(eax) != sx.d(*(ecx_3 + 5)))
    sub_439bf0(ecx_3 + 0x1df4)
    eax = data_2b5cf16
    ecx_3 = data_a5d908

*(ecx_3 + 5) = eax
return sub_41ce40(9, *(data_e7e648 + 0x13264), esi)
