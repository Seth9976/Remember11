// 函数: sub_441d00
// 地址: 0x441d00
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

data_c7cc80 = arg1
int32_t result = arg2
int32_t esi = 0
data_c7cc84 = result

if (result s> 0)
    int32_t edx_1 = 0
    int32_t ebp
    int32_t var_8_1 = ebp
    
    do
        if (esi u<= data_c7cc84)
            void* eax_1 = data_c7cc80 + edx_1
            *(eax_1 + 0x1c) = 0x30
            ebp.w = *(eax_1 + 0x1c)
            *(eax_1 + 0x20) = 0x2f
            *(eax_1 + 0x3a) = ebp.w
            ebp.w = *(eax_1 + 0x20)
            __builtin_memset(eax_1, 0, 0x14)
            *(eax_1 + 0x6c) = 0
            *(eax_1 + 0x28) = 0
            *(eax_1 + 0x24) = 0
            *(eax_1 + 0x2c) = 0
            *(eax_1 + 0x14) = 0x18
            *(eax_1 + 0x18) = 0x17
            *(eax_1 + 0x30) = 0
            *(eax_1 + 0x32) = 1
            *(eax_1 + 0x34) = 0x14
            *(eax_1 + 0x36) = 0
            *(eax_1 + 0x38) = 0
            *(eax_1 + 0x3c) = ebp.w
            *(eax_1 + 0x3e) = 0
            *(eax_1 + 0x40) = 0
            result = arg2
        
        esi += 1
        edx_1 += 0x7c
    while (esi s< result)

return result
