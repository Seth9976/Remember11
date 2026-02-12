// 函数: sub_442670
// 地址: 0x442670
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ebx = *arg1
int32_t esi = arg1[1]
int32_t eax_3
int32_t edx
edx:eax_3 = sx.q((arg1[3] + esi - 1) & 0x7ff)
int32_t eax_7
int32_t edx_2
edx_2:eax_7 = sx.q(esi & 0x7ff)
int32_t edi_1 = eax_3 << 0x10 | eax_7
int32_t eax_10
int32_t edx_3
edx_3:eax_10 = sx.q((arg1[2] + ebx - 1) & 0x7ff)
int32_t edi_3 = edi_1 << 0x10 | eax_10
int16_t* ebx_1 = *data_c7bbcc
int32_t eax_13
int32_t edx_5
edx_5:eax_13 = sx.q(ebx & 0x7ff)
int32_t var_4
int32_t edi_7 = ((edx << 0x10 | eax_3 u>> 0xfffffff0 | edx_2) << 0x10 | edi_1 u>> 0xfffffff0
    | (edx_3 & 0xfffff800)) << 0x10 | edi_3 u>> 0xfffffff0 | (edx_5 & 0xf800f800)
    | (var_4 & 0xf800f800)
int32_t eax_17 = sub_448f10(ebx_1, 1)
int32_t var_8
sub_4479d0(ebx_1, 0, 0x40, 0, edi_3 << 0x10 | (eax_13 & 0xf800ffff) | (var_8 & 0xf800f800), edi_7)
sub_448880(data_c7bbc8, zx.d(arg2), ebx_1)
int32_t* result = data_c7bbcc
*result += eax_17 << 4
return result
