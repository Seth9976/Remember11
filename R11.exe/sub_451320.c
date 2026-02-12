// 函数: sub_451320
// 地址: 0x451320
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t __saved_ebx = 0
sub_467ea0(arg3, arg4 + 0x5c)
char edx = 1

if (arg2 s<= 0)
    *(arg5 + 0x48) = 1
    return arg5

int32_t esi_1 = *(arg3 + 0x10)
int32_t i_1 = arg2
int32_t eax_2
int32_t i

do
    eax_2 = 0
    
    if (arg1 s> 0)
        do
            if ((*(esi_1 + (eax_2 << 2)) & 0xff000000) u< 0x80000000)
                edx = 0
            
            eax_2 += 1
        while (eax_2 s< arg1)
    
    esi_1 += *(arg3 + 0x28)
    i = i_1
    i_1 -= 1
while (i != 1)
*(arg5 + 0x48) = edx
return eax_2
