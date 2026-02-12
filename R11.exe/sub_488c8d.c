// 函数: sub_488c8d
// 地址: 0x488c8d
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t eax_2 = data_4cc748

if (eax_2 != 0xffffffff)
    sub_488bb0(data_c7b268)(eax_2)
    data_4cc748 = 0xffffffff

uint32_t dwTlsIndex = data_4cc74c

if (dwTlsIndex != 0xffffffff)
    TlsFree(dwTlsIndex)
    data_4cc74c = 0xffffffff

return sub_486650() __tailcall
