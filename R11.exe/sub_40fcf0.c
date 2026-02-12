// 函数: sub_40fcf0
// 地址: 0x40fcf0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ecx = data_e7e648
int32_t eax_1 = arg1 * 0x50
int16_t* esi = *(eax_1 + ecx + 0x20884)
void* edi_1 = eax_1 + ecx + 0x20864 - esi
int32_t i_1 = 0x10
int16_t result
int32_t i

do
    result = sub_414cf0(sx.d(*(edi_1 + esi)))
    *esi = result
    esi = &esi[1]
    i = i_1
    i_1 -= 1
while (i != 1)
return result
