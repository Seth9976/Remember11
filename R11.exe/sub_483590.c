// 函数: sub_483590
// 地址: 0x483590
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (data_2b6a9bc != 0)
    int32_t eax_2 = arg1 & 0x1f80
    bool cond:2_1 = eax_2 != 0x1f80
    
    if (eax_2 == 0x1f80)
        int16_t x87status_1
        int16_t temp0_1
        temp0_1, x87status_1 = __fnstcw_memmem16(arg2)
        eax_2.w = temp0_1
        eax_2.w &= 0x7f
        cond:2_1 = eax_2.w != 0x7f
    
    if (not(cond:2_1))
        uint128_t xmm0 = zx.o(arg3)
        int32_t xmm2[0x4] = data_4a6070
        int64_t xmm7 = xmm0.q
        uint64_t xmm0_1[0x2] = _mm_srli_epi64(xmm0, 0x34)
        int32_t eax_3 = xmm0_1
        int32_t xmm2_1[0x4] = _mm_sub_epi32(xmm2, __andpd_xmmxuq_memxuq(xmm0_1, data_4a6090))
        int32_t xmm1_1[0x4] = _mm_srl_epi64(xmm0, xmm2_1)
        
        if ((eax_3 & 0x800) == 0)
            uint128_t xmm0_3 = zx.o(arg3)
            uint64_t xmm1_3[0x2] = _mm_sll_epi64(xmm1_1, xmm2_1)
            uint64_t xmm0_4[0x2] = _mm_cmpeq_pd(xmm0_3, xmm1_3, 6)
            
            if (eax_3 s< 0x3ff)
                arg3 = __andpd_xmmxuq_memxuq(__cmppd_xmmpd_mempd_immb(xmm0_3, data_4a6080, 6), 
                    data_4a6060)
                return fconvert.t(arg3)
            
            if (eax_3 s<= 0x432)
                arg3 = xmm1_3 f+ __andpd_xmmxuq_memxuq(xmm0_4, data_4a6060)
                return fconvert.t(arg3)
        else
            if (eax_3 s< 0xbff)
                return fconvert.t(-0.0)
            
            double xmm1_2 = _mm_sll_epi64(xmm1_1, xmm2_1)
            
            if (eax_3 s<= 0xc32)
                arg3 = xmm1_2
                return fconvert.t(arg3)
        
        if (not(is_ordered.q(xmm7, xmm7)))
            int32_t __saved_ebp_2 = 0x3ec
            sub_48ce24(&arg3, &arg3, &arg3, 0x3ec)
        
        return fconvert.t(arg3)

int32_t __saved_ebp_4
int32_t __saved_ebp_3 = __saved_ebp_4
int32_t ecx
int32_t var_8_2 = ecx
int32_t var_c_2 = ecx
int32_t __saved_ebx_3
int32_t __saved_ebx_2 = __saved_ebx_3
int32_t __saved_esi_1
int32_t __saved_esi = __saved_esi_1
int32_t var_18 = 0xffff
int32_t var_1c = data_4cc854
int32_t eax_4
int16_t x87control
eax_4, x87control = sub_4932d8(arg2)
int32_t var_18_1 = 0xffff
int32_t var_1c_1 = 0xffff
var_1c_1.q = fconvert.d(fconvert.t(arg3))
int32_t var_30_1
int32_t var_28_1

if (((arg3:6.d).w & 0x7ff0) != 0x7ff0)
    var_c_2.q = fconvert.d(sub_49317c())
    fconvert.t(arg3) - fconvert.t(var_c_2.q)
    bool p_1 = unimplemented  {test ah, 0x44}
    
    if (not(p_1) || (eax_4.b & 0x20) != 0)
        int32_t var_18_5 = 0xffff
        int32_t var_1c_4 = eax_4
        sub_4932d8(x87control)
        return fconvert.t(var_c_2.q)
    
    int32_t var_18_6 = eax_4
    double var_20_3 = fconvert.d(fconvert.t(var_c_2.q))
    var_28_1 = (fconvert.d(fconvert.t(arg3))).d
    int32_t var_2c_2 = 0xc
    var_30_1 = 0x10
else
    int32_t eax_6 = sub_4931b7()
    
    if (eax_6 s> 0)
        if (eax_6 s<= 2)
            int32_t var_18_3 = 0xffff
            int32_t var_1c_3 = eax_4
            sub_4932d8(x87control)
            return fconvert.t(arg3)
        
        if (eax_6 == 3)
            int32_t var_18_2 = eax_4
            int32_t var_1c_2 = 0xffff
            int64_t var_20
            var_20.d = 0xffff
            double var_20_1 = fconvert.d(fconvert.t(arg3))
            int64_t var_28
            var_28:4.d = 0xc
            return sub_49306f()
    
    int32_t var_18_4 = eax_4
    double var_20_2 = fconvert.d(fconvert.t(arg3) + fconvert.t(1.0))
    var_28_1 = (fconvert.d(fconvert.t(arg3))).d
    int32_t var_2c_1 = 0xc
    var_30_1 = 8

return sub_4930c2(var_30_1, 0xc, var_28_1)
