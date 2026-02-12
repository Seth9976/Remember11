// 函数: sub_4933c7
// 地址: 0x4933c7
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp

if (data_4cca84 == 0)
    goto label_493446

if (data_4ccb6c == 0xfffffffe)
    ___initconout()

BOOL result = data_4ccb6c
uint32_t numberOfCharsWritten
wchar16 arg_4

if (result != 0xffffffff)
    if (WriteConsoleW(result, &arg_4, 1, &numberOfCharsWritten, nullptr) != 0)
        data_4cca84 = 1
        result.w = arg_4
    else if (data_4cca84 != 2)
        result.w = 0xffff
    else if (GetLastError() != 0x78)
        result.w = 0xffff
    else
        data_4cca84 = 0
    label_493446:
        void var_10
        result =
            WideCharToMultiByte(GetConsoleOutputCP(), 0, &arg_4, 1, &var_10, 5, nullptr, nullptr)
        HANDLE hConsoleOutput = data_4ccb6c
        
        if (hConsoleOutput == 0xffffffff)
            result.w = 0xffff
        else if (WriteConsoleA(hConsoleOutput, &var_10, result, &numberOfCharsWritten, nullptr)
                == 0)
            result.w = 0xffff
        else
            result.w = arg_4
else
    result.w = 0xffff
sub_480cd2(eax_1 ^ &__saved_ebp)
return result
