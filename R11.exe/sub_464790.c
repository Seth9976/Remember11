// 函数: sub_464790
// 地址: 0x464790
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* var_908
int32_t eax_1 = __security_cookie ^ &var_908
void var_904
var_908 = &var_904
sub_44ca50(&var_908, arg1, data_4ccfa0())
void* esi_1 = var_908
void* eax_3 = esi_1
void var_804
int16_t i

do
    i = *eax_3
    *(&var_804 - esi_1 + eax_3) = i
    eax_3 += 2
while (i != 0)

if (esi_1 != &var_904)
    sub_4813df(esi_1)

int32_t var_910_2 = arg2
void* var_914_1 = &var_804
void text
sub_44cd80(&text, u"Error %s:%d ")
enum MESSAGEBOX_RESULT result = MessageBoxW(nullptr, &text, &data_49ea48, MB_ICONHAND)
sub_480cd2(eax_1 ^ &var_908)
return result
