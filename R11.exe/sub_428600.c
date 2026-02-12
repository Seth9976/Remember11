// 函数: sub_428600
// 地址: 0x428600
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t entry_ebx

if (arg1 s> 0)
    int32_t ecx_3
    int32_t edi_2
    edi_2, ecx_3 = __builtin_memset(entry_ebx, 0xffffffff, arg1 u>> 1 << 2)
    __builtin_memset(edi_2, 0xffff, adc.d(ecx_3, ecx_3, (arg1 & 1) != 0) << 1)

int32_t edi_3 = 0

if (arg1 s<= 0)
    return 

do
    int32_t edx_2 = mods.dp.d(sx.q(sub_448760()), arg1)
    
    while (*(entry_ebx + (edx_2 << 1)) != 0xffff)
        edx_2 += 1
        
        if (edx_2 s>= arg1)
            edx_2 = 0
    
    int16_t eax = *(arg2 + (edi_3 << 1))
    edi_3 += 1
    *(entry_ebx + (edx_2 << 1)) = eax
while (edi_3 s< arg1)
