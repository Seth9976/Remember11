// 函数: sub_41d1f0
// 地址: 0x41d1f0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* eax_10 = data_a5d908
int32_t ecx = *(eax_10 + 0xdc)
char* esi = arg1
*(eax_10 + 0xd4) = arg2
*(eax_10 + 0xd8) = arg3
uint32_t eax
int32_t* ecx_2
eax, ecx_2 = sub_4812dc(esi, 0x49ee00, 2)
void* edx_4

if (eax != 0)
    uint32_t eax_4
    eax_4, ecx_2 = sub_4812dc(esi, 0x49edfc, 2)
    edx_4 = data_a5d908
    
    if (eax_4 != 0)
        *(((*(edx_4 + 0xdc) + 2) << 4) + edx_4) = 0
    else
        *(((*(edx_4 + 0xdc) + 2) << 4) + edx_4) = 2
        esi = &esi[2]
else
    edx_4 = data_a5d908
    *(((*(edx_4 + 0xdc) + 2) << 4) + edx_4) = 1
    esi = &esi[2]

char* eax_8 = esi
char i

do
    i = *eax_8
    *((ecx << 6) + eax_10 + 0xe4 - esi + eax_8) = i
    eax_8 = &eax_8[1]
while (i != 0)
*(ecx * 0x22c + eax_10 + 0x3e4) = (ecx << 6) + eax_10 + 0xe4
sub_43c280(ecx * 0x22c + eax_10 + 0x3e4, *(edx_4 + 0xd4), *(edx_4 + 0xdc) << 5, 0x1a)
sub_43bdf0(ecx * 0x22c + eax_10 + 0x3f4, ecx * 0x22c + eax_10 + 0x3e4, 0x1000)
void* result = data_a5d908
int32_t edi_1 = *(ecx * 0x22c + eax_10 + 0x604)
*(result + 0xdc) += 1

if (*(result + 0xe0) s< edi_1)
    *(result + 0xe0) = edi_1

return result
