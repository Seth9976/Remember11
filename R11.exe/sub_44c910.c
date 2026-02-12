// 函数: sub_44c910
// 地址: 0x44c910
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

enum WIN32_ERROR eax_1 = GetLastError()

if (eax_1 s> NO_ERROR)
    eax_1 = (eax_1 & 0xffff) | 0x80070000

sub_44c8f0(eax_1)
noreturn
