// 函数: sub_449990
// 地址: 0x449990
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t* esi = arg1
sub_4494f0(esi, arg2.b, arg3, arg4, 0, 0)
sub_4494f0(&esi[0xa], arg2.b, arg3, arg4, 0, 0)
sub_4497c0(&esi[0x18], arg2.b, arg3, arg4, arg5, arg6)
sub_4497c0(&esi[0x54], arg2.b, arg3, arg4, arg5, arg6)
int32_t edi
edi.w = arg7

if (edi.w != 0)
    arg1.w = 0x800 - (arg3 s>> 1)
    sub_447d90(&esi[0x38], arg5, 0x800 - (arg3 s>> 1), 0x800 - (arg4 s>> 1), arg3, arg4, 0, 0, 0, 
        0, 0)
    sub_447d90(&esi[0x74], arg5, arg1.w, 0x800 - (arg4 s>> 1), arg3, arg4, 0, 0, 0, 0, 0)

int16_t temp0 = edi.w
edi.w = neg.w(edi.w)
esi[0x16] = 0
esi[0x17] = 0
int32_t eax_7
int32_t edx_5
edx_5:eax_7 = sx.q(((sbb.d(edi, edi, temp0 != 0) & 6) + 8) & 0x7fff)
esi[0x14] = eax_7
esi[0x14] |= 0x8000
esi[0x15] = edx_5
esi[0x14] = esi[0x14]
esi[0x16] = (esi[0x16] & 0xfffffffe) | 0xe
esi[0x15] = (edx_5 & 0xfffffff) | 0x10000000
esi[0x17] = esi[0x17]
esi[0x52] = 0
esi[0x53] = 0
esi[0x50] = 0
esi[0x51] = 0
int32_t edx_13 = esi[0x51] | edx_5
int32_t eax_9 = esi[0x52]
esi[0x50] = eax_7
esi[0x50] |= 0x8000
int32_t ecx_6 = esi[0x50]
esi[0x51] = (edx_13 & 0xfffffff) | 0x10000000
esi[0x50] = ecx_6
int32_t ecx_7 = esi[0x53]
esi[0x52] = (eax_9 & 0xfffffffe) | 0xe
esi[0x53] = ecx_7
int16_t result_1 = sub_449490(arg2.b, arg3, arg4)
int16_t ecx_8 = data_4ca070
void* result = zx.d(result_1)

if (ecx_8 == 1)
    if (data_4ca074 != ecx_8)
        return result
    
    goto label_449ba2

if (ecx_8 == 0)
label_449ba2:
    esi[0xe] ^= (result s>> 1 ^ esi[0xe]) & 0x1ff
    int32_t eax_14
    int32_t edx_17
    edx_17:eax_14 = sx.q(result s>> 1 & 0x1ff)
    result = &esi[0x18]
    int32_t edx_18 = edx_17 | *(result + 4)
    *result = eax_14 | (*result & 0xfffffe00)
    *(result + 4) = edx_18

return result
