// 函数: sub_44f6c0
// 地址: 0x44f6c0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (data_c777f0 != 0)
    sub_465480(".\libadxf.cpp", 0x2bd)

void* eax = sub_481fef(0x10)
void* esi

if (eax == 0)
    esi = nullptr
else
    *(eax + 4) = 0
    *(eax + 8) = 0
    esi = eax

*(esi + 4) = 0
*(esi + 8) = 0
*(esi + 0xc) = 0
*esi = arg1

if (arg2 != 0)
    *(esi + 4) = sub_49709b(arg2)

if (arg3 != 0)
    *(esi + 8) = sub_49709b(arg3)

*(esi + 0xc) = arg4
int32_t __saved_ecx
HANDLE eax_6 = sub_482e8a(nullptr, 0, sub_44f2a0, esi, THREAD_CREATE_RUN_IMMEDIATELY, &__saved_ecx)
data_4ca12c = arg1
data_c777f0 = eax_6
return 0
