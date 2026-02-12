// 函数: sub_45fb20
// 地址: 0x45fb20
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

sub_45f9a0(0x4cad48)
LRESULT result = (*(*arg1 + 0xa4))(arg1)

if (result s< 0)
    data_c7862a = 1
else
    result = sub_45f7a0(arg1)

if (data_c78628 != 1)
    return result

return SendMessageW(sub_46f1f0(), 0x10, 0, 0)
