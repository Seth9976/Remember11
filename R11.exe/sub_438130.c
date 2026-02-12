// 函数: sub_438130
// 地址: 0x438130
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t eax_3 = (data_2b603ac * 4) & 0x800000ff
int32_t var_18 = 0x40
int32_t var_14 = 0x120
int32_t var_10 = 0
int32_t var_c = 0
int32_t var_8 = 0x200
int32_t var_4 = 0x20

if (eax_3 s< 0)
    eax_3 = ((eax_3 - 1) | 0xffffff00) + 1

if (eax_3 s> 0x80)
    eax_3 = 0x100 - eax_3

void* ecx_2 = data_a5dd14
bool cond:1 = *ecx_2 == 0
char var_1a = 0x80
char var_1b = 0x80
char var_1c = 0x80
char var_19 = eax_3.b

if (not(cond:1))
    int32_t eax_7
    int32_t edx_1
    edx_1:eax_7 = sx.q(*(ecx_2 + 8))
    int32_t eax_10 = (eax_7 - edx_1) s>> 1 & 0x80000001
    
    if (eax_10 s< 0)
        eax_10 = ((eax_10 - 1) | 0xfffffffe) + 1
    
    char eax_13 = (neg.d(eax_10)).b
    char var_19_1 = sbb.b(eax_13, eax_13, eax_10 != 0) & 0x80

sub_445470(ecx_2 + 0x18a3c, &var_18, &var_1c, 1)
return sub_442c30(data_a5dd14 + 0x18a3c, 1)
