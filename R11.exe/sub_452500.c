// 函数: sub_452500
// 地址: 0x452500
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_499c28
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_5c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct CPicture::VTable* var_44
sub_4521b0(&var_44)
int32_t i_1 = 0
int32_t var_4 = 0
sub_4675b0(&var_44, *(arg4 + 0x74), *(arg4 + 0x78), 0x15, 0)
int32_t var_60 = 0
sub_467ea0(&var_44, arg4 + 0x7c)
int32_t i = 0

if (*(arg4 + 0x70) s> 0)
    do
        sub_480cf0(*(arg3 + 0x28) * i + *(arg3 + 0x10), 0, *(arg3 + 0x2c) * arg1)
        i += 1
    while (i s< *(arg4 + 0x70))

int32_t i_3 = 0

if (*(arg4 + 0x78) s> 0)
    do
        char* edi_3 = (*(arg4 + 0x70) + i_1) * *(arg3 + 0x28) + *(arg3 + 0x10)
        sub_480cf0(edi_3, 0, *(arg4 + 0x6c) * *(arg3 + 0x2c))
        void* edx_2 = &edi_3[*(arg4 + 0x6c) << 2]
        int32_t var_14
        int32_t var_34
        int32_t var_1c
        
        if (var_14 == 0x15)
            int32_t edi_6 = var_1c * i_1 + var_34
            int32_t j = 0
            
            if (*(arg4 + 0x74) s> 0)
                void* eax_9 = edx_2 + 2
                
                do
                    *eax_9 = *(edi_6 - edx_2 + eax_9)
                    *(eax_9 - 1) = *(edi_6 + (j << 2) + 1)
                    *(eax_9 - 2) = *(edi_6 + (j << 2))
                    *(eax_9 + 1) = 0x80
                    j += 1
                    eax_9 += 4
                while (j s< *(arg4 + 0x74))
                
                i_1 = i_3
        else if (var_14 != 0x35545847)
            sub_465480(".\texture.cpp", 0x64e)
        else
            int32_t j_1 = 0
            
            if (*(arg4 + 0x74) s> 0)
                void* eax_10 = edx_2 + 1
                void* ecx_11 = var_1c * i_1 + var_34 + 1
                
                do
                    *(eax_10 + 1) = *(ecx_11 + 1)
                    *eax_10 = *ecx_11
                    *(eax_10 - 1) = *(ecx_11 - 1)
                    *(eax_10 + 2) = 0x80
                    j_1 += 1
                    ecx_11 += 3
                    eax_10 += 4
                while (j_1 s< *(arg4 + 0x74))
        int32_t eax_11 = *(arg4 + 0x74)
        sub_480cf0(edx_2 + (eax_11 << 2), 0, (arg1 - eax_11 - *(arg4 + 0x6c)) * *(arg3 + 0x2c))
        i_1 += 1
        i_3 = i_1
    while (i_1 s< *(arg4 + 0x78))

int32_t eax_12 = *(arg4 + 0x70)
int32_t ecx_14 = *(arg4 + 0x78)
int32_t i_2 = 0

if (arg2 - eax_12 - ecx_14 s> 0)
    do
        sub_480cf0((eax_12 + ecx_14 + i_2) * *(arg3 + 0x28) + *(arg3 + 0x10), 0, 
            *(arg3 + 0x2c) * arg1)
        eax_12 = *(arg4 + 0x70)
        ecx_14 = *(arg4 + 0x78)
        i_2 += 1
    while (i_2 s< arg2 - eax_12 - ecx_14)

*(arg5 + 0x48) = 1
int32_t var_4_1 = 0xffffffff
void* result = sub_452260(&var_44)
fsbase->NtTib.ExceptionList = ExceptionList
return result
