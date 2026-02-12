// 函数: sub_409c70
// 地址: 0x409c70
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ebx
int32_t ebp

if (data_2b603b0 != 0)
    ebx = data_a59760
    ebp = data_a59764
else
    ebx = data_a595f0
    ebp = data_a595f4

if (arg1 != 0xffffffff)
    ebx = (arg1 u>> 0xd & 0x1ff) | (ebx & 0xfffffe00)

int16_t* esi = *data_c7bbcc
int32_t eax_4 = sub_448f10(esi, 1)
*(esi + 0x28) = data_a595f8
*(esi + 0x2c) = data_a595fc
*(esi + 0x20) = ebx
*(esi + 0x24) = ebp
sub_448880(data_c7bbc8, arg2, esi)
int32_t* result = data_c7bbcc
*result += eax_4 << 4
return result
