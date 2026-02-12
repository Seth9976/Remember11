// 函数: sub_4095f0
// 地址: 0x4095f0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ecx
int32_t var_4_1 = ecx

if (data_a5958f != 0)
    data_8969a8 = sub_4072c0(0x8020, 0)
    data_8969ac = sub_4072c0(0x8161, 0)

data_a5958f = 1
sub_4085a0()
data_896998 = sub_4072c0(0x8040, 0)
data_89699c = sub_4072c0(0x8030, 0)
data_8969a0 = sub_4072c0(0x8010, 0)
uint32_t eax_7 = sub_402240(zx.d(data_a5958e))
int32_t eax_10
int32_t edx
edx:eax_10 = sx.q(zx.d(data_a5958d) * eax_7)
return sub_4072c0(0xd1, 
    sub_480df0(float.t((eax_10 + (edx & 0x7f)) s>> 7) * fconvert.t(0.0078125f) * fconvert.t(256f)))
