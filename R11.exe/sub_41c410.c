// 函数: sub_41c410
// 地址: 0x41c410
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* esi = data_e7e648
int32_t eax = *(esi + 0x28cc)
int32_t eax_1
int16_t ecx

if (eax == 0xffff)
    eax_1 = 0
    ecx = -1
else if (eax != 0xfffe)
    void* ecx_1 = arg1
    void* edi_1 = ecx_1 + 1
    char i
    
    do
        i = *ecx_1
        ecx_1 += 1
    while (i != 0)
    uint32_t ecx_3 = (ecx_1 - edi_1) u>> 1
    
    if (ecx_3 == 0)
        ecx_3 = 1
    
    int32_t eax_6
    int32_t edx_1
    edx_1:eax_6 = muls.dp.d(0x57619f1, divs.dp.d(sx.q(*(esi + 0x28dc) * 0x3c0), ecx_3))
    ecx = *(esi + 0x28cc)
    int32_t edx_2 = edx_1 s>> 0xa
    eax_1 = (edx_2 u>> 0x1f) + edx_2
else
    eax_1 = 0x78
    ecx = -1

if (data_2b5cf0e == 1)
    eax_1 = 0

return sub_41b800(arg1, arg2, zx.d(*(esi + 0x289c)), eax_1, ecx, (*(esi + 0x28d0)).w, 
    (*(esi + 0x28d8)).b, 0)
