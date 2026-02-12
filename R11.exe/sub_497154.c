// 函数: sub_497154
// 地址: 0x497154
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
OSVERSIONINFOA versionInformation
versionInformation.dwOSVersionInfoSize = 0x94
GetVersionExA(&versionInformation)
int32_t (* eax_2)()

if (versionInformation.dwPlatformId == 2)
    eax_2 = sub_497150

if (versionInformation.dwPlatformId != 2 || versionInformation.dwMajorVersion u< 5)
    eax_2 = sub_4970eb

InterlockedExchange(&data_4ccfa0, eax_2)
int32_t result = data_4ccfa0()
sub_480cd2(eax_1 ^ &__saved_ebp)
return result
