// 函数: sub_405d00
// 地址: 0x405d00
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ebx
int32_t var_4 = ebx
int32_t result_1 = 0
void* eax = &data_2b697d1
int32_t result

while (true)
    if (*(eax - 0xd) == 0 && *eax == 0)
        result = result_1
        break
    
    result_1 += 1
    eax += 0x16c
    
    if (result_1 s>= 0xa)
        result = 0xffffffff
        break

char* ecx = arg2
char* edi_1 = result * 0x16c + 0x2b696be - ecx
char i

do
    i = *ecx
    *(edi_1 + ecx) = i
    ecx = &ecx[1]
while (i != 0)
*(result * 0x16c + 0x2b696b8) = arg1 * 0x208 + 0x2b68268
*(result * 0x16c + 0x2b696bd) = 1
*(result * 0x16c + 0x2b69814) = arg3
*(result * 0x16c + 0x2b69818) = arg4
sub_405af0(arg1 * 0x208 + 0x2b68268, result * 0x16c + 0x2b696b8)
return result
