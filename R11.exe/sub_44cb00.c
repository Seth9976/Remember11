// 函数: sub_44cb00
// 地址: 0x44cb00
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (arg2 == 0)
    *arg1 = arg2
    return 

int32_t cchWideChar = lstrlenW(arg2) + 1
int32_t cbMultiByte_1 = cchWideChar << 2
sub_44c9c0(arg1, cbMultiByte_1, &arg1[1], 0x80)
int32_t eax_3 =
    WideCharToMultiByte(arg3, 0, arg2, cchWideChar, *arg1, cbMultiByte_1, nullptr, nullptr)
int32_t esi_1 = neg.d(eax_3)
int32_t esi_2 = sbb.d(esi_1, esi_1, eax_3 != 0)
int32_t esi_3 = esi_2 + 1

if (esi_2 == 0xffffffff)
    return 

if (GetLastError() == 0x7a)
    int32_t cbMultiByte =
        WideCharToMultiByte(arg3, 0, arg2, cchWideChar, nullptr, 0, nullptr, nullptr)
    sub_44c9c0(arg1, cbMultiByte, &arg1[1], 0x80)
    eax_3 = WideCharToMultiByte(arg3, 0, arg2, cchWideChar, *arg1, cbMultiByte, nullptr, nullptr)
    int32_t esi_6 = neg.d(eax_3)
    esi_3 = sbb.d(esi_6, esi_6, eax_3 != 0) + 1

if (esi_3 != 0)
    sub_44c910()
    noreturn
