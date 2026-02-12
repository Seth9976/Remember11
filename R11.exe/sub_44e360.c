// 函数: sub_44e360
// 地址: 0x44e360
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4 = arg3
var_4 = __security_cookie ^ &var_4
void* result = arg6

if (arg4 != arg5)
    void* ecx_1 = arg5
    
    do
        int32_t ebp_1 = *(ecx_1 - 0x18)
        int32_t edx = *(result - 0x18)
        int32_t esi_1 = *(result - 0x14)
        int32_t edi_1 = *(result - 0x10)
        int32_t ebx_1 = *(result - 0xc)
        ecx_1 -= 0x1c
        result -= 0x1c
        *(result + 4) = ebp_1
        *(result + 8) = *(ecx_1 + 8)
        *(result + 0xc) = *(ecx_1 + 0xc)
        *(result + 0x10) = *(ecx_1 + 0x10)
        *(ecx_1 + 4) = edx
        *(ecx_1 + 8) = esi_1
        int32_t esi_2 = *(ecx_1 + 0x14)
        *(ecx_1 + 0xc) = edi_1
        *(ecx_1 + 0x10) = ebx_1
        int32_t edx_1 = *(result + 0x14)
        *(result + 0x14) = esi_2
        int32_t esi_3 = *(ecx_1 + 0x18)
        *(ecx_1 + 0x14) = edx_1
        int32_t edx_2 = *(result + 0x18)
        *(result + 0x18) = esi_3
        *(ecx_1 + 0x18) = edx_2
    while (ecx_1 != arg4)

sub_480cd2(var_4 ^ &var_4)
return result
