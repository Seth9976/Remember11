// 函数: sub_40c9c0
// 地址: 0x40c9c0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t eax = sx.d(arg1[4].w)
void* ecx = arg1[0x11]
void* esi = *(ecx + 8)

if (eax == 0)
    sub_4168f0(zx.d(*(esi + 1)), sx.d(*(esi + 2)), sx.d(*(esi + 4)), sx.d(*(esi + 6)))
    
    if (*(esi + 7) != 0 && *(esi + 1) == 0)
        sub_416860(0, 8)
        arg1[4].w = 1
    
    int32_t edx_2
    edx_2.b = *(esi + 7)
    char temp2_1 = edx_2.b
    edx_2.b = neg.b(edx_2.b)
    arg1[4].w = (sbb.d(edx_2, edx_2, temp2_1 != 0)).w + 2
else if (eax == 1)
    int32_t eax_6 = sub_416ea0(zx.d(*(esi + 1)))
    
    if (eax_6 == 0)
        if (*(esi + 1) == eax_6.b)
            sub_416860(eax_6, 9)
        
        arg1[4].w = 2
        *(arg1 + 0xe) = 0
        *(arg1 + 0xd) = 0
        return 0
else if (eax == 2)
    *(ecx + 8) += 8
    sub_40a8a0(arg1)
    return 0

*(arg1 + 0xe) = 0
*(arg1 + 0xd) = 0
return 0
