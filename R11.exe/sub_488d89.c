// 函数: sub_488d89
// 地址: 0x488d89
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

enum WIN32_ERROR dwErrCode = GetLastError()
void* result = sub_488c42()(data_4cc748)

if (result == 0)
    result = sub_48b2bc(1, 0x214)
    
    if (result != 0)
        if (sub_488bb0(data_c7b264)(data_4cc748, result) == 0)
            sub_4813df(result)
            result = nullptr
        else
            sub_488cca(result, 0)
            uint32_t eax_5 = GetCurrentThreadId()
            *(result + 4) = 0xffffffff
            *result = eax_5

SetLastError(dwErrCode)
return result
