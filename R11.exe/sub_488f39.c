// 函数: sub_488f39
// 地址: 0x488f39
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (data_4cc748 != 0xffffffff)
    void* edi_1 = arg1
    
    if (edi_1 == 0 && TlsGetValue(data_4cc74c) != 0)
        edi_1 = TlsGetValue(data_4cc74c)(data_4cc748)
    
    sub_488bb0(data_c7b264)(data_4cc748, 0)
    sub_488e18(edi_1)

BOOL dwTlsIndex = data_4cc74c

if (dwTlsIndex == 0xffffffff)
    return dwTlsIndex

return TlsSetValue(dwTlsIndex, nullptr)
