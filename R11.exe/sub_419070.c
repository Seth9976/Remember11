// 函数: sub_419070
// 地址: 0x419070
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* result = 0x20
int32_t var_74 = 0x10
int32_t var_a4 = 0x10
void* ecx = data_e7e648
int32_t var_88 = 0
int32_t var_84 = 0
int32_t var_80 = 0x20
int32_t var_7c = 0x20
int32_t var_78 = 0x20
int32_t var_70 = 0
int32_t var_6c
__builtin_memcpy(&var_6c, U"    …", 0x14)
int32_t var_58 = 0
int32_t var_54
__builtin_memcpy(&var_54, U"@   …", 0x14)
int32_t var_40 = 0
int32_t var_3c
__builtin_memcpy(&var_3c, U"`   …", 0x14)
int32_t var_28 = 0
int32_t var_24
__builtin_memcpy(&var_24, 
    "\x80\x00\x00\x00\x20\x00\x00\x00\x20\x00\x00\x00\x20\x00\x00\x00\x10\x00\x00\x00", 0x14)
int32_t var_10 = 0
int32_t var_c = 0xa0
int32_t var_8 = 0x20
int32_t var_4 = 0x20
int32_t var_a8 = 0x20
int32_t var_a0 = 0
int32_t var_9c
__builtin_memcpy(&var_9c, 
    "\xc0\x00\x00\x00\x20\x00\x00\x00\x20\x00\x00\x00\x20\x00\x00\x00\x10\x00\x00\x00", 0x14)
char var_ac

if (*(ecx + 0x28b0) != 0)
    char var_aa_1 = 0x80
    char var_ab_1 = 0x80
    var_ac = 0x80
    int32_t eax = *(ecx + 0x28b0)
    
    if (eax s>= 0x3c)
        char var_a9_2 = 0x80
    else
        char var_a9_1 = ((eax << 7) s/ 0x3c).b
    
    int32_t var_90
    sub_444110(ecx + 0x10f164, &var_90, &var_ac, 0xb)
    sub_442c30(data_e7e648 + 0x10f164, 0xb)
    result = data_e7e648
    *(result + 0x28b0) -= 1
    ecx = data_e7e648

if (*(ecx + 0x28c3) != 0)
    *(ecx + 0x289d) = 0
    return result

int32_t __saved_ebx

if (*(ecx + 0x289e) == 1)
    int32_t eax_6
    int32_t edx_4
    edx_4:eax_6 = muls.dp.d(0x66666667, data_2b603ac)
    int32_t edx_5 = edx_4 s>> 2
    sub_445470(data_e7e648 + 0x10f10c, 
        &(&__saved_ebx)[mods.dp.d(sx.q((edx_5 u>> 0x1f) + edx_5), 3) * 6 + 8], 0, 0xb)
    ecx = data_e7e648
else if (*(ecx + 0x289b) == 1)
    int32_t eax_12
    int32_t edx_9
    edx_9:eax_12 = muls.dp.d(0x66666667, data_2b603ac)
    int32_t edx_10 = edx_9 s>> 2
    sub_445470(data_e7e648 + 0x10f10c, 
        &(&__saved_ebx)[mods.dp.d(sx.q((edx_10 u>> 0x1f) + edx_10), 3) * 6 + 0x1a], 0, 0xb)
    ecx = data_e7e648
else if (*(ecx + 0x289d) u> 0)
    char var_aa_2 = 0x80
    char var_ab_2 = 0x80
    var_ac = 0x80
    int32_t eax_19
    int32_t edx_14
    edx_14:eax_19 = sx.q(zx.d(*(ecx + 0x289d)) << 7)
    char var_a9_3 = ((eax_19 + (edx_14 & 0x3f)) s>> 6).b
    sub_445470(ecx + 0x10f10c, &var_a8, &var_ac, 0xb)
    void* eax_22 = data_e7e648
    *(eax_22 + 0x289d) -= 1
    ecx = data_e7e648
return sub_442c30(ecx + 0x10f10c, 0xb)
