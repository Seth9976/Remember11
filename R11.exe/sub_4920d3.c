// 函数: sub_4920d3
// 地址: 0x4920d3
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

sub_480cd2(arg1[-4] ^ arg1)
TEB* fsbase
fsbase->NtTib.ExceptionList = arg1[-3]
*arg1
*arg1 = __return_addr
