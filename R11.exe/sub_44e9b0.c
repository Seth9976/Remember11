// 函数: sub_44e9b0
// 地址: 0x44e9b0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t edx = *(arg1 + 4)
int32_t ecx

if (edx != 0)
    ecx = (*(arg1 + 8) - edx) s>> 2
else
    ecx = 0

if (edx != 0 && ecx u< (*(arg1 + 0xc) - edx) s>> 2)
    int32_t* eax_4 = *(arg1 + 8)
    *eax_4 = *arg2
    *(arg1 + 8) = &eax_4[1]
    return &eax_4[1]

int32_t edi = *(arg1 + 8)

if (edx u> edi)
    __invalid_parameter_noinfo()

void* var_8
return sub_44e6e0(arg1, &var_8, arg1, edi, arg2)
