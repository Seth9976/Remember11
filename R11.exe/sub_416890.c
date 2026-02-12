// 函数: sub_416890
// 地址: 0x416890
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t eax
int32_t edx
edx:eax = sx.q(arg2)
int32_t result = (eax - edx) s>> 1

if (result == 0)
    result = 1

*(arg1 * 0x104 + data_e7e648 + 0x1f5e8) = result.b
return result
