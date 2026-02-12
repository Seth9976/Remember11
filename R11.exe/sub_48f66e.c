// 函数: sub_48f66e
// 地址: 0x48f66e
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t* ebx = arg1
bool cond:0 = ebx[7] != 0
int32_t* var_1c = ebx
int32_t var_18 = 0
void* var_c_1
void* var_8_1

if (cond:0 || ebx[6] != 0)
    void* eax_1 = sub_48b2bc(1, 0x30)
    arg1 = eax_1
    
    if (eax_1 == 0)
        return 1
    
    __builtin_memcpy(eax_1, ebx[0x2f], 0x30)
    void* eax_2 = sub_48b27c(4)
    var_c_1 = eax_2
    
    if (eax_2 == 0)
        sub_4813df(arg1)
        return 1
    
    *eax_2 = 0
    
    if (ebx[7] == 0)
        *arg1 = data_4cbd74
        arg1[1] = data_4cbd78
        var_8_1 = nullptr
        arg1[2] = data_4cbd7c
    else
        void* eax_3 = sub_48b27c(4)
        var_8_1 = eax_3
        int32_t result
        
        if (eax_3 == 0)
            result = 1
        label_48f701:
            sub_4813df(arg1)
            sub_4813df(var_c_1)
            return result
        
        *eax_3 = 0
        uint32_t edi_2 = zx.d(*(ebx + 0x3e))
        int32_t var_10_2 =
            sub_48c05f(&var_1c, 1, edi_2, 0xe, arg1) | sub_48c05f(&var_1c, 1, edi_2, 0xf, &arg1[1])
        
        if ((sub_48c05f(&var_1c, 1, edi_2, 0x10, &arg1[2]) | var_10_2) != 0)
            sub_48f62e(arg1)
            result = 0xffffffff
            goto label_48f701
        
        char* eax_12 = arg1[2]
        
        while (*eax_12 != 0)
            char ecx_6 = *eax_12
            
            if (ecx_6 s>= 0x30 && ecx_6 s<= 0x39)
                *eax_12 = ecx_6 - 0x30
            else if (ecx_6 == 0x3b)
                char* esi_3 = eax_12
                
                do
                    *esi_3 = esi_3[1]
                    esi_3 = &esi_3[1]
                while (*esi_3 != 0)
                
                continue
            
            eax_12 = &eax_12[1]
    
    *var_c_1 = 1
    
    if (var_8_1 != 0)
        *var_8_1 = 1
else
    var_8_1 = nullptr
    var_c_1 = nullptr
    arg1 = &data_4cbd74

int32_t eax_16 = ebx[0x2d]

if (eax_16 != 0)
    InterlockedDecrement(eax_16)

int32_t eax_17 = ebx[0x2c]

if (eax_17 != 0 && InterlockedDecrement(eax_17) == 0)
    sub_4813df(ebx[0x2c])
    sub_4813df(ebx[0x2f])

ebx[0x2d] = var_8_1
ebx[0x2c] = var_c_1
ebx[0x2f] = arg1
return 0
