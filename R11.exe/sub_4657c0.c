// 函数: sub_4657c0
// 地址: 0x4657c0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

__chkstk(0x1008)
int32_t eax_1 = __security_cookie ^ &__return_addr
void buffer
void arg_1014
sub_4815fb(&buffer, arg2, &arg_1014)
void* eax_2 = &buffer
char i

do
    i = *eax_2
    eax_2 += 1
while (i != 0)
void arg_5
BOOL result = WriteFile(*(arg1 + 4), &buffer, eax_2 - &arg_5, &__return_addr, nullptr)
sub_480cd2(eax_1 ^ &__return_addr)
return result
