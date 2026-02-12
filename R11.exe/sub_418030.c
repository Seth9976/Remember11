// 函数: sub_418030
// 地址: 0x418030
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ecx = data_e7e648
int32_t eax = arg1 * 0x104
int32_t edx = *(eax + ecx + 0x1f61c)
*(eax + ecx + 0x1f5fc) += edx
int32_t ecx_1 = *(eax + ecx + 0x1f618)
*(eax + ecx + 0x1f5f8) += ecx_1
*(eax + ecx + 0x1f630) = ecx_1
*(eax + ecx + 0x1f634) = edx
*(eax + ecx + 0x1f618) = 0
*(eax + ecx + 0x1f61c) = 0
return eax + ecx + 0x1f5dc
