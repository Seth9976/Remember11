// 函数: sub_432140
// 地址: 0x432140
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

sub_480cf0(&data_22366c0, 0, 0xd400)
data_2b5cf18 = 0
sub_480cf0(&data_22366c0, 0, 0x5c00)
sub_431c20(&data_2b5aa20)
data_22366c0 = 0x48
data_223c2bc = sub_441550(&data_22366c0, 0x5bfc)
sub_480ea0(&data_2b5aa20, &data_22366c4, 0x590c)
int32_t result

for (void* i = &data_223c2c0; i s< &data_2243ac0; i += 0x200)
    sub_480cf0(i, 0, 0x200)
    result = sub_441550(i, 0x1fc)
    *(i + 0x1fc) = result

return result
