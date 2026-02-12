// 函数: sub_455f20
// 地址: 0x455f20
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_14 = 0xffffffff
int32_t (* var_18)(void* arg1) = sub_499f33
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t esi
int32_t var_dc = esi
int32_t edi
int32_t var_e0 = edi
int32_t eax_2 = __security_cookie ^ &var_e0
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_3 = *(arg6 + 0x30)
uint32_t ebx = zx.d(*arg6)
struct CPicture::VTable* var_58
sub_455e60(&var_58, arg3, arg4, 0x15, 0)
int32_t var_e8 = arg7
int32_t var_14_1 = 0
int32_t var_a0[0x5]
sub_450a10(&var_a0, arg1, arg2)
struct CPicture::VTable* var_bc
int32_t var_b4
int32_t var_48
char var_30

if (*(arg6 + 0x4c) != 0xf3000000)
    int32_t edx_24 = 0
    int32_t var_c8_1 = 0
    
    if (arg6[3] u> 0)
        uint32_t ebx_2 = zx.d(arg6[2])
        var_bc = ((arg1 & 0x3fff) - ebx) << 8
        uint32_t edi_6 = ebx_2 u>> 1
        
        while (true)
            int32_t eax_16
            int32_t edx_25
            edx_25:eax_16 = sx.q(ebx_2 * edx_24)
            void* esi_9 = nullptr
            void* eax_20 = ((eax_16 - edx_25) s>> 1) + var_bc + eax_3
            
            if (edi_6 s> 0)
                int32_t* ecx_11 = var_30.d * edx_24 + var_48
                
                do
                    *ecx_11 = var_a0[zx.d(*(esi_9 + eax_20)) & 0xf]
                    ecx_11[1] = var_a0[zx.d(*(esi_9 + eax_20)) u>> 4]
                    ebx_2 = zx.d(arg6[2])
                    esi_9 += 1
                    edi_6 = ebx_2 u>> 1
                    ecx_11 = &ecx_11[2]
                while (esi_9 s< edi_6)
            
            bool cond:2_1 = var_c8_1 + 1 s< zx.d(arg6[3])
            var_c8_1 += 1
            
            if (not(cond:2_1))
                break
            
            edx_24 = var_c8_1
else
    int32_t edx_1 = 0
    int32_t var_c8 = 0
    
    if (arg6[3] u> 0)
        uint32_t ebx_1 = zx.d(arg6[2])
        var_bc = ((arg1 & 0x3fff) - ebx) << 8
        uint32_t edi_3 = ebx_1 u>> 2
        
        while (true)
            int32_t* ecx_6 = var_30.d * edx_1 + var_48
            int32_t eax_7
            int32_t edx_2
            edx_2:eax_7 = sx.q(ebx_1 * edx_1)
            void* esi_5 = nullptr
            void* eax_11 = ((eax_7 + (edx_2 & 3)) s>> 2) + var_bc + eax_3
            
            if (edi_3 s> 0)
                var_b4 = 0
                int32_t var_b0_1 = 3
                int32_t var_ac_1 = 2
                int32_t var_a8_1 = 1
                
                do
                    *ecx_6 = var_a0[(&var_b4)[zx.d(*(esi_5 + eax_11)) u>> 6]]
                    ecx_6[1] = var_a0[(&var_b4)[zx.d(*(esi_5 + eax_11)) u>> 4 & 3]]
                    ecx_6[2] = var_a0[(&var_b4)[zx.d(*(esi_5 + eax_11)) u>> 2 & 3]]
                    ecx_6[3] = var_a0[(&var_b4)[zx.d(*(esi_5 + eax_11)) & 3]]
                    ebx_1 = zx.d(arg6[2])
                    esi_5 += 1
                    edi_3 = ebx_1 u>> 2
                    ecx_6 = &ecx_6[4]
                while (esi_5 s< edi_3)
            
            bool cond:3_1 = var_c8 + 1 s< zx.d(arg6[3])
            var_c8 += 1
            
            if (not(cond:3_1))
                break
            
            edx_1 = var_c8
int32_t eax_23 = *(arg9 + 0x18)
int32_t ecx_14 = *(arg9 + 0x14)
int32_t var_c4 = ecx_14
sub_455e60(&var_a0, ecx_14, eax_23, 0x15, 0)
var_14_1.b = 1
sub_467960(&var_58, &var_c4, 1)
int32_t eax_24 = *(arg8 + 0x20)
int32_t edx_34 = var_c4
int32_t ecx_16 = *(arg8 + 0x24)
var_b4 = eax_24
int32_t var_ac_2 = eax_24 + edx_34
int32_t var_b0_2 = ecx_16
int32_t var_a8_2 = ecx_16 + eax_23
(*(*arg5 + 0x4c))(arg5, 0, &var_bc, &var_b4, 0, eax_2)
int32_t esi_10 = 0
int32_t var_d4

if (var_d4 s> 0)
    do
        int32_t var_d0
        int32_t var_cc
        int32_t var_8c
        void* entry_ebx
        sub_480ea0(var_d0 * esi_10 + var_cc, var_8c * esi_10 + eax_3, entry_ebx * 4)
        esi_10 += 1
    while (esi_10 s< var_d4)

(*(*arg5 + 0x50))(arg5, 0)
char var_30_1 = 0
sub_452260(&var_bc)
*(arg8 + 0x48) = 0
var_30_1.d = 0xffffffff
struct CPicture::VTable* var_74
void* result = sub_452260(&var_74)
int32_t var_38
fsbase->NtTib.ExceptionList = var_38
return result
