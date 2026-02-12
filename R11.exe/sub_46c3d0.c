// 函数: sub_46c3d0
// 地址: 0x46c3d0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t* var_4 = arg1
DebugBreak()
int32_t* eax = arg1[1]

if (*eax == 0 || arg1[3] == 0)
    return 0x800401f0

arg1[9] = 0
arg1[0xa] = 0
arg1[0x10] = 0
arg1[0x11] = 0
int32_t result = sub_46b420(*eax, &var_4)

if (result s>= 0)
    if (var_4 == 0)
    label_46c42b:
        (*(*arg1[3] + 0x10))(0)
        int32_t* eax_4 = *arg1[1]
        return (*(*eax_4 + 0x34))(eax_4, 0)
    
    result = (*(*arg1 + 8))(*arg1[1], 0)
    
    if (result s>= 0)
        goto label_46c42b

return result
