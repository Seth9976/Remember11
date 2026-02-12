// 函数: sub_441c90
// 地址: 0x441c90
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* esi = arg1
char* eax = *(esi + 0x70)
arg1.b = eax[1]
arg1:1.b = *eax
uint32_t eax_3 = zx.d(arg1.w)
int32_t eax_5

if (arg1.w - 0x2000 u> 0x5e00)
    int32_t eax_6
    int32_t edx_1
    edx_1:eax_6 = sx.q(eax_3)
    int32_t eax_7 = sub_441930(eax_6, edx_1)
    eax_5 = ((eax_7 u>> 8) - 0x21) * 0x5e + zx.d(eax_7.b) - 0x21
    
    if (eax_5 u> 0x2000)
        eax_5 = 0
else
    eax_5 = (eax_3 u>> 8) + 0x2cf

int32_t edx_3 = *(esi + 0x24)
*(esi + 0x70) = *(esi + 0x6c) * eax_5 + *(esi + 8)
return edx_3(esi)
