// 函数: sub_465c50
// 地址: 0x465c50
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

uint32_t numberOfBytesWritten
int32_t eax_1 = __security_cookie ^ &numberOfBytesWritten
void fileName
sub_4658f0(&fileName, arg2)
HANDLE eax_3 = CreateFileW(&fileName, 0x40000000, FILE_SHARE_NONE, nullptr, CREATE_ALWAYS, 
    FILE_ATTRIBUTE_NORMAL, nullptr)

if (eax_3 == 0xffffffff)
    sub_465480(".\cfile.cpp", 0x36)

int32_t eax_4 = *(arg1 + 0x38)

if (eax_4 == 0 || *(arg1 + 0x3c) == eax_4)
    __invalid_parameter_noinfo()

WriteFile(eax_3, *(arg1 + 0x38), *(arg1 + 0x44), &numberOfBytesWritten, nullptr)

if (eax_3 != 0)
    CloseHandle(eax_3)

sub_480cd2(eax_1 ^ &numberOfBytesWritten)
return 0
