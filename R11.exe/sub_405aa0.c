// 函数: sub_405aa0
// 地址: 0x405aa0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

char* eax = arg2
char* esi_1 = arg1 * 0x208 + 0x2b68370 - eax
char i

do
    i = *eax
    *(esi_1 + eax) = i
    eax = &eax[1]
while (i != 0)

char* result = arg3
char* esi_3 = arg1 * 0x208 + 0x2b68270 - result

do
    i = *result
    *(esi_3 + result) = i
    result = &result[1]
while (i != 0)

*(arg1 * 0x208 + 0x2b6826c) = arg1
*(arg1 * 0x208 + 0x2b68268) = 3
return result
