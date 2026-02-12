// 函数: sub_4205e0
// 地址: 0x4205e0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* esi = data_e7e648
int32_t ecx = *(esi + 0xb41e8)

if (ecx == 0)
    return 

int32_t ebp_2 = data_4b1adc - 6
int32_t edi_1 = data_4b1ad8
int32_t ebx

if (ecx s> 0xb0)
    ecx.b *= 2
    ebx.b = 0xe0
    ebx.b = 0xe0 - ecx.b
else if (ecx s<= 0x40)
    ebx.b = ecx.b
    ebx.b *= 2
else
    ebx.b = 0x80

char var_a_1 = 0x80
char var_b_1 = 0x80
char var_c = 0x80
int32_t var_8 = edi_1
char var_9_1 = ebx.b
sub_43bec0(esi + 0xb423c, &var_8, &var_c, 9)
int32_t eax_4
int32_t edx_1
edx_1:eax_4 = sx.q(zx.d(ebx.b) * 0x60)
char var_9_2 = ((eax_4 + (edx_1 & 0x7f)) s>> 7).b
var_8 += 1
int32_t var_4_2 = ebp_2 + 1
int32_t* eax_8 = data_e7e648 + 0xb423c
char var_a_2 = 0
char var_b_2 = 0
var_c = 0
sub_43bec0(eax_8, &var_8, &var_c, 9)
int32_t* eax_10 = data_e7e648 + 0xb423c
var_8 -= 2
int32_t var_4_3 = var_4_2 - 2
sub_43bec0(eax_10, &var_8, &var_c, 9)
void* eax_11 = data_e7e648
var_8 += 2
sub_43bec0(eax_11 + 0xb423c, &var_8, &var_c, 9)
void* eax_13 = data_e7e648
var_8 -= 2
int32_t var_4_4 = var_4_3 + 2
sub_43bec0(eax_13 + 0xb423c, &var_8, &var_c, 9)
void* eax = data_e7e648
*(eax + 0xb41e8) -= 1
