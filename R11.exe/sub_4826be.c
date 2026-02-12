// 函数: sub_4826be
// 地址: 0x4826be
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_8 = arg3
var_8 = 0
void* result = sub_4825a0(arg4, arg5, &var_8)

if (result == 0)
    int32_t esi_1 = var_8
    
    if (esi_1 != 0 && __errno() != 0)
        *__errno() = esi_1

return result
