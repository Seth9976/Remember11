// 函数: sub_462b20
// 地址: 0x462b20
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ebx = *(arg1 + 4)
int32_t edi

if (ebx != 0)
    edi = (*(arg1 + 8) - ebx) s/ 0xb8
else
    edi = 0

char var_8

if (ebx != 0 && edi u< (*(arg1 + 0xc) - ebx) s/ 0xb8)
    int32_t edi_3 = *(arg1 + 8)
    var_8 = 0
    int32_t var_18 = var_8.d
    int32_t var_1c = arg2
    void* var_20 = arg1
    int32_t result = sub_462490(edi_3, 1, arg2)
    *(arg1 + 8) = edi_3 + 0xb8
    return result

int32_t edi_5 = *(arg1 + 8)

if (ebx u> edi_5)
    __invalid_parameter_noinfo()

return sub_462a70(arg1, &var_8, arg1, edi_5, arg2)
