// 函数: sub_46b1c0
// 地址: 0x46b1c0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* result_1 = arg4
uint32_t eax_1 = zx.d(*(arg3 + 0x10))
int32_t eax_2 = eax_1 s>> 4
int32_t var_74 = eax_2

if (eax_2 s> 5 && class CWaveFileADX `RTTI Type Descriptor'.__offset(0x1b).b == 1)
    sub_464790(".\DXUTsound.cpp", 0x6e2)
    class CWaveFileADX `RTTI Type Descriptor'.__offset(0x1b).b = 0

char ecx = *(arg3 + 0x11)
void* ebp_3 = arg3 + 0x12

if ((ecx & 1) != 0)
    *(arg1 + 8) = (*(arg1 + 0x1c) s/ 0x1c) << 4
    *(arg1 + 0x38) = 1

if ((ecx & 4) != 0)
    *(arg1 + 0x3c) = *(arg1 + 0x1c)

for (int32_t i = 0; i s< 0x1c; )
    uint32_t edx_4 = zx.d(*ebp_3)
    int32_t eax_10 = (edx_4 & 0xf) << 0xc
    ebp_3 += 1
    
    if ((eax_10 & 0x8000) != 0)
        eax_10 |= 0xffff0000
    
    char ecx_2 = (eax_1.w & 0xf).b
    int32_t edx_6 = (edx_4 & 0xf0) << 8
    int32_t var_70[0x1c]
    var_70[i] = fconvert.s(float.t(eax_10 s>> ecx_2))
    
    if ((edx_6 & 0x8000) != 0)
        edx_6 |= 0xffff0000
    
    i += 2
    (&var_74)[i] = fconvert.s(float.t(edx_6 s>> ecx_2))

int32_t eax_12 = var_74
void* result

for (int32_t i_1 = 0; i_1 s< 0x1c; )
    i_1 += 1
    long double x87_r6_2 = fconvert.t(*((eax_12 << 3) + &data_4a46c8)) * fconvert.t(*(arg1 + 0x44))
    long double x87_r5_2 = fconvert.t(*((eax_12 << 3) + &data_4a46cc)) * fconvert.t(*(arg1 + 0x48))
    int16_t x87status_1
    int16_t temp0_1
    temp0_1, x87status_1 = __fnstcw_memmem16(arg2)
    int32_t var_7c_2
    var_7c_2.w = temp0_1
    var_74 = zx.d(var_7c_2.w) | 0xc00
    result = result_1 + 2
    result_1 = result
    (&var_74)[i_1] = fconvert.s(x87_r6_2 + x87_r5_2 + fconvert.t((&var_74)[i_1]))
    *(arg1 + 0x48) = fconvert.s(fconvert.t(*(arg1 + 0x44)))
    *(arg1 + 0x44) = fconvert.s(fconvert.t((&var_74)[i_1]))
    long double x87_r6_8 = fconvert.t((&var_74)[i_1]) + fconvert.t(0.5f)
    int16_t x87control
    int16_t x87status_2
    x87control, x87status_2 = __fldcw_memmem16(var_74.w)
    var_74 = int.d(x87_r6_8)
    *(result - 2) = var_74.w
    int16_t x87status_3
    arg2, x87status_3 = __fldcw_memmem16(var_7c_2.w)

*(arg1 + 0x1c) += 0x1c
result.b = 1
return result
