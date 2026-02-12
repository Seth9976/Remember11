// 函数: sub_416550
// 地址: 0x416550
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t result_1 = 0
char* edi_1 = data_e7e648 + 0x25a2
int32_t i_1 = 0x10
int32_t result
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
    result = (eax_1 & 1) + result_1 + ebx_26 + (ecx_1 u>> 7) + (esi_1 u>> 7) + (edx_1 u>> 7)
        + (eax_1 u>> 7) + (ecx_1 & 1) + (esi_1 & 1) + (edx_1 & 1)
    edi_1 = &edi_1[4]
    i = i_1
    i_1 -= 1
    result_1 = result
while (i != 1)

if (result u< data_2b55e8c)
    return result

sub_4160e0(3)
return sub_416140() __tailcall
