// 函数: sub_401620
// 地址: 0x401620
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

data_2b5cf1b = 0
sub_480cf0(0x2b5cf1c, 0, 0x3408)
int32_t eax_2
int32_t edx_1

for (int32_t i = 0; i s< 0x20; )
    edx_1:eax_2 = sx.q(i)
    int32_t ecx_2 = i & 0x80000007
    
    if (ecx_2 s< 0)
        ecx_2 = ((ecx_2 - 1) | 0xfffffff8) + 1
    
    int32_t edx_2
    edx_2.b = 1
    edx_2.b = 1 << ecx_2.b
    i += 1
    edx_2.b = not.b(edx_2.b)
    *(((eax_2 + (edx_1 & 7)) s>> 3) + 0x2b60324) &= edx_2.b

return ((eax_2 + (edx_1 & 7)) s>> 3) + 0x2b60324
