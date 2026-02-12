// 函数: sub_419c80
// 地址: 0x419c80
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* ebx = data_e7e648
uint32_t esi = zx.d(*(ebx + 0x2856))
int32_t edi = data_2b55e88
char* ecx = *(edi + (esi << 3))
void* edx = &data_a5c0f8
char i

do
    i = *ecx
    *edx = i
    ecx = &ecx[1]
    edx += 1
while (i != 0)
int16_t* eax = &data_a5c0f7

do
    ecx.b = *(eax + 1)
    eax += 1
while (ecx.b != 0)

edx.b = 0
*eax = 0x6081
eax[1].b = 0
char* eax_1 = *(edi + (esi << 3) + 4)
char* ecx_1 = eax_1

do
    edx.b = *eax_1
    eax_1 = &eax_1[1]
while (edx.b != 0)

void* eax_2 = eax_1 - ecx_1
char* esi_1 = ecx_1
void* edi_2 = &data_a5c0f7

do
    ecx_1.b = *(edi_2 + 1)
    edi_2 += 1
while (ecx_1.b != 0)

int32_t esi_2
int32_t edi_3
edi_3, esi_2 = __builtin_memcpy(edi_2, esi_1, eax_2 u>> 2 << 2)
__builtin_memcpy(edi_3, esi_2, eax_2 & 3)
eax_2.b = *(ebx + 0x2094c)
uint32_t eax_4

if (eax_2.b != 0xff)
    eax_4 = zx.d(eax_2.b) u>> 1
else
    eax_4 = data_2b5a854 - 1

data_a5b0f8 = 0x66826182
data_a5b0fc = 0x46816c82
int32_t edx_1 = data_2b5a850
data_a5b100 = 0
char* eax_6 = *(edx_1 + (eax_4 << 2))
char* esi_3 = eax_6
char i_1

do
    i_1 = *eax_6
    eax_6 = &eax_6[1]
while (i_1 != 0)

void* eax_7 = eax_6 - esi_3
void* edi_4 = &data_a5b0f7

do
    i_1 = *(edi_4 + 1)
    edi_4 += 1
while (i_1 != 0)

int32_t esi_4
int32_t edi_5
edi_5, esi_4 = __builtin_memcpy(edi_4, esi_3, eax_7 u>> 2 << 2)
__builtin_memcpy(edi_5, esi_4, eax_7 & 3)
data_a5b4f8 = 0xa282cd82
data_a5b4fc = 0xa282af82
data_a5b500 = 0x5b815b81
data_a5b504 = 0x5b81
data_a5b506 = 0
sub_4193d0()
sub_419670()
sub_419890()
int32_t edi_6 = 0
data_a59b80 = &data_a5c0f8
data_a59b90 = 0xa5c4f8
data_a59ba0 = 0xa5c8f8
data_a59bb0 = &data_a5ccf8
data_a59bc0 = 0xa5d0f8
data_a59b40 = &data_a5b0f8
data_a59b50 = &data_a5b4f8
data_a59b60 = &data_a5b8f8
data_a59b70 = &data_a5bcf8
data_a59bd0 = 0xa5d4f8
int32_t ebx_1 = 0

for (void* i_2 = &data_4b13c8; i_2 s< &data_4b13e8; )
    int32_t eax_9 = sub_43d220(ebx_1 + data_e7e648 + 0xab464, i_2, 0x11, edi_6, 0x1a, 0x1000)
    i_2 += 0x10
    edi_6 += eax_9
    ebx_1 += 0x44b4

sub_43c320(&data_a59b40, 0xa, 0x11, edi_6, 0x18)
return sub_43be40(0xa59be0, &data_a59b40, 0xa, 0x1000)
