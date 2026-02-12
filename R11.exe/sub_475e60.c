// 函数: sub_475e60
// 地址: 0x475e60
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_48
char var_28
uint32_t ecx
uint16_t edx
int32_t ebx

if (arg2 == 0x100 || arg2 == 0x104)
    ebx.b = 1
label_475eab:
    var_28 = ebx.b
    
    if ((data_c7a960 & 1) == 0)
        data_c7a960.d |= 1
        sub_46d000(&data_c79d90)
        sub_48258e(sub_49cb00)
    
    if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
        EnterCriticalSection(&data_c79d54)
        
        if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
            LeaveCriticalSection(&data_c79d54)
    
    bool cond:1_1 = (data_c7a960 & 1) != 0
    *(zx.d(arg3) + 0xc7a050) = ebx.b
    
    if (not(cond:1_1))
        data_c7a960.d |= 1
        sub_46d000(&data_c79d90)
        ecx, edx = sub_48258e(sub_49cb00)
    
    if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
        ecx, edx = EnterCriticalSection(&data_c79d54)
    
    int32_t edi_1 = data_c7a014
    
    if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
        ecx, edx = LeaveCriticalSection(&data_c79d54)
    
    if (edi_1 != 0)
        if ((data_c7a960 & 1) == 0)
            data_c7a960.d |= 1
            sub_46d000(&data_c79d90)
            sub_48258e(sub_49cb00)
        
        if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
            EnterCriticalSection(&data_c79d54)
        
        int32_t esi_1 = data_c7a044
        
        if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
            LeaveCriticalSection(&data_c79d54)
        
        var_48 = var_28.d
        edx, ecx = edi_1(arg3.d, var_48, ((arg4 u>> 0x1d).b & 1).d, esi_1)
else if (arg2 == 0x101 || arg2 == 0x105)
    ebx.b = 0
    goto label_475eab
int32_t var_10
uint32_t var_c

if (arg2 == 0x201 || arg2 == 0x202 || arg2 == 0x203 || arg2 == 0x207 || arg2 == 0x208
    || arg2 == 0x209 || arg2 == 0x204 || arg2 == 0x205 || arg2 == 0x206 || arg2 == 0x20b
    || arg2 == 0x20c || arg2 == 0x20d || arg2 == 0x20a)
label_47604e:
    int32_t ebp_1 = sx.d(arg4.w)
    uint32_t eax_7 = sx.d((arg4 u>> 0x10).w)
    var_28.d = eax_7
    
    if (arg2 == 0x20a)
        var_c = eax_7
        var_10 = ebp_1
        ScreenToClient(arg1, &var_10)
        ebp_1 = var_10
        var_28.d = var_c
    
    int32_t var_24_1 = 0
    
    if (arg2 == 0x20a)
        var_24_1 = sx.d((arg3.d u>> 0x10).w)
    
    uint32_t eax_10 = zx.d(arg3.w)
    ecx.b = eax_10.b
    ecx.b &= 1
    char var_14_2 = ecx.b
    uint8_t ecx_3 = (eax_10 u>> 4).b & 1
    uint8_t ebx_2 = (eax_10 u>> 1).b & 1
    uint8_t ecx_5 = (eax_10 u>> 5).b & 1
    var_10.b = ebx_2
    uint8_t var_20_1 = (eax_10 u>> 6).b & 1
    
    if ((data_c7a960 & 1) == 0)
        data_c7a960.d |= 1
        sub_46d000(&data_c79d90)
        sub_48258e(sub_49cb00)
    
    if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
        EnterCriticalSection(&data_c79d54)
        
        if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
            LeaveCriticalSection(&data_c79d54)
    
    bool cond:8_1 = (data_c7a960 & 1) != 0
    edx.b = ecx_3
    data_c7a150 = var_14_2
    data_c7a151 = edx.b
    data_c7a152 = ebx_2
    data_c7a153 = ecx_5
    data_c7a154 = var_20_1
    
    if (not(cond:8_1))
        data_c7a960.d |= 1
        sub_46d000(&data_c79d90)
        sub_48258e(sub_49cb00)
    
    if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
        EnterCriticalSection(&data_c79d54)
    
    int32_t edi_2 = data_c7a018
    
    if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
        LeaveCriticalSection(&data_c79d54)
    
    if (edi_2 != 0)
        if ((data_c7a960 & 1) == 0)
            data_c7a960.d |= 1
            sub_46d000(&data_c79d90)
            sub_48258e(sub_49cb00)
        
        if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
            EnterCriticalSection(&data_c79d54)
        
        int32_t esi_3 = data_c7a048
        
        if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
            LeaveCriticalSection(&data_c79d54)
        
        var_48 = ebp_1
        edi_2(var_14_2.d, var_10, ecx_3.d, ecx_5.d, var_20_1.d, var_24_1, var_48, var_28.d, esi_3)
