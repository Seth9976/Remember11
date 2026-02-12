// 函数: sub_482e0a
// 地址: 0x482e0a
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

sub_488c42()
void* eax_1 = sub_488c27(sub_488c3c())

if (eax_1 != 0)
    *(eax_1 + 0x54) = arg1[0x15]
    *(eax_1 + 0x58) = arg1[0x16]
    *(eax_1 + 4) = arg1[1]
    sub_488e18(arg1)
else
    if (sub_488c74(sub_488c3c(), arg1) == 0)
        ExitThread(GetLastError())
        noreturn
    
    *arg1 = GetCurrentThreadId()

__IsNonwritableInCurrentImage(&data_4a5fe0)
__callthreadstartex()
noreturn
