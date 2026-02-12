// 函数: sub_453da0
// 地址: 0x453da0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void** ebx = arg3
void* edi = arg1
void** eax = *(edi + 4)
void** esi = eax[1]
bool cond:0 = *(esi + 0x31) != 0
void** ebp = eax
eax.b = 1
void* var_8 = edi
char var_c = 1

if (not(cond:0))
    do
        int32_t ebp_1 = esi[8]
        arg3 = esi
        int32_t* edx_1
        
        if (esi[9] u< 0x10)
            edx_1 = &esi[4]
        else
            edx_1 = esi[4]
        
        int32_t edi_1 = ebx[5]
        int32_t ecx = edi_1
        
        if (edi_1 u>= ebp_1)
            ecx = ebp_1
        
        void* eax_2
        
        if (ebx[6] u< 0x10)
            eax_2 = &ebx[1]
        else
            eax_2 = ebx[1]
        
        eax = sub_451010(eax_2, edx_1, ecx)
        bool cond:6_1 = eax s< 0
        
        if (eax == 0)
            if (edi_1 u>= ebp_1)
                eax.b = edi_1 != ebp_1
            else
                eax = 0xffffffff
            
            cond:6_1 = eax s< 0
        
        eax.b = cond:6_1
        var_c = eax.b
        
        if (eax.b == 0)
            esi = esi[2]
        else
            esi = *esi
    while (*(esi + 0x31) == 0)
    
    edi = var_8
    ebp = arg3

var_8 = edi

if (eax.b == 0)
    goto label_453e8c

char var_28_2
void** var_24_2
void** var_20_2

if (ebp != **(edi + 4))
    sub_450f80(&var_8)
label_453e8c:
    int32_t* eax_6
    
    if (ebx[6] u< 0x10)
        eax_6 = &ebx[1]
    else
        eax_6 = ebx[1]
    
    if (sub_451c20(&ebp[3], 0, ebp[8], eax_6, ebx[5]) s>= 0)
        void* edx_5 = var_8
        arg2[1] = ebp
        arg2[2].b = 0
        *arg2 = edx_5
        return arg2
    
    var_20_2 = ebx
    var_24_2 = ebp
    var_28_2 = var_c
else
    var_20_2 = ebx
    var_24_2 = ebp
    var_28_2 = 1

void** eax_4 = sub_4539f0(edi, &var_8, var_28_2, var_24_2, var_20_2)
void* edx_2 = *eax_4
arg2[1] = eax_4[1]
arg2[2].b = 1
*arg2 = edx_2
return arg2
