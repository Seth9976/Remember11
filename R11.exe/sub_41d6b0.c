// 函数: sub_41d6b0
// 地址: 0x41d6b0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* result
result.b = data_2b5a93b

if (result.b != 0xff)
    sub_414960(0, zx.w(result.b) | 0x4000)
    *(data_e7e648 + 0x2094c) = data_2b5a93b
    sub_408ef0()
    sub_4167c0(zx.d(*(data_e7e648 + 0x2094c)), 1)
    sub_408cd0(*(data_e7e648 + 0xbf0c0))
    *(data_e7e648 + 0x2094d) = data_2b5a93c
    result = data_e7e648
    *(result + 0x20950) = 2
    *(data_e7e648 + 0x20952) = 0

return result
