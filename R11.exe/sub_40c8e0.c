// 函数: sub_40c8e0
// 地址: 0x40c8e0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t eax = sx.d(arg1[4].w)
void* ecx = arg1[0x11]
void* edi = *(ecx + 8)

if (eax == 0)
    sub_416860(zx.d(*(edi + 1)), *(edi + 2))
    int32_t eax_6
    eax_6.b = *(edi + 3)
    char temp1_1 = eax_6.b
    eax_6.b = neg.b(eax_6.b)
    arg1[4].w = (sbb.d(eax_6, eax_6, temp1_1 != 0)).w + 2
else if (eax == 1)
    int32_t result = sub_417350(zx.d(*(edi + 1)))
    
    if (result == 0)
        arg1[4].w = 2
        *(arg1 + 0xe) = result.w
        *(arg1 + 0xd) = result.b
        return result
else if (eax == 2)
    *(ecx + 8) += 4
    sub_40a8a0(arg1)
    return 0

*(arg1 + 0xe) = 0
*(arg1 + 0xd) = 0
return 0
