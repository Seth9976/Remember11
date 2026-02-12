// 函数: sub_408a40
// 地址: 0x408a40
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t eax_1 = data_8969d0
void* var_20 = ((*(arg2 + 0xc) + 1) << 4) + arg2
int32_t var_1c = eax_1
int32_t var_18 = 0x1000
int32_t var_14 = 0
data_896934 = eax_1
data_89693c = 0x6000
data_896938 = 0x1000
int32_t eax_3

do
    int32_t var_2c_1 = 0
    sub_448170(&var_20, 1)
    int32_t var_2c_2 = 1
    int32_t var_2c_3 = data_896938
    int32_t var_30_2 = data_89693c
    sub_447f60(1, 0x80d0, 1, nullptr, data_896934)
    sub_447f60(1, 0x80f0, 1, nullptr, arg1)
    eax_3 = data_89693c
    var_20 += 0x1000
    data_89693c = eax_3 + 0x1000
while (eax_3 + 0x1000 u<= 0x86000)

return eax_3 + 0x1000
