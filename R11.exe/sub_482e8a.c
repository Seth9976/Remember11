// 函数: sub_482e8a
// 地址: 0x482e8a
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ecx
int32_t var_8 = ecx
int32_t edi = arg3
enum WIN32_ERROR var_8_1 = NO_ERROR

if (edi == 0)
    *__errno() = 0x16
    sub_481d1b(0, 0, 0, 0, 0)
    return nullptr

sub_488c42()
void* lpParameter = sub_48b2bc(1, 0x214)

if (lpParameter != 0)
    sub_488cca(lpParameter, *(__getptd() + 0x6c))
    *(lpParameter + 4) = 0xffffffff
    *(lpParameter + 0x58) = arg4
    int32_t* lpThreadId = arg6
    *(lpParameter + 0x54) = edi
    
    if (lpThreadId == 0)
        lpThreadId = &arg3
    
    HANDLE result = CreateThread(arg1, arg2, sub_482e0a, lpParameter, arg5, lpThreadId)
    
    if (result != 0)
        return result
    
    var_8_1 = GetLastError()

sub_4813df(lpParameter)

if (var_8_1 != NO_ERROR)
    sub_48508b(var_8_1)

return nullptr
