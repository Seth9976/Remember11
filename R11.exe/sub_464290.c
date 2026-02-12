// 函数: sub_464290
// 地址: 0x464290
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

BOOL eax
int32_t var_8
int32_t var_4

if (data_c78bbc != 0)
    eax = data_c78bb8
label_4642dc:
    
    if (eax != 0)
        int32_t esi = data_c78ba8
        int32_t edi_1 = data_c78bac
        int32_t eax_3
        int32_t ecx_2
        
        if ((esi | edi_1) == 0 || arg1 == 1 || arg1 == 4)
            QueryPerformanceCounter(&var_8)
            eax_3 = var_4
            ecx_2 = var_8
            edi_1 = data_c78bac
            esi = data_c78ba8
        else
            ecx_2 = esi
            eax_3 = edi_1
            var_8 = ecx_2
            int32_t var_4_1 = eax_3
        
        switch (arg1)
            case 0
                data_c78ba8 = 0
                data_c78bac = 0
                data_4cadf0 = 0
                data_c78b98 = ecx_2
                data_c78b9c = eax_3
                data_c78ba0 = ecx_2
                data_c78ba4 = eax_3
                return float.t(0)
            case 1
                if (data_4cadf0 != 0)
                    int32_t edx_5 = ecx_2 - esi
                    int32_t temp6_1 = data_c78b98
                    data_c78b98 += edx_5
                    data_c78b9c = adc.d(data_c78b9c, sbb.d(eax_3, edi_1, ecx_2 u< esi), 
                        temp6_1 + edx_5 u< temp6_1)
                
                data_c78ba8 = 0
                data_c78bac = 0
                data_4cadf0 = 0
                data_c78ba0 = ecx_2
                data_c78ba4 = eax_3
                return float.t(0)
            case 2
                if (data_4cadf0 == 0)
                    data_c78ba8 = ecx_2
                    data_c78bac = eax_3
                    data_c78ba0 = ecx_2
                    data_c78ba4 = eax_3
                    data_4cadf0 = 1
                
                return float.t(0)
            case 3
                uint32_t eax_6
                int32_t edx_6
                eax_6, edx_6 = __alldiv(data_c78bb0, data_c78bb4, 0xa, 0)
                data_c78bac = adc.d(edi_1, edx_6, esi + eax_6 u< esi)
                data_c78ba8 = esi + eax_6
                return float.t(0)
            case 5
                int32_t eax_4 = sbb.d(eax_3, data_c78b9c, ecx_2 u< data_c78b98)
                var_8 = ecx_2 - data_c78b98
                int32_t var_4_3 = eax_4
                return float.t(var_8.q) / float.t(data_c78bb0.q)
            case 6
                int32_t var_4_2 = sbb.d(eax_3, data_c78ba4, ecx_2 u< data_c78ba0)
                var_8 = ecx_2 - data_c78ba0
                long double x87_r7 = float.t(var_8.q)
                long double x87_r6 = float.t(data_c78bb0.q)
                data_c78ba0 = ecx_2
                data_c78ba4 = eax_3
                return x87_r7 / x87_r6
        
        if (arg1 != 4)
            return fconvert.t(-1f)
        
        return float.t(var_8.q) / float.t(data_c78bb0.q)
else
    data_c78bbc = 1
    eax = QueryPerformanceFrequency(&var_8)
    data_c78bb8 = eax
    
    if (eax != 0)
        data_c78bb0 = var_8
        data_c78bb4 = var_4
        goto label_4642dc
long double x87_r6_3 = float.t(0)
long double x87_r5_1 = fconvert.t(data_c78b90)
x87_r5_1 - x87_r6_3
eax.w = (x87_r5_1 < x87_r6_3 ? 1 : 0) << 8 | (is_unordered.t(x87_r5_1, x87_r6_3) ? 1 : 0) << 0xa
    | (x87_r5_1 == x87_r6_3 ? 1 : 0) << 0xe | 0x2800
long double x87_r7_12 = x87_r5_1
bool p_1 = unimplemented  {test ah, 0x44}
long double x87_r5_2

if (not(p_1) || arg1 == 1 || arg1 == 4)
    int32_t eax_7 = GetTickCount()
    long double x87_r7_14 = float.t(eax_7)
    
    if (eax_7 s< 0)
        x87_r7_14 = x87_r7_14 + fconvert.t(4294967296.0)
    
    x87_r6_3 = fconvert.t(data_c78b90)
    x87_r5_2 = x87_r7_14 * fconvert.t(0.001)
    x87_r7_12 = float.t(0)
else
    x87_r5_2 = x87_r6_3

switch (arg1)
    case 0
        data_c78b80 = fconvert.d(x87_r6_3)
        data_4cadf0 = 0
        data_c78b88 = fconvert.d(x87_r6_3)
        data_c78b90 = fconvert.d(x87_r5_2)
        return float.t(0)
    case 1
        if (data_4cadf0 == 0)
            x87_r7_12 = x87_r5_2
        else
            long double x87_r6_7 = x87_r5_2 - x87_r6_3
            x87_r6_3 = x87_r5_2
            data_c78b80 = fconvert.d(x87_r6_7 + fconvert.t(data_c78b80))
        
        data_c78b90 = fconvert.d(x87_r7_12)
        data_4cadf0 = 0
        data_c78b88 = fconvert.d(x87_r6_3)
        return float.t(0)
    case 2
        if (data_4cadf0 != 0)
            return float.t(0)
        
        data_c78b90 = fconvert.d(x87_r6_3)
        data_c78b88 = fconvert.d(x87_r6_3)
        data_4cadf0 = 1
        return float.t(0)
    case 3
        data_c78b90 = fconvert.d(x87_r7_12 + fconvert.t(0.10000000149011612))
        return float.t(0)
    case 4
        return x87_r6_3
    case 5
        return x87_r5_2 - fconvert.t(data_c78b80)
    case 6
        long double x87_r6_5 = x87_r5_2 - fconvert.t(data_c78b88)
        data_c78b88 = fconvert.d(x87_r5_2)
        return x87_r6_5

return fconvert.t(-1f)
