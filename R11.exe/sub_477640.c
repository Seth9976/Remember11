// 函数: sub_477640
// 地址: 0x477640
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if ((data_c7a960 & 1) == 0)
    data_c7a960.d |= 1
    sub_46d000(&data_c79d90)
    sub_48258e(sub_49cb00)

if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
    EnterCriticalSection(&data_c79d54)

int32_t ebx
ebx.b = data_c79fb8

if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
    LeaveCriticalSection(&data_c79d54)

if (ebx.b != 0)
label_477936:
    
    if ((data_c7a960 & 1) == 0)
        data_c7a960.d |= 1
        sub_46d000(&data_c79d90)
        sub_48258e(sub_49cb00)
    
    if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
        EnterCriticalSection(&data_c79d54)
    
    int32_t esi_3 = data_c79fac
    
    if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
        LeaveCriticalSection(&data_c79d54)
    
    int32_t esi_4
    
    if (esi_3 != 0)
        if ((data_c7a960 & 1) == 0)
            data_c7a960.d |= 1
            sub_46d000(&data_c79d90)
            sub_48258e(sub_49cb00)
        
        if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
            EnterCriticalSection(&data_c79d54)
        
        esi_4 = data_c79fac
        
        if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
            LeaveCriticalSection(&data_c79d54)
    
    if (esi_3 == 0 || esi_4 == 0xb)
        if ((data_c7a960 & 1) == 0)
            data_c7a960.d |= 1
            sub_46d000(&data_c79d90)
            sub_48258e(sub_49cb00)
        
        if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
            EnterCriticalSection(&data_c79d54)
        
        bool cond:5_1 = class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b == 0
        data_c79fac = 1
        
        if (not(cond:5_1))
            LeaveCriticalSection(&data_c79d54)
else
    if ((data_c7a960 & 1) == 0)
        data_c7a960.d |= 1
        sub_46d000(&data_c79d90)
        sub_48258e(sub_49cb00)
    
    if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
        EnterCriticalSection(&data_c79d54)
    
    ebx.b = data_c79fb9
    
    if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
        LeaveCriticalSection(&data_c79d54)
    
    if (ebx.b != 0)
        goto label_477936
    
    if ((data_c7a960 & 1) == 0)
        data_c7a960.d |= 1
        sub_46d000(&data_c79d90)
        sub_48258e(sub_49cb00)
    
    if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
        EnterCriticalSection(&data_c79d54)
    
    bool cond:7_1 = class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b == 0
    data_c79fb9 = 1
    
    if (not(cond:7_1))
        LeaveCriticalSection(&data_c79d54)
    
    if ((data_c7a960 & 1) == 0)
        data_c7a960.d |= 1
        sub_46d000(&data_c79d90)
        sub_48258e(sub_49cb00)
    
    if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
        EnterCriticalSection(&data_c79d54)
    
    ebx.b = data_c79fb2
    
    if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
        LeaveCriticalSection(&data_c79d54)
    
    if (ebx.b != 0)
    label_47784f:
        HWND hWnd = sub_46f1f0()
        sub_46ff00()
        
        if (sub_46dc80(&data_c79d90) != 0)
            sub_46ff00()
            
            if (sub_46dd00(&data_c79d90) != 0)
                sub_46ff00()
                
                if (sub_46dd80(&data_c79d90) != 0)
                    MSG msg
                    msg.message = 0
                    PeekMessageW(&msg, nullptr, 0, 0, PM_NOREMOVE)
                    
                    while (msg.message != 0x12)
                        if (PeekMessageW(&msg, nullptr, 0, 0, PM_REMOVE) == 0)
                            sub_4756a0()
                        else if (arg1 == 0 || hWnd == 0)
                            TranslateMessage(&msg)
                            DispatchMessageW(&msg)
                        else if (TranslateAcceleratorW(hWnd, arg1, &msg) == 0)
                            TranslateMessage(&msg)
                            DispatchMessageW(&msg)
                    
                    if (arg1 != 0)
                        DestroyAcceleratorTable(arg1)
                    
                    sub_46ff00()
                    sub_46de40(&data_c79d90, 0)
                    return 0
    else
        sub_46ff00()
        
        if (sub_46ddc0(&data_c79d90) == 0)
            enum WIN32_ERROR result = sub_476f20(0, 1, 0x280, 0x1e0, 0, 0, 0)
            
            if (result s>= NO_ERROR)
                goto label_47784f
            
            sub_46ff00()
            int32_t eax_5 = sub_46dc40(&data_c79d90)
            int32_t eax_6
            
            if (eax_5 != 0)
                sub_46ff00()
                eax_6 = sub_46dc40(&data_c79d90)
            
            if (eax_5 == 0 || eax_6 == 0xb)
                sub_46ff00()
                sub_46dc00(&data_c79d90, 1)
            
            return result
    
    sub_46ff00()
    int32_t eax_2 = sub_46dc40(&data_c79d90)
    int32_t eax_3
    
    if (eax_2 != 0)
        sub_46ff00()
        eax_3 = sub_46dc40(&data_c79d90)
    
    if (eax_2 == 0 || eax_3 == 0xb)
        sub_46ff00()
        sub_46dc00(&data_c79d90, 1)

return 0x80004005
