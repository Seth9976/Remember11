// 函数: sub_488154
// 地址: 0x488154
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_8 = 1
void* result = sub_48b27c(0x355)

if (result != 0)
    *(result + 4) = 0
    *result = 1
    void* ebp_1 = arg1 + 0x10
    int32_t var_c_1 = 1
    void* ebx_1 = ebp_1 + 0x48
    int32_t var_20_1 = *ebx_1
    wchar32 const* const var_24_1 = &(*U"._;=")[3]
    char const* const var_28_1 = "LC_COLLATE"
    sub_487f82(result + 4, 0x351, 3)
    
    for (char const (** const i)[0xb] = &data_4a6774; i s< &data_4a67a4; )
        if (sub_48ec87(result + 4, 0x351, &(*U"._;=")[2]) != 0)
            int32_t var_30
            __builtin_memset(&var_30, 0, 0x14)
            sub_481c1f()
            noreturn
        
        if (sub_48a480(*ebx_1, *(ebp_1 + 0x58)) != 0)
            var_8 = 0
        
        var_c_1 += 1
        i = &i[3]
        ebp_1 = (var_c_1 << 4) + arg1
        ebx_1 = ebp_1 + 0x48
        int32_t var_20_3 = *ebx_1
        wchar32 const* const var_24_3 = &(*U"._;=")[3]
        char const (* var_28_3)[0xb] = *i
        sub_487f82(result + 4, 0x351, 3)
    
    if (var_8 != 0)
        sub_4813df(result)
        int32_t eax_10 = *(arg1 + 0x50)
        
        if (eax_10 != 0 && InterlockedDecrement(eax_10) == 0)
            sub_4813df(*(arg1 + 0x50))
        
        int32_t eax_12 = *(arg1 + 0x54)
        
        if (eax_12 != 0 && InterlockedDecrement(eax_12) == 0)
            sub_4813df(*(arg1 + 0x54))
        
        result = *(arg1 + 0x68)
        *(arg1 + 0x50) = 0
        *(arg1 + 0x48) = 0
    else
        int32_t eax_5 = *(arg1 + 0x50)
        
        if (eax_5 != 0 && InterlockedDecrement(eax_5) == 0)
            sub_4813df(*(arg1 + 0x50))
        
        int32_t eax_7 = *(arg1 + 0x54)
        
        if (eax_7 != 0 && InterlockedDecrement(eax_7) == 0)
            sub_4813df(*(arg1 + 0x54))
        
        *(arg1 + 0x50) = result
        *(arg1 + 0x48) = result + 4
        result += 4
    
    *(arg1 + 0x4c) = 0
    *(arg1 + 0x54) = 0

return result
