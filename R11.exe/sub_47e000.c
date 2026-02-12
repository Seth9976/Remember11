// 函数: sub_47e000
// 地址: 0x47e000
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (arg3 == 0)
    return 0x80004003

if (arg4 != 0)
    *arg4 = 0
else if (arg2 u> 1)
    return 0x80070057

int32_t __saved_ecx = 0

if ((*(**(arg1 + 0xc) + 0x14))() != *(arg1 + 0x10))
    int32_t eax_5 = (*(**(arg1 + 0xc) + 0x14))()
    int32_t* ecx_2 = *(arg1 + 0xc)
    *(arg1 + 0x10) = eax_5
    *(arg1 + 8) = (*(*ecx_2 + 0x18))()
    *(arg1 + 4) = 0

int32_t i = *(arg1 + 8) - *(arg1 + 4)

if (i s>= arg2)
    i = arg2

if (i == 0)
    return 1

do
    int32_t eax_11 = *(arg1 + 4)
    
    if (*(arg1 + 8) == eax_11)
        break
    
    int32_t* ecx_6 = *(arg1 + 0xc)
    *(arg1 + 4) = eax_11 + 1
    void* eax_13 = (*(*ecx_6 + 0x1c))(eax_11)
    
    if (eax_13 == 0)
        return 0x80040203
    
    if (sub_480610(arg1 + 0x18, eax_13) == 0)
        *arg3 = eax_13 + 0xc
        (*(*(eax_13 + 0xc) + 4))(eax_13 + 0xc)
        __saved_ecx += 1
        arg3 = &arg3[1]
        sub_480640(arg1 + 0x18, eax_13)
        i -= 1
while (i != 0)

if (arg4 != 0)
    *arg4 = __saved_ecx

int32_t result
result.b = arg2 != __saved_ecx
return result
