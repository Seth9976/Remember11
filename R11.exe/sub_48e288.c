// 函数: sub_48e288
// 地址: 0x48e288
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

data_c7aa6c += 1
void* eax = sub_48b27c(0x1000)
arg1[2] = eax

if (eax == 0)
    arg1[3] |= 4
    arg1[2] = &arg1[5]
    arg1[6] = 2
else
    arg1[3] |= 8
    arg1[6] = 0x1000

int32_t result = arg1[2]
arg1[1] = 0
*arg1 = result
return result
