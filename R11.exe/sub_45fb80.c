// 函数: sub_45fb80
// 地址: 0x45fb80
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (arg2 u> 0x100)
    if (arg2 != 0x111)
        goto label_45fd85
    
    uint32_t eax_4 = zx.d(arg3.w)
    
    if (eax_4 s> 0x801d)
        if (eax_4 s<= 0x9c81)
            if (eax_4 == 0x9c81)
                sub_45f130()
                return 0
            
            if (eax_4 != 0x8020)
                if (eax_4 == 0x8026)
                    return eax_4 - 0x8026
                
                goto label_45fd85
            
            if (data_c78658 == 0)
                goto label_45fda2
            
            (*(*data_c78654 + 0x10))()
            goto label_45fd85
        
        if (eax_4 != 0x9c82)
            goto label_45fd85
        
        if (sub_46ec30() == 0)
            sub_45f630(&data_c788a8)
    else if (eax_4 == 0x801d)
        if (sub_46ec30() != 0)
            sub_45f130()
    else if (eax_4 s<= 0x800e)
        if (eax_4 != 0x800e)
            if (eax_4 == 0x69)
                SendMessageW(arg1, 0x10, arg3, arg4)
                *arg5 = 1
            
            goto label_45fd85
        
        if (data_c78670 != 0)
            data_c78670 = 0
            sub_45f1f0()
    else if (eax_4 != 0x800f)
        int32_t eax_10
        
        if (eax_4 != 0x8010)
            if (eax_4 != 0x8011)
                goto label_45fd85
            
            eax_10 = 3
            goto label_45fce8
        
        eax_10 = 2
    label_45fce8:
        
        if (data_c78670 != eax_10)
            data_c78670 = eax_10
            sub_45f1f0()
    else if (data_c78670 != 1)
        data_c78670 = 1
        sub_45f1f0()
else
    if (arg2 == 0x100)
        if (arg3 == 0x75)
            bool cond:2_1 = data_c7862b == 0
            data_c78675 = 1
            data_c7862b = cond:2_1
        
        goto label_45fd85
    
    if (arg2 == 0x10)
        if (data_c78676 == 0)
            sub_4709d0(1, 1)
        
        data_c78676 = 1
        enum MESSAGEBOX_RESULT eax_3 = MessageBoxW(arg1, 0x4a2a48, 0x4a2a60, MB_YESNO)
        
        if (data_c78676 == 1)
            sub_4709d0(0, 0)
        
        data_c78676 = 0
        
        if (eax_3 != IDOK && eax_3 != IDYES)
            *arg5 = 1
        
        goto label_45fd85
    
    if (arg2 != 0x1c)
        goto label_45fd85
    
    int32_t* ecx_1 = data_c78658
    
    if (ecx_1 != 0)
        (*(*ecx_1 + 0x10))()
    label_45fd85:
        int32_t* ecx_5 = data_c78658
        
        if (ecx_5 != 0)
            (*(*ecx_5 + 0x20))(arg1, arg2, arg3, arg4)
        
        goto label_45fda2
    
label_45fda2:
    int32_t* eax_20 = data_c78654
    
    if (eax_20 != 0)
        (*(*eax_20 + 0x14))(eax_20, arg1, arg2, arg3, arg4)

return 0
