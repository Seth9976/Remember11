// 函数: sub_4569c0
// 地址: 0x4569c0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ebx = arg2

if (ebx u> 0xffffffff)
    sub_4567e0()
    noreturn

int32_t ecx = arg1[2]
void* esi = &arg1[1]
uint32_t edi_1 = (ebx + 0x1f) u>> 5

if (ecx != 0 && edi_1 u< (*(esi + 8) - ecx) s>> 2)
    int128_t* ebp_1 = *(esi + 8)
    
    if (ecx u> ebp_1)
        __invalid_parameter_noinfo()
    
    int32_t ebx_1 = *(esi + 4)
    
    if (ebx_1 u> *(esi + 8))
        __invalid_parameter_noinfo()
    
    int32_t var_4_1 = ebx_1
    int128_t* ebx_2 = ebx_1 + (edi_1 << 2)
    
    if (ebx_2 u> *(esi + 8) || ebx_2 u< *(esi + 4))
        __invalid_parameter_noinfo()
    
    void var_8
    sub_455d50(esi, &var_8, esi, ebx_2, esi, ebp_1)
    ebx = arg2

*arg1 = ebx
int32_t ebx_3 = ebx & 0x1f

if (ebx_3 u<= 0)
    return 

int32_t ecx_2 = *(esi + 4)

if (ecx_2 == 0 || edi_1 - 1 u>= (*(esi + 8) - ecx_2) s>> 2)
    __invalid_parameter_noinfo()

int32_t* eax = *(esi + 4) + ((edi_1 - 1) << 2)
*eax &= (1 << ebx_3.b) - 1
