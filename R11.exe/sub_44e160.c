// 函数: sub_44e160
// 地址: 0x44e160
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$??2@YAPAXIW4align_val_t@std@@ABUnothrow_t@1@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
void* esi = arg1
void* i = arg2
void* var_18 = esi
int32_t var_8_1 = 0

while (i u> 0)
    arg2 = esi
    void* var_1c_1 = esi
    var_8_1.b = 1
    
    if (esi != 0)
        *(esi + 0x18) = 0xf
        *(esi + 0x14) = 0
        *(esi + 4) = 0
        result = sub_44b8e0(esi, arg3, nullptr, 0xffffffff)
    
    i -= 1
    esi += 0x1c
    var_8_1.b = 0
    arg1 = esi

fsbase->NtTib.ExceptionList = ExceptionList
return result
