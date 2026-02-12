// 函数: sub_4926a5
// 地址: 0x4926a5
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ecx
int32_t var_8 = ecx
int32_t var_c = ecx
int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t eax_2 = data_c7b414
int32_t edi
int32_t var_18 = edi
int32_t result_1 = 0
int32_t result

if (eax_2 != 0)
label_4926f7:
    
    if (eax_2 == 2 || eax_2 == 0)
        result = GetLocaleInfoA(arg2, arg3, arg4, arg5)
    else
        if (eax_2 == 1)
            goto label_49270f
        
        result = 0
else
    if (GetLocaleInfoW(0, 1, nullptr, 0) == 0)
        if (GetLastError() != ERROR_CALL_NOT_IMPLEMENTED)
            eax_2 = data_c7b414
        else
            eax_2 = 2
            data_c7b414 = 2
        
        goto label_4926f7
    
    data_c7b414 = 1
label_49270f:
    
    if (arg6 == 0)
        arg6 = *(*arg1 + 4)
    
    int32_t cchData = GetLocaleInfoW(arg2, arg3, nullptr, 0)
    
    if (cchData == 0)
        result = 0
    else
        wchar16* edi_1
        
        if (cchData s<= 0 || divu.dp.d(0:0xffffffe0, cchData) u< 2)
            edi_1 = nullptr
        label_49277f:
            
            if (edi_1 == 0)
                result = 0
            else
                if (GetLocaleInfoW(arg2, arg3, edi_1, cchData) != 0)
                    PSTR lpMultiByteStr
                    int32_t cbMultiByte
                    
                    if (arg5 != 0)
                        cbMultiByte = arg5
                        lpMultiByteStr = arg4
                    else
                        cbMultiByte = 0
                        lpMultiByteStr = nullptr
                    
                    result_1 = WideCharToMultiByte(arg6, 0, edi_1, 0xffffffff, lpMultiByteStr, 
                        cbMultiByte, nullptr, nullptr)
                
                sub_489126(edi_1)
                result = result_1
        else
            if (cchData * 2 + 8 u> 0x400)
                void* eax_11 = sub_4814bc(cchData * 2 + 8)
                
                if (eax_11 != 0)
                    *eax_11 = 0xdddd
                    eax_11 += 8
                
                edi_1 = eax_11
                goto label_49277f
            
            __alloca_probe_16(cchData * 2 + 8)
            
            if (&var_18 != 0)
                var_18 = 0xcccc
                int32_t __saved_ebx
                edi_1 = &__saved_ebx
                goto label_49277f
            
            result = 0

sub_480cd2(eax_1 ^ &__saved_ebp)
return result
