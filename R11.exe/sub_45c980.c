// 函数: sub_45c980
// 地址: 0x45c980
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

char result = *arg1
int32_t ebx
ebx.b = arg2
*arg1 = ebx.b

if (result != 0 || ebx.b == 0)
    arg1[1] = 0
else
    arg1[1] = 1

arg1[2] = 0

if (ebx.b == 0)
    arg1[8] = ebx.b
    *(arg1 + 4) = 0
    return result

int32_t esi = *(arg1 + 4)

if (esi == 0)
    arg1[2] = 1
else if (esi s> 0xf)
    int32_t eax_1
    int32_t edx_1
    edx_1:eax_1 = sx.q(esi - 0xf)
    result = (divs.dp.d(edx_1:eax_1, 3)).b
    
    if (mods.dp.d(edx_1:eax_1, 3) == 0)
        arg1[2] = 1

*(arg1 + 4) = esi + 1
arg1[8] = ebx.b
return result
