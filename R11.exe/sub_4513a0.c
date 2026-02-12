// 函数: sub_4513a0
// 地址: 0x4513a0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4 = arg3
void* eax_1 = j_sub_481fef(*(arg7 + 0x5c))
int32_t edx_1 = *(arg7 + 0x18) - 0x7c
var_4 = *(arg7 + 0x5c)

if (uncompress(eax_1, &var_4, arg7 + 0x7c, edx_1) != 0)
    sub_465480(".\texture.cpp", 0x5d5)

int32_t i = 0

if (*(arg7 + 0x70) s> 0)
    do
        sub_480cf0(*(arg6 + 0x28) * i + *(arg6 + 0x10), 0, *(arg6 + 0x2c) * arg4)
        i += 1
    while (i s< *(arg7 + 0x70))

int32_t i_1 = 0

if (*(arg7 + 0x78) s> 0)
    do
        char* edi_4 = (*(arg7 + 0x70) + i_1) * *(arg6 + 0x28) + *(arg6 + 0x10)
        sub_480cf0(edi_4, 0, *(arg6 + 0x2c) * *(arg7 + 0x6c))
        int32_t eax_5 = *(arg7 + 0x74)
        sub_480ea0(&edi_4[*(arg7 + 0x6c) << 2], eax_1 + ((eax_5 * i_1) << 2), eax_5 << 2)
        int32_t ecx_7 = *(arg7 + 0x6c)
        int32_t eax_8 = *(arg7 + 0x74)
        sub_480cf0(&edi_4[(ecx_7 + eax_8) << 2], 0, (arg4 - ecx_7 - eax_8) * *(arg6 + 0x2c))
        i_1 += 1
    while (i_1 s< *(arg7 + 0x78))

int32_t eax_10 = *(arg7 + 0x78)
int32_t ecx_9 = *(arg7 + 0x70)
int32_t i_2 = 0

if (arg5 - eax_10 - ecx_9 s> 0)
    do
        sub_480cf0((eax_10 + ecx_9 + i_2) * *(arg6 + 0x28) + *(arg6 + 0x10), 0, 
            *(arg6 + 0x2c) * arg4)
        eax_10 = *(arg7 + 0x78)
        ecx_9 = *(arg7 + 0x70)
        i_2 += 1
    while (i_2 s< arg5 - eax_10 - ecx_9)

struct _EXCEPTION_REGISTRATION_RECORD** result = j_sub_4813df(eax_1)
*(arg8 + 0x48) = 0
return result
