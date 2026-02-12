// 函数: sub_44cda0
// 地址: 0x44cda0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t* ecx = *(arg1 + 4)

if (ecx == 0)
    sub_465480(".\libadxf.cpp", 0x1d7)
    return arg2

int32_t esi_1 = arg2 << 0xb
(*(*ecx + 0xc))(arg3, esi_1)
int32_t eax_3
int32_t edx_1
edx_1:eax_3 = sx.q(esi_1 + 0x7ff)
*(arg1 + 0x24) += (eax_3 + (edx_1 & 0x7ff)) s>> 0xb
*(arg1 + 1) = 2
return arg2
