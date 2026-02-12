// 函数: sub_4216f0
// 地址: 0x4216f0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

sub_442e50(*arg1, arg1[1])
char var_3a = 0x80
char var_3b = 0x80
char var_3c = 0x80
void* eax = data_a5d910
char var_39 = *(eax + 0x20)
int32_t ecx_3 = arg2 * 0x3c0
void* edx_1 = eax + 0x29140
void* var_38 = edx_1
int32_t i = 0x34
int32_t edi = ecx_3
int32_t j_3

do
    for (int32_t j = 0x1a; j s< 0x272; )
        if (*(edi + eax + 0x50) != 0 && *(edi + eax + 0x4c) == 1 && *(edi + eax + 0x4d) == 1)
            int32_t var_18_1 = 0x10
            int32_t var_14_1 = 0x10
            j_3 = j
            int32_t i_4 = i
            int32_t var_20_1 = 0x70
            int32_t var_1c_1 = 0
            sub_445470(edx_1, &j_3, &var_3c, 1)
            eax = data_a5d910
            edx_1 = var_38
        
        j += 0x78
        edi += 0x30
    
    i += 0x5a
while (i s< 0x19c)

sub_442c30(edx_1, 1)
int32_t edx_2 = data_a5d910
int32_t ebx = ecx_3
int16_t* eax_4 = (arg3 + 0xef2) * 0x2c + edx_2
int32_t i_1 = 0x30
int16_t* var_38_1 = eax_4
int32_t var_34 = 0
int32_t i_3 = 0x30

do
    int32_t edi_1 = 0
    
    for (int32_t j_1 = 0x16; j_1 s< 0x26e; )
        if (*(ebx + edx_2 + 0x50) != 0 && *(ebx + edx_2 + 0x4c) == 1)
            int32_t i_5 = i_1
            int32_t var_1c_2 = var_34
            j_3 = j_1
            int32_t var_20_2 = edi_1
            int32_t var_18_2 = 0x70
            int32_t var_14_2 = 0x54
            sub_445470(eax_4, &j_3, &var_3c, 1)
            edx_2 = data_a5d910
            eax_4 = var_38_1
            i_1 = i_3
        
        j_1 += 0x78
        ebx += 0x30
        edi_1 += 0x70
    
    var_34 += 0x54
    i_1 += 0x5a
    i_3 = i_1
while (i_1 s< 0x198)

sub_442c30(eax_4, 1)
void* eax_5 = data_a5d910
int32_t edi_2 = ecx_3
int16_t* ecx_4 = eax_5 + 0x2916c
int16_t* var_38_2 = ecx_4

for (int32_t i_2 = 0x30; i_2 s< 0x198; i_2 += 0x5a)
    for (int32_t j_2 = 0x16; j_2 s< 0x26e; )
        if (*(edi_2 + eax_5 + 0x50) != 0 && *(edi_2 + eax_5 + 0x4c) != 1)
            j_3 = j_2
            int32_t i_6 = i_2
            sub_444110(ecx_4, &j_3, &var_3c, 1)
            eax_5 = data_a5d910
            ecx_4 = var_38_2
        
        j_2 += 0x78
        edi_2 += 0x30

sub_442c30(ecx_4, 1)
return sub_442f40()
