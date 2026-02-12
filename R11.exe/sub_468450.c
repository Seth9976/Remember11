// 函数: sub_468450
// 地址: 0x468450
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* ecx_1 = *arg1
int32_t result

if (arg2 u>= *(ecx_1 + 0xc))
    result = 0
label_468466:
    
    if (*(ecx_1 + 0x14) != 0)
        void* eax_1 = sub_497486()
        
        if (arg2 u>= *(eax_1 + 0xc))
            return 0
        
        return *(*(eax_1 + 8) + (arg2 << 2))
else
    result = *(*(ecx_1 + 8) + (arg2 << 2))
    
    if (result == 0)
        goto label_468466

return result
