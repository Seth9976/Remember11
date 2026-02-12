// 函数: sub_473870
// 地址: 0x473870
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* result
long double st0
st0, result = sub_471290()

if ((data_c7a960 & 1) == 0)
    data_c7a960.d |= 1
    sub_46d000(&data_c79d90)
    result = sub_48258e(sub_49cb00)

if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
    result = EnterCriticalSection(&data_c79d54)

int32_t** esi = data_c7a158

if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
    result = LeaveCriticalSection(&data_c79d54)

if (esi != 0)
    int32_t i = 0
    int32_t i_1 = 0
    
    if (esi[1] s> 0)
        int32_t edi_1 = 0
        
        do
            int32_t* eax = *esi
            float edx_1 = *(eax + edi_1 + 8)
            int32_t ebx_1 = *(eax + edi_1)
            int32_t ebp_1 = *(eax + edi_1 + 4)
            void* eax_1 = eax + edi_1
            result = *(eax_1 + 0x10)
            void* result_1 = result
            
            if (result.b != 0)
                long double x87_r7_2 = fconvert.t(*(eax_1 + 0xc)) - fconvert.t(fconvert.s(st0))
                float var_8_2 = fconvert.s(x87_r7_2)
                long double x87_r6_1 = float.t(0)
                x87_r6_1 - x87_r7_2
                result.w = (x87_r6_1 < x87_r7_2 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_1, x87_r7_2) ? 1 : 0) << 0xa
                    | (x87_r6_1 == x87_r7_2 ? 1 : 0) << 0xe
                
                if ((result:1.b & 0x41) == 0)
                    result = ebx_1(i, ebp_1)
                    i = i_1
                    var_8_2 = fconvert.s(fconvert.t(edx_1))
                
                if (i s>= 0 && i s< esi[1])
                    result = *esi + edi_1
                    *result = ebx_1
                    *(result + 4) = ebp_1
                    *(result + 8) = edx_1
                    *(result + 0xc) = var_8_2
                    *(result + 0x10) = result_1
            
            i += 1
            edi_1 += 0x14
            i_1 = i
        while (i s< esi[1])

return result
