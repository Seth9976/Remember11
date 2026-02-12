// 函数: sub_4826fd
// 地址: 0x4826fd
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t __saved_ebp_2 = 0x10
int32_t var_8 = 0x4ac658
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_4851d0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x4ac658 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_34 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_34
void* const var_38_15 = &data_482709
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
void* result

if (arg1 != 0)
    uint32_t dwBytes = arg2
    
    if (dwBytes != 0)
        void* eax_10
        void* result_1
        void* eax_7
        
        if (data_2b6a9b8 != 3)
            while (true)
                if (dwBytes u> 0xffffffe0)
                label_4828d7:
                    sub_487490(dwBytes)
                    eax_7 = __errno()
                label_4828e2:
                    *eax_7 = 0xc
                    goto label_4828e8
                
                if (dwBytes == 0)
                    dwBytes += 1
                
                void* result_3 = HeapReAlloc(data_c7ada4, HEAP_NONE, arg1, dwBytes)
                result_1 = result_3
                
                if (result_1 != 0)
                    goto label_482914
                
                if (data_c7b218 == result_3)
                    if (result_1 != 0)
                        goto label_482914
                    
                    eax_10 = __errno()
                    break
                
                if (sub_487490(dwBytes) == 0)
                    eax_7 = __errno()
                label_482885:
                    *eax_7 = sub_48502a(GetLastError())
                    goto label_4828e8
        else
            while (true)
                void* result_2 = nullptr
                
                if (dwBytes u> 0xffffffe0)
                    goto label_4828d7
                
                sub_48677d(4)
                int32_t var_8_1 = 0
                void* eax = sub_4867f6(arg1)
                void* var_24_1 = eax
                
                if (eax != 0)
                    if (dwBytes u<= data_2b6a9a8)
                        if (sub_486ceb(eax, arg1, dwBytes) == 0)
                            void* result_4 = sub_486fca(dwBytes)
                            result_2 = result_4
                            
                            if (result_4 != 0)
                                uint32_t dwBytes_1 = *(arg1 - 4) - 1
                                
                                if (dwBytes_1 u>= dwBytes)
                                    dwBytes_1 = dwBytes
                                
                                sub_480ea0(result_2, arg1, dwBytes_1)
                                void* eax_3 = sub_4867f6(arg1)
                                var_24_1 = eax_3
                                sub_486821(eax_3, arg1)
                        else
                            result_2 = arg1
                    
                    if (result_2 == 0)
                        if (dwBytes == 0)
                            dwBytes = 1
                            arg2 = 1
                        
                        dwBytes = (dwBytes + 0xf) & 0xfffffff0
                        arg2 = dwBytes
                        void* result_5 = HeapAlloc(data_c7ada4, HEAP_NONE, dwBytes)
                        result_2 = result_5
                        
                        if (result_5 != 0)
                            uint32_t dwBytes_2 = *(arg1 - 4) - 1
                            
                            if (dwBytes_2 u>= dwBytes)
                                dwBytes_2 = dwBytes
                            
                            sub_480ea0(result_2, arg1, dwBytes_2)
                            sub_486821(var_24_1, arg1)
                
                int32_t var_8_2 = 0xfffffffe
                sub_482841()
                
                if (var_24_1 != 0)
                    result_1 = result_2
                else
                    if (dwBytes == 0)
                        dwBytes += 1
                    
                    dwBytes = (dwBytes + 0xf) & 0xfffffff0
                    arg2 = dwBytes
                    result_1 = HeapReAlloc(data_c7ada4, HEAP_NONE, arg1, dwBytes)
                
                if (result_1 != 0)
                    goto label_482914
                
                if (data_c7b218 == result_1)
                    if (result_1 != 0)
                        goto label_482914
                    
                    eax_10 = __errno()
                    
                    if (var_24_1 == result_1)
                        break
                    
                    *eax_10 = 0xc
                    goto label_482914
                
                if (sub_487490(dwBytes) == 0)
                    eax_7 = __errno()
                    
                    if (var_24_1 != result_1)
                        goto label_4828e2
                    
                    goto label_482885
        *eax_10 = sub_48502a(GetLastError())
    label_482914:
        result = result_1
    else
        sub_4813df(arg1)
    label_4828e8:
        result = nullptr
else
    result = sub_4814bc(arg2)

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_4828ef
return result
