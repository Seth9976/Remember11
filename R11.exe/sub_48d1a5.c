// 函数: sub_48d1a5
// 地址: 0x48d1a5
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void var_51c
int32_t eax_1 = __security_cookie ^ &var_51c
void* numberOfBytesWritten_8 = nullptr
int32_t var_584 = 0
void* result

if (arg3 == 0)
    result = nullptr
else if (arg2 != 0)
    int32_t* ebx_3 = (arg1 & 0x1f) * 0x38
    void* edi_1 = &(&data_2b6a8a0)[arg1 s>> 5]
    void* eax_8 = *edi_1 + ebx_3
    int32_t ecx
    ecx.b = *(eax_8 + 0x24)
    ecx.b *= 2
    ecx.b s>>= 1
    void* var_58c_1 = edi_1
    char var_571_1 = ecx.b
    
    if (ecx.b == 2 || ecx.b == 1)
        ecx = not.d(arg3)
        
        if ((ecx.b & 1) != 0)
            goto label_48d27a
        
        *___doserrno() = 0
        *__errno() = 0x16
        sub_481d1b(0, 0, 0, 0, 0)
        result = 0xffffffff
    else
    label_48d27a:
        int32_t edx
        
        if ((*(eax_8 + 4) & 0x20) != 0)
            sub_48e0ec(eax_8, edx, ecx, arg1, 0, 0, FILE_END)
        bool cond:2_1 = sub_48e2cc(arg1) == 0
        enum CONSOLE_MODE var_598
        BOOL eax_16
        int32_t ecx_3
        
        if (not(cond:2_1) && (*(ebx_3 + *edi_1 + 4) & 0x80) != 0)
            ecx_3.b = *(*(__getptd() + 0x6c) + 0x14) == 0
            eax_16 = GetConsoleMode(*(ebx_3 + *edi_1), &var_598)
        
        enum WIN32_ERROR wideCharStr
        uint32_t numberOfBytesWritten_1
        
        if (not(cond:2_1) && (*(ebx_3 + *edi_1 + 4) & 0x80) != 0 && eax_16 != 0
                && (ecx_3 == 0 || var_571_1 != 0))
            uint32_t eax_17 = GetConsoleCP()
            numberOfBytesWritten_1 = 0
            char* esi_3 = arg2
            var_598 = eax_17
            void* var_590_1 = esi_3
            
            if (arg3 u<= 0)
                goto label_48d6fd
            
            int32_t var_578_1 = 0
            
            while (true)
                eax_17.b = var_571_1
                int32_t var_594
                
                if (eax_17.b != 0)
                    if (eax_17.b == 1 || eax_17.b == 2)
                        enum WIN32_ERROR wideCharStr_3 = zx.d(*esi_3)
                        int32_t edx_1
                        edx_1.b = wideCharStr_3.w == 0xa
                        var_578_1 += 2
                        wideCharStr = wideCharStr_3
                        var_590_1 = &esi_3[2]
                        var_594 = edx_1
                    
                    if (eax_17.b == 1 || eax_17.b == 2)
                        enum WIN32_ERROR wideCharStr_2 = wideCharStr
                        
                        if (sub_4933c7() != wideCharStr.w)
                            goto label_48d6f0
                        
                        numberOfBytesWritten_8 += 1
                        
                        if (var_594 != 0)
                            wideCharStr = ERROR_INVALID_DATA
                            
                            if (sub_4933c7() != wideCharStr.w)
                                goto label_48d6f0
                            
                            numberOfBytesWritten_8 += 1
                            var_584 += 1
                else
                    eax_17.b = *esi_3
                    int32_t ecx_4
                    ecx_4.b = eax_17.b == 0xa
                    var_594 = ecx_4
                    
                    if (sub_48955c(eax_17.b) != 0)
                        if (arg2 - esi_3 + arg3 u<= 1)
                            break
                        
                        if (sub_492518(&wideCharStr, esi_3, 2) == 0xffffffff)
                            break
                        
                        esi_3 = &esi_3[1]
                        var_578_1 += 1
                    else if (sub_492518(&wideCharStr, esi_3, 1) == 0xffffffff)
                        break
                    
                    var_578_1 += 1
                    var_590_1 = &esi_3[1]
                    uint8_t var_10
                    int32_t nNumberOfBytesToWrite = WideCharToMultiByte(var_598, 0, &wideCharStr, 
                        1, &var_10, 5, nullptr, nullptr)
                    
                    if (nNumberOfBytesToWrite == 0)
                        break
                    
                    if (WriteFile(*(ebx_3 + *edi_1), &var_10, nNumberOfBytesToWrite, 
                            &numberOfBytesWritten_1, nullptr) == 0)
                        goto label_48d6f0
                    
                    uint32_t numberOfBytesWritten_2 = numberOfBytesWritten_1
                    numberOfBytesWritten_8 += numberOfBytesWritten_2
                    
                    if (numberOfBytesWritten_2 s< nNumberOfBytesToWrite)
                        break
                    
                    if (var_594 != 0)
                        int32_t eax_27 = *edi_1
                        var_10 = 0xd
                        
                        if (WriteFile(*(ebx_3 + eax_27), &var_10, 1, &numberOfBytesWritten_1, 
                                nullptr) == 0)
                            goto label_48d6f0
                        
                        if (numberOfBytesWritten_1 s< 1)
                            break
                        
                        var_584 += 1
                        numberOfBytesWritten_8 += 1
                
                if (var_578_1 u>= arg3)
                    break
                
                esi_3 = var_590_1
            
            goto label_48d6f6
        
        HANDLE* eax_32 = *edi_1 + ebx_3
        uint32_t numberOfBytesWritten
        int32_t esi_8
        
        if ((eax_32[1].b & 0x80) == 0)
            if (WriteFile(*eax_32, arg2, arg3, &numberOfBytesWritten, nullptr) == 0)
            label_48d6f0:
                wideCharStr = GetLastError()
                goto label_48d6f6
            
            void* numberOfBytesWritten_5 = numberOfBytesWritten
            wideCharStr = NO_ERROR
            numberOfBytesWritten_8 = numberOfBytesWritten_5
        label_48d6f6:
            
            if (numberOfBytesWritten_8 != 0)
                result = numberOfBytesWritten_8 - var_584
            else
                edi_1 = var_58c_1
            label_48d6fd:
                esi_8 = 0
                
                if (wideCharStr == NO_ERROR)
                    goto label_48d726
                
                if (wideCharStr != ERROR_ACCESS_DENIED)
                    sub_48508b(wideCharStr)
                    result = 0xffffffff
                else
                    *__errno() = 9
                    *___doserrno() = 5
                    result = 0xffffffff
        else
            esi_8 = 0
            wideCharStr = NO_ERROR
            uint8_t buffer[0x4c]
            
            if (var_571_1 != 0)
                if (var_571_1 == 2)
                    numberOfBytesWritten_1 = arg2
                    
                    if (arg3 u<= 0)
                        goto label_48d726
                    
                    do
                        int32_t esi_10 = 0
                        void* ecx_11 = numberOfBytesWritten_1 - arg2
                        uint8_t (* eax_39)[0x4c] = &buffer
                        
                        while (ecx_11 u< arg3)
                            uint32_t numberOfBytesWritten_7 = numberOfBytesWritten_1
                            numberOfBytesWritten_1 += 2
                            int16_t edx_2 = *numberOfBytesWritten_7
                            ecx_11 += 2
                            
                            if (edx_2 == 0xa)
                                var_584 += 2
                                *eax_39 = 0xd
                                eax_39 = &(*eax_39)[2]
                                esi_10 += 2
                            
                            edi_1 = var_58c_1
                            *eax_39 = edx_2
                            eax_39 = &(*eax_39)[2]
                            esi_10 += 2
                            
                            if (esi_10 u>= 0x3ff)
                                break
                        
                        uint32_t nNumberOfBytesToWrite_2 = eax_39 - &buffer
                        
                        if (WriteFile(*(ebx_3 + *edi_1), &buffer, nNumberOfBytesToWrite_2, 
                                &numberOfBytesWritten, nullptr) == 0)
                            goto label_48d6f0
                        
                        uint32_t numberOfBytesWritten_4 = numberOfBytesWritten
                        numberOfBytesWritten_8 += numberOfBytesWritten_4
                        
                        if (numberOfBytesWritten_4 s< nNumberOfBytesToWrite_2)
                            break
                    while (numberOfBytesWritten_1 - arg2 u< arg3)
                    
                    goto label_48d6f6
                
                uint8_t* var_578_3 = arg2
                
                if (arg3 u<= 0)
                    goto label_48d726
                
                void* numberOfBytesWritten_9
                
                do
                    numberOfBytesWritten_1 = 0
                    void* ecx_14 = var_578_3 - arg2
                    wchar16 wideCharStr_1[0xaa]
                    wchar16 (* eax_46)[0xaa] = &wideCharStr_1
                    
                    while (ecx_14 u< arg3)
                        int16_t edx_4 = *var_578_3
                        var_578_3 = &var_578_3[2]
                        ecx_14 += 2
                        
                        if (edx_4 == 0xa)
                            *eax_46 = 0xd
                            eax_46 = &(*eax_46)[1]
                            numberOfBytesWritten_1 += 2
                        
                        numberOfBytesWritten_1 += 2
                        *eax_46 = edx_4
                        eax_46 = &(*eax_46)[1]
                        
                        if (numberOfBytesWritten_1 u>= 0x152)
                            break
                    
                    int32_t esi_14 = 0
                    int32_t eax_48
                    int32_t edx_5
                    edx_5:eax_48 = sx.q(eax_46 - &wideCharStr_1)
                    void multiByteStr
                    int32_t eax_51 = WideCharToMultiByte(0xfde9, 0, &wideCharStr_1, 
                        (eax_48 - edx_5) s>> 1, &multiByteStr, 0x2ab, nullptr, nullptr)
                    
                    if (eax_51 == 0)
                        goto label_48d6f0
                    
                    do
                        if (WriteFile(*(ebx_3 + *var_58c_1), &var_51c + esi_14 + 0x108, 
                                eax_51 - esi_14, &numberOfBytesWritten, nullptr) == 0)
                            wideCharStr = GetLastError()
                            break
                        
                        esi_14 += numberOfBytesWritten
                    while (eax_51 s> esi_14)
                    
                    if (eax_51 s> esi_14)
                        break
                    
                    numberOfBytesWritten_9 = var_578_3 - arg2
                    numberOfBytesWritten_8 = numberOfBytesWritten_9
                while (numberOfBytesWritten_9 u< arg3)
                goto label_48d6f6
            
            numberOfBytesWritten_1 = arg2
            
            if (arg3 u> 0)
                do
                    int32_t var_578_2 = 0
                    void* ecx_9 = numberOfBytesWritten_1 - arg2
                    uint8_t (* eax_34)[0x4c] = &buffer
                    
                    while (ecx_9 u< arg3)
                        uint32_t numberOfBytesWritten_6 = numberOfBytesWritten_1
                        numberOfBytesWritten_1 += 1
                        numberOfBytesWritten_6.b = *numberOfBytesWritten_6
                        ecx_9 += 1
                        
                        if (numberOfBytesWritten_6.b == 0xa)
                            var_584 += 1
                            *eax_34 = 0xd
                            eax_34 = &(*eax_34)[1]
                            var_578_2 += 1
                        
                        *eax_34 = numberOfBytesWritten_6.b
                        eax_34 = &(*eax_34)[1]
                        var_578_2 += 1
                        
                        if (var_578_2 u>= 0x400)
                            break
                    
                    uint32_t nNumberOfBytesToWrite_1 = eax_34 - &buffer
                    
                    if (WriteFile(*(ebx_3 + *edi_1), &buffer, nNumberOfBytesToWrite_1, 
                            &numberOfBytesWritten, nullptr) == 0)
                        goto label_48d6f0
                    
                    uint32_t numberOfBytesWritten_3 = numberOfBytesWritten
                    numberOfBytesWritten_8 += numberOfBytesWritten_3
                    
                    if (numberOfBytesWritten_3 s< nNumberOfBytesToWrite_1)
                        break
                while (numberOfBytesWritten_1 - arg2 u< arg3)
                
                goto label_48d6f6
            
        label_48d726:
            
            if ((*(ebx_3 + *edi_1 + 4) & 0x40) == 0 || *arg2 != 0x1a)
                *__errno() = 0x1c
                *___doserrno() = esi_8
                result = 0xffffffff
            else
                result = nullptr
else
    *___doserrno() = 0
    *__errno() = 0x16
    sub_481d1b(0, 0, 0, 0, 0)
    result = 0xffffffff

sub_480cd2(eax_1 ^ &var_51c)
return result
