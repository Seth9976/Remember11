// 函数: sub_48ff64
// 地址: 0x48ff64
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ebx = 0
uint32_t i = 1

if (arg2 s>= 0)
    while (i != 0)
        int32_t eax_2
        int32_t edx_1
        edx_1:eax_2 = sx.q(arg2 + ebx)
        int32_t esi_2 = (eax_2 - edx_1) s>> 1
        int32_t* edi_1 = arg1 + (esi_2 << 3)
        i = sub_484034(*arg3, *edi_1)
        
        if (i == 0)
            *arg3 = &edi_1[1]
        else if (i s>= 0)
            ebx = esi_2 + 1
        else
            arg2 = esi_2 - 1
        
        if (ebx s> arg2)
            break

int32_t result
result.b = i == 0
return result
