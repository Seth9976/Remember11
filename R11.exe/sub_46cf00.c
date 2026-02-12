// 函数: sub_46cf00
// 地址: 0x46cf00
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (sub_46cd00() != 0)
    int32_t result = data_c79d7c(arg1, arg2)
    
    if (result != 0 && data_c79d8c == 0 && *arg2 u>= 0x68)
        MultiByteToWideChar(0, 0, &arg2[0xa], 0xffffffff, &arg2[0xa], 0x20)
    
    return result

int32_t pvParam

if (arg1 == 0x12340042 && arg2 != 0 && *arg2 u>= 0x28
        && SystemParametersInfoA(SPI_GETWORKAREA, 0, &pvParam, 0) != 0)
    arg2[1] = 0
    arg2[2] = 0
    arg2[3] = GetSystemMetrics(SM_CXSCREEN)
    int32_t eax_6 = GetSystemMetrics(SM_CYSCREEN)
    bool cond:0 = *arg2 u< 0x68
    arg2[5] = pvParam
    arg2[4] = eax_6
    int32_t var_c
    arg2[6] = var_c
    int32_t var_8
    arg2[7] = var_8
    int32_t var_4
    arg2[8] = var_4
    arg2[9] = 1
    
    if (not(cond:0))
        MultiByteToWideChar(0, 0, "DISPLAY", 0xffffffff, &arg2[0xa], 0x20)
    
    return 1

return 0
