// 函数: sub_4825a0
// 地址: 0x4825a0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t __saved_ebp_2 = 0xc
int32_t var_8 = 0x4ac638
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_4851d0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x4ac638 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_30 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_30
void* const var_34_5 = &data_4825ac
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t temp0_1

if (arg1 u> 0)
    int32_t var_34 = 0xffffffe0
    temp0_1 = divu.dp.d(0:0xffffffe0, arg1)

void* result

if (arg1 u<= 0 || sbb.d(temp0_1, temp0_1, temp0_1 u< arg2) != 0xffffffff)
    uint32_t dwBytes = arg1 * arg2
    arg1 = dwBytes
    
    if (dwBytes == 0)
        dwBytes = 1
    
    while (true)
        void* result_1 = nullptr
        int32_t var_20_1 = 0
        
        if (dwBytes u> 0xffffffe0)
            goto label_482666
        
        if (data_2b6a9b8 == 3)
            dwBytes = (dwBytes + 0xf) & 0xfffffff0
            arg2 = dwBytes
            
            if (arg1 u<= data_2b6a9a8)
                sub_48677d(4)
                int32_t var_8_1 = 0
                void* result_2 = sub_486fca(arg1)
                int32_t var_8_2 = 0xfffffffe
                sub_48269c()
                result_1 = result_2
                
                if (result_1 == 0)
                    goto label_482664
                
                sub_480cf0(result_1, 0, arg1)
        
        if (result_1 == 0)
        label_482664:
            result_1 = HeapAlloc(data_c7ada4, HEAP_ZERO_MEMORY, dwBytes)
        label_482666:
            
            if (result_1 == 0)
                if (data_c7b218 != 0)
                    if (sub_487490(dwBytes) != 0)
                        continue
                    
                    if (arg3 != 0)
                        *arg3 = 0xc
                    
                    goto label_4825dc
                else if (result_1 == 0 && arg3 != 0)
                    *arg3 = 0xc
        
        result = result_1
        break
else
    *__errno() = 0xc
    sub_481d1b(0, 0, 0, 0, 0)
label_4825dc:
    result = nullptr

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_4826bd
return result
