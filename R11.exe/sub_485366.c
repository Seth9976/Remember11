// 函数: sub_485366
// 地址: 0x485366
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

bool p = unimplemented  {sub esp, 0x328}
bool a = unimplemented  {sub esp, 0x328}
data_c7ab88 = arg1
data_c7ab84 = arg3
data_c7ab80 = arg2
int32_t entry_ebx
data_c7ab7c = entry_ebx
data_c7ab78 = arg5
data_c7ab74 = arg6
int16_t ss
data_c7aba0 = ss
int16_t cs
data_c7ab94 = cs
int16_t ds
data_c7ab70 = ds
int16_t es
data_c7ab6c = es
int16_t fs
data_c7ab68 = fs
int16_t gs
data_c7ab64 = gs
int32_t var_32c
int32_t var_4
bool d
int32_t var_330 = (add_overflow(&var_4, 0xfffffcd8) ? 1 : 0) << 0xb | (d ? 1 : 0) << 0xa
    | (&var_32c s< 0 ? 1 : 0) << 7 | (&var_4 == 0x328 ? 1 : 0) << 6 | (a ? 1 : 0) << 4
    | (p ? 1 : 0) << 2 | (&var_4 u< 0x328 ? 1 : 0)
data_c7ab98 = var_330
data_c7ab8c = arg4
data_c7ab90 = __return_addr
void arg_4
data_c7ab9c = &arg_4
data_c7aad8 = 0x10001
data_c7aa8c = data_c7ab90
data_c7aa80 = 0xc0000409
data_c7aa84 = 1
uint32_t __security_cookie_1 = __security_cookie
int32_t var_328 = data_4cba94
data_c7aad0 = IsDebuggerPresent()
sub_489fa4()
SetUnhandledExceptionFilter(0)
UnhandledExceptionFilter(&data_4a611c)

if (data_c7aad0 == 0)
    sub_489fa4()

TerminateProcess(GetCurrentProcess(), 0xc0000409)
noreturn
