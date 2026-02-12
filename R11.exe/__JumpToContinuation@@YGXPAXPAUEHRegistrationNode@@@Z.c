// 函数: ?_JumpToContinuation@@YGXPAXPAUEHRegistrationNode@@@Z
// 地址: 0x4820a3
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* var_8 = arg2 + 0xc
TEB* fsbase
fsbase->NtTib.ExceptionList = fsbase->NtTib.ExceptionList->Next
*(arg2 - 4)
jump(arg1)
