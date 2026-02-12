// 函数: sub_479840
// 地址: 0x479840
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_49ac0a
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct IMovieManager::Movie::CMovieManager::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct IMovieManager::Movie::CMovieManager::VTable** var_10_1 = arg1
*arg1 = &Movie::CMovieManager::`vftable'{for `IMovieManager'}
int32_t var_4 = 6
sub_479790(arg1)
EnterCriticalSection(&data_c7a9cc)
int32_t* eax_3 = arg1[8]

if (eax_3 != 0)
    (*(*eax_3 + 8))(eax_3)
    arg1[8] = 0

int32_t* eax_4 = arg1[9]

if (eax_4 != 0)
    (*(*eax_4 + 8))(eax_4)
    arg1[9] = 0

LeaveCriticalSection(&data_c7a9cc)
int32_t* eax_5 = arg1[6]
var_4.b = 5

if (eax_5 != 0)
    (*(*eax_5 + 8))(eax_5)

int32_t* eax_6 = arg1[5]
var_4.b = 4

if (eax_6 != 0)
    (*(*eax_6 + 8))(eax_6)

int32_t* eax_7 = arg1[4]
var_4.b = 3

if (eax_7 != 0)
    (*(*eax_7 + 8))(eax_7)

int32_t* eax_8 = arg1[3]
var_4.b = 2

if (eax_8 != 0)
    (*(*eax_8 + 8))(eax_8)

int32_t* eax_9 = arg1[2]
var_4.b = 1

if (eax_9 != 0)
    (*(*eax_9 + 8))(eax_9)

int32_t* result = arg1[1]
var_4.b = 0

if (result != 0)
    result = (*(*result + 8))(result)

*arg1 = &IMovieManager::`vftable'
fsbase->NtTib.ExceptionList = ExceptionList
return result
