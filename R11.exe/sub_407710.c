// 函数: sub_407710
// 地址: 0x407710
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

sub_480cf0(arg1, 0, 0x40)
int32_t var_20 = 0
int32_t var_24 = 0
char* var_28 = arg2
void* var_2c = &arg1[8]
int32_t var_30 = 0
int32_t var_34 = 0x87a518
int32_t var_38 = 0x87a4d8
*arg1 = 1
*(arg1 + 4) = 0xffffffff
sub_450990()
void* var_14_2 = &arg1[8]
int32_t var_18_2 = 0x80
void* var_1c_2 = &arg1[0xc0]
int32_t var_20_2 = 0x87a518
int32_t var_24_2 = 0x87a4d8
*(arg1 + 0x18) = 0x50
sub_450930()
void* var_14_4 = &arg1[0xc0]
char* var_18_4 = arg2
char const* const var_1c_3 = "retrieved address for %s = %s\n"
char* var_20_3 = arg1
int32_t var_24_3 = 0x87a518
int32_t var_28_1 = 0x87a4d8
sub_450970()
*(arg1 + 0x7e38) = 0
int32_t var_14_6 = 0xffffffff
int32_t var_18_6 = *(arg1 + 0x7e38)
int32_t var_1c_5 = 0x87a518
int32_t var_20_5 = 0x87a4d8
sub_4509b0()
char* eax_2 = arg3
__builtin_strcpy(&arg1[0x40], "GET /")
char* esi_1 = eax_2
char i

do
    i = *eax_2
    eax_2 = &eax_2[1]
while (i != 0)

void* eax_3 = eax_2 - esi_1
void* edi_2 = &arg1[0x3f]

do
    i = *(edi_2 + 1)
    edi_2 += 1
while (i != 0)

int32_t esi_2
int32_t edi_3
edi_3, esi_2 = __builtin_memcpy(edi_2, esi_1, eax_3 u>> 2 << 2)
char ecx_5
int32_t edi_4
edi_4, ecx_5 = __builtin_memcpy(edi_3, esi_2, eax_3 & 3)
void* eax_5 = &arg1[0x3f]
char i_1

do
    i_1 = *(eax_5 + 1)
    eax_5 += 1
while (i_1 != 0)
__builtin_strcpy(eax_5, " HTTP/1.0\r\nHOST: ")
char* eax_6 = arg2
char* esi_3 = eax_6
char i_2

do
    i_2 = *eax_6
    eax_6 = &eax_6[1]
while (i_2 != 0)

void* eax_7 = eax_6 - esi_3
void* edi_7 = &arg1[0x3f]

do
    i_2 = *(edi_7 + 1)
    edi_7 += 1
while (i_2 != 0)

int32_t esi_4
int32_t edi_8
edi_8, esi_4 = __builtin_memcpy(edi_7, esi_3, eax_7 u>> 2 << 2)
__builtin_memcpy(edi_8, esi_4, eax_7 & 3)
void* eax_9 = &arg1[0x3f]
char i_3

do
    i_3 = *(eax_9 + 1)
    eax_9 += 1
while (i_3 != 0)

__builtin_strncpy(eax_9, "\r\n\r\n", 5)
void* eax_10 = &arg1[0x40]
*(arg1 + 0x7e40) = 0
void* edi_9 = eax_10 + 1

do
    i_3 = *eax_10
    eax_10 += 1
while (i_3 != 0)

int32_t var_14_8 = 0xffffffff
void* var_18_8 = &arg1[0x7e40]
void* var_1c_7 = eax_10 - edi_9
void* var_20_6 = &arg1[0x40]
int32_t var_24_4 = *(arg1 + 0x7e38)
int32_t var_28_2 = 0x87a518
int32_t var_2c_1 = 0x87a4d8
sub_4509f0()
*(arg1 + 0x7e3c) = 0
return 0
