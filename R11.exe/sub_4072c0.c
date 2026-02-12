// 函数: sub_4072c0
// 地址: 0x4072c0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t eax = 0

if ((arg1 & 0x8000) != 0)
    eax = 0x40

int32_t var_4 = 0
int32_t var_8 = 0
int32_t var_c = eax
int32_t* var_10 = &data_879040

if ((arg1 & 0x1000) == 0)
    int32_t var_14_1 = 0x10
    data_879040 = arg2
    int32_t* var_18_1 = &data_879040
else
    int32_t var_14 = 0x40
    int32_t var_18 = arg2

sub_44c570(0x879018, arg1, nullptr)
return data_879040
