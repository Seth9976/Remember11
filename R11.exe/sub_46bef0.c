// 函数: sub_46bef0
// 地址: 0x46bef0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

DebugBreak()

if (arg1[1] == 0)
    return 0x800401f0

int32_t* eax_2 = (*(*arg1 + 0xc))()

if (eax_2 == 0)
    return 0x80004005

int32_t var_8
int32_t eax_4 = sub_46b420(eax_2, &var_8)

if (eax_4 s>= 0)
    if (var_8 == 0)
    label_46bf5b:
        
        if ((arg1[5].b & 0x20) != 0)
            int32_t var_4
            (*(*eax_2 + 0x20))(eax_2, &var_4)
            (*(*eax_2 + 0x44))(eax_2, var_4 + arg5)
        
        int32_t* var_c
        int32_t edi_1 = (**eax_2)(eax_2, 0x4a8434, &var_c)
        
        if (edi_1 s>= 0)
            int32_t* eax_10 = var_c
            edi_1 = (*(*eax_10 + 0x30))(eax_10, arg2, 0)
            
            if (edi_1 s>= 0)
                edi_1 = (*(*eax_2 + 0x30))(eax_2, 0, arg3, arg4)
            
            int32_t* eax_15 = var_c
            (*(*eax_15 + 8))(eax_15)
        
        return edi_1
    
    eax_4 = (*(*arg1 + 8))(eax_2, 0)
    
    if (eax_4 s>= 0)
        goto label_46bf5b

return eax_4
