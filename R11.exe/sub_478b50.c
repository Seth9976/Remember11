// 函数: sub_478b50
// 地址: 0x478b50
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t i = 0

if (*(arg1 + 0x58) s> 0)
    do
        void* ebx_1 = *(*(arg1 + 0x54) + (i << 2))
        
        if (ebx_1 != 0)
            sub_478960(ebx_1)
            j_sub_4813df(ebx_1)
        
        i += 1
    while (i s< *(arg1 + 0x58))

struct _EXCEPTION_REGISTRATION_RECORD** result = *(arg1 + 0x54)

if (result != 0)
    result = sub_4813df(result)
    *(arg1 + 0x54) = 0

*(arg1 + 0x58) = 0
*(arg1 + 0x5c) = 0
return result
