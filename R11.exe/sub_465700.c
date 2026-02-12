// 函数: sub_465700
// 地址: 0x465700
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

uint32_t numberOfBytesTransferred = arg1

if (*(arg1 + 0x2c) != 0)
    bool cond:0_1 = *(arg1 + 0x28) != 1
    numberOfBytesTransferred = 0
    
    if (not(cond:0_1))
        if (GetOverlappedResult(*(arg1 + 4), arg1 + 0xc, &numberOfBytesTransferred, 0) == 0)
            return 1
        
        *(arg1 + 0x14) += numberOfBytesTransferred
        *(arg1 + 0x28) = 0

return 0
