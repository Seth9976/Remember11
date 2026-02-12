// 函数: sub_482059
// 地址: 0x482059
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

uint32_t dwExceptionCode
__builtin_memcpy(&dwExceptionCode, 0x4a601c, 0x20)
int32_t var_c = arg1
char* var_8 = arg2
uint32_t arguments

if (arg2 != 0 && (*arg2 & 8) != 0)
    arguments = 0x1994000

uint32_t dwExceptionFlags
uint32_t nNumberOfArguments
RaiseException(dwExceptionCode, dwExceptionFlags, nNumberOfArguments, &arguments)
noreturn
