// 函数: sub_48395e
// 地址: 0x48395e
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (arg1 u< 0x4cbae0 || arg1 u> 0x4cbd40)
    return EnterCriticalSection(arg1 + 0x20)

int32_t result = sub_48677d(((arg1 - 0x4cbae0) s>> 5) + 0x10)
*(arg1 + 0xc) |= 0x8000
return result
