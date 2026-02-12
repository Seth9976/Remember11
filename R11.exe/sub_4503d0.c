// 函数: sub_4503d0
// 地址: 0x4503d0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* var_310
int32_t eax_1 = __security_cookie ^ &var_310
void pszMore
void* esi_2
bool cond:1
void var_30c

if (*arg2 != 0x2f)
    void* eax_5 = &data_c77ce8
    int16_t i
    
    do
        i = *eax_5
        *(arg1 - &data_c77ce8 + eax_5) = i
        eax_5 += 2
    while (i != 0)
    var_310 = &var_30c
    sub_44ca50(&var_310, arg2, data_4ccfa0())
    esi_2 = var_310
    void* eax_7 = esi_2
    int16_t i_1
    
    do
        i_1 = *eax_7
        *(&pszMore - esi_2 + eax_7) = i_1
        eax_7 += 2
    while (i_1 != 0)
    cond:1 = esi_2 == &var_30c
else
    void* eax_2 = &data_c77ae0
    int16_t i_2
    
    do
        i_2 = *eax_2
        *(arg1 - &data_c77ae0 + eax_2) = i_2
        eax_2 += 2
    while (i_2 != 0)
    var_310 = &var_30c
    sub_44ca50(&var_310, &arg2[1], data_4ccfa0())
    esi_2 = var_310
    void* eax_4 = esi_2
    int16_t i_3
    
    do
        i_3 = *eax_4
        *(&pszMore - esi_2 + eax_4) = i_3
        eax_4 += 2
    while (i_3 != 0)
    cond:1 = esi_2 == &var_30c

if (not(cond:1))
    sub_4813df(esi_2)

PathRemoveBackslashW(arg1)
PathAppendW(arg1, &pszMore)
wchar16* eax_8 = arg1

if (*arg1 != 0)
    do
        if (*eax_8 == 0x2f)
            *eax_8 = 0x5c
        
        eax_8 = &eax_8[1]
    while (*eax_8 != 0)

PathRemoveBackslashW(arg1)
wchar16* eax_9 = arg1
wchar16 i_4

do
    i_4 = *eax_9
    *(&pszMore - arg1 + eax_9) = i_4
    eax_9 = &eax_9[1]
while (i_4 != 0)
void* result = sub_44ff10(arg1, &pszMore)
sub_480cd2(eax_1 ^ &var_310)
return result
