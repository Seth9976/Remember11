// 函数: sub_418070
// 地址: 0x418070
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* esi = arg1 * 0x104 + data_e7e648 + 0x1f5dc

if (arg5 == 0)
    *(esi + 0x2c) = *(esi + 0x64)

if (arg6 == 0)
    *(esi + 0x30) = *(esi + 0x68)

if (arg8 == 0)
    *(esi + 0x44) = divs.dp.d(sx.q((arg3 - *(esi + 0x24)) * arg2), arg7)
    *(esi + 0x48) = divs.dp.d(sx.q((arg4 - *(esi + 0x28)) * arg2), arg7)
    *(esi + 0x4c) = divs.dp.d(sx.q((arg5 - *(esi + 0x2c)) * arg2), arg7)
    int32_t temp0_3 = divs.dp.d(sx.q((arg6 - *(esi + 0x30)) * arg2), arg7)
    *(esi + 0x50) = temp0_3
    return temp0_3

uint32_t eax_26 = sub_441360(divs.dp.d(sx.q(arg2 << 0xe), arg7))
int32_t eax_30
int16_t edx_9
edx_9:eax_30 = sx.q((arg3 - *(esi + 0x24)) * eax_26)
*(esi + 0x44) = (eax_30 + zx.d(edx_9)) s>> 0x10
int32_t eax_36
int16_t edx_11
edx_11:eax_36 = sx.q((arg4 - *(esi + 0x28)) * eax_26)
*(esi + 0x48) = (eax_36 + zx.d(edx_11)) s>> 0x10
int32_t eax_42
int16_t edx_13
edx_13:eax_42 = sx.q((arg5 - *(esi + 0x2c)) * eax_26)
*(esi + 0x4c) = (eax_42 + zx.d(edx_13)) s>> 0x10
int32_t eax_48
int16_t edx_15
edx_15:eax_48 = sx.q((arg6 - *(esi + 0x30)) * eax_26)
int32_t eax_50 = (eax_48 + zx.d(edx_15)) s>> 0x10
*(esi + 0x50) = eax_50
return eax_50
