// 函数: sub_47d6a0
// 地址: 0x47d6a0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t* ebp = arg1
int32_t eax_1 = (*(*ebp[-0x1c] + 0x18))()
int32_t ebx = 0
int32_t edi = 0
int32_t result

if (eax_1 s> 0)
    do
        int32_t* esi_1 = (*(*ebp[-0x1c] + 0x1c))(edi) + 0xc
        int32_t var_8
        result = (*(*esi_1 + 0x24))(esi_1, &var_8)
        
        if (result s< 0)
            return result
        
        if (var_8 == 1 && (*(*esi_1 + 0x18))(esi_1, &arg1) s>= 0)
            int32_t* eax_7 = arg1
            ebx += 1
            int32_t* var_c
            int32_t eax_9 = (**eax_7)(eax_7, 0x4a5cf4, &var_c)
            int32_t* eax_10 = arg1
            (*(*eax_10 + 8))(eax_10)
            int32_t eax_12
            
            if (eax_9 s>= 0)
                int32_t* eax_11 = var_c
                eax_12 = (*(*eax_11 + 0x20))(eax_11)
                int32_t* eax_13 = var_c
                (*(*eax_13 + 8))(eax_13)
            
            if (eax_9 s< 0 || eax_12 != 1)
                return 0
        
        edi += 1
    while (edi s< eax_1)

result.b = ebx != 0
return result
