// 函数: sub_43c320
// 地址: 0x43c320
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t result = 0

if (arg2 s> 0)
    int32_t* edi_2 = arg1
    int32_t i
    
    do
        result += sub_43c280(edi_2, arg3, result + arg4, arg5)
        edi_2 = &edi_2[4]
        i = arg2
        arg2 -= 1
    while (i != 1)

return result
