// 函数: sub_4687c0
// 地址: 0x4687c0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t result = (*(*arg1 + 0x10))()

if (result == 0xffffffff)
    return result

int32_t* eax_2 = arg1[0xc]
*eax_2 -= 1
int32_t* eax_3 = arg1[8]
char* ecx = *eax_3
*eax_3 = &ecx[1]
return zx.d(*ecx)
