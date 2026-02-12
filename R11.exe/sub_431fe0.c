// 函数: sub_431fe0
// 地址: 0x431fe0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (arg1 != 0xffff)
    int16_t edx_1 = (data_2b60364).w
    __builtin_memcpy((arg1 << 9) + 0x223c2c4, &data_2b5a860, 0x1bc)
    char ecx_3 = data_2b60360.b
    *((arg1 << 9) + 0x223c3ae) = edx_1 - 0x7d0
    char edx_3 = data_2b6035c.b
    *((arg1 << 9) + 0x223c3ad) = ecx_3
    char ecx_4 = data_2b60358.b
    *((arg1 << 9) + 0x223c3ac) = edx_3
    char edx_4 = data_2b60354.b
    *((arg1 << 9) + 0x223c3ab) = ecx_4
    char ecx_5 = data_2b60350.b
    *((arg1 << 9) + 0x223c3aa) = edx_4
    *((arg1 << 9) + 0x223c3a9) = ecx_5
    *((arg1 << 9) + &data_223c2c0) = 0x48
    *((arg1 << 9) + 0x223c4bc) = sub_441550((arg1 << 9) + &data_223c2c0, 0x1fc)

sub_431c20(&data_2b5aa20)

if (arg1 != 0xffff)
    data_2238bbc = arg1.b

data_22366c0 = 0x48
data_223c2bc = sub_441550(&data_22366c0, 0x5bfc)
int128_t* result = sub_480ea0(&data_2b5aa20, &data_22366c4, 0x590c)

if (arg1 != 0xffff)
    __builtin_memcpy(&data_2b5a860, (arg1 << 9) + 0x223c2c4, 0x1bc)

return result
