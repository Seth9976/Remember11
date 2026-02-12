// 函数: sub_499737
// 地址: 0x499737
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t eax = arg1[3]
enum SET_FILE_POINTER_MOVE_METHOD edi_1

if ((eax.b & 0x83) != 0)
    edi_1 = arg4

if ((eax.b & 0x83) != 0 && (edi_1 == FILE_BEGIN || edi_1 == FILE_CURRENT || edi_1 == FILE_END))
    arg1[3] = eax & 0xffffffef
    
    if (edi_1 == FILE_CURRENT)
        uint32_t eax_2
        int32_t edx_1
        eax_2, edx_1 = sub_499279(arg1)
        int32_t temp0_1 = arg2
        arg2 += eax_2
        arg3 = adc.d(arg3, edx_1, temp0_1 + eax_2 u< temp0_1)
        edi_1 = FILE_BEGIN
    
    sub_4836ad(arg1)
    int32_t eax_3 = arg1[3]
    
    if (eax_3.b s< 0)
        arg1[3] = eax_3 & 0xfffffffc
    else if ((eax_3.b & 1) != 0 && (eax_3.b & 8) != 0 && (eax_3.w & 0x400) == 0)
        arg1[6] = 0x200
    
    uint32_t eax_6
    int32_t edx_2
    eax_6, edx_2 = sub_48e16f(sub_48d847(arg1), arg2, arg3, edi_1)
    
    if ((eax_6 & edx_2) != 0xffffffff)
        return 0
else
    *__errno() = 0x16

return 0xffffffff
