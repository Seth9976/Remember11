// 函数: sub_43d2c0
// 地址: 0x43d2c0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t* edi = arg1 + 0xac
data_e7e634 = 0xffffffff
data_e7e630 = 0

if (arg4 s< 0)
    arg4 += *(arg1 + 4)

if (arg3 == 0)
    arg3 = &data_4bfb9c

int32_t* esi = arg2
void* edx
int32_t ebx

if ((arg5 & 0xf00) == 0)
    ebx = *(arg1 + 8)
    edx = *(arg1 + 0xc)
else
    ebx = esi[2]
    edx = esi[3]

int32_t var_40 = ebx
int32_t var_3c = 0

if (*(arg1 + 4) s> 0)
    int32_t eax_2 = arg5 & 0xff
    int32_t var_38_1 = eax_2
    int32_t* var_44_1 = arg1 + 0x2c
    
    while (true)
        int32_t esi_2 = *var_44_1 + arg2[1]
        int32_t ecx_3 = *esi + 8
        int32_t var_30 = ecx_3
        int32_t var_2c_1 = esi_2
        
        if (eax_2 == 1)
            int32_t eax_9
            int32_t edx_3
            edx_3:eax_9 = sx.q(ebx - edi[0x84])
            int32_t eax_12 = ebx
            ebx = var_40
            int32_t eax_13
            int32_t edx_4
            edx_4:eax_13 = sx.q(eax_12)
            int32_t eax_17
            int32_t edx_7
            edx_7:eax_17 = sx.q(edx)
            var_2c_1 = esi_2 + neg.d((eax_17 - edx_7) s>> 1)
            var_30 = ecx_3 + ((eax_9 - edx_3) s>> 1) - ((eax_13 - edx_4) s>> 1)
        else if (eax_2 == 2)
            var_30 = ecx_3 + ebx - edi[0x84]
        
        sub_43c040(edi, &var_30, arg3, arg6.w)
        
        if (var_3c == arg4)
            int32_t eax_21 = edi[0x84]
            int32_t var_28 = var_30
            int32_t var_24_1 = var_2c_1
            int32_t var_20_1 = eax_21
            int32_t var_1c_1 = edi[0x85]
            sub_43a210(arg1 + 0x442c, &var_28, arg6)
        
        if (sub_45e320(var_30, var_2c_1, edi[0x84], edi[0x85], 0) != 0)
            data_e7e634 = var_3c
        
        var_44_1 = &var_44_1[1]
        edi = &edi[0x87]
        bool cond:5_1 = var_3c + 1 s< *(arg1 + 4)
        var_3c += 1
        esi = arg2
        
        if (not(cond:5_1))
            break
        
        eax_2 = var_38_1

data_e7e630 = sub_45c4b0()
sub_4417a0(arg1 + 0x443c)
sub_4417a0(arg1 + 0x4450)
sub_4417a0(arg1 + 0x4464)
int32_t eax_26 = esi[1]
int32_t var_18 = *esi

if (arg5.b == 1)
    int32_t eax_28
    int32_t edx_14
    edx_14:eax_28 = sx.q(ebx)
    var_18 += neg.d((eax_28 - edx_14) s>> 1)
    int32_t eax_33
    int32_t edx_15
    edx_15:eax_33 = sx.q(edx)
    int32_t var_14_1 = eax_26 + neg.d((eax_33 - edx_15) s>> 1)

int32_t var_8 = 0x20
int32_t var_4 = 0x20
int32_t var_10 = ebx + 0x10
void* var_c = edx
return sub_43d1f0(&var_18, arg6.b)