else
    sub_46ff00()
    char eax_4
    eax_4, ecx, edx = sub_46e040(&data_c79d90)
    
    if (eax_4 != 0 && arg2 == 0x200)
        goto label_47604e

if ((data_c7a960 & 1) == 0)
    data_c7a960.d |= 1
    sub_46d000(&data_c79d90)
    sub_48258e(sub_49cb00)

if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
    EnterCriticalSection(&data_c79d54)

int32_t edi_3 = data_c7a01c

if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
    LeaveCriticalSection(&data_c79d54)

uint32_t Msg
int32_t wParam

if (edi_3 == 0)
    wParam = arg3.d
    Msg = arg2
else
    bool cond:12_1 = (data_c7a960 & 1) != 0
    char var_29 = 0
    
    if (not(cond:12_1))
        data_c7a960.d |= 1
        sub_46d000(&data_c79d90)
        sub_48258e(sub_49cb00)
    
    if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
        EnterCriticalSection(&data_c79d54)
    
    int32_t esi_4 = data_c7a04c
    
    if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
        LeaveCriticalSection(&data_c79d54)
    
    wParam = arg3.d
    Msg = arg2
    var_48 = arg4
    int32_t result = edi_3(arg1, Msg, wParam, var_48, &var_29, esi_4)
    
    if (var_29 != 0)
        return result

if (Msg u> 0x112)
    if (Msg u<= 0x211)
        if (Msg == 0x211)
            sub_4709d0(1, 1)
        else
            if (Msg == 0x120)
                return 0x10000
            
            if (Msg == 0x200 && sub_471300() == 0 && sub_46ec30() == 0)
                int32_t* eax_57 = sub_46ebb0()
                
                if (eax_57 != 0)
                    GetCursorPos(&var_10)
                    (*(*eax_57 + 0x2c))(eax_57, var_10, var_c, 0)
        
        goto label_476412
    
    if (Msg - 0x212 u> 0x20)
        goto label_476412
    
    switch (Msg)
        case 0x212, 0x215
            sub_4709d0(0, 0)
            goto label_476412
        case 0x213, 0x214, 0x216, 0x217, 0x219, 0x21a, 0x21b, 0x21c, 0x21d, 0x21e, 0x21f, 0x220, 
                0x221, 0x222, 0x223, 0x224, 0x225, 0x226, 0x227, 0x228, 0x229, 0x22a, 0x22b, 0x22c, 
                0x22d, 0x22e, 0x22f, 0x230
            goto label_476412
        case 0x218
            if (wParam != 0)
                if (wParam != 7)
                    goto label_476412
                
                sub_46ab50()
                sub_46a490(0xc79d28)
                HWND var_44
                var_44.q = fconvert.d(float.t(0))
                sub_46ff00()
                sub_46d7e0(&data_c79d90, var_44)
                return wParam - 6
        case 0x231
            sub_4709d0(1, 1)
            sub_46ff00()
            sub_46e0c0(&data_c79d90, 1)
        label_476412:
            
            if ((data_c7a960 & 1) == 0)
                data_c7a960.d |= 1
                sub_46d000(&data_c79d90)
                sub_48258e(sub_49cb00)
            
            if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
                EnterCriticalSection(&data_c79d54)
            
            int32_t esi_6 = data_c79f00
            
            if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
                LeaveCriticalSection(&data_c79d54)
            
            if (esi_6 != 0)
                return DefWindowProcW(arg1, Msg, wParam, arg4)
            
            if (Msg == 0x104)
                if (wParam != 0x79)
                    return DefWindowProcW(arg1, Msg, wParam, arg4)
            else if (Msg != 0x105 || wParam != 0x79)
                return DefWindowProcW(arg1, Msg, wParam, arg4)
            
            return 0
        case 0x232
            sub_4709d0(0, 0)
            sub_474ff0()
            sub_475180()
            sub_46ff00()
            sub_46e0c0(&data_c79d90, 0)
            goto label_476412
