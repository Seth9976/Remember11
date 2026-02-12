// 函数: sub_408c50
// 地址: 0x408c50
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (arg1 s>= 0)
    data_a59580 = arg1.b

uint32_t eax_1 = sub_402240(zx.d(data_a59581))
int32_t eax_4
int32_t edx
edx:eax_4 = sx.q(zx.d(data_a59580) * eax_1)
return sub_4072c0(0xd0, 
    sub_480df0(float.t((eax_4 + (edx & 0x7f)) s>> 7) * fconvert.t(0.0078125f) * fconvert.t(256f)))
