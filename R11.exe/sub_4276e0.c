// 函数: sub_4276e0
// 地址: 0x4276e0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

*(arg1 + 4) = arg2
*(arg1 + 0x22c) = arg5
*(arg1 + 8) = arg3
*(arg1 + 0x234) = arg7
char* eax_3 = arg4
*(arg1 + 0x238) = arg6
void* esi_1 = arg1 + 0xc - eax_3
int32_t ecx_1

do
    ecx_1.b = *eax_3
    *(esi_1 + eax_3) = ecx_1.b
    eax_3 = &eax_3[1]
while (ecx_1.b != 0)
return sub_446d10(&data_4be3a4, arg1, 0x37c, 2)
