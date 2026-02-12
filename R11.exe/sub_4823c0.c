// 函数: sub_4823c0
// 地址: 0x4823c0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (arg1 == *(__getptd() + 0x98))
    void* eax_1 = __getptd()
    *(eax_1 + 0x98) = *(arg1 + 4)
    return eax_1

void* eax_3 = *(__getptd() + 0x98)

while (true)
    if (*(eax_3 + 4) == 0)
        noreturn sub_48b1de() __tailcall
    
    void* ecx_2 = *(eax_3 + 4)
    
    if (arg1 == ecx_2)
        break
    
    eax_3 = ecx_2

*(eax_3 + 4) = *(arg1 + 4)
return eax_3
