// 函数: sub_447b50
// 地址: 0x447b50
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

*(arg1 + 0x20) = 0
*(arg1 + 0x24) = 0
int32_t eax_3
int32_t edx
edx:eax_3 = sx.q(sub_447ae0(sx.d(arg2[6])) | 0x10)
int32_t eax_5
int32_t edx_1
edx_1:eax_5 = sx.q(arg2[8])
int32_t eax_8
int32_t edx_3
edx_3:eax_8 = sx.q(arg2[7])
int32_t ebx_1 = eax_5 << 0xe | eax_8
int32_t ecx_1 = eax_3 | ebx_1 << 7
int32_t eax_10
int32_t edx_5
edx_5:eax_10 = sx.q(sub_447ae0(sx.d(arg2[5])))
int32_t ebx_4 = ecx_1 << 4 | eax_10
int32_t eax_12
int32_t edx_6
edx_6:eax_12 = sx.q(arg2[2])
int32_t ebx_6 = ebx_4 << 6 | eax_12
int32_t edi_5 = (
    (edx | (edx_1 << 0xe | eax_5 u>> 0xffffffee | edx_3) << 7 | ebx_1 u>> 0xffffffe7) << 4
    | ecx_1 u>> 0xffffffe4 | edx_5) << 6 | ebx_4 u>> 0xffffffe6 | edx_6
int32_t eax_14
int32_t edx_7
edx_7:eax_14 = sx.q(arg2[1])
int32_t ebx_8 = ebx_6 << 6 | eax_14
int32_t eax_16
int32_t edx_8
edx_8:eax_16 = sx.q(*arg2)
*(arg1 + 0x34) = (edi_5 << 6 | ebx_6 u>> 0xffffffe6 | edx_7) << 0xe | ebx_8 u>> 0xffffffee | edx_8
*(arg1 + 0x30) = ebx_8 << 0xe | eax_16
return arg1
