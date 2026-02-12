// 函数: sub_450a10
// 地址: 0x450a10
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

enum MESSAGEBOX_RESULT eax_5 = (((arg2 u>> 5 & 0x3fff) - zx.d(*arg3)) << 8) + *(arg3 + 0x30)

if (arg3[6] != 0)
    if (data_4ca1c1 == 1)
        eax_5 = sub_464790(".\texture.cpp", 0x594)
        data_4ca1c1 = 0
    
    return eax_5

int32_t* edx_1 = arg1
int32_t* edi_1 = eax_5 - edx_1
int32_t i_1 = 0x10
int32_t eax_12
int32_t i

do
    int32_t ecx = *(edi_1 + edx_1)
    uint32_t eax_7 = ecx u>> 0x18
    
    if (eax_7 u>= 0xff)
        eax_7 = 0xff
    
    eax_12 = (eax_7 << 8 | zx.d(ecx.b)) << 0x10 | zx.d((ecx u>> 0x10).b) | (ecx & 0xff00)
    *edx_1 = eax_12
    edx_1 = &edx_1[1]
    i = i_1
    i_1 -= 1
while (i != 1)
return eax_12
