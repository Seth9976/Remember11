// 函数: sub_43d500
// 地址: 0x43d500
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* edi = arg1 + 0xac

if (arg4 s< 0)
    arg4 += *(arg1 + 4)

if (arg3 == 0)
    arg3 = &data_4bfb9c

int32_t eax_1 = arg5
int32_t* edx
int32_t ebx

if ((eax_1 & 0xf00) == 0)
    ebx = *(arg1 + 8)
    edx = *(arg1 + 0xc)
else
    ebx = arg2[2]
    edx = arg2[3]

int32_t var_40 = ebx

if (arg2[2] s>= 0x20)
    int32_t var_3c_1 = 0
    
    if (*(arg1 + 4) s> 0)
        int32_t eax_2 = eax_1 & 0xff
        int32_t var_38_1 = eax_2
        void* var_44_1 = arg1 + 0x2c
        
        while (true)
            int32_t esi_2 = *var_44_1 + arg2[1]
            int32_t ecx_3 = *arg2 + 8
            int32_t var_30 = ecx_3
            int32_t var_2c_1 = esi_2
            
            if (eax_2 == 1)
                int32_t eax_9
                int32_t edx_2
                edx_2:eax_9 = sx.q(ebx - *(edi + 0x210))
                int32_t eax_12 = ebx
                ebx = var_40
                int32_t eax_13
                int32_t edx_3
                edx_3:eax_13 = sx.q(eax_12)
                int32_t eax_17
                int32_t edx_6
                edx_6:eax_17 = sx.q(edx)
                var_2c_1 = esi_2 + neg.d((eax_17 - edx_6) s>> 1)
                var_30 = ecx_3 + ((eax_9 - edx_2) s>> 1) - ((eax_13 - edx_3) s>> 1)
            else if (eax_2 == 2)
                var_30 = ecx_3 + ebx - *(edi + 0x210)
            
            sub_43c040(edi, &var_30, arg3, arg6.w)
            
            if (var_3c_1 == arg4)
                int32_t eax_21 = *(edi + 0x210)
                int32_t var_24_1 = var_2c_1
                int32_t var_28 = var_30
                int32_t var_20_1 = eax_21
                int32_t var_1c_1 = *(edi + 0x214)
                sub_439ef0(data_2b603ac, &var_28, 0, arg6)
            
            var_44_1 += 4
            edi += 0x21c
            bool cond:6_1 = var_3c_1 + 1 s< *(arg1 + 4)
            var_3c_1 += 1
            
            if (not(cond:6_1))
                break
            
            eax_2 = var_38_1
        
        eax_1 = arg5

int32_t edx_11 = arg2[1]
int32_t var_18 = *arg2

if (eax_1.b == 1)
    int32_t eax_23
    int32_t edx_12
    edx_12:eax_23 = sx.q(ebx)
    var_18 += neg.d((eax_23 - edx_12) s>> 1)
    int32_t eax_28
    int32_t edx_13
    edx_13:eax_28 = sx.q(edx)
    int32_t var_14_1 = edx_11 + neg.d((eax_28 - edx_13) s>> 1)

int32_t* var_c = edx
int32_t var_8 = arg2[2]
int32_t var_10 = ebx + 0x10
int32_t var_4 = arg2[3]
return sub_43d1f0(&var_18, arg6.b)
