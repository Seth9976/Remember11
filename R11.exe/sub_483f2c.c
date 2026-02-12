// 函数: sub_483f2c
// 地址: 0x483f2c
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

char* edx = arg2
char* esi = arg1
uint32_t eax_1
uint32_t ecx_2

do
    eax_1 = zx.d(*esi)
    esi = &esi[1]
    
    if (eax_1 - 0x41 u<= 0x19)
        eax_1 += 0x20
    
    ecx_2 = zx.d(*edx)
    edx = &edx[1]
    
    if (ecx_2 - 0x41 u<= 0x19)
        ecx_2 += 0x20
    
    if (eax_1 == 0)
        break
while (eax_1 == ecx_2)

return eax_1 - ecx_2
