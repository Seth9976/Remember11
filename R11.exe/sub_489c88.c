// 函数: sub_489c88
// 地址: 0x489c88
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t __saved_ebp_1 = 0x54
int32_t var_8 = 0x4ac860
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_4851d0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x4ac860 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_78 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_78
void* const var_7c_6 = &data_489c94
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
STARTUPINFOA startupInfo
GetStartupInfoA(&startupInfo)
int32_t var_8_2 = 0xfffffffe
int32_t var_80 = 0x20
void* eax = sub_48b2bc(0x20, 0x38)
int32_t result

if (eax == 0)
label_489ebf:
    result = 0xffffffff
else
    data_2b6a8a0 = eax
    data_2b6a888 = 0x20
    
    for (void* i = eax + 0x700; eax u< i; i = data_2b6a8a0 + 0x700)
        *(eax + 4) = 0
        *eax = 0xffffffff
        *(eax + 5) = 0xa
        *(eax + 8) = 0
        *(eax + 0x24) = 0
        *(eax + 0x25) = 0xa
        *(eax + 0x26) = 0xa
        eax += 0x38
    
    if (startupInfo.cbReserved2 != 0)
        BYTE* lpReserved2 = startupInfo.lpReserved2
        
        if (lpReserved2 != 0)
            int32_t i_1 = *lpReserved2
            void* ebx_1 = &lpReserved2[4]
            void* var_20_1 = ebx_1 + i_1
            
            if (i_1 s>= 0x800)
                i_1 = 0x800
            
            int32_t esi_1 = 1
            
            while (data_2b6a888 s< i_1)
                void* eax_2 = sub_48b2bc(0x20, 0x38)
                
                if (eax_2 == 0)
                    i_1 = data_2b6a888
                    break
                
                (&data_2b6a8a0)[esi_1] = eax_2
                data_2b6a888 += 0x20
                
                for (void* j = eax_2 + 0x700; eax_2 u< j; j = (&data_2b6a8a0)[esi_1] + 0x700)
                    *(eax_2 + 4) = 0
                    *eax_2 = 0xffffffff
                    *(eax_2 + 5) = 0xa
                    *(eax_2 + 8) = 0
                    *(eax_2 + 0x24) &= 0x80
                    *(eax_2 + 0x25) = 0xa
                    *(eax_2 + 0x26) = 0xa
                    eax_2 += 0x38
                
                esi_1 += 1
            
            int32_t var_24_1 = 0
            
            if (i_1 s> 0)
                do
                    HANDLE hFile_1 = *var_20_1
                    
                    if (hFile_1 != 0xffffffff && hFile_1 != 0xfffffffe)
                        void* eax_3
                        eax_3.b = *ebx_1
                        
                        if ((eax_3.b & 1) != 0)
                            enum FILE_TYPE eax_4
                            
                            if ((eax_3.b & 8) == 0)
                                eax_4 = GetFileType(hFile_1)
                            
                            if ((eax_3.b & 8) != 0 || eax_4 != FILE_TYPE_UNKNOWN)
                                int32_t* esi_5 =
                                    (var_24_1 & 0x1f) * 0x38 + (&data_2b6a8a0)[var_24_1 s>> 5]
                                *esi_5 = *var_20_1
                                int32_t eax_8
                                eax_8.b = *ebx_1
                                esi_5[1].b = eax_8.b
                                
                                if (sub_48c1dd(&esi_5[3], 0xfa0) == 0)
                                    goto label_489ebf
                                
                                esi_5[2] += 1
                    
                    var_24_1 += 1
                    ebx_1 += 1
                    var_20_1 += 4
                while (var_24_1 s< i_1)
    
    for (int32_t i_2 = 0; i_2 s< 3; i_2 += 1)
        int32_t* esi_8 = i_2 * 0x38 + data_2b6a8a0
        int32_t eax_11 = *esi_8
        
        if (eax_11 == 0xffffffff || eax_11 == 0xfffffffe)
            esi_8[1].b = 0x81
            enum STD_HANDLE nStdHandle
            
            if (i_2 != 0)
                int32_t eax_14 = neg.d(i_2 - 1)
                nStdHandle = sbb.d(eax_14, eax_14, i_2 != 1) - 0xb
            else
                int32_t var_7c_2 = 0xfffffff6
                nStdHandle = STD_INPUT_HANDLE
            
            HANDLE hFile = GetStdHandle(nStdHandle)
            enum FILE_TYPE eax_16
            
            if (hFile != 0xffffffff && hFile != 0)
                eax_16 = GetFileType(hFile)
            
            if (hFile == 0xffffffff || hFile == 0 || eax_16 == FILE_TYPE_UNKNOWN)
                esi_8[1].b |= 0x40
                *esi_8 = 0xfffffffe
            else
                *esi_8 = hFile
                int32_t eax_17 = eax_16 & 0xff
                
                if (eax_17 == 2)
                    esi_8[1].b |= 0x40
                else if (eax_17 == 3)
                    esi_8[1].b |= 8
                
                if (sub_48c1dd(&esi_8[3], 0xfa0) == 0)
                    goto label_489ebf
                
                esi_8[2] += 1
        else
            esi_8[1].b |= 0x80
    
    SetHandleCount(data_2b6a888)
    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_489ec7
return result
