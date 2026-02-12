// 函数: sub_464cb0
// 地址: 0x464cb0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

while (true)
    enum WAIT_EVENT eax_2 =
        MsgWaitForMultipleObjects(0x21, arg1 + 0xa0, 0, 0xffffffff, QS_ALLEVENTS)
    
    if (eax_2 u> 0x1f)
        if (eax_2 == 0x20)
            break
    else
        EnterCriticalSection(arg1 + 4)
        
        if (*(arg1 + (eax_2 << 2) + 0x20) != 0)
            int32_t* eax_4 = (*(**(arg1 + (eax_2 << 2) + 0x20) + 0x40))()
            
            if (eax_4 != 0)
                int32_t* ebx_2 = **(arg1 + (eax_2 << 2) + 0x20) + 0x44
                char eax_6 = (*(*eax_4 + 0x1c))()
                *(arg1 + (eax_2 << 2) + 0x20)
                (*ebx_2)(zx.d(eax_6))
        
        LeaveCriticalSection(arg1 + 4)

SetEvent(*(arg1 + 0x124))
sub_4832a8()
noreturn
