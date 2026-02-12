// 函数: sub_473980
// 地址: 0x473980
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

*arg2 = 0
void* eax = sub_472200(0)
int32_t* eax_1 = sub_471040()
int32_t* eax_2 = sub_477a30(eax)
int32_t i = 0

if (eax_2[1] s> 0)
    do
        int32_t* ebx_1 = *(*eax_2 + (i << 2))
        
        if ((*(*eax_1 + 0x3c))(eax_1, *ebx_1) == arg1)
            *arg2 = *ebx_1
            return 0
        
        i += 1
    while (i s< eax_2[1])

return 0x80004005
