// 函数: sub_46b340
// 地址: 0x46b340
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t i = arg3
int32_t ebx = 0

if (i u> 0)
    void* ebp_1 = arg2
    
    do
        if (i u< 0x38)
            DebugBreak()
        
        if (*(arg1 + 0x38) == 1)
            break
        
        int16_t x87control =
            sub_46b1c0(arg1, x87control, ((*(arg1 + 0x1c) s/ 0x1c) << 4) + *(arg1 + 0x30), ebp_1)
        i -= 0x38
        ebx += 0x38
        ebp_1 += 0x38
    while (i u> 0)

if (arg4 != 0)
    *arg4 = ebx

return 0
