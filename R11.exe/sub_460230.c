// 函数: sub_460230
// 地址: 0x460230
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_49a436
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct IGraphicManager::RenderSpace::CGraphicManager::VTable** var_10 = arg1
int32_t var_14 = __security_cookie ^ &var_10
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &RenderSpace::CGraphicManager::`vftable'{for `IGraphicManager'}
arg1[0x73a] = 0
arg1[0x73b] = 0
arg1[0x73c] = 0
arg1[0x741] = 0
arg1[0x742] = 0
arg1[0x743] = 0
arg1[2] = 0
arg1[3] = 0
arg1[0x731] = 0
arg1[0x732] = 0
arg1[0x11074c].b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
