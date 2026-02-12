// 函数: sub_45d8d0
// 地址: 0x45d8d0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t i = arg2

if (i u<= 0)
    return 

int32_t* eax = arg1

do
    if (eax != 0)
        *eax = *arg3
        eax[1] = arg3[1]
        eax[2] = arg3[2]
        eax[3] = arg3[3]
        eax[4] = arg3[4]
    
    i -= 1
    eax = &eax[5]
while (i u> 0)
