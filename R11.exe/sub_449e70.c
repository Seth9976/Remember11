// 函数: sub_449e70
// 地址: 0x449e70
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t* esi = arg1
sub_4494f0(esi, arg2.b, arg3.w, arg4.w, 0, 0)
sub_4494f0(&esi[0xa], arg2.b, arg3.w, arg4.w, 0, 0)
sub_4497c0(&esi[0x18], arg2.b, arg3.w, arg4.w, arg5, arg6)
sub_449ca0(&esi[0x38], arg2.b, arg3, arg4, arg5, arg6)
sub_4497c0(&esi[0x74], arg2.b, arg3.w, arg4.w, arg5, arg6)
sub_449ca0(&esi[0x94], arg2.b, arg3, arg4, arg5, arg6)
int32_t edi
edi.w = arg7

if (edi.w != 0)
    arg1.w = 0x800 - (arg3.w s>> 1)
    sub_447d90(&esi[0x58], arg5, 0x800 - (arg3.w s>> 1), 0x800 - (arg4.w s>> 1), arg3.w, arg4.w, 0, 
        0, 0, 0, 0)
    sub_447d90(&esi[0xb4], arg5, arg1.w, 0x800 - (arg4.w s>> 1), arg3.w, arg4.w, 0, 0, 0, 0, 0)

int16_t temp0 = edi.w
edi.w = neg.w(edi.w)
esi[0x16] = 0
esi[0x17] = 0
int32_t eax_9
int32_t edx_7
edx_7:eax_9 = sx.q(((sbb.d(edi, edi, temp0 != 0) & 6) + 0x10) & 0x7fff)
esi[0x14] = eax_9
esi[0x14] |= 0x8000
esi[0x15] = edx_7
esi[0x14] = esi[0x14]
esi[0x16] = (esi[0x16] & 0xfffffffe) | 0xe
esi[0x15] = (edx_7 & 0xfffffff) | 0x10000000
esi[0x17] = esi[0x17]
esi[0x72] = 0
esi[0x73] = 0
esi[0x70] = 0
esi[0x71] = 0
int32_t edx_15 = esi[0x71] | edx_7
int32_t eax_11 = esi[0x72]
esi[0x70] = eax_9
esi[0x70] |= 0x8000
int32_t ecx_8 = esi[0x70]
esi[0x71] = (edx_15 & 0xfffffff) | 0x10000000
esi[0x70] = ecx_8
int32_t ecx_9 = esi[0x73]
esi[0x72] = (eax_11 & 0xfffffffe) | 0xe
esi[0x73] = ecx_9
int16_t result_1 = sub_449490(arg2.b, arg3.w, arg4.w)
int16_t ecx_10 = data_4ca070
uint32_t result = zx.d(result_1)

if (ecx_10 == 1)
    if (data_4ca074 != ecx_10)
        return result
    
    goto label_44a0b9

if (ecx_10 == 0)
label_44a0b9:
    esi[0xe] ^= (result s>> 1 ^ esi[0xe]) & 0x1ff
    int32_t edx_19
    edx_19:result = sx.q(result s>> 1 & 0x1ff)
    int32_t edi_10 = esi[0x19] | edx_19
    esi[0x18] = (esi[0x18] & 0xfffffe00) | result
    esi[0x19] = edi_10
    int32_t edi_12 = esi[0x39] | edx_19
    esi[0x38] = (esi[0x38] & 0xfffffe00) | result
    esi[0x39] = edi_12

return result
