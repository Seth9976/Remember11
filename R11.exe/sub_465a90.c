// 函数: sub_465a90
// 地址: 0x465a90
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void fileName
int32_t eax_1 = __security_cookie ^ &fileName
sub_4658f0(&fileName, arg2)

if (arg3 == 0)
    enum FILE_FLAGS_AND_ATTRIBUTES dwFlagsAndAttributes = FILE_FLAG_SEQUENTIAL_SCAN
    
    if (arg4 != 0)
        dwFlagsAndAttributes = FILE_FLAG_OVERLAPPED
    
    int32_t var_214_1 = 0
    int32_t var_220_1 = 0
    *(arg1 + 4) = CreateFileW(&fileName, 0x80000000, FILE_SHARE_READ, nullptr, OPEN_EXISTING, 
        dwFlagsAndAttributes, nullptr)
else if (arg3 == 1)
    int32_t var_214_2 = 0
    int32_t var_220_2 = 0
    *(arg1 + 4) = CreateFileW(&fileName, 0x40000000, FILE_SHARE_NONE, nullptr, CREATE_ALWAYS, 
        FILE_ATTRIBUTE_NORMAL, nullptr)
else if (arg3 == 2)
    int32_t var_214_3 = 0
    int32_t var_220_3 = 0
    *(arg1 + 4) = CreateFileW(&fileName, 0x40000000, FILE_SHARE_NONE, nullptr, OPEN_ALWAYS, 
        FILE_ATTRIBUTE_NORMAL, nullptr)

if (*(arg1 + 4) != 0xffffffff)
    sub_480cd2(eax_1 ^ &fileName)
    return 0

sub_465480(".\cfile.cpp", 0x36)
sub_480cd2(eax_1 ^ &fileName)
return 0x80004005
