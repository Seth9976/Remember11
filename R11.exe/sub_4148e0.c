// 函数: sub_4148e0
// 地址: 0x4148e0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* eax_9 = data_e7e648

if (*(eax_9 + 0xbf0bc) == 0)
    return 0

uint32_t eax_1 = zx.d(*(eax_9 + 0xbf0bd))

if (eax_1 == 0)
    if (sub_405bd0(0xffffffff) != 0)
        *(data_e7e648 + 0xbf0bc) = 0
else if (eax_1 == 1 && sub_409160(eax_1 - 1) == 0)
    *(data_e7e648 + 0xbf0bc) = 0
    int32_t eax_6
    eax_6.b = *(data_e7e648 + 0xbf0bc) != 0
    return eax_6

int32_t eax_8
eax_8.b = *(data_e7e648 + 0xbf0bc) != 0
return eax_8
