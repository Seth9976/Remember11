// 函数: sub_414f10
// 地址: 0x414f10
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_8 = 0
char* edi_1 = data_e7e648 + 0x222
int32_t i_1 = 0x800
int32_t eax_4
int32_t i

do
    uint32_t ecx_1 = zx.d(*edi_1)
    uint32_t esi_1 = zx.d(edi_1[0xfffffffe])
    int32_t ebx_8 = (ecx_1 u>> 6 & 1) + (ecx_1 u>> 5 & 1) + (ecx_1 u>> 4 & 1) + (ecx_1 u>> 3 & 1)
        + (ecx_1 u>> 2 & 1) + (ecx_1 u>> 1 & 1)
    uint32_t edx_1 = zx.d(edi_1[0xffffffff])
    int32_t ebx_14 = ebx_8 + (esi_1 u>> 6 & 1) + (esi_1 u>> 5 & 1) + (esi_1 u>> 4 & 1)
        + (esi_1 u>> 3 & 1) + (esi_1 u>> 2 & 1) + (esi_1 u>> 1 & 1)
    uint32_t eax_1 = zx.d(edi_1[1])
    int32_t ebx_20 = ebx_14 + (edx_1 u>> 6 & 1) + (edx_1 u>> 5 & 1) + (edx_1 u>> 4 & 1)
        + (edx_1 u>> 3 & 1) + (edx_1 u>> 2 & 1) + (edx_1 u>> 1 & 1)
    int32_t ebx_26 = ebx_20 + (eax_1 u>> 6 & 1) + (eax_1 u>> 5 & 1) + (eax_1 u>> 4 & 1)
        + (eax_1 u>> 3 & 1) + (eax_1 u>> 2 & 1) + (eax_1 u>> 1 & 1)
    eax_4 = (eax_1 & 1) + var_8 + ebx_26 + (ecx_1 u>> 7) + (esi_1 u>> 7) + (edx_1 u>> 7)
        + (eax_1 u>> 7) + (ecx_1 & 1) + (esi_1 & 1) + (edx_1 & 1)
    edi_1 = &edi_1[4]
    i = i_1
    i_1 -= 1
    var_8 = eax_4
while (i != 1)
return sbb.d(eax_4, eax_4, eax_4 u< *(data_2b55e84 + 0x804)) + 1
