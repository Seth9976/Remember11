// 函数: sub_450540
// 地址: 0x450540
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

wchar16 pathName[0x104]
int32_t eax_1 = __security_cookie ^ &pathName
data_c77a9c = 0xb

if (arg1 != 0 || arg2 != 0)
    data_c77ef0 = 0xfffffff5
    sub_480cd2(eax_1 ^ &pathName)
    return 0

sub_4503d0(&pathName, arg3)

if (CreateDirectoryW(&pathName, nullptr) != 0)
    data_c77ef0 = 0
    sub_480cd2(eax_1 ^ &pathName)
    return 0

int32_t eax_6 = GetLastError() - 0xb7
int32_t eax_7 = neg.d(eax_6)
data_c77ef0 = sbb.d(eax_7, eax_7, eax_6 != 0) - 4
sub_480cd2(eax_1 ^ &pathName)
return 0
