// 函数: sub_447220
// 地址: 0x447220
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if ((arg8 & 3) != 0)
    sub_465480(".\emu.cpp", 0x134)

int32_t eax_6
int32_t edx
edx:eax_6 = sx.q(sub_460120(arg3 u>> 0x18 & 0x3f))
int32_t eax_7
int32_t edx_1
eax_7, edx_1 = __allmul(eax_6, edx, arg7 & 0xfff, 0)
int32_t eax_8
int32_t edx_2
eax_8, edx_2 = __allmul(eax_7, edx_1, arg6 & 0xfff, 0)
data_c78664
return (*(*data_c78664 + 0x24))(arg2, arg3, arg4, arg5, arg6, arg7, arg9, 
    eax_8 u>> 3 | edx_2 << 0x1d, *arg1, arg1[1])
