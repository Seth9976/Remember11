// 函数: sub_46b420
// 地址: 0x46b420
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t* esi = arg1

if (esi == 0)
    return 0x800401f0

if (arg2 != 0)
    *arg2 = 0

int32_t result = (*(*esi + 0x24))(esi, &arg1)

if (result s< 0)
    return result

if ((arg1.b & 2) == 0)
    return 1

int32_t i

do
    if ((*(*esi + 0x50))(esi) == 0x88780096)
        Sleep(0xa)
    
    i = (*(*esi + 0x50))(esi)
while (i == 0x88780096)

if (arg2 != 0)
    *arg2 = 1

return 0
