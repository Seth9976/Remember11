// 函数: sub_422170
// 地址: 0x422170
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_24 = 1
int32_t var_20 = 0x260 - *(data_a5d910 + 0x281bc)
int32_t var_1c = 0x10
int32_t edx
int32_t edx_1 = sub_420d60(&var_20, edx)
int32_t var_28 = 3
var_20 = 0x20
int32_t var_1c_1 = 0x2a
sub_420d60(&var_20, edx_1)
int32_t edx_2 = 0x260 - *(data_a5d910 + 0x28c48)
int32_t var_2c = 6
var_20 = edx_2
int32_t var_1c_2 = 0x180
sub_420d60(&var_20, edx_2)
void* result = data_a5d910

if (*(result + 0x7ad0) == 0)
    data_4b1bf0 = 0xffffffff
    data_4b1bf4 = 0xffffffff
    return 0xffffffff

bool cond:0 = *(result + 0x7acc) == 0
data_4b1bf4 = 3
data_4b1bf0 = 5

if (not(cond:0))
    data_4b1bf0 = 0xffffffff

return result
