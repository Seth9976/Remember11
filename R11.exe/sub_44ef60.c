// 函数: sub_44ef60
// 地址: 0x44ef60
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ebx = *(arg1 + 4)
int32_t edi

if (ebx != 0)
    edi = (*(arg1 + 8) - ebx) s/ 0x1c
else
    edi = 0

char var_8

if (ebx != 0 && edi u< (*(arg1 + 0xc) - ebx) s/ 0x1c)
    void* edi_3 = *(arg1 + 8)
    var_8 = 0
    int32_t var_18 = var_8.d
    void* var_1c = arg2
    void* var_20 = arg1
    struct _EXCEPTION_REGISTRATION_RECORD** result = sub_44e160(edi_3, 1, arg2)
    *(arg1 + 8) = edi_3 + 0x1c
    return result

void* edi_5 = *(arg1 + 8)

if (ebx u> edi_5)
    __invalid_parameter_noinfo()

return sub_44eea0(arg1, &var_8, arg1, edi_5, arg2)
