// 函数: sub_45e100
// 地址: 0x45e100
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t edi = arg1[1]
int32_t ecx

if (edi != 0)
    int32_t eax_1
    int32_t edx_1
    edx_1:eax_1 = muls.dp.d(0x66666667, arg1[2] - edi)
    int32_t edx_2 = edx_1 s>> 3
    ecx = (edx_2 u>> 0x1f) + edx_2
else
    ecx = 0

char var_8

if (edi != 0)
    int32_t eax_2
    int32_t edx_5
    edx_5:eax_2 = muls.dp.d(0x66666667, arg1[3] - edi)
    int32_t edx_6 = edx_5 s>> 3
    
    if (ecx u< (edx_6 u>> 0x1f) + edx_6)
        int32_t* edi_1 = arg1[2]
        var_8 = 0
        int32_t __saved_ebx = var_8.d
        int32_t* var_18 = arg2
        int32_t* var_1c = arg1
        int32_t result = sub_45d8d0(edi_1, 1, arg2)
        arg1[2] = &edi_1[5]
        return result

int32_t* ebx = arg1[2]

if (edi u> ebx)
    __invalid_parameter_noinfo()

return sub_45e050(arg1, &var_8, arg1, ebx, arg2)
