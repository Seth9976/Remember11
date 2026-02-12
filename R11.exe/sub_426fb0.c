// 函数: sub_426fb0
// 地址: 0x426fb0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

sub_480cf0(&data_a5d920, 0, 0x3c4)
__builtin_strncpy(&data_a5d920, "PS2D", 5)
__builtin_memcpy(&data_a5d9e0, 
    "\x82\x71\x82\x85\x82\x8d\x82\x85\x82\x8d\x82\x82\x82\x85\x82\x92\x82\x50\x82\x50\x00", 0x15)
int32_t edx = data_4b20a0
int32_t eax = data_4b20a4
data_a5d926 = 0x14
data_a5d92c = 0x60
__builtin_memcpy(0xa5d930, 0x4b2000, 0x40)
__builtin_memcpy(0xa5d970, 0x4b2040, 0x30)
__builtin_memcpy(0xa5d9a0, 0x4b2070, 0x30)
int32_t ecx = data_4b20a8
data_a5d9d0 = edx
data_a5d9dc = data_4b20ac
data_a5d9d4 = eax
char* eax_1 = data_4b20b0
data_a5d9d8 = ecx
char* edx_2 = 0xa5da24 - eax_1

do
    ecx.b = *eax_1
    *(edx_2 + eax_1) = ecx.b
    eax_1 = &eax_1[1]
while (ecx.b != 0)

char* eax_2 = data_4b20b4
void* edx_3 = 0xa5da64 - eax_2

do
    ecx.b = *eax_2
    *(edx_3 + eax_2) = ecx.b
    eax_2 = &eax_2[1]
while (ecx.b != 0)

char* result = data_4b20b8
void* edx_4 = 0xa5daa4 - result

do
    ecx.b = *result
    *(edx_4 + result) = ecx.b
    result = &result[1]
while (ecx.b != 0)

return result
