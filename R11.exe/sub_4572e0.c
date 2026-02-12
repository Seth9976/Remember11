// 函数: sub_4572e0
// 地址: 0x4572e0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_499f68
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t edi
int32_t var_50 = edi
int32_t eax_2 = __security_cookie ^ &var_50
fsbase->NtTib.ExceptionList = &ExceptionList
data_c78694 += 1
data_c78680 = 0
char var_3d = 0
void* eax_9
uint32_t ebp
uint32_t edi_7

if (arg6[0x2c].b != 1)
    ebp = arg10
    edi_7 = arg9
    eax_9 = arg7
else
    int32_t* ebx_1 = *(arg6 + 0x30)
    int32_t eax_4 = 8
    char const* const edx_1 = "PNGFILE3"
    int32_t* esi = ebx_1
    int32_t eax_8
    
    while (true)
        if (*esi != *edx_1)
        label_457358:
            uint32_t edi_2 = zx.d(*esi)
            uint32_t ecx_1 = zx.d(*edx_1)
            uint32_t edi_3 = edi_2 - ecx_1
            
            if (edi_2 != ecx_1)
            label_4573a9:
                eax_8 = 1
                
                if (edi_3 s<= 0)
                    eax_8 = 0xffffffff
                
                break
            
            if (eax_4 != 1)
                uint32_t edi_4 = zx.d(*(esi + 1))
                uint32_t ecx_2 = zx.d(edx_1[1])
                edi_3 = edi_4 - ecx_2
                
                if (edi_4 != ecx_2)
                    goto label_4573a9
                
                if (eax_4 != 2)
                    uint32_t edi_5 = zx.d(*(esi + 2))
                    uint32_t ecx_3 = zx.d(edx_1[2])
                    edi_3 = edi_5 - ecx_3
                    
                    if (edi_5 != ecx_3)
                        goto label_4573a9
                    
                    if (eax_4 != 3)
                        uint32_t edi_6 = zx.d(*(esi + 3))
                        uint32_t edx_5 = zx.d(edx_1[3])
                        edi_3 = edi_6 - edx_5
                        
                        if (edi_6 != edx_5)
                            goto label_4573a9
        else
            eax_4 -= 4
            edx_1 = &edx_1[4]
            esi = &esi[1]
            
            if (eax_4 u>= 4)
                continue
            else if (eax_4 != 0)
                goto label_457358
        
        eax_8 = 0
        break
    
    if (eax_8 == 0)
        edi_7 = zx.d(*(ebx_1 + 0x12))
        ebp = zx.d(*(ebx_1 + 0x16))
    
    if (eax_8 != 0 || (edi_7 == 0 && ebp == 0))
        ebp = ebx_1[3]
        edi_7 = ebx_1[2]
    
    int32_t ecx_4 = ebx_1[3]
    eax_9 = arg7
    *(eax_9 + 0x18) = ebx_1[2]
    *(eax_9 + 0x1c) = ecx_4
    var_3d = 1

int32_t arg_8
int32_t ebx_3 = arg_8
*(eax_9 + 0x10) = edi_7
*(eax_9 + 0x14) = ebp
int32_t ebx_4 = ebx_3 u>> 0x14 | arg5 << 0xc
uint32_t eax_11 = arg5 u>> 0x14
int32_t eax_13
int32_t edx_7
edx_7:eax_13 = sx.q(zx.d(arg6[6]))
int32_t esi_5 = ebx_4 & 0x3f

if (eax_13 != esi_5 || edx_7 != 0)
    sub_465480(".\texture.cpp", 0x4b8)

int32_t** ebx_5
int16_t* edi_10
int16_t x87control

if (var_3d != 1)
    ebx_5 = arg4
    int32_t* eax_21 = *(arg1 + 4)
    (*(*eax_21 + 0x5c))(eax_21, edi_7, ebp, 1, 0, 0x15, 1, ebx_5, 0)
    int32_t* eax_22 = *ebx_5
    int16_t* var_38
    (*(*eax_22 + 0x4c))(eax_22, 0, &var_38, 0, 0)
    
    if (esi_5 == 0x14)
        sub_455880(arg_8, arg5, edi_7, ebp, &var_38, arg6, arg8, arg7, eax_2, var_50, arg3, arg2)
    else
        int16_t* var_34
        
        if (esi_5 == 0x13)
            if (edi_7 != 0x20 && ebp != 0x20)
                uint32_t var_58_9 = ebp
                uint32_t var_5c_6 = edi_7
                sub_4653f0("Create Texture %dx%d(256)\n")
            
            void* var_58_10 = arg7
            int32_t var_5c_7 = arg8
            sub_4557a0(arg_8, arg5, edi_7, ebp, var_38, var_34, arg6)
        else if (esi_5 == 1)
            if (edi_7 != 0x20 && ebp != 0x20)
                uint32_t var_58_11 = ebp
                uint32_t var_5c_8 = edi_7
                sub_4653f0("Create Texture %dx%d(FULL)\n")
            
            void* var_58_12 = arg7
            sub_455430(arg_8, arg5, edi_7, ebp, var_38, var_34, arg6)
        else if (esi_5 == 0)
            if (edi_7 != 0x20 && ebp != 0x20)
                uint32_t var_58_13 = ebp
                uint32_t var_5c_10 = edi_7
                sub_4653f0("Create Texture %dx%d(FULL)\n")
            
            void* var_58_14 = arg7
            sub_4551b0(arg_8, arg5, edi_7, ebp, var_38, var_34, arg6)
    
    int32_t* eax_32 = *ebx_5
    (*(*eax_32 + 0x50))(eax_32, 0)
    edi_10 = arg6
