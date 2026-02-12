// 函数: sub_401730
// 地址: 0x401730
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

char* result = sub_480cf0(0x2b55f0c, 0, 0x800)
int32_t i = 0

if (data_2b55f08 u> 0)
    do
        int16_t* ecx_1 = *(data_2b55f04 + (i << 2))
        result = zx.d(*ecx_1)
        
        while (result.w != 0xffff)
            ecx_1 = &ecx_1[1]
            *((result & 0xfff) + 0x2b55f0c) = i.b
            result = zx.d(*ecx_1)
        
        i += 1
    while (i u< data_2b55f08)

return result
