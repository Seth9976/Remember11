// 函数: sub_46fe20
// 地址: 0x46fe20
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

HWND hWnd = sub_46f1f0()

if (hWnd != 0)
    SendMessageW(hWnd, 0x10, 0, 0)

sub_46ff00()

if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
    EnterCriticalSection(&data_c79d54)

data_c79fac = arg1

if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
    LeaveCriticalSection(&data_c79d54)

sub_46f570(1)
sub_46e8b0(1)
sub_46ff00()

if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
    EnterCriticalSection(&data_c79d54)

data_c79d98 = 0

if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
    LeaveCriticalSection(&data_c79d54)

int32_t* eax_1 = sub_471040()

if (eax_1 != 0)
    (*(*eax_1 + 8))(eax_1)

int32_t result = sub_46ff00()

if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
    result = EnterCriticalSection(&data_c79d54)

data_c79d90 = 0

if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b == 0)
    return result

return LeaveCriticalSection(&data_c79d54)
