// 函数: sub_441b20
// 地址: 0x441b20
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

char* esi = *(arg1 + 0x70)
int32_t i = 0
void* ecx = &data_c7cc88

if (*(arg1 + 0x6c) s<= 0)
    return 

do
    uint8_t eax = *esi u>> 4
    *ecx = eax
    *ecx = *esi << 4 | eax
    i += 1
    ecx += 1
    esi = &esi[1]
while (i s< *(arg1 + 0x6c))
