// 函数: sub_46d960
// 地址: 0x46d960
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
    EnterCriticalSection(&data_c79d54)

*(arg1 + 0x1f4) = arg2
*(arg1 + 0x1f8) = arg3
*(arg1 + 0x1fc) = arg4
*(arg1 + 0x200) = arg5
*(arg1 + 0x204) = arg6
*(arg1 + 0x208) = arg7

if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b == 0)
    return arg5

return LeaveCriticalSection(&data_c79d54)
