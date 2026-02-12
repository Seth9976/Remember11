// 函数: sub_424c00
// 地址: 0x424c00
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

char var_74 = 0xff
char var_73 = 0xff
char var_72 = 0xff
int32_t eax_2 = arg1[1] + 0xcd
int32_t ebx = 0
int32_t var_50 = *arg1 + 0x40
int32_t* ecx_2 = data_4b1de0
int32_t var_20
__builtin_memcpy(&var_20, 
    "\x30\x00\x00\x00\xd1\x00\x00\x00\x20\x02\x00\x00\xc0\x00\x00\x00\x20\x00\x00\x00\x20\x00\x00\x00", 
    0x18)
char var_71 = 0x80
int32_t var_4c = eax_2
int32_t var_68 = 0

while (true)
    int32_t esi_1 = ecx_2[0x16]
    int32_t edi_1 = ecx_2[3]
    int32_t edx_2 = mods.dp.d(sx.q(ecx_2[2] - edi_1 + esi_1 + ebx), esi_1)
    int32_t esi_4 = (ecx_2[5] + ebx) & 0x80000007
    int32_t var_60_1 = edx_2
    
    if (esi_4 s< 0)
        esi_4 = ((esi_4 - 1) | 0xfffffff8) + 1
    
    int32_t eax_9
    eax_9.b = ebx != edi_1
    int32_t var_64_1 = esi_4
    void* var_6c_1 = (eax_9 << 3) + &data_4b1cf8
    int32_t eax_12 = edx_2 << 5
    
    if (*(ecx_2[0x15] + eax_12 + 8) != 0)
        int32_t var_40 = *arg1 + 0x2e
        char var_70 = 0x8c
        char var_6f_1 = 0
        char var_6e_1 = 0
        char var_6d_1 = 0x60
        int32_t var_3c_1 = var_4c + 0xc
        int32_t var_38_1 = 0x218
        int32_t var_34_1 = 2
        sub_4437c0(&var_40, &var_70, 1)
        ecx_2 = data_4b1de0
        edx_2 = var_60_1
        var_6c_1 = &data_4b1d00
    
    int32_t eax_17 = *arg1 + 0x3a
    int32_t i = edx_2 + 1
    var_50 = eax_17
    int32_t var_58 = eax_17
    int32_t var_54_1 = var_4c
    int32_t ebx_1 = 0
    
    while (i != 0)
        int32_t i_1 = i s/ 0xa
        sub_43c570(&ecx_2[0x316e], i.w - (i_1.w + (i_1 << 2).w) * 2, &var_58, var_6c_1, 1)
        var_58 -= 0x10
        ecx_2 = data_4b1de0
        ebx_1 += 1
        i = i_1
        esi_4 = var_64_1
        
        if (ebx_1 s>= 2)
            break
    
    var_50 += 0x24
    sub_43c220(&ecx_2[(sx.d(ecx_2[0x14].b) + (esi_4 << 1)) * 4 + 0x3196], &var_50, var_6c_1, 1)
    ecx_2 = data_4b1de0
    
    if (*ecx_2 != 1 && *(ecx_2[0x15] + eax_12 + 5) == 0)
        var_50 += 0x166
        int32_t var_48_1 = 0x733
        int32_t var_44_1 = 0x1000
        sub_43c4c0(&ecx_2[esi_4 * 4 + 0x44da], &var_50, var_6c_1, 1)
        ecx_2 = data_4b1de0
    
    if (ecx_2[4] == 4)
        if (sub_4015f0(var_60_1) == 1)
            int32_t var_30 = *arg1 + 0x20
            int32_t var_2c_1 = var_4c + 4
            sub_444110(data_4b1de0 + 0xc4dc, &var_30, nullptr, 1)
            sub_442c30(data_4b1de0 + 0xc4dc, 1)
        
        ecx_2 = data_4b1de0
    
    var_4c += 0x19
    bool cond:4_1 = var_68 + 1 s< 8
    var_68 += 1
    
    if (not(cond:4_1))
        break
    
    ebx = var_68

int32_t ecx_11 = arg1[1]
int32_t eax_30 = *arg1 + 0x54
var_50 = eax_30
int32_t var_48_2 = eax_30
int32_t var_44_2 = ecx_11 + 0x191
int32_t var_4c_1 = ecx_11 + 0xd1
sub_443990(&var_50, &var_74, 1)

if (*data_4b1de0 != 1)
    int32_t ecx_13 = arg1[1]
    int32_t eax_32 = *arg1 + 0x1be
    var_50 = eax_32
    int32_t var_48_3 = eax_32
    int32_t var_44_3 = ecx_13 + 0x191
    int32_t var_4c_2 = ecx_13 + 0xd1
    sub_443990(&var_50, &var_74, 1)

void* eax_33 = data_4b1de0
var_50 = *arg1 + 0x40
int32_t var_84_2 = 1
int32_t var_4c_3 = *(eax_33 + 0xc) * 0x19 + arg1[1] + 0xcc
int32_t var_48_4 = 0x200
int32_t var_44_4 = 0x18
sub_439d90(nullptr, &var_50, 0)
int32_t eax_35 = var_20
var_50 = eax_35
int32_t var_1c
int32_t var_4c_4 = var_1c
int32_t ecx_18 = var_1c + arg1[1]
var_20 = eax_35 + *arg1
int32_t var_1c_1 = ecx_18
return sub_43d1f0(&var_20, 1)
