// 函数: sub_455030
// 地址: 0x455030
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t* ebx = arg2
void var_20
(*(*ebx + 0x44))(ebx, 0, &var_20)
int32_t var_28
(*(*ebx + 0x4c))(ebx, 0, &var_28, 0, 0)
int32_t edi = 0
int32_t var_4

if (var_4 u> 0)
    int32_t var_8
    int32_t esi_1 = var_8
    long double x87_r5_1 = fconvert.t(255f)
    
    do
        int32_t edx_2 = 0
        
        if (esi_1 u> 0)
            int32_t var_24
            char* ecx_1 = var_28 * edi + var_24 + 1
            
            do
                long double x87_r4_3 = float.t(zx.d(*ecx_1)) * fconvert.t(0.889999986f)
                    + float.t(zx.d(ecx_1[0xffffffff])) * fconvert.t(0.109999999f)
                x87_r4_3 - x87_r5_1
                uint32_t eax_6
                eax_6.w = (x87_r4_3 < x87_r5_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r4_3, x87_r5_1) ? 1 : 0) << 0xa
                    | (x87_r4_3 == x87_r5_1 ? 1 : 0) << 0xe | 0x2000
                bool p_1 = unimplemented  {test ah, 0x5}
                
                if (p_1)
                    x87_r5_1 = x87_r4_3
                    x87_r4_3 = x87_r5_1
                
                int16_t x87status_1
                int16_t temp0_1
                temp0_1, x87status_1 = __fnstcw_memmem16(arg1)
                arg2.w = temp0_1
                edx_2 += 1
                ecx_1 = &ecx_1[4]
                int16_t x87control
                int16_t x87status_2
                x87control, x87status_2 = __fldcw_memmem16(arg2.w | 0xc00)
                int16_t eax_8
                eax_8.b = (int.d(x87_r4_3)).b
                ecx_1[0xfffffffb] = eax_8.b
                ecx_1[0xfffffffc] = eax_8.b
                int16_t x87status_3
                arg1, x87status_3 = __fldcw_memmem16(arg2.w)
                ecx_1[0xfffffffd] = eax_8.b
                esi_1 = var_8
            while (edx_2 u< esi_1)
        
        edi += 1
    while (edi u< var_4)

(*(*ebx + 0x50))(ebx, 0)
