// 函数: sub_44f2a0
// 地址: 0x44f2a0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_499a17
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_27c
int32_t eax_2 = __security_cookie ^ &var_27c
int32_t __saved_edi
int32_t var_290 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
char* edx = arg1[3]
int32_t var_278 = *arg1
char* ecx_1 = arg1[1]
char* var_264 = edx
void var_218
sub_44d1f0(&var_218, ecx_1)
struct CFile::VTable* const var_258 = &CFile::`vftable'
int32_t var_22c = 0
int32_t var_254 = 0
int32_t var_250 = 0
int32_t var_294_1 = 0
int32_t var_4 = 0
sub_465b80(&var_258, &var_218, 0, 1)
uint8_t var_220
sub_465560(&var_258, &var_220, 8, nullptr)
int32_t var_21c
int32_t eax_7 = var_21c * 2
int32_t ecx_4
ecx_4.b = mulu.dp.d(eax_7, 4) u>> 0x20 != 0
void* eax_9 = j_sub_481fef(neg.d(ecx_4) | (eax_7 * 4))
int32_t ebx = var_21c << 3
sub_465560(&var_258, eax_9, ebx, nullptr)
sub_465840(&var_258, ebx + 8, FILE_BEGIN)
int32_t var_228
sub_465560(&var_258, &var_228, 8, nullptr)
int32_t eax_10 = 4
void* const ecx_10 = &data_4a2bc4
uint8_t* edx_1 = &var_220
int32_t eax_14

while (true)
    if (*edx_1 != *ecx_10)
    label_44f3ca:
        uint32_t ebx_3 = zx.d(*edx_1)
        uint32_t ebp_1 = zx.d(*ecx_10)
        uint32_t ebx_4 = ebx_3 - ebp_1
        
        if (ebx_3 != ebp_1)
        label_44f41b:
            eax_14 = 1
            
            if (ebx_4 s<= 0)
                eax_14 = 0xffffffff
            
            break
        
        if (eax_10 != 1)
            uint32_t ebx_5 = zx.d(edx_1[1])
            uint32_t ebp_2 = zx.d(*(ecx_10 + 1))
            ebx_4 = ebx_5 - ebp_2
            
            if (ebx_5 != ebp_2)
                goto label_44f41b
            
            if (eax_10 != 2)
                uint32_t ebx_6 = zx.d(edx_1[2])
                uint32_t ebp_3 = zx.d(*(ecx_10 + 2))
                ebx_4 = ebx_6 - ebp_3
                
                if (ebx_6 != ebp_3)
                    goto label_44f41b
                
                if (eax_10 != 3)
                    uint32_t ebx_7 = zx.d(edx_1[3])
                    uint32_t ecx_14 = zx.d(*(ecx_10 + 3))
                    ebx_4 = ebx_7 - ecx_14
                    
                    if (ebx_7 != ecx_14)
                        goto label_44f41b
    else
        eax_10 -= 4
        ecx_10 += 4
        edx_1 = &edx_1[4]
        
        if (eax_10 u>= 4)
            continue
        else if (eax_10 != 0)
            goto label_44f3ca
    
    eax_14 = 0
    break

if (eax_14 != 0)
    sub_465480(".\libadxf.cpp", 0x26f)

uint32_t ebp_5 = var_21c * 0x30
void* eax_15 = j_sub_481fef(ebp_5)
sub_465840(&var_258, var_228, FILE_BEGIN)
sub_465560(&var_258, eax_15, ebp_5, nullptr)
void* eax_16 = sub_481fef(0x24)
void* ebp_6

if (eax_16 == 0)
    ebp_6 = nullptr
else
    *(eax_16 + 8) = 0
    *(eax_16 + 0xc) = 0
    *(eax_16 + 0x10) = 0
    char* ecx_17 = var_264
    *(eax_16 + 0x18) = 0
    *(eax_16 + 0x1c) = 0
    *(eax_16 + 0x20) = 0
    *eax_16 = ecx_17
    ebp_6 = eax_16

var_4.b = 0
sub_480cf0(var_264, 0, ((var_21c * 2 + 0x11c) u>> 2) * 4)
EnterCriticalSection(&data_c777f4)
int32_t edi = data_c77814
void** eax_18 = sub_44d550(&data_c77810, &var_264, &var_278)
void* eax_19 = *eax_18

if (eax_19 == 0 || eax_19 != &data_c77810)
    __invalid_parameter_noinfo()

if (eax_18[1] != edi)
    sub_465480(".\libadxf.cpp", 0x280)

*(*ebp_6 + 0x118) = *eax_9
char* edx_11 = ecx_1
*(*ebp_6 + 8) = var_21c
char* eax_23 = *ebp_6 + 0x10
void* ecx_18

do
    ecx_18.b = *edx_11
    *eax_23 = ecx_18.b
    edx_11 = &edx_11[1]
    eax_23 = &eax_23[1]
while (ecx_18.b != 0)
int32_t eax_25 = *ebp_6 + 0x11c
int32_t edi_1 = 0
int32_t var_270_1 = eax_25

if (var_21c s> 0)
    int128_t* ebx_10 = eax_15
    void* esi_2 = eax_9 + 4
    
    while (true)
        *(eax_25 + (edi_1 << 1)) = ((*esi_2 + 0x7ff) u>> 0xb).w
        var_264 = *esi_2
        sub_44e9b0(ebp_6 + 4, &var_264)
        sub_44f010(ebp_6, ebx_10)
        edi_1 += 1
        esi_2 += 8
        ebx_10 = &ebx_10[3]
        
        if (edi_1 s>= var_21c)
            break
        
        eax_25 = var_270_1

*sub_44ea20(&data_c77810, &var_278) = ebp_6
int32_t ebp_7 = 0
void* ebx_11

if (var_21c s<= 0)
    ebx_11 = eax_9
else
    do
        uint32_t eax_28 = sub_44d160(*sub_44ea20(&data_c77810, &var_278), ebp_7)
        ebx_11 = eax_9
        
        if (*(ebx_11 + (ebp_7 << 3)) != eax_28)
            sub_465480(".\libadxf.cpp", 0x2a9)
        
        uint32_t eax_30 = sub_44d060(*sub_44ea20(&data_c77810, &var_278), ebp_7)
        
        if ((*(ebx_11 + (ebp_7 << 3) + 4) + 0x7ff) u>> 0xb != eax_30)
            sub_465480(".\libadxf.cpp", 0x2ac)
        
        ebp_7 += 1
    while (ebp_7 s< var_21c)

LeaveCriticalSection(&data_c777f4)
sub_465540(&var_258)
j_sub_4813df(ebx_11)

if (eax_15 != 0)
    j_sub_4813df(eax_15)

sub_44ce70(arg1, 1)
int32_t var_4_1 = 0xffffffff
sub_465a70(&var_258)
fsbase->NtTib.ExceptionList = ExceptionList
sub_480cd2(eax_2 ^ &var_27c)
return 0
