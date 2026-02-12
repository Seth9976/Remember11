// 函数: sub_46cca0
// 地址: 0x46cca0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

OSVERSIONINFOA versionInformation
int32_t eax_1 = __security_cookie ^ &versionInformation
var_94
sub_480cf0(&var_94, 0, 0x90)
versionInformation.dwOSVersionInfoSize = 0x94
GetVersionExA(&versionInformation)
int32_t result
result.b = versionInformation.dwPlatformId == 2
sub_480cd2(eax_1 ^ &versionInformation)
return result
