// 函数: sub_451500
// 地址: 0x451500
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_434 = arg8
int32_t var_410[0x100]
sub_450ab0(&var_410, arg6, arg7)
void* eax_1 = j_sub_481fef(*(arg4 + 0x5c))
int32_t ecx_3 = *(arg4 + 0x18) - 0x7c
int32_t var_414 = *(arg4 + 0x5c)

if (uncompress(eax_1, &var_414, arg4 + 0x7c, ecx_3) != 0)
    sub_465480(".\texture.cpp", 0x678)

int32_t i = 0

if (*(arg4 + 0x70) s> 0)
    do
        sub_480cf0(*(arg3 + 0x28) * i + *(arg3 + 0x10), 0, *(arg3 + 0x2c) * arg1)
        i += 1
    while (i s< *(arg4 + 0x70))

int32_t var_41c = 0

if (*(arg4 + 0x78) s> 0)
    bool cond:4_1
    
    do
        char* ebx_3 = (*(arg4 + 0x70) + var_41c) * *(arg3 + 0x28) + *(arg3 + 0x10)
        sub_480cf0(ebx_3, 0, *(arg4 + 0x6c) * *(arg3 + 0x2c))
        void* ebx_4 = &ebx_3[*(arg4 + 0x6c) << 2]
        
        if (*(arg4 + 0x64) != 0x35545846)
            sub_465480(".\texture.cpp", 0x689)
        else
            int32_t edx_6 = *(arg4 + 0x74)
            void* i_1 = nullptr
            
            if (edx_6 s> 0)
                do
                    *(ebx_4 + (i_1 << 2)) = var_410[zx.d(*(i_1 + edx_6 * var_41c + eax_1))]
                    i_1 += 1
                while (i_1 s< *(arg4 + 0x74))
        
        int32_t eax_6 = *(arg4 + 0x74)
        sub_480cf0(ebx_4 + (eax_6 << 2), 0, (arg1 - eax_6 - *(arg4 + 0x6c)) * *(arg3 + 0x2c))
        cond:4_1 = var_41c + 1 s< *(arg4 + 0x78)
        var_41c += 1
    while (cond:4_1)

int32_t eax_9 = *(arg4 + 0x78)
int32_t ecx_13 = *(arg4 + 0x70)
int32_t ebx_5 = 0

if (arg2 - eax_9 - ecx_13 s> 0)
    while (true)
        sub_480cf0((eax_9 + ecx_13 + ebx_5) * *(arg3 + 0x28) + *(arg3 + 0x10), 0, 
            *(arg3 + 0x2c) * arg1)
        eax_9 = *(arg4 + 0x78)
        ecx_13 = *(arg4 + 0x70)
        
        if (ebx_5 + 1 s>= arg2 - eax_9 - ecx_13)
            break
        
        ebx_5 += 1

struct _EXCEPTION_REGISTRATION_RECORD** result = j_sub_4813df(eax_1)
*(arg5 + 0x48) = *(arg4 + 0x68) == 0
return result
