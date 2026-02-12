// 函数: sub_431880
// 地址: 0x431880
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* ecx_3 = data_4bf67c
int32_t eax = *(ecx_3 + 4)

if (eax == 0xffffffff)
    *(data_4bf67c + 4) = sub_427680(ecx_3 + 0x182c, 0, 0)
    return 1

int32_t eax_3 = sub_446f90(eax)

if (eax_3 == 0)
    return 0

if (eax_3 == 1)
    if (arg1 != 1)
        *(data_4bf67c + 4) = 0xffffffff
        return 1
    
    *(data_4bf67c + 4) = sub_427680(data_4bf67c + 0x182c, 0, 0)
    return 1

if (eax_3 != 2)
    return 2

*(data_4bf67c + 4) = 0xffffffff
return 2
