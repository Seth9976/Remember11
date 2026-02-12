// 函数: sub_437820
// 地址: 0x437820
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* eax_12

for (int32_t i = 0; i s< 0x186a0; i += 0x14)
    *(i + data_a5dd14 + 0x80) = mods.dp.d(sx.q(sub_448760()), 0x1900) - 0xc80
    *(i + data_a5dd14 + 0x84) = mods.dp.d(sx.q(sub_448760()), 0x1180) - 0x8c0
    *(i + data_a5dd14 + 0x88) = mods.dp.d(sx.q(sub_448760()), 0x1770)
    *(i + data_a5dd14 + 0x8c) = sub_448760()
    int32_t edx_10 = sub_448760() & 0x80000003
    
    if (edx_10 s< 0)
        edx_10 = ((edx_10 - 1) | 0xfffffffc) + 1
    
    eax_12 = data_a5dd14
    *(i + eax_12 + 0x7c) = edx_10

sub_43d6e0(eax_12 + 0x1871c)
long double x87_r7 = float.t(0)
void* result = data_a5dd14
*(result + 0x1895c) = fconvert.s(x87_r7)
*(result + 0x18960) = fconvert.s(fconvert.t(2000f))
*(result + 0x18964) = fconvert.s(fconvert.t(-50f))
*(result + 0x1896c) = fconvert.s(x87_r7)
*(result + 0x18970) = fconvert.s(fconvert.t(-0.25f))
*(result + 0x18974) = fconvert.s(float.t(1))
return result
