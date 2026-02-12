// 函数: sub_419670
// 地址: 0x419670
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_10c
int32_t eax_1 = __security_cookie ^ &var_10c
int32_t ebp = 0
int32_t ecx = 0
int32_t i = 0
bool cond:0 = data_2b55ebc u<= 0
int32_t edi
int32_t var_11c = edi
int32_t var_108 = 0
var_10c = 0

if (not(cond:0))
    do
        if (sx.d(*(data_2b5a720 + (i << 1))) == zx.d(*(data_e7e648 + 0x2856)))
            int32_t edi_2 = *(data_2b55e84 + ebp)
            ecx += edi_2
            int32_t esi_1 = 0
            var_108 = ecx
            
            if (edi_2 s> 0)
                do
                    if (sub_415090(i, esi_1) != 0)
                        var_10c += 1
                    
                    esi_1 += 1
                while (esi_1 s< edi_2)
                
                ecx = var_108
        
        i += 1
        ebp += 0xc
    while (i u< data_2b55ebc)

if (cond:0 || ecx s<= 0)
    var_108 = 1
    ecx = 1

if (var_10c s> ecx)
    var_10c = ecx

void var_104
sub_4414c0(divs.dp.d(sx.q(var_10c * 0x64), ecx), &var_104, "%3d")
char* esi_2
char* edi_4
edi_4, esi_2 = __builtin_memcpy(0xa5c4f8, 0x49ed50, 0x18)
void* eax_10 = &var_104
*edi_4 = *esi_2
char i_1

do
    i_1 = *eax_10
    eax_10 += 1
while (i_1 != 0)
int32_t eax_11 = eax_10 - &var_104
void* edi_6 = &data_a5c4f7
char i_2

do
    i_2 = *(edi_6 + 1)
    edi_6 += 1
while (i_2 != 0)
int32_t esi_4
int32_t edi_7
edi_7, esi_4 = __builtin_memcpy(edi_6, &var_104, eax_11 u>> 2 << 2)
__builtin_memcpy(edi_7, esi_4, eax_11 & 3)
void* eax_12 = &data_a5c4f7
char i_3

do
    i_3 = *(eax_12 + 1)
    eax_12 += 1
while (i_3 != 0)
*eax_12 = 0x9381
*(eax_12 + 2) = 0
char* esi_5
char* edi_8
edi_8, esi_5 = __builtin_memcpy(0xa5c8f8, 0x49ed28, 0x20)
int32_t ecx_5 = var_10c
*edi_8 = *esi_5
sub_4414c0(ecx_5, &var_104, "%d")
void* eax_13 = &var_104
char i_4

do
    i_4 = *eax_13
    eax_13 += 1
while (i_4 != 0)
int32_t eax_14 = eax_13 - &var_104
void* edi_10 = &data_a5c8f7
char i_5

do
    i_5 = *(edi_10 + 1)
    edi_10 += 1
while (i_5 != 0)
int32_t esi_7
int32_t edi_11
edi_11, esi_7 = __builtin_memcpy(edi_10, &var_104, eax_14 u>> 2 << 2)
__builtin_memcpy(edi_11, esi_7, eax_14 & 3)
void* eax_15 = &data_a5c8f7
char i_6

do
    i_6 = *(eax_15 + 1)
    eax_15 += 1
while (i_6 != 0)
*eax_15 = 0x5e81
*(eax_15 + 2) = 0
sub_4414c0(var_108, &var_104, "%d")
void* eax_17 = &var_104
char i_7

do
    i_7 = *eax_17
    eax_17 += 1
while (i_7 != 0)
int32_t result = eax_17 - &var_104
void* edi_12 = &data_a5c8f7
char i_8

do
    i_8 = *(edi_12 + 1)
    edi_12 += 1
while (i_8 != 0)
int32_t esi_8
int32_t edi_13
edi_13, esi_8 = __builtin_memcpy(edi_12, &var_104, result u>> 2 << 2)
__builtin_memcpy(edi_13, esi_8, result & 3)
sub_480cd2(eax_1 ^ &var_10c)
return result
