// 函数: sub_488c42
// 地址: 0x488c42
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t lpTlsValue = TlsGetValue(data_4cc74c)

if (lpTlsValue == 0)
    lpTlsValue = sub_488bb0(data_c7b260)
    TlsSetValue(data_4cc74c, lpTlsValue)

return lpTlsValue