else
    if (Msg == 0x112)
        if (wParam u<= 0xf030)
            if (wParam == 0xf030 || wParam == 0xf000 || wParam == 0xf010)
                goto label_47682e
            
            goto label_476412
        
        if (wParam != 0xf100 && wParam != 0xf170)
            goto label_476412
        
    label_47682e:
        
        if (sub_46ec30() != 0)
            goto label_476412
        
        return 0
    
    if (Msg u<= 0x1c)
        if (Msg == 0x1c)
            if (wParam == 1)
                sub_46ff00()
                
                if (sub_46dfc0(&data_c79d90) == 0)
                    sub_46ff00()
                    sub_46df80(&data_c79d90, wParam.b)
                    
                    if (sub_46ec30() == 0)
                        sub_46ff00()
                        
                        if (sub_46db00(&data_c79d90) != 0)
                            sub_4716f0()
                    
                    sub_46ff00()
                    
                    if (sub_46d720(&data_c79d90) != 0)
                        sub_4709d0(0, 0)
                        sub_46ff00()
                        sub_46d6e0(&data_c79d90, 0)
                    
                    if (sub_46ec30() == 0)
                        sub_46ff00()
                        sub_46e8b0(sub_46d8a0(&data_c79d90))
                    else
                        sub_46ff00()
                        sub_46e8b0(sub_46d8e0(&data_c79d90))
            else if (wParam == 0)
                sub_46ff00()
                
                if (sub_46dfc0(&data_c79d90) != 0)
                    sub_46ff00()
                    sub_46df80(&data_c79d90, wParam.b)
                    
                    if (sub_46ec30() == 0)
                        ClipCursor(nullptr)
                        sub_4709d0(1, 1)
                        sub_46ff00()
                        sub_46d6e0(&data_c79d90, 1)
                    
                    sub_46e8b0(1)
        else if (Msg - 2 u<= 0xe)
            switch (Msg + &jump_table_47698c[4]:2)
                case &lookup_table_4769a0
                    PostQuitMessage(0)
                case &lookup_table_4769a0[3]
                    if (wParam != 1)
                        GetClientRect(sub_46f1f0(), &var_10)
                        int32_t var_4
                        
                        if (var_c != 0 || var_4 != 0)
                            char var_40_8
                            
                            if (wParam == 2)
                                sub_46ff00()
                                
                                if (sub_46d620(&data_c79d90) != 0)
                                    sub_4709d0(0, 0)
                                
                                sub_46ff00()
                                sub_46d5e0(&data_c79d90, 0)
                                var_40_8 = 1
                                goto label_47655b
                            
                            if (wParam == 0)
                                sub_46ff00()
                                
                                if (sub_46d6a0(&data_c79d90) == 0)
                                    sub_46ff00()
                                    
                                    if (sub_46d620(&data_c79d90) == 0)
                                        sub_46ff00()
                                        
                                        if (sub_46e100(&data_c79d90) == 0)
                                            sub_474ff0()
                                            sub_475180()
                                    else
                                        sub_4709d0(0, 0)
                                        sub_46ff00()
                                        sub_46d5e0(&data_c79d90, 0)
                                        sub_474ff0()
                                        sub_475180()
                                else
                                    var_40_8 = wParam.b
                                label_47655b:
                                    sub_46ff00()
                                    sub_46d660(&data_c79d90, var_40_8)
                                    sub_474ff0()
                                    sub_475180()
                    else
                        sub_46ff00()
                        
                        if (sub_46dac0(&data_c79d90) != 0 && sub_46ec30() == 0)
                            ClipCursor(nullptr)
                        
                        sub_4709d0(1, 1)
                        sub_46ff00()
                        sub_46d5e0(&data_c79d90, 1)
                        sub_46ff00()
                        sub_46d660(&data_c79d90, 0)
                case &lookup_table_4769a0[0xd]
                    int32_t* eax_16 = sub_46ebb0()
                    
                    if (eax_16 != 0 && sub_471300() != 0)
                        sub_46ff00()
                        
                        if (sub_46dec0(&data_c79d90) != 0)
                            sub_46ff00()
                            
                            if (sub_46df40(&data_c79d90) != 0)
                                var_10.q = fconvert.d(sub_471220())
                                arg3.d = fconvert.s(sub_471290())
                                sub_46ff00()
                                int32_t eax_20 = sub_46e600(&data_c79d90)
                                
                                if (eax_20 != 0)
                                    sub_46ff00()
                                    int32_t eax_21 = sub_46e740(&data_c79d90)
                                    int32_t var_4c
                                    var_4c.q = fconvert.d(fconvert.t(var_10.q))
                                    eax_20(eax_16, var_4c, var_48, fconvert.s(fconvert.t(arg3.d)), 
                                        eax_21)
                                
                                int32_t eax_22 = (*(*eax_16 + 0x44))(eax_16, 0, 0, 0, 0)
                                
                                if (eax_22 == 0x88760868 || eax_22 == 0x88760827)
                                    sub_46ff00()
                                    sub_46e000(&data_c79d90, 1)
                case &lookup_table_4769a0[0xe]
                    HMENU hMenu = GetMenu(arg1)
                    
                    if (hMenu != 0)
                        DestroyMenu(hMenu)
                    
                    DestroyWindow(arg1)
                    UnregisterClassW(u"Direct3DWindowClass", nullptr)
                    sub_46ff00()
                    sub_46d160(&data_c79d90, nullptr)
                    sub_46ff00()
                    sub_46d1a0(&data_c79d90, nullptr)
                    sub_46ff00()
                    sub_46d1e0(&data_c79d90, nullptr)
                    return 0
        
        goto label_476412
    
    if (Msg - 0x24 u> 0xe0)
        goto label_476412
    
    switch (Msg)
        case 0x24
            *(arg4 + 0x18) = 0xc8
            *(arg4 + 0x1c) = 0xc8
            goto label_476412
        case 0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f, 0x30, 0x31, 0x32, 
                0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x3a, 0x3b, 0x3c, 0x3d, 0x3e, 0x3f, 0x40, 
                0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49, 0x4a, 0x4b, 0x4c, 0x4d, 0x4e, 
                0x4f, 0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57, 0x58, 0x59, 0x5a, 0x5b, 0x5c, 
                0x5d, 0x5e, 0x5f, 0x60, 0x61, 0x62, 0x63, 0x64, 0x65, 0x66, 0x67, 0x68, 0x69, 0x6a, 
                0x6b, 0x6c, 0x6d, 0x6e, 0x6f, 0x70, 0x71, 0x72, 0x73, 0x74, 0x75, 0x76, 0x77, 0x78, 
                0x79, 0x7a, 0x7b, 0x7c, 0x7d, 0x7e, 0x7f, 0x80, 0x81, 0x82, 0x83, 0x85, 0x86, 0x87, 
                0x88, 0x89, 0x8a, 0x8b, 0x8c, 0x8d, 0x8e, 0x8f, 0x90, 0x91, 0x92, 0x93, 0x94, 0x95, 
                0x96, 0x97, 0x98, 0x99, 0x9a, 0x9b, 0x9c, 0x9d, 0x9e, 0x9f, 0xa0, 0xa1, 0xa2, 0xa3, 
                0xa4, 0xa5, 0xa6, 0xa7, 0xa8, 0xa9, 0xaa, 0xab, 0xac, 0xad, 0xae, 0xaf, 0xb0, 0xb1, 
                0xb2, 0xb3, 0xb4, 0xb5, 0xb6, 0xb7, 0xb8, 0xb9, 0xba, 0xbb, 0xbc, 0xbd, 0xbe, 0xbf, 
                0xc0, 0xc1, 0xc2, 0xc3, 0xc4, 0xc5, 0xc6, 0xc7, 0xc8, 0xc9, 0xca, 0xcb, 0xcc, 0xcd, 
                0xce, 0xcf, 0xd0, 0xd1, 0xd2, 0xd3, 0xd4, 0xd5, 0xd6, 0xd7, 0xd8, 0xd9, 0xda, 0xdb, 
                0xdc, 0xdd, 0xde, 0xdf, 0xe0, 0xe1, 0xe2, 0xe3, 0xe4, 0xe5, 0xe6, 0xe7, 0xe8, 0xe9, 
                0xea, 0xeb, 0xec, 0xed, 0xee, 0xef, 0xf0, 0xf1, 0xf2, 0xf3, 0xf4, 0xf5, 0xf6, 0xf7, 
                0xf8, 0xf9, 0xfa, 0xfb, 0xfc, 0xfd, 0xfe, 0xff, 0x101, 0x102, 0x103
            goto label_476412
        case 0x84
            if (sub_46ec30() != 0)
                goto label_476412
        case 0x100
            sub_46ff00()
            sub_46da40(&data_c79d90)
            goto label_476412
        case 0x104
            sub_46ff00()
            
            if (sub_46da40(&data_c79d90) == 0 || wParam != 0xd || (arg4 & 0x20000000) == 0)
                goto label_476412
            
            sub_4709d0(1, 1)
            sub_4753c0()
            sub_4709d0(0, 0)
            return 0

return 1
