// 函数: sub_419890
// 地址: 0x419890
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void var_104
int32_t eax_1 = __security_cookie ^ &var_104
int32_t edi = data_e7e648
int32_t ebp = 0

for (int32_t i = 0; i s< 0x10000; i += 4)
    uint32_t edx_2
    edx_2.b = *((i u>> 3) + edi + 0x220)
    edx_2.b u>>= i.b & 7
    
    if ((edx_2.b & 1) != 0)
        ebp += 1
    
    uint32_t edx_4
    edx_4.b = *(((i + 1) u>> 3) + edi + 0x220)
    edx_4.b u>>= (i.b + 1) & 7
    
    if ((edx_4.b & 1) != 0)
        ebp += 1
    
    uint32_t edx_6
    edx_6.b = *(((i + 2) u>> 3) + edi + 0x220)
    edx_6.b u>>= (i.b + 2) & 7
    
    if ((edx_6.b & 1) != 0)
        ebp += 1
    
    edx_6.b = *(((i + 3) u>> 3) + edi + 0x220)
    edx_6.b u>>= (i.b + 3) & 7
    
    if ((edx_6.b & 1) != 0)
        ebp += 1

int32_t ebx = *(data_2b55e84 + 0x804)

if (ebx s<= 0)
    ebx = 1

if (ebp s> ebx)
    ebp = ebx

sub_4414c0(divs.dp.d(sx.q(ebp * 0x64), ebx), &var_104, "%3d")
__builtin_memcpy(&data_a5ccf8, 
    "\x91\x53\x83\x81\x83\x62\x83\x5a\x81\x5b\x83\x57\x92\x42\x90\xac\x97\xa6\x81\x46\x00", 0x15)
void* eax_7 = &var_104
char i_1

do
    i_1 = *eax_7
    eax_7 += 1
while (i_1 != 0)
int32_t eax_8 = eax_7 - &var_104
void* edi_1 = &data_a5ccf7
char i_2

do
    i_2 = *(edi_1 + 1)
    edi_1 += 1
while (i_2 != 0)
int32_t esi_4
int32_t edi_2
edi_2, esi_4 = __builtin_memcpy(edi_1, &var_104, eax_8 u>> 2 << 2)
__builtin_memcpy(edi_2, esi_4, eax_8 & 3)
void* eax_9 = &data_a5ccf7
char i_3

do
    i_3 = *(eax_9 + 1)
    eax_9 += 1
while (i_3 != 0)
*eax_9 = 0x9381
*(eax_9 + 2) = 0
char* esi_5
char* edi_3
edi_3, esi_5 = __builtin_memcpy(0xa5d0f8, 0x49ed90, 0x1c)
*edi_3 = *esi_5
sub_4414c0(ebp, &var_104, "%d")
void* eax_10 = &var_104
char i_4

do
    i_4 = *eax_10
    eax_10 += 1
while (i_4 != 0)
int32_t eax_11 = eax_10 - &var_104
void* edi_5 = &data_a5d0f7
char i_5

do
    i_5 = *(edi_5 + 1)
    edi_5 += 1
while (i_5 != 0)
int32_t esi_7
int32_t edi_6
edi_6, esi_7 = __builtin_memcpy(edi_5, &var_104, eax_11 u>> 2 << 2)
__builtin_memcpy(edi_6, esi_7, eax_11 & 3)
void* eax_12 = &data_a5d0f7
char i_6

do
    i_6 = *(eax_12 + 1)
    eax_12 += 1
while (i_6 != 0)
*eax_12 = 0x5e81
*(eax_12 + 2) = 0
sub_4414c0(ebx, &var_104, "%d")
void* eax_13 = &var_104
char i_7

do
    i_7 = *eax_13
    eax_13 += 1
while (i_7 != 0)
int32_t eax_14 = eax_13 - &var_104
void* edi_7 = &data_a5d0f7
char i_8

do
    i_8 = *(edi_7 + 1)
    edi_7 += 1
while (i_8 != 0)
int32_t esi_8
int32_t edi_8
edi_8, esi_8 = __builtin_memcpy(edi_7, &var_104, eax_14 u>> 2 << 2)
__builtin_memcpy(edi_8, esi_8, eax_14 & 3)
int32_t edi_9 = data_e7e648
int32_t ebp_1 = 0

for (int32_t i_9 = 0; i_9 s< 0x800; i_9 += 4)
    uint32_t edx_10
    edx_10.b = *((i_9 u>> 3) + edi_9 + 0x2420)
    edx_10.b u>>= i_9.b & 7
    
    if ((edx_10.b & 1) != 0)
        ebp_1 += 1
    
    uint32_t edx_12
    edx_12.b = *(((i_9 + 1) u>> 3) + edi_9 + 0x2420)
    edx_12.b u>>= (i_9.b + 1) & 7
    
    if ((edx_12.b & 1) != 0)
        ebp_1 += 1
    
    uint32_t edx_14
    edx_14.b = *(((i_9 + 2) u>> 3) + edi_9 + 0x2420)
    edx_14.b u>>= (i_9.b + 2) & 7
    
    if ((edx_14.b & 1) != 0)
        ebp_1 += 1
    
    edx_14.b = *(((i_9 + 3) u>> 3) + edi_9 + 0x2420)
    edx_14.b u>>= (i_9.b + 3) & 7
    
    if ((edx_14.b & 1) != 0)
        ebp_1 += 1

int32_t ebx_1 = *(data_2b55e84 + 0x808)

if (ebx_1 s<= 0)
    ebx_1 = 1

if (ebp_1 s> ebx_1)
    ebp_1 = ebx_1

char* esi_12
char* edi_10
edi_10, esi_12 = __builtin_memcpy(0xa5d4f8, 0x49ed70, 0x1c)
*edi_10 = *esi_12
sub_4414c0(ebp_1, &var_104, "%d")
void* eax_16 = &var_104
char i_10

do
    i_10 = *eax_16
    eax_16 += 1
while (i_10 != 0)
int32_t eax_17 = eax_16 - &var_104
void* edi_12 = &data_a5d4f7
char i_11

do
    i_11 = *(edi_12 + 1)
    edi_12 += 1
while (i_11 != 0)
int32_t esi_14
int32_t edi_13
edi_13, esi_14 = __builtin_memcpy(edi_12, &var_104, eax_17 u>> 2 << 2)
__builtin_memcpy(edi_13, esi_14, eax_17 & 3)
void* eax_18 = &data_a5d4f7
char i_12

do
    i_12 = *(eax_18 + 1)
    eax_18 += 1
while (i_12 != 0)
*eax_18 = 0x5e81
*(eax_18 + 2) = 0
sub_4414c0(ebx_1, &var_104, "%d")
void* eax_19 = &var_104
char i_13

do
    i_13 = *eax_19
    eax_19 += 1
while (i_13 != 0)
int32_t result = eax_19 - &var_104
void* edi_14 = &data_a5d4f7
char i_14

do
    i_14 = *(edi_14 + 1)
    edi_14 += 1
while (i_14 != 0)
int32_t esi_15
int32_t edi_15
edi_15, esi_15 = __builtin_memcpy(edi_14, &var_104, result u>> 2 << 2)
__builtin_memcpy(edi_15, esi_15, result & 3)
sub_480cd2(eax_1 ^ &var_104)
return result
