// 函数: sub_44d160
// 地址: 0x44d160
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* eax = *arg1
int32_t esi = 0
uint32_t result = *(eax + 0x118)

if (arg2 s> 0)
    void* ebx_1 = 0x11c
    
    do
        if (esi s>= *(eax + 8))
            sub_465480(".\libadxf.cpp", 0xc6)
        
        eax = *arg1
        esi += 1
        result = ((zx.d(*(ebx_1 + eax)) << 0xb) + result + 0x7ff) u>> 0xb << 0xb
        ebx_1 += 2
    while (esi s< arg2)

return result
