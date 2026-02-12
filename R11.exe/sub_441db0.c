// 函数: sub_441db0
// 地址: 0x441db0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ecx = data_c7cc80
void* eax = arg1 * 0x7c
int32_t ebx = *(eax + ecx + 0x24)
void* esi = eax + ecx
int32_t eax_1 = *(esi + 0x28)
int32_t edi = *(esi + 0x10)
*(esi + 0x24) = sub_47b730
*(esi + 0x70) = arg2
eax_1(esi)
int32_t eax_3 = *(esi + 0x70) - *(esi + 8)
int32_t temp2 = *(esi + 0x6c)
*(esi + 0x24) = ebx
uint32_t result
result.w = *(edi + (divu.dp.d(0:eax_3, temp2) << 1))
return result
