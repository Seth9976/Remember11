// 函数: sub_4557a0
// 地址: 0x4557a0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t eax = *(arg5 + 0x30)
uint32_t ecx = zx.d(*arg5)
int32_t var_434 = arg6
void var_410
sub_450ab0(&var_410, arg1, arg2)
int32_t i = 0
int16_t* eax_2
eax_2.b = 1
char var_41d = 1

if (arg5[3] u<= 0)
    *(arg7 + 0x48) = 1
    return eax_2

int32_t* var_41c_1 = arg4

do
    uint32_t edx_2 = zx.d(arg5[2])
    int32_t* esi_4 = var_41c_1
    void* j = nullptr
    int32_t eax_6 = edx_2 * i + (((arg1 & 0x3fff) - ecx) << 8) + eax
    
    if (edx_2 s> 0)
        do
            *esi_4 = *(&var_410 + (zx.d(*(j + eax_6)) << 2))
            esi_4 = &esi_4[1]
            void var_40d
            
            if (*(&var_40d + (zx.d(*(j + eax_6)) << 2)) u< 0x80)
                var_41d = 0
            
            j += 1
        while (j s< zx.d(arg5[2]))
    
    var_41c_1 += arg3
    i += 1
while (i s< zx.d(arg5[3]))

int32_t eax_7
eax_7.b = var_41d
*(arg7 + 0x48) = eax_7.b
return eax_7
