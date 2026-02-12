// 函数: sub_45ae80
// 地址: 0x45ae80
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_49a2a1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebx = arg3

if ((ebx & 0x780000) != 0)
    sub_465480(".\texture.cpp", 0x396)

int32_t eax_6 = ebx u>> 2 & 1

if (eax_6 != 0 && eax_6 != 1 && data_4ca436 == 1)
    sub_464790(".\texture.cpp", 0x399)
    data_4ca436 = 0

int32_t edi_1 = arg2 u>> 0x14 | ebx << 0xc
uint32_t var_a0 = ebx u>> 0x14
int32_t eax_10 = edi_1 & 0x3f
uint32_t var_b4 = 0
int32_t var_a4 = eax_10

if (eax_10 != 0x14 && eax_10 != 0x13)
    goto label_45afab

int32_t* var_e4_1 = &var_b4
sub_454f80(arg1, arg2, ebx)

if (var_b4 != 0)
    uint32_t eax_12 = var_b4
    *(eax_12 + 0x50) = data_c78630
    *(eax_12 + 0x54) = data_c78634
    *(eax_12 + 0x7c) = 1
    eax_10 = var_a4
label_45afab:
    
    if (eax_10 != 0x14 && eax_10 != 0x13 && eax_10 != 1 && eax_10 != 0)
        sub_465480(".\texture.cpp", 0x42e)
    else
        int16_t* esi_1 = arg4
        
        if (esi_1 != 0)
            bool cond:1_1 = *(esi_1 + 0x59) != 1
            *(esi_1 + 0x50) = data_c78630
            *(esi_1 + 0x54) = data_c78634
            esi_1[0x3e].b = 1
            
            if (not(cond:1_1))
                int32_t ecx_4 = *(esi_1 + 0x3c)
                
                if (ecx_4 == 0 || (*(esi_1 + 0x40) - ecx_4) s>> 3 != 1)
                    sub_465480(".\texture.cpp", 0x3b5)
                
                int32_t eax_19 = *(esi_1 + 0x3c)
                
                if (eax_19 == 0 || (*(esi_1 + 0x40) - eax_19) s>> 3 == 0)
                    __invalid_parameter_noinfo()
                
                sub_479cc0(**(esi_1 + 0x3c) + 0x40, (*(*data_c7863c + 0xc))(eax_2))
            label_45b5ff:
                int32_t eax_76 = *(esi_1 + 0x3c)
                
                if (eax_76 == 0 || (*(esi_1 + 0x40) - eax_76) s>> 3 == 0)
                    __invalid_parameter_noinfo()
                
                **(esi_1 + 0x3c)
            else if (esi_1[0x2d].b != 1)
                int16_t* var_8c
                sub_451db0(&var_8c)
                int32_t ecx_17 = *(esi_1 + 0x2c)
                uint32_t eax_32 = *(esi_1 + 0x28)
                uint32_t eax_33 = var_b4
                void* edi_5 = &esi_1[0x1c]
                int32_t var_4 = 0
                var_8c = arg2
                int32_t* var_88_1 = ebx
                int32_t* var_c8 = nullptr
                void** var_c4 = nullptr
                char var_c9_1 = 0
                void* var_94
                void** eax_34 = sub_455cf0(edi_5, &var_94)
                int32_t* edx_7 = *eax_34
                void** var_bc_1 = eax_34[1]
                int32_t* ecx_21 = edx_7
                
                while (true)
                    int32_t eax_36 = *(edi_5 + 8)
                    
                    if (*(edi_5 + 4) u> eax_36)
                        __invalid_parameter_noinfo()
                        ecx_21 = edx_7
                    
                    if (ecx_21 == 0 || ecx_21 != edi_5)
                        __invalid_parameter_noinfo()
                        ecx_21 = edx_7
                    
                    if (var_bc_1 == eax_36)
                        break
                    
                    if (ecx_21 == 0)
                        __invalid_parameter_noinfo()
                        ecx_21 = edx_7
                    
                    if (var_bc_1 u>= ecx_21[2])
                        __invalid_parameter_noinfo()
                        ecx_21 = edx_7
                    
                    void* eax_38 = *var_bc_1
                    
                    if (eax_32 == *(eax_38 + 8) && ecx_17 == *(eax_38 + 0xc)
                            && (edi_1 & 0x3f) == *(eax_38 + 0x30)
                            && (arg2 & 0x3fff) == *(eax_38 + 0x34) && eax_33 == *(eax_38 + 0x3c))
                        var_c8 = ecx_21
                        var_c4 = var_bc_1
                        var_c9_1 = 1
                    
                    if (var_bc_1 u>= ecx_21[2])
                        __invalid_parameter_noinfo()
                        ecx_21 = edx_7
                    
                    var_bc_1 = &var_bc_1[2]
                
                if (var_c9_1 != 1)
                    int32_t* var_ac = nullptr
                    int32_t ecx_26 = *(esi_1 + 0x4c)
                    var_4.b = 1
                    
                    if (ecx_26 == 0xf2000000 || ecx_26 == 0xf3000000)
                        uint32_t ebp_1 = zx.d(esi_1[3])
                        uint32_t edi_6 = zx.d(esi_1[2])
                        void** eax_46 = sub_45a040(arg1[1], edi_6, ebp_1)
                        sub_479cc0(&var_ac, sub_457090(eax_46, &var_8c))
                        
                        if (var_a4 != 0x14 || esi_1[6] != 0x14)
                            sub_465480(".\texture.cpp", 0x3f7)
                        else
                            sub_455f20(arg2, arg3, edi_6, ebp_1, var_ac, esi_1, var_b4, &var_8c, 
                                eax_46)
                    else
                        int32_t var_e4_7 = ecx_17
                        sub_4572e0(arg1, arg2, esi_1, &var_ac, arg2, ebx, esi_1, &var_8c, var_b4, 
                            eax_32)
                    
                    int32_t* var_4c
                    int32_t* ecx_35 = var_4c
                    int32_t* eax_49 = var_ac
                    
                    if (ecx_35 != eax_49)
                        if (eax_49 != 0)
                            (*(*eax_49 + 4))(eax_49)
                            ecx_35 = var_4c
                        
                        if (ecx_35 != 0)
                            (*(*ecx_35 + 8))(ecx_35)
                        
                        int32_t* var_4c_1 = eax_49
                    
                    int32_t var_1c_1 = data_c78630
                    int32_t var_18_1 = data_c78634
                    
                    if (var_a4 == 1)
                        char var_44_1 = 1
                    
                    void* eax_52 = sub_481fef(0x80)
                    int32_t* esi_4
                    
                    if (eax_52 == 0)
                        esi_4 = nullptr
                    else
                        esi_4 = sub_451db0(eax_52)
                    
                    sub_455a30(esi_4, &var_8c)
                    var_c8 = esi_4
                    sub_459b70(&var_c4, esi_4)
                    int32_t* var_e4_16 = esi_4
                    int32_t* var_e8_5 = esi_4
                    void*** var_ec_5 = &var_c4
                    int32_t* esi_5 = *(edi_5 + 4)
                    var_4.b = 2
                    
                    if (esi_5 u> *(edi_5 + 8))
                        __invalid_parameter_noinfo()
                    
                    sub_458540(edi_5, &var_94, edi_5, esi_5, &var_c8)
                    var_4.b = 1
                    sub_451be0(&var_c8)
                    int32_t eax_54 = *(edi_5 + 4)
                    int32_t var_40_1 = 0
                    
                    if (eax_54 == 0 || (*(edi_5 + 8) - eax_54) s>> 3 == 0)
                        __invalid_parameter_noinfo()
                    
                    **(edi_5 + 4)
                    int32_t* eax_56 = var_ac
                    var_4.b = 0
                    
                    if (eax_56 != 0)
                        (*(*eax_56 + 8))(eax_56)
                else
                    if (var_c8 == 0)
                        __invalid_parameter_noinfo()
                    
                    if (var_c4 u>= var_c8[2])
                        __invalid_parameter_noinfo()
                    
                    if (var_c4 u>= var_c8[2])
                        __invalid_parameter_noinfo()
                    
                    void** ecx_23 = var_c4
                    void* eax_42 = *ecx_23
                    *(eax_42 + 0x70) = data_c78630
                    *(eax_42 + 0x74) = data_c78634
                    
                    if (ecx_23 u>= var_c8[2])
                        __invalid_parameter_noinfo()
                    
                    *var_c4
                
                int32_t var_4_1 = 0xffffffff
                sub_4543f0(&var_8c)
            else
                int32_t ecx_10 = *(esi_1 + 0x3c)
                
                if (ecx_10 == 0 || (*(esi_1 + 0x40) - ecx_10) s>> 3 != 1)
                    int32_t var_e4_4 = sub_455600(&esi_1[0x1c])
                    sub_4653f0("%d\n")
                    sub_465480(".\texture.cpp", 0x3be)
                
                sub_479cc0(*sub_455620(esi_1 + 0x38, 0) + 0x40, 
                    (*(*(&data_c7863c)[*(esi_1 + 0x78)] + 0xc))(eax_2))
                *sub_455620(esi_1 + 0x38, 0)
        else if ((arg2 & 0x3fff) != 0x3fe0)
            void* eax_67 = arg2 & 0x3fff
            
            if (eax_67 == 0 || eax_67 == 0x20)
                void* esi_9 = arg2 & 0x3fff
                (*(*arg1 + 0x20))(esi_9, 0x280, 0x1c0, 4)
                esi_1 = arg1[esi_9 + 5]
                int32_t eax_70 = *(esi_1 + 0x3c)
                
                if (eax_70 == 0 || (*(esi_1 + 0x40) - eax_70) s>> 3 == 0)
                    __invalid_parameter_noinfo()
                
                void* ebx_5 = **(esi_1 + 0x3c)
                int32_t* eax_72 = (*(*data_c7864c + 0xc))(eax_2)
                
                if (*(ebx_5 + 0x40) != eax_72)
                    if (eax_72 != 0)
                        (*(*eax_72 + 4))(eax_72)
                    
                    int32_t* eax_74 = *(ebx_5 + 0x40)
                    
                    if (eax_74 != 0)
                        (*(*eax_74 + 8))(eax_74)
                    
                    *(ebx_5 + 0x40) = eax_72
                
                goto label_45b5ff
            
            sub_465480(".\texture.cpp", 0x42a)
        else
            sub_4653f0("Hit \n")
            (*(*arg1 + 0x20))(0x3fe0, 0x280, 0x1c0, 3)
            void* esi_7 = arg1[0x3fe5] + 0x38
            sub_479cc0(*sub_455620(esi_7, 0) + 0x40, (*(*data_c78648 + 0xc))(eax_2))
            *sub_455620(esi_7, 0)
else
    int32_t var_e4_2 = ebx u>> 5 & 0x3fff
    sub_4653f0("Color NG %x\n")
    sub_465480(".\texture.cpp", 0x3a8)

fsbase->NtTib.ExceptionList = ExceptionList