else
    void* esi_6 = *(arg6 + 0x30)
    EnterCriticalSection(&data_c781dc)
    char* eax_15 = esi_6 + 0x1c
    int32_t var_10_1 = 0xf
    int32_t var_14_1 = 0
    char var_24_1 = 0
    char i
    
    do
        i = *eax_15
        eax_15 = &eax_15[1]
    while (i != 0)
    void var_28
    sub_44b9c0(&var_28, esi_6 + 0x1c, eax_15 - &eax_15[1])
    int32_t var_4 = 0
    int32_t* var_30
    sub_453250(0xc78200, &var_30, &var_28)
    int32_t var_4_1 = 0xffffffff
    
    if (var_10_1 u>= 0x10)
        j_sub_4813df(var_24_1.d)
    
    int32_t* ebp_1 = var_30
    int32_t edi_8 = data_c78204
    
    if (ebp_1 == 0 || ebp_1 != 0xc78200)
        __invalid_parameter_noinfo()
    
    if (eax_11 == edi_8)
        LeaveCriticalSection(&data_c781dc)
        edi_10 = arg6
        ebx_5 = arg4
        x87control = sub_452920(eax_11, edi_10, ebx_5, *(edi_10 + 0x30), ebx_4 & 0x3f, arg7, arg8, 
            arg_8, arg5)
    else
        if (ebp_1 == 0)
            __invalid_parameter_noinfo()
        
        if (eax_11 == ebp_1[1])
            __invalid_parameter_noinfo()
        
        int32_t* edi_9 = *(eax_11 + 0x28)
        ebx_5 = arg4
        int32_t* eax_17
        
        if (*ebx_5 != edi_9)
            if (edi_9 != 0)
                (*(*edi_9 + 4))(edi_9)
            
            eax_17 = *ebx_5
            
            if (eax_17 != 0)
                (*(*eax_17 + 8))(eax_17)
            
            *ebx_5 = edi_9
        
        if (eax_11 == ebp_1[1])
            __invalid_parameter_noinfo()
        
        eax_17.b = *(eax_11 + 0x2c)
        uint32_t var_58_6 = eax_11
        *(arg7 + 0x48) = eax_17.b
        sub_453490(0xc78200, &arg_8, ebp_1)
        LeaveCriticalSection(&data_c781dc)
        edi_10 = arg6

if (edi_10[0x2c].b != 1)
    data_c78690 -= data_c78680
else
    int32_t eax_34 = 6
    char const* const esi_10 = "@mono@"
    void* ecx_21
    
    if (*(edi_10 + 0x74) u< 0x10)
        ecx_21 = &edi_10[0x30]
    else
        ecx_21 = *(edi_10 + 0x60)
    
    int32_t eax_39
    
    while (true)
        if (*ecx_21 != *esi_10)
        label_45771f:
            uint32_t edi_11 = zx.d(*esi_10)
            uint32_t edx_24 = zx.d(*ecx_21)
            uint32_t edx_25 = edx_24 - edi_11
            
            if (edx_24 != edi_11)
            label_457770:
                eax_39 = 1
                
                if (edx_25 s<= 0)
                    eax_39 = 0xffffffff
                
                break
            
            if (eax_34 != 1)
                uint32_t edi_12 = zx.d(esi_10[1])
                uint32_t edx_26 = zx.d(*(ecx_21 + 1))
                edx_25 = edx_26 - edi_12
                
                if (edx_26 != edi_12)
                    goto label_457770
                
                if (eax_34 != 2)
                    uint32_t edi_13 = zx.d(esi_10[2])
                    uint32_t edx_27 = zx.d(*(ecx_21 + 2))
                    edx_25 = edx_27 - edi_13
                    
                    if (edx_27 != edi_13)
                        goto label_457770
                    
                    if (eax_34 != 3)
                        uint32_t eax_38 = zx.d(esi_10[3])
                        uint32_t edx_28 = zx.d(*(ecx_21 + 3))
                        edx_25 = edx_28 - eax_38
                        
                        if (edx_28 != eax_38)
                            goto label_457770
        else
            eax_34 -= 4
            esi_10 = &esi_10[4]
            ecx_21 += 4
            
            if (eax_34 u>= 4)
                continue
            else if (eax_34 != 0)
                goto label_45771f
        
        eax_39 = 0
        break
    
    if (eax_39 != 0)
        data_c78690 -= data_c78680
    else
        sub_455030(x87control, *ebx_5)
        data_c78690 -= data_c78680

data_c78684 = 0
fsbase->NtTib.ExceptionList = ExceptionList
