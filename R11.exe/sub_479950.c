// 函数: sub_479950
// 地址: 0x479950
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_49ac3b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_17c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
char var_13c
sub_480cf0(&var_13c, 0, 0x130)
int32_t* eax_3 = *(arg1 + 0x1c)
(*(*eax_3 + 0x1c))(eax_3, &var_13c)
*(arg1 + 0x2c) = 0
int32_t var_130

if ((var_130 & 0x20000000) != 0)
    *(arg1 + 0x2c) = 1

int32_t* eax_5 = *(arg1 + (arg2 << 2) + 0x20)
int32_t ebx = *(arg1 + 0x30)
int32_t* var_168 = *(arg1 + 0x34)

if (eax_5 != 0)
    (*(*eax_5 + 8))(eax_5)
    *(arg1 + (arg2 << 2) + 0x20) = 0

int32_t ecx_4
int32_t result_2

if (*(arg1 + 0x2c) != 0)
    int32_t* eax_6 = *(arg1 + 0x1c)
    int32_t result_5
    result_5, ecx_4 =
        (*(*eax_6 + 0x5c))(eax_6, ebx, var_168, 1, 0x200, 0x16, 0, arg1 + (arg2 << 2) + 0x20, 0)
    result_2 = result_5
    data_c7a9e4 = u"Using Dynamic Textures"
    
    if (result_2 s< 0)
        *(arg1 + 0x2c) = 0

if (*(arg1 + 0x2c) == 0 || *(arg1 + 0x2c) == 0)
    int32_t* eax_8 = *(arg1 + 0x1c)
    int32_t result_6
    result_6, ecx_4 =
        (*(*eax_8 + 0x5c))(eax_8, ebx, var_168, 1, 0, 0x16, 1, arg1 + (arg2 << 2) + 0x20, 0)
    result_2 = result_6
    data_c7a9e4 = u"Bitwise copy of the sample"

int32_t result

if (result_2 s>= 0)
    int32_t var_15c
    __builtin_memset(&var_15c, 0, 0x20)
    int32_t* eax_10 = *(arg1 + (arg2 << 2) + 0x20)
    int32_t result_1
    int32_t ecx_7
    result_1, ecx_7 = (*(*eax_10 + 0x44))(eax_10, 0, &var_15c)
    
    if (result_1 s>= 0)
        var_168 = nullptr
        int32_t* eax_12 = *(arg1 + (arg2 << 2) + 0x20)
        int32_t var_4 = 0
        
        if ((*(*eax_12 + 0x48))(eax_12, 0, &var_168) s>= 0)
            int32_t* eax_15 = var_168
            (*(*eax_15 + 0x30))(eax_15, &var_15c)
        
        int32_t* eax_17 = var_168
        int32_t var_4_1 = 0xffffffff
        
        if (eax_17 != 0)
            (*(*eax_17 + 8))(eax_17)
        
        bool cond:4_1 = *(arg1 + 0x2c) != 1
        *(arg1 + 0x28) = var_15c
        int32_t* eax_19 = *(arg1 + (arg2 << 2) + 0x20)
        int32_t var_180_6
        
        var_180_6 = cond:4_1 ? 0 : 0x2000
        
        int32_t var_164
        (*(*eax_19 + 0x4c))(eax_19, 0, &var_164, 0, var_180_6)
        int32_t i_2 = *(arg1 + 0x34)
        int32_t edx_6 = var_164
        int32_t var_160
        int32_t ecx_14 = (i_2 - 1) * edx_6 + var_160
        
        if (i_2 s> 0)
            int32_t i_1 = i_2
            int32_t i
            
            do
                int32_t j = 0
                
                if (*(arg1 + 0x30) s> 0)
                    do
                        *(ecx_14 + (j << 2)) = 0
                        j += 1
                    while (j s< *(arg1 + 0x30))
                
                ecx_14 -= edx_6
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        int32_t* ebp_1 = *(arg1 + (arg2 << 2) + 0x20)
        (*(*ebp_1 + 0x50))(ebp_1, 0)
        result = 0
    else
        int32_t result_4 = result_1
        void* const var_184_4 = u"Could not get level Description of D3DX texture! hr = 0x%x"
        sub_479490(ecx_7)
        result = result_1
else
    int32_t result_3 = result_2
    wchar16 const* const var_184_3 = u"Could not create the D3DX texture!  hr=0x%x"
    sub_479490(ecx_4)
    result = result_2

fsbase->NtTib.ExceptionList = ExceptionList
return result
