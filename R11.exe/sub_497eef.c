// 函数: sub_497eef
// 地址: 0x497eef
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t __saved_ebp_1 = 0x54
int32_t (* var_c)(void* arg1) = sub_49b427
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ebx
int32_t var_68 = ebx
int32_t esi
int32_t var_6c = esi
int32_t edi
int32_t var_70 = edi
int32_t __saved_ebp_4
int32_t __saved_ebp_2 = __saved_ebp_4
int32_t __saved_ebp
int32_t eax_21 = __security_cookie ^ &__saved_ebp
int32_t var_74 = eax_21
void* const var_78 = &data_497efb
int32_t var_8_2 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esp_2 = &var_74
int32_t result

if (arg2 != 0xffffffff)
    int32_t ecx = **(arg1 + 0x24)
    int32_t* eax_1
    
    if (ecx != 0)
        eax_1 = *(arg1 + 0x34)
    
    if (ecx == 0 || ecx u>= *eax_1 + ecx)
        void* eax_3 = *(arg1 + 0x4c)
        
        if (eax_3 == 0)
            result = 0xffffffff
        else if (*(arg1 + 0x3c) != 0)
            var_78 = nullptr
            int32_t var_7c_2 = 8
            char var_34 = arg2.b
            void var_30
            sub_497db5(&var_30, 8, var_78.b)
            void var_4c
            var_78 = &var_4c
            int32_t var_8_1 = 0
            int32_t eax_6 = sub_468570(sub_468940(&var_30, var_78))
            void var_54
            var_78 = &var_54
            int32_t eax_8 = sub_468570(sub_468940(&var_30, var_78))
            int32_t var_1c
            int32_t edi_2 = var_1c + eax_6
            int32_t var_3c
            var_78 = &var_3c
            void* const* esp_3 = &var_78
            void* esp_5
            int32_t result_1
            
            while (true)
                int32_t* ecx_17 = *(arg1 + 0x3c)
                *(esp_3 - 4) = edi_2
                *(esp_3 - 8) = eax_8
                int32_t var_40
                *(esp_3 - 0xc) = &var_40
                void var_33
                *(esp_3 - 0x10) = &var_33
                *(esp_3 - 0x14) = &var_34
                int32_t var_38_1 = eax_8
                int32_t eax_17 = *ecx_17
                *(esp_3 - 0x18) = arg1 + 0x44
                int32_t eax_18 = (*(eax_17 + 0x14))()
                esp_5 = esp_3
                
                if (eax_18 s>= 0)
                    if (eax_18 s<= 1)
                        void var_5c
                        *(esp_5 - 4) = &var_5c
                        int32_t eax_10 = sub_468570(sub_468940(&var_30))
                        int32_t edi_3 = var_3c
                        int32_t edi_4 = edi_3 - eax_10
                        int32_t eax_13
                        
                        if (edi_3 != eax_10)
                            void var_64
                            *(esp_5 - 4) = &var_64
                            int32_t eax_12 = sub_468570(sub_468940(&var_30))
                            *(esp_5 - 4) = *(arg1 + 0x4c)
                            *(esp_5 - 8) = edi_4
                            *(esp_5 - 0xc) = 1
                            *(esp_5 - 0x10) = eax_12
                            eax_13 = sub_498fdb()
                        
                        if (edi_3 == eax_10 || edi_4 == eax_13)
                            bool cond:3_1 = var_40 != &var_34
                            *(arg1 + 0x41) = 1
                            
                            if (cond:3_1)
                                result_1 = arg2
                                break
                            
                            if (edi_4 u> 0)
                                goto label_498017
                            
                            if (var_1c u< 0x20)
                                *(esp_5 - 4) = 0
                                *(esp_5 - 8) = 8
                                sub_468ba0(&var_30)
                            label_498017:
                                *(esp_5 - 4) = &var_4c
                                int32_t eax_15 = sub_468570(sub_468940(&var_30))
                                *(esp_5 - 4) = &var_54
                                eax_8 = sub_468570(sub_468940(&var_30))
                                *(esp_5 - 4) = &var_3c
                                esp_3 = esp_5 - 4
                                edi_2 = var_1c + eax_15
                                continue
                    else if (eax_18 == 3)
                        *(esp_5 - 4) = *(arg1 + 0x4c)
                        *(esp_5 - 8) = var_34.d
                        bool cond:2_1 = sub_497a5d() != 0
                        *(esp_5 - 4)
                        
                        if (cond:2_1)
                            result_1 = arg2
                            break
                
                result_1 = 0xffffffff
                break
            
            *(esp_5 - 4) = 0
            *(esp_5 - 8) = 1
            sub_44aa80(&var_30)
            esp_2 = esp_5
            result = result_1
        else
            var_78 = eax_3
            esp_2 = &var_74
            
            if (sub_497a5d(arg2.b, var_78) == 0)
                result = 0xffffffff
            else
                result = arg2
    else
        *eax_1 -= 1
        int32_t* esi_2 = *(arg1 + 0x24)
        char* eax_2 = *esi_2
        *esi_2 = &eax_2[1]
        *eax_2 = arg2.b
        result = arg2
else
    result = 0

*(esp_2 - 4) = &data_497f0c
sub_480cd2(eax_21 ^ &__saved_ebp)
fsbase->NtTib.ExceptionList = ExceptionList
esp_2[1]
esp_2[2]
esp_2[3]
int32_t __saved_ebp_3 = *(esp_2 - 4)
return result
