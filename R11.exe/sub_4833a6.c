// 函数: sub_4833a6
// 地址: 0x4833a6
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ecx
int32_t var_8 = ecx
enum WIN32_ERROR var_8_1 = NO_ERROR

if (arg1 == 0)
    *__errno() = 0x16
    sub_481d1b(0, 0, 0, 0, 0)
    return 0xffffffff

sub_488c42()
void* eax_2 = sub_48b2bc(1, 0x214)

if (eax_2 != 0)
    sub_488cca(eax_2, *(__getptd() + 0x6c))
    *(eax_2 + 0x54) = arg1
    *(eax_2 + 0x58) = arg3
    HANDLE hThread = CreateThread(nullptr, arg2, 0x483332, eax_2, THREAD_CREATE_SUSPENDED, eax_2)
    *(eax_2 + 4) = hThread
    
    if (hThread != 0 && ResumeThread(hThread) != 0xffffffff)
        return hThread
    
    var_8_1 = GetLastError()

sub_4813df(eax_2)

if (var_8_1 != NO_ERROR)
    sub_48508b(var_8_1)

return 0xffffffff
