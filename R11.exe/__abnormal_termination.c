// 函数: __abnormal_termination
// 地址: 0x4921d9
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList

if (ExceptionList->Handler == __unwind_handler
        && ExceptionList->__offset(0x8).d == *(ExceptionList->__offset(0xc).d + 0xc))
    return 1

return 0
