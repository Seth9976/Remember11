// 函数: sub_473e20
// 地址: 0x473e20
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t i = 0

if (arg1 == 0)
    return 

void* eax_1 = sub_472200(0)
int32_t* ebx = sub_471040()
int32_t* var_98 = ebx

if (arg3 == 0)
    char var_3c[0x3c]
    sub_480cf0(&var_3c, 0, 0x3c)
    arg3 = &var_3c

int32_t var_84[0x12]
sub_472390(&var_84, arg2, arg3)
float var_a4 = fconvert.s(fconvert.t(-1f))
int32_t* var_a0 = nullptr
int32_t* esi_1 = sub_477a30(eax_1)
int32_t* var_9c = esi_1
int32_t i_1 = 0

if (esi_1[1] s<= 0)
    return 

do
    int32_t* edi_1 = *(*esi_1 + (i << 2))
    void var_94
    (*(*ebx + 0x20))(ebx, *edi_1, &var_94)
    int32_t j = 0
    int32_t j_1 = 0
    
    if (edi_1[0x198] s> 0)
        do
            void* ebp = *(edi_1[0x197] + (j << 2))
            int32_t k = 0
            
            if (*(ebp + 0x13c) s> 0)
                do
                    int32_t* esi_2 = *(*(ebp + 0x138) + (k << 2))
                    int32_t var_88
                    
                    if ((esi_2[4] == 0 || esi_2[2] == var_88) && sub_46f8c0(esi_2, arg2, arg3) != 0)
                        int32_t eax_9
                        long double st0_1
                        st0_1, eax_9 = sub_46fb40(esi_2, &var_84, &var_94)
                        long double x87_r6_1 = fconvert.t(var_a4)
                        x87_r6_1 - st0_1
                        eax_9.w = (x87_r6_1 < st0_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r6_1, st0_1) ? 1 : 0) << 0xa
                            | (x87_r6_1 == st0_1 ? 1 : 0) << 0xe | 0x3800
                        bool p_1 = unimplemented  {test ah, 0x5}
                        
                        if (not(p_1))
                            var_a4 = fconvert.s(st0_1)
                            var_a0 = esi_2
                    
                    k += 1
                while (k s< *(ebp + 0x13c))
                
                esi_1 = var_9c
                j = j_1
            
            j += 1
            j_1 = j
        while (j s< edi_1[0x198])
        
        ebx = var_98
        i = i_1
    
    i += 1
    i_1 = i
while (i s< esi_1[1])

if (var_a0 == 0)
    return 

int32_t* var_cc = &var_84
sub_472570(var_cc, var_a0, arg2, arg3)
__builtin_memcpy(arg1, &var_84, 0x48)
