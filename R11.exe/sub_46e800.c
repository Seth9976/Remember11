// 函数: sub_46e800
// 地址: 0x46e800
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (arg1 != 0)
    sub_46ff00()
    
    if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
        EnterCriticalSection(&data_c79d54)
    
    HHOOK hhk = data_c79f6c
    
    if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
        LeaveCriticalSection(&data_c79d54)
    
    return CallNextHookEx(hhk, arg1, arg2, arg3)

int32_t* lParam = arg3

if (arg2 u>= 0x100 && arg2 u<= 0x101)
    sub_46ff00()
    
    if (sub_46d920(&data_c79d90) == 0)
        int32_t eax_2 = *lParam
        
        if (eax_2 == 0x5b || eax_2 == 0x5c)
            return 1

sub_46ff00()
return CallNextHookEx(sub_46d860(&data_c79d90), 0, arg2, lParam)
