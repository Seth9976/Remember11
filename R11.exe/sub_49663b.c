// 函数: sub_49663b
// 地址: 0x49663b
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_18 = 0xfffffffe
uint32_t var_20 = arg3

if (arg1 == 0xfffffffe)
    *___doserrno() = 0
    *__errno() = 9
    return 0xffffffff

if (arg1 s< 0 || arg1 u>= data_2b6a888)
    *___doserrno() = 0
    *__errno() = 9
    sub_481d1b(0, 0, 0, 0, 0)
    return 0xffffffff

HANDLE* esi_2 = (arg1 & 0x1f) * 0x38
void* eax_8 = (&data_2b6a8a0)[arg1 s>> 5] + esi_2
char ecx = *(eax_8 + 4)

if ((ecx & 1) == 0)
    *___doserrno() = 0
    *__errno() = 9
    sub_481d1b(0, 0, 0, 0, 0)
    return 0xffffffff

if (arg3 u<= 0x7fffffff)
    int32_t var_14_1 = 0
    
    if (arg3 == 0 || (ecx & 2) != 0)
        return 0
    
    if (arg2 != 0)
        eax_8.b = *(eax_8 + 0x24)
        eax_8.b *= 2
        eax_8.b s>>= 1
        char var_6_1 = eax_8.b
        int32_t eax_11 = sx.d(eax_8.b)
        uint32_t lpMultiByteStr
        char* lpBuffer
        
        if (eax_11 != 1)
            if (eax_11 != 2)
                goto label_49671e
            
            if (((not.d(arg3)).b & 1) != 0)
                arg3 &= 0xfffffffe
            label_49671e:
                lpBuffer = arg2
                lpMultiByteStr = lpBuffer
            label_4967ac:
                void* ecx_4 = (&data_2b6a8a0)[arg1 s>> 5] + esi_2
                
                if ((*(ecx_4 + 4) & 0x48) != 0)
                    ecx_4.b = *(ecx_4 + 5)
                    
                    if (ecx_4.b != 0xa && arg3 != 0)
                        *lpBuffer = ecx_4.b
                        lpBuffer = &lpBuffer[1]
                        arg3 -= 1
                        var_14_1 = 1
                        *(esi_2 + (&data_2b6a8a0)[arg1 s>> 5] + 5) = 0xa
                        
                        if (var_6_1 != 0)
                            int32_t ecx_6
                            ecx_6.b = *(esi_2 + (&data_2b6a8a0)[arg1 s>> 5] + 0x25)
                            
                            if (ecx_6.b != 0xa && arg3 != 0)
                                *lpBuffer = ecx_6.b
                                lpBuffer = &lpBuffer[1]
                                arg3 -= 1
                                var_14_1 = 2
                                *(esi_2 + (&data_2b6a8a0)[arg1 s>> 5] + 0x25) = 0xa
                                
                                if (var_6_1 == 1)
                                    int32_t ecx_8
                                    ecx_8.b = *(esi_2 + (&data_2b6a8a0)[arg1 s>> 5] + 0x26)
                                    
                                    if (ecx_8.b != 0xa && arg3 != 0)
                                        *lpBuffer = ecx_8.b
                                        lpBuffer = &lpBuffer[1]
                                        arg3 -= 1
                                        var_14_1 = 3
                                        *(esi_2 + (&data_2b6a8a0)[arg1 s>> 5] + 0x26) = 0xa
                
                uint32_t numberOfBytesRead
                BOOL eax_26
                int32_t edx_4
                eax_26, edx_4 = ReadFile(*(esi_2 + (&data_2b6a8a0)[arg1 s>> 5]), lpBuffer, arg3, 
                    &numberOfBytesRead, nullptr)
                uint32_t numberOfBytesRead_1
                
                if (eax_26 != 0)
                    numberOfBytesRead_1 = numberOfBytesRead
                
                if (eax_26 == 0 || numberOfBytesRead_1 s< 0 || numberOfBytesRead_1 u> arg3)
                    enum WIN32_ERROR eax_50 = GetLastError()
                    
                    if (eax_50 == ERROR_ACCESS_DENIED)
                        *__errno() = 9
                        *___doserrno() = 5
                        var_18 = 0xffffffff
                    else if (eax_50 != ERROR_BROKEN_PIPE)
                        sub_48508b(eax_50)
                        var_18 = 0xffffffff
                    else
                        var_18 = 0
                else
                    var_14_1 += numberOfBytesRead_1
                    void* eax_28 = esi_2 + (&data_2b6a8a0)[arg1 s>> 5] + 4
                    
                    if ((*eax_28 & 0x80) != 0)
                        if (var_6_1 == 2)
                            if (numberOfBytesRead_1 == 0 || *lpMultiByteStr != 0xa)
                                *eax_28 &= 0xfb
                            else
                                *eax_28 |= 4
                            
                            uint32_t lpMultiByteStr_3 = lpMultiByteStr
                            int32_t eax_55 = var_14_1 + lpMultiByteStr_3
                            arg3 = lpMultiByteStr_3
                            
                            if (lpMultiByteStr_3 u< eax_55)
                                do
                                    int16_t ecx_23 = *arg3
                                    
                                    if (ecx_23 == 0x1a)
                                        void* esi_3 = esi_2 + (&data_2b6a8a0)[arg1 s>> 5] + 4
                                        
                                        if ((*esi_3 & 0x40) != 0)
                                            uint32_t eax_67
                                            eax_67.w = *arg3
                                            *lpMultiByteStr_3 = eax_67.w
                                            lpMultiByteStr_3 += 2
                                        else
                                            *esi_3 |= 2
                                        
                                        break
                                    
                                    if (ecx_23 != 0xd)
                                        *lpMultiByteStr_3 = ecx_23
                                        lpMultiByteStr_3 += 2
                                        arg3 += 2
                                    else if (arg3 u>= eax_55 - 2)
                                        arg3 += 2
                                        int16_t buffer
                                        BOOL eax_60
                                        int32_t ecx_27
                                        int32_t edx_7
                                        eax_60, ecx_27, edx_7 = ReadFile(
                                            *(esi_2 + (&data_2b6a8a0)[arg1 s>> 5]), &buffer, 2, 
                                            &numberOfBytesRead, nullptr)
                                        
                                        if (eax_60 != 0)
                                            if (numberOfBytesRead != 0)
                                                goto label_496b34
                                            
                                            *lpMultiByteStr_3 = 0xd
                                            lpMultiByteStr_3 += 2
                                        else
                                            enum WIN32_ERROR eax_61
                                            eax_61, ecx_27, edx_7 = GetLastError()
                                            
                                            if (eax_61 != NO_ERROR || numberOfBytesRead == 0)
                                                *lpMultiByteStr_3 = 0xd
                                                lpMultiByteStr_3 += 2
                                            else
                                            label_496b34:
                                                int32_t eax_62 = (&data_2b6a8a0)[arg1 s>> 5]
                                                
                                                if ((*(esi_2 + eax_62 + 4) & 0x48) == 0)
                                                    if (lpMultiByteStr_3 != lpMultiByteStr
                                                            || buffer != 0xa)
                                                        sub_48e0ec(eax_62, edx_7, ecx_27, arg1, 
                                                            0xfffffffe, 0xffffffff, FILE_CURRENT)
                                                        
                                                        if (buffer != 0xa)
                                                            *lpMultiByteStr_3 = 0xd
                                                            lpMultiByteStr_3 += 2
                                                    else
                                                        *lpMultiByteStr_3 = 0xa
                                                        lpMultiByteStr_3 += 2
                                                else if (buffer == 0xa)
                                                    *lpMultiByteStr_3 = 0xa
                                                    lpMultiByteStr_3 += 2
                                                else
                                                    *lpMultiByteStr_3 = 0xd
                                                    ecx_27.b = buffer.b
                                                    *(esi_2 + (&data_2b6a8a0)[arg1 s>> 5] + 5) =
                                                        ecx_27.b
                                                    ecx_27.b = buffer:1.b
                                                    *(esi_2 + (&data_2b6a8a0)[arg1 s>> 5] + 0x25) =
                                                        ecx_27.b
                                                    *(esi_2 + (&data_2b6a8a0)[arg1 s>> 5] + 0x26) =
                                                        0xa
                                                    lpMultiByteStr_3 += 2
                                    else if (*(arg3 + 2) != 0xa)
                                        arg3 += 2
                                        *lpMultiByteStr_3 = 0xd
                                        lpMultiByteStr_3 += 2
                                    else
                                        arg3 += 4
                                        *lpMultiByteStr_3 = 0xa
                                        lpMultiByteStr_3 += 2
                                while (arg3 u< eax_55)
                            
                            var_14_1 = lpMultiByteStr_3 - lpMultiByteStr
                        else
                            if (numberOfBytesRead_1 == 0 || *lpMultiByteStr != 0xa)
                                *eax_28 &= 0xfb
                            else
                                *eax_28 |= 4
                            
                            uint32_t lpMultiByteStr_2 = lpMultiByteStr
                            int32_t eax_30 = var_14_1 + lpMultiByteStr_2
                            arg3 = lpMultiByteStr_2
                            int32_t var_14_2 = eax_30
                            
                            if (lpMultiByteStr_2 u< eax_30)
                                do
                                    eax_30.b = *arg3
                                    
                                    if (eax_30.b == 0x1a)
                                        void* eax_40 = esi_2 + (&data_2b6a8a0)[arg1 s>> 5] + 4
                                        
                                        if ((*eax_40 & 0x40) != 0)
                                            eax_40.b = *arg3
                                            *lpMultiByteStr_2 = eax_40.b
                                            lpMultiByteStr_2 += 1
                                        else
                                            *eax_40 |= 2
                                        
                                        break
                                    
                                    if (eax_30.b != 0xd)
                                        *lpMultiByteStr_2 = eax_30.b
                                        lpMultiByteStr_2 += 1
                                        arg3 += 1
                                    else if (arg3 u>= var_14_2 - 1)
                                        arg3 += 1
                                        uint8_t buffer_1
                                        BOOL eax_35
                                        eax_35, numberOfBytesRead_1, edx_4 = ReadFile(
                                            *(esi_2 + (&data_2b6a8a0)[arg1 s>> 5]), &buffer_1, 1, 
                                            &numberOfBytesRead, nullptr)
                                        
                                        if (eax_35 != 0)
                                            if (numberOfBytesRead != 0)
                                                goto label_496908
                                            
                                            *lpMultiByteStr_2 = 0xd
                                            lpMultiByteStr_2 += 1
                                        else
                                            enum WIN32_ERROR eax_36
                                            eax_36, numberOfBytesRead_1, edx_4 = GetLastError()
                                            
                                            if (eax_36 != NO_ERROR || numberOfBytesRead == 0)
                                                *lpMultiByteStr_2 = 0xd
                                                lpMultiByteStr_2 += 1
                                            else
                                            label_496908:
                                                int32_t eax_37 = (&data_2b6a8a0)[arg1 s>> 5]
                                                
                                                if ((*(esi_2 + eax_37 + 4) & 0x48) == 0)
                                                    if (lpMultiByteStr_2 != lpMultiByteStr
                                                            || buffer_1 != 0xa)
                                                        numberOfBytesRead_1, edx_4 = sub_48e0ec(
                                                            eax_37, edx_4, numberOfBytesRead_1, 
                                                            arg1, 0xffffffff, 0xffffffff, 
                                                            FILE_CURRENT)
                                                        
                                                        if (buffer_1 != 0xa)
                                                            *lpMultiByteStr_2 = 0xd
                                                            lpMultiByteStr_2 += 1
                                                    else
                                                        *lpMultiByteStr_2 = 0xa
                                                        lpMultiByteStr_2 += 1
                                                else if (buffer_1 == 0xa)
                                                    *lpMultiByteStr_2 = 0xa
                                                    lpMultiByteStr_2 += 1
                                                else
                                                    *lpMultiByteStr_2 = 0xd
                                                    numberOfBytesRead_1.b = buffer_1
                                                    *(esi_2 + (&data_2b6a8a0)[arg1 s>> 5] + 5) =
                                                        numberOfBytesRead_1.b
                                                    lpMultiByteStr_2 += 1
                                    else if (*(arg3 + 1) != 0xa)
                                        arg3 += 1
                                        *lpMultiByteStr_2 = 0xd
                                        lpMultiByteStr_2 += 1
                                    else
                                        arg3 += 2
                                        *lpMultiByteStr_2 = 0xa
                                        lpMultiByteStr_2 += 1
                                while (arg3 u< var_14_2)
                            
                            uint32_t eax_42 = lpMultiByteStr_2 - lpMultiByteStr
                            var_14_1 = eax_42
                            
                            if (var_6_1 == 1 && eax_42 != 0)
                                char* ebx_1 = lpMultiByteStr_2 - 1
                                numberOfBytesRead_1.b = *ebx_1
                                
                                if (numberOfBytesRead_1.b s< 0)
                                    int32_t eax_43 = 1
                                    uint32_t ecx_11 = zx.d(numberOfBytesRead_1.b)
                                    
                                    while (*(ecx_11 + 0x4ccb70) == 0)
                                        if (eax_43 s> 4)
                                            break
                                        
                                        if (ebx_1 u< lpMultiByteStr)
                                            break
                                        
                                        ebx_1 -= 1
                                        ecx_11 = zx.d(*ebx_1)
                                        eax_43 += 1
                                    
                                    edx_4.b = *ebx_1
                                    int32_t ecx_13 = sx.d(*(zx.d(edx_4.b) + 0x4ccb70))
                                    
                                    if (ecx_13 != 0)
                                        if (ecx_13 + 1 != eax_43)
                                            void* ecx_16 = (&data_2b6a8a0)[arg1 s>> 5] + esi_2
                                            
                                            if ((*(ecx_16 + 4) & 0x48) == 0)
                                                int32_t eax_46
                                                int32_t edx_5
                                                edx_5:eax_46 = sx.q(neg.d(eax_43))
                                                sub_48e0ec(eax_46, edx_5, ecx_16, arg1, eax_46, 
                                                    edx_5, FILE_CURRENT)
                                            else
                                                void* ebx_2 = &ebx_1[1]
                                                *(ecx_16 + 5) = edx_4.b
                                                
                                                if (eax_43 s>= 2)
                                                    edx_4.b = *ebx_2
                                                    *(esi_2 + (&data_2b6a8a0)[arg1 s>> 5] + 0x25) =
                                                        edx_4.b
                                                    ebx_2 += 1
                                                
                                                if (eax_43 == 3)
                                                    edx_4.b = *ebx_2
                                                    *(esi_2 + (&data_2b6a8a0)[arg1 s>> 5] + 0x26) =
                                                        edx_4.b
                                                    ebx_2 += 1
                                                
                                                ebx_1 = ebx_2 - eax_43
                                        else
                                            ebx_1 = &ebx_1[eax_43]
                                        
                                        goto label_496a1e
                                    
                                    *__errno() = 0x2a
                                    var_18 = 0xffffffff
                                else
                                    ebx_1 = &ebx_1[1]
                                label_496a1e:
                                    void* cbMultiByte = ebx_1 - lpMultiByteStr
                                    int32_t eax_49 = MultiByteToWideChar(0xfde9, 0, lpMultiByteStr, 
                                        cbMultiByte, arg2, var_20 u>> 1)
                                    var_14_1 = eax_49
                                    
                                    if (eax_49 != 0)
                                        int32_t ecx_21
                                        ecx_21.b = var_14_1 != cbMultiByte
                                        var_14_1 *= 2
                                        *(esi_2 + (&data_2b6a8a0)[arg1 s>> 5] + 0x30) = ecx_21
                                    else
                                        sub_48508b(GetLastError())
                                        var_18 = 0xffffffff
                
                if (lpMultiByteStr != arg2)
                    sub_4813df(lpMultiByteStr)
                
                if (var_18 != 0xfffffffe)
                    return var_18
                
                return var_14_1
        else if (((not.d(arg3)).b & 1) != 0)
            uint32_t eax_21 = arg3 u>> 1
            arg3 = 4
            
            if (eax_21 u>= 4)
                arg3 = eax_21
            
            uint32_t lpMultiByteStr_1
            int32_t edx_2
            lpMultiByteStr_1, edx_2 = sub_48b27c(arg3)
            lpMultiByteStr = lpMultiByteStr_1
            
            if (lpMultiByteStr_1 == 0)
                *__errno() = 0xc
                *___doserrno() = 8
                return 0xffffffff
            
            uint32_t eax_24
            int32_t edx_3
            eax_24, edx_3 = sub_48e0ec(lpMultiByteStr_1, edx_2, arg3, arg1, 0, 0, FILE_CURRENT)
            int32_t ecx_2 = (&data_2b6a8a0)[arg1 s>> 5]
            *(esi_2 + ecx_2 + 0x28) = eax_24
            lpBuffer = lpMultiByteStr
            *(esi_2 + ecx_2 + 0x2c) = edx_3
            goto label_4967ac

*___doserrno() = 0
*__errno() = 0x16
sub_481d1b(0, 0, 0, 0, 0)
return 0xffffffff
