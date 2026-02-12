// 函数: sub_457090
// 地址: 0x457090
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t i = 0
int32_t i_1 = 0
int32_t var_18
void* var_c

if (*(arg1 + 0x20) s> 0)
    int32_t var_10_1 = 0
    
    do
        var_18 = 0
        
        if (*(arg1 + 0x1c) s> 0)
            bool cond:8_1
            
            do
                int32_t eax_1 = *(arg1 + 0x30)
                int32_t edx_2
                
                if (eax_1 != 0)
                    int32_t eax_2
                    int32_t edx_1
                    edx_1:eax_2 = muls.dp.d(0x66666667, *(arg1 + 0x34) - eax_1)
                    edx_2 = edx_1 s>> 3
                
                if (eax_1 == 0 || i u>= (edx_2 u>> 0x1f) + edx_2)
                    __invalid_parameter_noinfo()
                
                void* edi_1 = *(arg1 + 0x30) + var_10_1
                int32_t* ebx_1 = *(edi_1 + 8)
                
                if (ebx_1 u> *(edi_1 + 0xc))
                    __invalid_parameter_noinfo()
                
                if (edi_1 == 0)
                    __invalid_parameter_noinfo()
                
                int32_t var_4_1 = 0
                
                if (edi_1 == 0)
                    __invalid_parameter_noinfo()
                
                var_c = edi_1
                sub_453130(&var_c, var_18)
                void* edi_2 = var_c
                
                if (edi_2 == 0)
                    __invalid_parameter_noinfo()
                    __invalid_parameter_noinfo()
                    __invalid_parameter_noinfo()
                else if (ebx_1 == 0)
                    __invalid_parameter_noinfo()
                
                int32_t ebx_2 = *(edi_2 + 8)
                
                if (ebx_2 u> *(edi_2 + 0xc))
                    __invalid_parameter_noinfo()
                
                if (((ebx_1 - ebx_2) s>> 2 << 5) + var_4_1 u>= *edi_2)
                    __invalid_parameter_noinfo()
                
                i = i_1
                
                if ((*ebx_1 & 1 << var_4_1.b) == 0)
                    goto label_4571ae
                
                cond:8_1 = var_18 + 1 s< *(arg1 + 0x1c)
                var_18 += 1
            while (cond:8_1)
        
        var_10_1 += 0x14
        i += 1
        i_1 = i
    while (i s< *(arg1 + 0x20))

label_4571ae:
int32_t eax_9 = *(arg1 + 0x30)
int32_t edx_5

if (eax_9 != 0)
    int32_t eax_10
    int32_t edx_4
    edx_4:eax_10 = muls.dp.d(0x66666667, *(arg1 + 0x34) - eax_9)
    edx_5 = edx_4 s>> 3

if (eax_9 == 0 || i u>= (edx_5 u>> 0x1f) + edx_5)
    __invalid_parameter_noinfo()

int32_t ecx_11 = *(arg1 + 0x30)
int32_t eax_14 = i * 5
int32_t* ebp_2 = *(ecx_11 + (eax_14 << 2) + 8)
void* ebx_4 = ecx_11 + (eax_14 << 2)

if (ebp_2 u> *(ecx_11 + (eax_14 << 2) + 0xc))
    __invalid_parameter_noinfo()

if (ebx_4 == 0)
    __invalid_parameter_noinfo()

int32_t var_4_2 = 0

if (ebx_4 == 0)
    __invalid_parameter_noinfo()

var_c = ebx_4
sub_453130(&var_c, var_18)
void* ebp_3 = var_c

if (ebp_3 == 0)
    __invalid_parameter_noinfo()
    __invalid_parameter_noinfo()
    __invalid_parameter_noinfo()
else if (ebp_2 == 0)
    __invalid_parameter_noinfo()

int32_t ebp_4 = *(ebp_3 + 8)

if (ebp_4 u> *(var_c + 0xc))
    __invalid_parameter_noinfo()

if (((ebp_2 - ebp_4) s>> 2 << 5) + var_4_2 u>= *var_c)
    __invalid_parameter_noinfo()

*ebp_2 |= 1 << var_4_2.b
int32_t edx_8 = *(arg1 + 0x14)
*(arg1 + 0x3c) += 1
*(arg2 + 0x20) = (edx_8 + 0x10) * var_18 + 8
*(arg2 + 0x24) = (*(arg1 + 0x18) + 0x10) * i + 8
*(arg2 + 0x10) = *(arg1 + 0x24)
*(arg2 + 0x14) = *(arg1 + 0x28)
long double x87_r6 = fconvert.t(2f)
*(arg2 + 0x28) = fconvert.s(float.t(*(arg1 + 0x14)) * x87_r6 / float.t(*(arg1 + 0xc)))
long double x87_r7_5 = x87_r6 * float.t(*(arg1 + 0x18)) / float.t(*(arg1 + 0x10))
*(arg2 + 0x54) = i
*(arg2 + 0x4c) = arg1
*(arg2 + 0x50) = var_18
*(arg2 + 0x2c) = fconvert.s(x87_r7_5)
return *(arg1 + 8)
