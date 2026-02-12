// 函数: sub_409010
// 地址: 0x409010
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (arg2 s>= 0)
    *(arg1 * 0x4b1ec + &data_8969f9) = arg2.b

void* esi_1 = arg1 * 0x4b1ec

if (*(esi_1 + 0x8969fb) == 0)
    return arg2

uint32_t eax_1 = sub_402240(zx.d(*(esi_1 + 0x8969fa)))
int32_t eax_4
int32_t edx_2
edx_2:eax_4 = sx.q(zx.d(*(esi_1 + &data_8969f9)) * eax_1)
int32_t eax_6 = (eax_4 + (edx_2 & 0x7f)) s>> 7
arg2.d = eax_6

if (eax_6 == 0)
    return sub_44f8b0(*(esi_1 + 0x8969fc), 0xfffffc19)

long double x87_r6_1 = float.t(1)
int32_t eax_9 = sub_480df0(__fyl2x(x87_r6_1 / x87_r6_1, 
    fconvert.t(0.30102999560767785) + fconvert.t(5.6303348065105986e-11)) * fconvert.t(-200f))
return sub_44f8b0(*(esi_1 + 0x8969fc), eax_9)
