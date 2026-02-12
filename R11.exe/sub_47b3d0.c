// 函数: sub_47b3d0
// 地址: 0x47b3d0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ecx = 1

if (arg1 s> 0x40000000)
    return 0x8000

if (arg1 s> 1)
    do
        ecx *= 2
    while (ecx * ecx s< arg1)

if (arg1 == 0)
    return 0

int32_t result = divs.dp.d(sx.q(ecx * ecx + arg1), ecx * 2)

if (result s>= 0)
    result = divs.dp.d(sx.q(result * result + arg1), result * 2)
    
    if (result s>= 0)
        result = divs.dp.d(sx.q(result * result + arg1), result * 2)

return result
