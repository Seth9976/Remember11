// 函数: sub_405a30
// 地址: 0x405a30
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

char* eax = arg2
char* edx_1 = arg1 * 0x208 + 0x2b68270 - eax
char i

do
    i = *eax
    *(edx_1 + eax) = i
    eax = &eax[1]
while (i != 0)
sub_44f6c0(arg1, arg1 * 0x208 + 0x2b68270, nullptr, arg3)
int32_t i_1

for (i_1 = sub_44cec0(arg1); i_1 != 3; i_1 = sub_44cec0(arg1))

*(arg1 * 0x208 + 0x2b6826c) = arg1
*(arg1 * 0x208 + 0x2b68268) = 2
return i_1
