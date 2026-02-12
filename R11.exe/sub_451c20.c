// 函数: sub_451c20
// 地址: 0x451c20
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (*(arg1 + 0x14) u< arg2)
    sub_4971f7()
    noreturn

int32_t esi = arg3
int32_t eax_1 = *(arg1 + 0x14) - arg2

if (eax_1 u< esi)
    esi = eax_1

int32_t eax_2 = esi

if (esi u>= arg5)
    eax_2 = arg5

void* edi_1

if (*(arg1 + 0x18) u< 0x10)
    edi_1 = arg1 + 4
else
    edi_1 = *(arg1 + 4)

int32_t result = sub_451010(edi_1 + arg2, arg4, eax_2)

if (result == 0)
    if (esi u< arg5)
        return 0xffffffff
    
    result.b = esi != arg5

return result
