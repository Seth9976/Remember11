// 函数: sub_4732e0
// 地址: 0x4732e0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

wchar16 wideCharStr[0x1ff]
int32_t eax_1 = __security_cookie ^ &wideCharStr

if ((data_c7a960 & 1) == 0)
    data_c7a960.d |= 1
    sub_46d000(&data_c79d90)
    sub_48258e(sub_49cb00)

if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
    EnterCriticalSection(&data_c79d54)
    
    if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
        LeaveCriticalSection(&data_c79d54)

if (arg1 == 2)
    sub_46aa90(&data_c7a55c, 0x100, &data_4a50ac)
else if (arg1 == 1)
    sub_46aa90(&data_c7a55c, 0x100, &data_4a50a4)
else if (arg1 == 3)
    sub_46aa90(&data_c7a55c, 0x100, &data_4a509c)

void* result = arg2 & 0x40
wchar16 const* const var_418_2
int16_t* var_418_3
int32_t i_2

if (result == 0 || (arg2.b & 0x10) == 0)
    if (result == 0)
        if (arg2.b s>= 0)
            if ((arg2.b & 0x20) == 0)
                goto label_473515
            
            i_2 = 0x100
            result = &data_c7a55c
            
            while (*result != 0)
                result += 2
                int32_t i_8 = i_2
                i_2 -= 1
                
                if (i_8 == 1)
                    goto label_473515
            
            if (i_2 == 0)
                goto label_473515
            
            var_418_3 = u" (sw vp)"
            goto label_473510
        
        i_2 = 0x100
        result = &data_c7a55c
        
        if (arg1 != 1)
            while (*result != 0)
                result += 2
                int32_t i_5 = i_2
                i_2 -= 1
                
                if (i_5 == 1)
                    goto label_473515
            
            if (i_2 == 0)
                goto label_473515
            
            var_418_3 = u" (simulated mixed vp)"
            goto label_473510
        
        i_2 = 0x100
        
        while (*result != 0)
            result += 2
            int32_t i_9 = i_2
            i_2 -= 1
            
            if (i_9 == 1)
                goto label_47351e
        
        if (i_2 == 0)
            goto label_47351e
        
        var_418_2 = u" (mixed vp)"
        goto label_4733e7
    
    i_2 = 0x100
    result = &data_c7a55c
    
    if (arg1 == 1)
        while (*result != 0)
            result += 2
            int32_t i_6 = i_2
            i_2 -= 1
            
            if (i_6 == 1)
                goto label_47351e
        
        if (i_2 == 0)
            goto label_47351e
        
        var_418_2 = u" (hw vp)"
        goto label_4733e7
    
    while (*result != 0)
        result += 2
        int32_t i_4 = i_2
        i_2 -= 1
        
        if (i_4 == 1)
            goto label_473515
    
    if (i_2 == 0)
        goto label_473515
    
    var_418_3 = u" (simulated hw vp)"
label_473510:
    result = sub_46aa90(((0x100 - i_2) << 1) + &data_c7a55c, 0x100 * 0 + i_2, var_418_3)
label_473515:
    
    if (arg1 == 1)
        goto label_47351e
else
    i_2 = 0x100
    result = &data_c7a55c
    
    if (arg1 != 1)
        int32_t i
        
        do
            if (*result == 0)
                if (i_2 == 0)
                    goto label_473515
                
                var_418_3 = u" (simulated pure hw vp)"
                goto label_473510
            
            result += 2
            i = i_2
            i_2 -= 1
        while (i != 1)
        goto label_473515
    
    while (*result != 0)
        result += 2
        int32_t i_7 = i_2
        i_2 -= 1
        
        if (i_7 == 1)
            goto label_47351e
    
    if (i_2 == 0)
        goto label_47351e
    
    var_418_2 = u" (pure hw vp)"
label_4733e7:
    sub_46aa90(((0x100 - i_2) << 1) + &data_c7a55c, 0x100 * 0 + i_2, var_418_2)
label_47351e:
    int32_t i_3 = 0x100
    void* eax_5 = &data_c7a55c
    int32_t i_1
    
    do
        if (*eax_5 == 0)
            if (i_3 != 0)
                sub_46aa90(((0x100 - i_3) << 1) + &data_c7a55c, 0x100 * 0 + i_3, 0x4a4fb4)
            
            break
        
        eax_5 += 2
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    
    if ((data_c7a960 & 1) == 0)
        data_c7a960.d |= 1
        sub_46d000(&data_c79d90)
        sub_48258e(sub_49cb00)
    
    if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
        EnterCriticalSection(&data_c79d54)
    
    int32_t* esi_1 = data_c79d9c
    
    if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
        LeaveCriticalSection(&data_c79d54)
    
    sub_472200(0)
    void* eax_8 = sub_477e10(*esi_1, esi_1[1], esi_1[2], esi_1[6], esi_1[0xc])
    
    if (eax_8 == 0)
        MultiByteToWideChar(0, 0, arg3 + 0x200, 0xffffffff, &wideCharStr, 0x200)
        int16_t var_6_1 = 0
        int32_t ecx_9 = 0x100
        result = &data_c7a55c
        
        while (*result != 0)
            result += 2
            int32_t temp8_1 = ecx_9
            ecx_9 -= 1
            
            if (temp8_1 == 1)
                goto label_473692
        
        if (ecx_9 != 0)
            result =
                sub_46aa90(((0x100 - ecx_9) << 1) + &data_c7a55c, 0x100 * 0 + ecx_9, &wideCharStr)
    else
        int32_t ecx_8 = 0x100
        result = &data_c7a55c
        
        while (*result != 0)
            result += 2
            int32_t temp9_1 = ecx_8
            ecx_8 -= 1
            
            if (temp9_1 == 1)
                goto label_473692
        
        if (ecx_8 != 0)
            result = sub_46aa90(((0x100 - ecx_8) << 1) + &data_c7a55c, 0x100 * 0 + ecx_8, 
                *(eax_8 + 0x50) + 0x450)
label_473692:
sub_480cd2(eax_1 ^ &wideCharStr)
return result
