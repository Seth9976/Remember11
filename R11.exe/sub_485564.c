// 函数: sub_485564
// 地址: 0x485564
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* var_14
sub_481612(&var_14, arg2)
char* esi = arg1

for (bool cond:0 = sub_4817ab(sx.d(*esi)) != 0x65; cond:0; cond:0 = sub_48e6dc(zx.d(*esi)) != 0)
    esi = &esi[1]

if (sub_4817ab(sx.d(*esi)) == 0x78)
    esi = &esi[2]

uint32_t result
result.b = *esi
char* ecx_5
ecx_5.b = ***(var_14 + 0xbc)
*esi = ecx_5.b
void* esi_2 = &esi[1]

do
    ecx_5.b = *esi_2
    *esi_2 = result.b
    result.b = ecx_5.b
    ecx_5.b = *esi_2
    esi_2 += 1
while (ecx_5.b != 0)

char var_8

if (var_8 != ecx_5.b)
    uint32_t result_1
    result = result_1
    *(result + 0x70) &= 0xfffffffd

return result
