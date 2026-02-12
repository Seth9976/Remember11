// 函数: sub_45c100
// 地址: 0x45c100
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

struct IMalloc ppMalloc
int32_t eax_1 = __security_cookie ^ &ppMalloc
SHGetMalloc(&ppMalloc)
struct ITEMIDLIST* var_210
wchar16 pszPath[0x104]

if (SHGetSpecialFolderLocation(nullptr, 0x1a, &var_210) s>= 0)
    SHGetPathFromIDListW(var_210, &pszPath)
    struct IMalloc ppMalloc_1 = ppMalloc
    (*(*ppMalloc_1 + 0x14))(ppMalloc_1, var_210)

struct IMalloc ppMalloc_2 = ppMalloc
(*(*ppMalloc_2 + 8))(ppMalloc_2)
wchar16 (* eax_5)[0x104] = &pszPath
wchar16 i

do
    i = *eax_5
    *(arg1 - &pszPath + eax_5) = i
    eax_5 = &(*eax_5)[1]
while (i != 0)

void* eax_7 = &arg1[-1]

do
    i = *(eax_7 + 2)
    eax_7 += 2
while (i != 0)

__builtin_memcpy(eax_7, u"\\REMEMBER11", 0x18)
CreateDirectoryW(arg1, nullptr)
void* eax_9 = &arg1[-1]
int16_t i_1

do
    i_1 = *(eax_9 + 2)
    eax_9 += 2
while (i_1 != 0)
*eax_9 = 0x30ad005c
*(eax_9 + 4) = 0x8a2d30fc
*(eax_9 + 8) = 0x5b9a
CreateDirectoryW(arg1, nullptr)
void* edi_1 = &arg1[-1]
int16_t i_2

do
    i_2 = *(edi_1 + 2)
    edi_1 += 2
while (i_2 != 0)
*edi_1 = 0x5c
int16_t* eax_10 = arg2
int16_t i_3

do
    i_3 = *eax_10
    eax_10 = &eax_10[1]
while (i_3 != 0)

void* result = eax_10 - arg2
void* edi_2 = &arg1[-1]

do
    i_3 = *(edi_2 + 2)
    edi_2 += 2
while (i_3 != 0)

int32_t esi_1
int32_t edi_3
edi_3, esi_1 = __builtin_memcpy(edi_2, arg2, result u>> 2 << 2)
__builtin_memcpy(edi_3, esi_1, result & 3)
sub_480cd2(eax_1 ^ &ppMalloc)
return result
