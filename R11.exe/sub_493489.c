// 函数: sub_493489
// 地址: 0x493489
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (arg1 s>= 0 && arg1 u< data_2b6a888)
    int32_t* esi_3 = (arg1 & 0x1f) * 0x38
    int32_t* eax_4 = (&data_2b6a8a0)[arg1 s>> 5] + esi_3
    
    if ((eax_4[1].b & 1) != 0 && *eax_4 != 0xffffffff)
        if (data_4cbab0 == 1)
            if (arg1 == 0)
                int32_t var_10_3 = 0
                SetStdHandle(STD_INPUT_HANDLE, nullptr)
            else if (arg1 == 1)
                int32_t var_10_2 = 0
                SetStdHandle(STD_OUTPUT_HANDLE, nullptr)
            else if (arg1 == 2)
                int32_t var_10_1 = 0
                SetStdHandle(STD_ERROR_HANDLE, nullptr)
        
        *(esi_3 + (&data_2b6a8a0)[arg1 s>> 5]) = 0xffffffff
        return 0

*__errno() = 9
*___doserrno() = 0
return 0xffffffff
