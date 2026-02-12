// 函数: sub_416740
// 地址: 0x416740
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t i_1 = data_2b5a730
int32_t ebp = 0

if (i_1 u> 0)
    int16_t* esi_1 = data_2b5a72c + 0xc
    int32_t result
    int32_t i
    
    do
        int32_t ecx_3 = zx.d(*esi_1) u>> 1 & 0x7ff
        int32_t eax_1
        int32_t edx_1
        edx_1:eax_1 = sx.q(ecx_3)
        int32_t ecx_4 = ecx_3 & 0x80000007
        
        if (ecx_4 s< 0)
            ecx_4 = ((ecx_4 - 1) | 0xfffffff8) + 1
        
        result.b = *(((eax_1 + (edx_1 & 7)) s>> 3) + data_e7e648 + 0x25e0)
        result.b u>>= ecx_4.b
        
        if ((result.b & 1) != 0)
            ebp += 1
        
        esi_1 = &esi_1[0xc]
        i = i_1
        i_1 -= 1
    while (i != 1)
    
    if (ebp u< data_2b5a730)
        return result

sub_4160e0(2)
return sub_416140() __tailcall
