// 函数: sub_450200
// 地址: 0x450200
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t eax = 0
int16_t i

do
    i = *(eax + &data_49ea48)
    *(eax + &data_c77ce8) = i
    eax += 2
while (i != 0)
int32_t eax_1 = 0
int16_t i_1

do
    i_1 = *(eax_1 + &data_49ea48)
    *(eax_1 + &data_c77ae0) = i_1
    eax_1 += 2
while (i_1 != 0)
__builtin_memset(&data_c77aa0, 0, 0x40)
data_c77a9c = 0x1f
class std::out_of_range `RTTI Type Descriptor'.__offset(0x1f).b = 1
return 0
