// 函数: sub_44cbd0
// 地址: 0x44cbd0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* var_518
int32_t eax_1 = __security_cookie ^ &var_518
void var_514
var_518 = &var_514
sub_44ca50(&var_518, arg1, data_4ccfa0())
void* esi_1 = var_518
void* eax_3 = esi_1
wchar16 pszPath[0x104]
int16_t i

do
    i = *eax_3
    *(&pszPath - esi_1 + eax_3) = i
    eax_3 += 2
while (i != 0)

if (esi_1 != &var_514)
    sub_4813df(esi_1)

PathRenameExtensionW(&pszPath, u".AVI")
var_518 = &var_514
sub_44cb00(&var_518, &pszPath, data_4ccfa0())
wchar16 var_20c[0x104]
sub_44d1f0(&var_20c, var_518)
void* eax_5 = var_518

if (eax_5 != &var_514)
    sub_4813df(eax_5)

var_518 = &var_514
sub_44cb00(&var_518, &var_20c, data_4ccfa0())
char const* const var_5a8 = "Start Movie %s\n"
void var_5a4
__builtin_memcpy(&var_5a4, &var_518, 0x84)
sub_4653f0(var_5a8)
void* eax_7 = var_518

if (eax_7 != &var_514)
    sub_4813df(eax_7)

int32_t* ecx_3 = data_c78660

if (ecx_3 != 0)
    (**ecx_3)(1)
    data_c78660 = 0

char const* const var_528_5 = "print Movie Manager\n"
data_c78660 = sub_479ca0(data_c7866c)
sub_4653f0(var_528_5)
int32_t result = (*(*data_c78660 + 0x18))(&var_20c)
sub_480cd2(eax_1 ^ &var_518)
return result
