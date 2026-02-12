// 函数: sub_4427e0
// 地址: 0x4427e0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ebx
ebx.b = *(arg4 + 5)
int32_t var_18 = 0
int32_t var_14 = 2
int32_t var_10 = 1
int32_t var_c = 0
int32_t var_8 = 0x14
int32_t var_4 = 0x13
void* esi = arg4 + 0x10

if (ebx.b != 0)
    int32_t eax_4
    int32_t edx_1
    edx_1:eax_4 = sx.q(esi - arg4 + 0x7f)
    esi = ((eax_4 + (edx_1 & 0x7f)) s>> 7 << 7) + arg4

void* edi_1 = zx.d(*(esi + 0xc)) + esi

if (ebx.b != 0)
    int32_t eax_11
    int32_t edx_3
    edx_3:eax_11 = sx.q(edi_1 - arg4 + 0x7f)
    edi_1 = ((eax_11 + (edx_3 & 0x7f)) s>> 7 << 7) + arg4

void* ebp_1 = *(esi + 8) + edi_1

if (ebx.b != 0)
    int32_t eax_18
    int32_t edx_5
    edx_5:eax_18 = sx.q(ebp_1 - arg4 + 0x7f)
    ebp_1 = ((eax_18 + (edx_5 & 0x7f)) s>> 7 << 7) + arg4

void* eax
eax.w = arg2
*arg1 = eax.w
arg1[2] = (&var_18)[zx.d(*(esi + 0x13))].w
int32_t eax_25
int32_t edx_8
edx_8:eax_25 = sx.q(zx.d(*(esi + 0x14)) + 0x3f)
arg1[1] = ((eax_25 + (edx_8 & 0x3f)) s>> 6).w
arg1[3] = 0
arg1[4] = 0
int32_t edx_9
edx_9.w = *(esi + 0x14)
arg1[5] = edx_9.w
arg1[6] = *(esi + 0x16)
int16_t eax_29 = arg1[2]
*(arg1 + 0x14) = edi_1

if (eax_29 == 0x14 || eax_29 == 0x13)
    int32_t eax_32
    int32_t edx_10
    edx_10:eax_32 = sx.q(zx.d(*(esi + 0x14)) + 0x7f)
    int32_t edx_11
    edx_11.w = arg3
    arg1[1] = ((eax_32 + (edx_10 & 0x3f)) s>> 6).w
    arg1[7] = edx_11.w
    arg1[8] = (&var_18)[zx.d(*(esi + 0x12)) & 0xf].w
    *(arg1 + 0x18) = ebp_1
else
    arg1[7] = 0
    arg1[8] = 0
    *(arg1 + 0x18) = 0

*(arg1 + 0x1c) = 0
*(arg1 + 0x20) = 0
uint32_t result = zx.d(*(esi + 0x14))
*(arg1 + 0x24) = result
*(arg1 + 0x28) = zx.d(*(esi + 0x16))
return result
