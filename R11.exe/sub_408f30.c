// 函数: sub_408f30
// 地址: 0x408f30
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (arg1 s>= 0)
    data_a5958d = arg1.b

uint32_t eax_2 = sub_402240(zx.d(data_a5958e))
int32_t eax_5
int32_t edx
edx:eax_5 = sx.q(zx.d(data_a5958d) * eax_2)
arg1.d = (eax_5 + (edx & 0x7f)) s>> 7
return sub_4072c0(0xd1, sub_480df0(float.t(arg1.d) * fconvert.t(0.0078125f) * fconvert.t(256f)))
