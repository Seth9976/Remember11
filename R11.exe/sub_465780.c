// 函数: sub_465780
// 地址: 0x465780
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

uint32_t lpBuffer = arg2
uint32_t lpBuffer_1 = lpBuffer
int32_t edi = lpBuffer_1 + 1
char i

do
    i = *lpBuffer_1
    lpBuffer_1 += 1
while (i != 0)
return WriteFile(*(arg1 + 4), lpBuffer, lpBuffer_1 - edi, &arg2, nullptr)
