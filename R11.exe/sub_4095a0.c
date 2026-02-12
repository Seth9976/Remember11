// 函数: sub_4095a0
// 地址: 0x4095a0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t esi = sx.d(arg1)

if (*(esi + &data_a59582) != 0)
    data_89698c = sub_4072c0(0x8120, esi)
    data_896970 = esi

*(esi + &data_a59582) = 1
int32_t result = sub_4072c0(0x8110, esi)
data_896974 = esi
data_896988 = result
return result
