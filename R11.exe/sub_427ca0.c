// 函数: sub_427ca0
// 地址: 0x427ca0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

arg1[1] = arg2
arg1[2] = arg3
arg1[0x89] = arg5
char* eax_2 = arg4
*arg1 = 1
arg1[0x8b] = arg6
void* esi_1 = &arg1[3] - eax_2
int32_t ecx_1

do
    ecx_1.b = *eax_2
    *(esi_1 + eax_2) = ecx_1.b
    eax_2 = &eax_2[1]
while (ecx_1.b != 0)
return sub_446d10(&data_4b20bc, arg1, 0x37c, 2)
