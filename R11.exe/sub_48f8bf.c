// 函数: sub_48f8bf
// 地址: 0x48f8bf
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* esi = arg1
bool cond:0 = *(esi + 0x18) != 0
void* var_8 = nullptr
void* var_14 = esi
int32_t var_10 = 0
void* var_c_1
int32_t* ebx

if (cond:0 || *(esi + 0x1c) != 0)
    ebx = sub_48b2bc(1, 0x30)
    
    if (ebx == 0)
        return 1
    
    void* eax_2 = sub_48b27c(4)
    var_c_1 = eax_2
    
    if (eax_2 == 0)
        sub_4813df(ebx)
        return 1
    
    *eax_2 = 0
    
    if (*(esi + 0x18) == 0)
        __builtin_memcpy(ebx, &data_4cbd74, 0x30)
    else
        void* eax_3 = sub_48b27c(4)
        var_8 = eax_3
        
        if (eax_3 == 0)
            sub_4813df(ebx)
            sub_4813df(var_c_1)
            return 1
        
        *eax_3 = 0
        uint32_t esi_1 = zx.d(*(esi + 0x38))
        int32_t edi_4 = sub_48c05f(&var_14, 1, esi_1, 0x15, &ebx[3])
            | sub_48c05f(&var_14, 1, esi_1, 0x14, &ebx[4])
            | sub_48c05f(&var_14, 1, esi_1, 0x16, &ebx[5])
            | sub_48c05f(&var_14, 1, esi_1, 0x17, &ebx[6])
        int32_t edi_7 = edi_4 | sub_48c05f(&var_14, 1, esi_1, 0x18, &ebx[7])
            | sub_48c05f(&var_14, 1, esi_1, 0x50, &ebx[8])
            | sub_48c05f(&var_14, 1, esi_1, 0x51, &ebx[9])
        int32_t edi_10 = edi_7 | sub_48c05f(&var_14, 0, esi_1, 0x1a, &ebx[0xa])
            | sub_48c05f(&var_14, 0, esi_1, 0x19, ebx + 0x29)
            | sub_48c05f(&var_14, 0, esi_1, 0x54, ebx + 0x2a)
        int32_t edi_13 = edi_10 | sub_48c05f(&var_14, 0, esi_1, 0x55, ebx + 0x2b)
            | sub_48c05f(&var_14, 0, esi_1, 0x56, &ebx[0xb])
            | sub_48c05f(&var_14, 0, esi_1, 0x57, ebx + 0x2d)
        int32_t edi_14 = edi_13 | sub_48c05f(&var_14, 0, esi_1, 0x52, ebx + 0x2e)
        
        if ((sub_48c05f(&var_14, 0, esi_1, 0x53, ebx + 0x2f) | edi_14) != 0)
            sub_48f836(ebx)
            sub_4813df(ebx)
            sub_4813df(var_c_1)
            sub_4813df(var_8)
            return 1
        
        char* eax_35 = ebx[7]
        
        while (*eax_35 != 0)
            char ecx_6 = *eax_35
            
            if (ecx_6 s>= 0x30 && ecx_6 s<= 0x39)
                *eax_35 = ecx_6 - 0x30
            else if (ecx_6 == 0x3b)
                char* esi_2 = eax_35
                
                do
                    *esi_2 = esi_2[1]
                    esi_2 = &esi_2[1]
                while (*esi_2 != 0)
                
                continue
            
            eax_35 = &eax_35[1]
    
    esi = arg1
    *ebx = **(arg1 + 0xbc)
    ebx[1] = *(*(arg1 + 0xbc) + 4)
    ebx[2] = *(*(arg1 + 0xbc) + 8)
    *var_c_1 = 1
    
    if (var_8 != 0)
        *var_8 = 1
else
    var_8 = nullptr
    var_c_1 = nullptr
    ebx = &data_4cbd74

int32_t eax_40 = *(esi + 0xb8)

if (eax_40 != 0)
    InterlockedDecrement(eax_40)

int32_t eax_41 = *(esi + 0xb0)

if (eax_41 != 0 && InterlockedDecrement(eax_41) == 0)
    sub_4813df(*(esi + 0xbc))
    sub_4813df(*(esi + 0xb0))

*(esi + 0xb8) = var_8
*(esi + 0xb0) = var_c_1
*(esi + 0xbc) = ebx
return 0
