// 函数: sub_41d400
// 地址: 0x41d400
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t eax = arg1
void* ecx = data_a5d908

if (eax == 0xffffffff)
    eax = sx.d(*(ecx + 7))

int32_t edx = arg2

if (edx == 0xffffffff)
    edx = *(ecx + 0xdc)

void* result = (eax << 4) + ecx
*(result + 0x14) = edx
*(result + 0x18) = arg3
int32_t edx_1
edx_1.w = arg4
*(result + 0x1c) = edx_1.w
edx_1.w = arg5
*(result + 0x1e) = edx_1.w
*(ecx + 7) += 1
return result
