// 函数: sub_427d00
// 地址: 0x427d00
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

*(arg1 + 4) = arg2
*(arg1 + 0x224) = arg5
*(arg1 + 0x22c) = arg6
char* eax_1 = arg4
*(arg1 + 8) = arg3
void* edx_2 = arg1 + 0xc - eax_1
int32_t ecx

do
    ecx.b = *eax_1
    *(edx_2 + eax_1) = ecx.b
    eax_1 = &eax_1[1]
while (ecx.b != 0)
return sub_446d10(&data_4be398, arg1, 0x37c, 2)
