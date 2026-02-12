// 函数: sub_421ca0
// 地址: 0x421ca0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void var_104
int32_t eax_1 = __security_cookie ^ &var_104
void* eax_2 = data_a5d910
void* eax_4

for (int32_t i = sx.d(*(eax_2 + ((*(eax_2 + 0x7ad8)
        + ((*(eax_2 + 0x7850) + (*(eax_2 + 0x24) << 2)) * 5 + *(eax_2 + 0x784c)) * 0x18) << 1) + 0x50)); 
        i != 0; i = sx.d(*(eax_4 + ((*(eax_4 + 0x7ad8)
        + ((*(eax_4 + 0x7850) + (*(eax_4 + 0x24) << 2)) * 5 + *(eax_4 + 0x784c)) * 0x18) << 1)
        + 0x50)))
    if (sub_401ff0(i) == 1)
        void* eax_8 = data_a5d910
        int32_t var_118
        int32_t var_114
        void* __saved_edi
        int32_t edx_5
        
        if ((i & 0xf000) != 0x2000)
            edx_5.b = *(eax_8 + 0x7ac4) == 0
            __saved_edi = (edx_5 << 0x16) + eax_8 + 0x62921c
            var_114 = (i & 0xfff) * 2
            var_118 = 1
        else
            edx_5.b = *(eax_8 + 0x7ac4) == 0
            __saved_edi = (edx_5 << 0x16) + eax_8 + 0x62921c
            var_114 = (i & 0xfff) * 2
            var_118 = 2
        sub_405c80(var_118, var_114, __saved_edi, eax_8 + 0xe2921c)
        sub_4414c0(*(data_a5d910 + 0x7ad8) + 1, &var_104, "%d")
        void* ecx_14 = data_a5d910
        void* eax_13 = &var_104
        char j
        
        do
            j = *eax_13
            *(ecx_14 + 0x27c00 - &var_104 + eax_13) = j
            eax_13 += 1
        while (j != 0)
        
        void* eax_14 = ecx_14 + 0x27bff
        
        do
            j = *(eax_14 + 1)
            eax_14 += 1
        while (j != 0)
        
        *eax_14 = 0x5e81
        *(eax_14 + 2) = 0
        sub_4414c0(
            *(((*(ecx_14 + 0x7850) + (*(ecx_14 + 0x24) << 2)) * 5 + *(ecx_14 + 0x784c)) * 0x30
                + ecx_14 + 0x78), 
            &var_104, "%d")
        void* edx_12 = data_a5d910
        void* eax_20 = &var_104
        char j_1
        
        do
            j_1 = *eax_20
            eax_20 += 1
        while (j_1 != 0)
        
        int32_t eax_21 = eax_20 - &var_104
        void* edi_3 = edx_12 + 0x27bff
        
        do
            j_1 = *(edi_3 + 1)
            edi_3 += 1
        while (j_1 != 0)
        
        int32_t esi_6
        int32_t edi_4
        edi_4, esi_6 = __builtin_memcpy(edi_3, &var_104, eax_21 u>> 2 << 2)
        __builtin_memcpy(edi_4, esi_6, eax_21 & 3)
        uint32_t ecx_19 = zx.d(*(edx_12 + 0x27d16))
        *(edx_12 + 0x27d10) = edx_12 + 0x27c00
        sub_43c280(edx_12 + 0x27d10, 1, ecx_19, 0x18)
        void* eax_23 = data_a5d910
        sub_43bdf0(eax_23 + 0x27fac, eax_23 + 0x27d10, 0x1000)
        void* eax_25 = data_a5d910
        uint32_t eax_26 = zx.d(*(eax_25 + 0x27d66))
        *(eax_25 + 0x27d60) = *(
            ((*(eax_25 + 0x7850) + (*(eax_25 + 0x24) << 2)) * 5 + *(eax_25 + 0x784c)) * 0x30
            + eax_25 + 0x68)
        sub_43c280(eax_25 + 0x27d60, 1, eax_26, 0x18)
        void* eax_27 = data_a5d910
        sub_43bdf0(eax_27 + 0x28a38, eax_27 + 0x27d60, 0x1000)
        sub_480cd2(eax_1 ^ &var_104)
        return 1
    
    eax_4 = data_a5d910
    *(eax_4 + 0x7ad8) += 1

sub_480cd2(eax_1 ^ &var_104)
return 0
