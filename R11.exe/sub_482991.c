// 函数: sub_482991
// 地址: 0x482991
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (arg2 == 0 || arg1 == 0)
    *__errno() = 0x16
    sub_481d1b(0, 0, 0, 0, 0)
    return 0xffffffff

char* var_1c_1 = arg1
char* var_24 = arg1
int32_t var_18_1 = 0x42
int32_t var_20_1 = 0x7fffffff
int32_t result = sub_48b3f2(&var_24, arg2, arg3, arg4)
int32_t var_20_2 = var_20_1 - 1

if (var_20_1 - 1 s< 0)
    char** var_30_2 = &var_24
    sub_484495(nullptr)
else
    *var_24 = 0
    var_24 = &var_24[1]

int32_t var_20_3 = var_20_2 - 1

if (var_20_2 - 1 s< 0)
    char** var_30_3 = &var_24
    sub_484495(nullptr)
else
    *var_24 = 0

return result
