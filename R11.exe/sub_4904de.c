// 函数: sub_4904de
// 地址: 0x4904de
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* esi_1 = __getptd() + 0x9c

if (arg1 != 0)
    *esi_1 = arg1
    *(esi_1 + 4) = arg1 + 0x40
    
    if (arg1 != 0xffffffc0 && *(arg1 + 0x40) != 0)
        sub_48ff64(&data_4a7ab8, 0x16, esi_1 + 4)
    
    char* eax_2 = *esi_1
    *(esi_1 + 8) = 0
    
    if (eax_2 == 0 || *eax_2 == 0)
        char* edi_3 = *(esi_1 + 4)
        
        if (edi_3 == 0 || *edi_3 == 0)
            *(esi_1 + 8) = 0x104
            goto label_4905b6
        
        void* eax_6 = _strlen(edi_3) - 3
        int32_t eax_7 = neg.d(eax_6)
        *(esi_1 + 0x14) = sbb.d(eax_7, eax_7, eax_6 != 0) + 1
        EnumSystemLocalesA(sub_4900a6, 1)
        
        if ((*(esi_1 + 8) & 4) == 0)
            *(esi_1 + 8) = 0
        
        goto label_4905c2
    
    char* eax_3 = *(esi_1 + 4)
    
    if (eax_3 == 0 || *eax_3 == 0)
        sub_4904a2(esi_1)
    else
        sub_49043d(esi_1)
    
    if (*(esi_1 + 8) != 0)
        goto label_4905d3
    
    if (sub_48ff64(&data_4a78b0, 0x40, esi_1) != 0)
        char* edi_2 = *(esi_1 + 4)
        
        if (edi_2 == 0 || *edi_2 == 0)
            sub_4904a2(esi_1)
        else
            sub_49043d(esi_1)
else
    *(esi_1 + 8) |= 0x104
label_4905b6:
    uint32_t eax_10 = GetUserDefaultLCID()
    *(esi_1 + 0x18) = eax_10
    *(esi_1 + 0x1c) = eax_10

label_4905c2:

if (*(esi_1 + 8) != 0)
label_4905d3:
    int32_t ecx_3 = neg.d(arg1)
    int32_t eax_11 = sub_48ffc4(sbb.d(ecx_3, ecx_3, arg1 != 0) & (arg1 + 0x80), esi_1)
    
    if (eax_11 != 0 && eax_11 != 0xfde8 && eax_11 != 0xfde9 && IsValidCodePage(zx.d(eax_11.w)) != 0
            && IsValidLocale(*(esi_1 + 0x18), LCID_INSTALLED) != 0)
        if (arg2 != 0)
            *arg2 = *(esi_1 + 0x18)
            arg2[1] = *(esi_1 + 0x1c)
            arg2[2] = eax_11.w
        
        if (arg3 == 0)
            return 1
        
        if (*arg2 == 0x814)
            if (sub_48a315(arg3, 0x40, "Norwegian-Nynorsk") == 0)
                goto label_49069b
            
            int32_t var_24
            __builtin_memset(&var_24, 0, 0x14)
            sub_481c1f()
            noreturn
        
        if (GetLocaleInfoA(*(esi_1 + 0x18), 0x1001, arg3, 0x40) != 0)
        label_49069b:
            
            if (GetLocaleInfoA(*(esi_1 + 0x1c), 0x1002, &arg3[0x40], 0x40) != 0)
                sub_496457(eax_11, &arg3[0x80], 0x10, 0xa)
                return 1

return 0
