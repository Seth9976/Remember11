// 函数: sub_44fc50
// 地址: 0x44fc50
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

float edi = arg1
int32_t esi = sx.d(*(edi i+ 0xae))
int32_t esi_1

if ((*(*data_c7865c + 8))(esi) == 0)
    esi_1 = 0
else
    (*(*(*(*data_c7865c + 8))(esi) + 0x38))(&arg1)
    esi_1 = sub_480df0(fconvert.t(arg1) * fconvert.t(60f))

if (sub_44f850(edi) == 5)
    *(edi i+ 0x9a) += 1
    sub_4653f0("Add\n")

return sx.d(*(edi i+ 0x9a)) + esi_1
