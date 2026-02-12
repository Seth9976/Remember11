// 函数: sub_416140
// 地址: 0x416140
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ecx
int32_t var_4 = ecx
int32_t ebx = data_2b5a740
int32_t esi = 0
int32_t ebp = 0
int32_t result = 0

if (ebx u> 0)
    do
        if (data_2b5a748[esi] != 1)
            int32_t ecx_3 = esi & 0xfff
            int32_t eax_3
            int32_t edx_1
            edx_1:eax_3 = sx.q(ecx_3)
            int32_t ecx_4 = ecx_3 & 0x80000007
            
            if (ecx_4 s< 0)
                ecx_4 = ((ecx_4 - 1) | 0xfffffff8) + 1
            
            int32_t edx_2
            edx_2.b = *(((eax_3 + (edx_1 & 7)) s>> 3) + data_e7e648 + 0x25f0)
            edx_2.b u>>= ecx_4.b
            
            if ((edx_2.b & 1) == 0)
                ebp += 1
            else
                result += 1
        
        esi += 1
    while (esi u< ebx)

if (ebx u<= 0 || ebp == 0)
    sub_4160e0(1)

return result
