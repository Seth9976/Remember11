// 函数: sub_41ce40
// 地址: 0x41ce40
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* ecx = data_a5d908
int32_t eax = 0
data_e7e63c = 0xffffffff
data_e7e640 = 0
int32_t ebp_1 = *(ecx + 0xe0) + 0x10
char var_30 = 0x80
char var_2f = 0x80
char var_2e = 0x80
char var_2d = 0x80
int32_t var_2c = ebp_1

if (arg3 == 1)
    ebp_1 += 0x80
    var_2c = ebp_1

if (ebp_1 s< 0x82)
    var_2c = 0x82
    ebp_1 = 0x82

int32_t var_20

if (*(ecx + 4) == 1)
    if (arg3 == 1)
        eax = 0x80
    
    int32_t eax_1
    int32_t edx_1
    edx_1:eax_1 = sx.q(eax)
    int32_t edi_2 = (eax_1 - edx_1) s>> 1
    void* ebx_1 = ecx + 0x14
    arg3 = 0
    
    if (*(ecx + 7) s> 0)
        int32_t var_24_1 = 0
        bool cond:4_1
        
        do
            void* var_28_1
            
            if (data_2b5cf12 == 1)
                var_28_1 = &data_4b17d8
            
            if (data_2b5cf12 != 1 || *(var_24_1 + ecx + 0x1e) == 0)
                var_28_1 = &data_4b17d0
            
            int32_t i_1 = *ebx_1
            int32_t eax_6
            int32_t edx_2
            edx_2:eax_6 = sx.q(*(ecx + 0xdc) * 0x1a)
            int32_t i = i_1
            int32_t var_1c_1 = i_1 * 0x1a - ((eax_6 - edx_2) s>> 1) + 0xb4
            
            if (i u< *(ebx_1 + 4) + i_1)
                int32_t esi_1 = i_1 * 0x22c
                
                do
                    int32_t eax_12
                    int32_t edx_7
                    edx_7:eax_12 = sx.q(0x280 - *(esi_1 + ecx + 0x604))
                    var_20 = ((eax_12 - edx_7) s>> 1) - edi_2
                    sub_43c220(esi_1 + ecx + 0x3e4, &var_20, var_28_1, arg1.w)
                    void* ecx_1 = data_a5d908
                    
                    if (arg3 == sx.d(*(ecx_1 + 6)))
                        int32_t eax_19
                        int32_t edx_10
                        edx_10:eax_19 = sx.q(0x280 - *(esi_1 + ecx_1 + 0x604))
                        var_20 = ((eax_19 - edx_10) s>> 1) - edi_2
                        int32_t var_18_1 = *(esi_1 + ecx_1 + 0x1df4 - 0x17f0)
                        int32_t var_14_1 = 0x1a
                        sub_43a210(ecx_1 + 0x1df4, &var_20, arg1)
                        ecx_1 = data_a5d908
                    
                    int32_t ecx_3 = *(esi_1 + ecx_1 + 0x604)
                    int32_t eax_25
                    int32_t edx_13
                    edx_13:eax_25 = sx.q(0x280 - ecx_3)
                    
                    if (sub_45e320(((eax_25 - edx_13) s>> 1) - edi_2, var_1c_1, ecx_3, 0x1a, 0)
                            != 0)
                        data_e7e63c = arg3
                    
                    var_1c_1 += 0x1a
                    i += 1
                    esi_1 += 0x22c
                    ecx = data_a5d908
                while (i u< *ebx_1 + *(ebx_1 + 4))
            
            var_24_1 += 0x10
            ebx_1 += 0x10
            cond:4_1 = arg3 + 1 s< sx.d(*(ecx + 7))
            arg3 += 1
        while (cond:4_1)
        ebp_1 = var_2c

int32_t eax_33 = sub_45c4b0()
int32_t* ecx_6 = data_a5d908
data_e7e640 = eax_33
int32_t eax_35
int32_t edx_15
edx_15:eax_35 = sx.q(0x280 - ebp_1)
int32_t esi_3 = (eax_35 - edx_15) s>> 1
var_20 = esi_3
int32_t eax_39
int32_t edx_16
edx_16:eax_39 = sx.q(ecx_6[0x37] * 0x1a)
int32_t eax_43 = ecx_6[0x37] * 0x1a
ecx_6[0x79f] = esi_3
ecx_6[0x7a0] = 0xb4 - ((eax_39 - edx_16) s>> 1)
ecx_6[0x7a1] = ebp_1
int32_t eax_45 = sx.d(ecx_6[1].b)
ecx_6[0x7a2] = eax_43

if (eax_45 == 1)
    int32_t var_10_3 = 0x20
    int32_t var_c_3 = 0x20
else
    if (eax_45 == 2)
        int32_t var_10_2 = *ecx_6
        int32_t var_c_2 = *ecx_6
        return sub_43c620((arg2 + 3) * 0x2c + *data_c7bbc0, &var_20, &var_30, arg1.b)
    
    if (eax_45 != 3)
        return eax_45 - 3
    
    int32_t var_10_1 = 0x20 - *ecx_6
    int32_t var_c_1 = 0x20 - *ecx_6

return sub_43c620((arg2 + 3) * 0x2c + *data_c7bbc0, &var_20, &var_30, arg1.b)
