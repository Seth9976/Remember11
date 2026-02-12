// 函数: sub_417f90
// 地址: 0x417f90
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* esi = arg1 * 0x104 + data_e7e648 + 0x1f5dc

if (arg6 == 0)
    *(esi + 0x3c) = divs.dp.d(sx.q((arg3 - *(esi + 0x1c)) * arg2), arg5)
    int32_t temp0_1 = divs.dp.d(sx.q((arg4 - *(esi + 0x20)) * arg2), arg5)
    *(esi + 0x40) = temp0_1
    return temp0_1

uint32_t eax_15 = sub_441360(divs.dp.d(sx.q(arg2 << 0xe), arg5))
int32_t eax_19
int16_t edx_5
edx_5:eax_19 = sx.q((arg3 - *(esi + 0x1c)) * eax_15)
*(esi + 0x3c) = (eax_19 + zx.d(edx_5)) s>> 0x10
int32_t eax_25
int16_t edx_7
edx_7:eax_25 = sx.q((arg4 - *(esi + 0x20)) * eax_15)
int32_t eax_27 = (eax_25 + zx.d(edx_7)) s>> 0x10
*(esi + 0x40) = eax_27
return eax_27
