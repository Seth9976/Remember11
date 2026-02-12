// 函数: sub_45a1b0
// 地址: 0x45a1b0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_49a1ec
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_1d0
int32_t eax_2 = __security_cookie ^ &var_1d0
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int16_t var_98
sub_453bf0(&var_98)
int32_t var_4 = 0
var_98 = arg2
int16_t var_94 = arg3
int16_t var_92 = arg4
int16_t var_8c = 0
int16_t var_8a = 0
int32_t var_50 = 0
int32_t var_4c = 0
int32_t var_68 = 0
int32_t var_64 = 0
int32_t var_20 = arg5
char var_3e = 1
void* eax_6 = sub_481fef(0x80)
void* esi

if (eax_6 == 0)
    esi = nullptr
else
    long double x87_r7_1 = float.t(1)
    data_c781d4 += 1
    *(eax_6 + 0x40) = 0
    *(eax_6 + 0x28) = fconvert.s(x87_r7_1)
    *(eax_6 + 0x2c) = fconvert.s(x87_r7_1)
    *(eax_6 + 0x48) = 0
    *(eax_6 + 0x10) = 0
    *(eax_6 + 0x14) = 0
    *(eax_6 + 0x20) = 0
    *(eax_6 + 0x24) = 0
    *(eax_6 + 0x4c) = 0
    *(eax_6 + 0x44) = 0
    *(eax_6 + 0x58) = 0
    *(eax_6 + 0x78) = 0
    *(eax_6 + 0x5c) = 0
    esi = eax_6

var_1d0 = esi
int32_t* var_1cc
sub_459b70(&var_1cc, esi)
void* var_1e8_1 = esi
void* var_1ec = esi
int32_t* var_1f0 = &var_1cc
void* eax_7 = var_1d0
*(eax_7 + 0x10) = 0x280
*(eax_7 + 0x14) = 0x1c0
var_4.b = 1
*(eax_7 + 0x78) = 1
void var_60
sub_458940(&var_60, &var_1d0)
int32_t* esi_1 = var_1cc
var_4.b = 0

if (esi_1 != 0)
    bool cond:0_1 = esi_1[1] != 1
    esi_1[1]
    esi_1[1] -= 1
    
    if (not(cond:0_1))
        (*(*esi_1 + 4))(eax_4)
        bool cond:3_1 = esi_1[2] != 1
        esi_1[2]
        esi_1[2] -= 1
        
        if (not(cond:3_1))
            (*(*esi_1 + 8))()

void** ecx_7 = *(arg1 + 0xc)
void** eax_11 = ecx_7[1]

while (*(eax_11 + 0xa1) == 0)
    if (eax_11[4].w u>= arg2)
        ecx_7 = eax_11
        eax_11 = *eax_11
    else
        eax_11 = eax_11[2]

void* edx_5 = *(arg1 + 0xc)
void* eax_12 = *(edx_5 + 4)
bool cond:2 = *(eax_12 + 0xa1) != 0
var_1d0 = edx_5

if (not(cond:2))
    do
        if (arg2 u>= *(eax_12 + 0x10))
            eax_12 = *(eax_12 + 8)
        else
            var_1d0 = eax_12
            eax_12 = *eax_12
    while (*(eax_12 + 0xa1) == 0)

void* esi_2 = arg1 + 8
void** edi_1 = ecx_7
void* var_1c4 = esi_2
void** var_1c0 = edi_1

while (true)
    if (esi_2 == 0 || esi_2 != arg1 + 8)
        __invalid_parameter_noinfo()
    
    if (edi_1 == var_1d0)
        break
    
    if (esi_2 == 0)
        __invalid_parameter_noinfo()
    
    if (edi_1 == *(esi_2 + 4))
        __invalid_parameter_noinfo()
    
    if (sub_455670(&edi_1[6], &var_98) != 0)
        break
    
    sub_450e90(&var_1c4)
    edi_1 = var_1c0
    esi_2 = var_1c4

if (esi_2 == 0 || esi_2 != arg1 + 8)
    __invalid_parameter_noinfo()

if (edi_1 == var_1d0)
    int32_t eax_18
    int32_t edx_6
    edx_6:eax_18 = sx.q(arg3.d * arg4.d * 4)
    int32_t eax_22
    char edx_8
    edx_8:eax_22 = sx.q(((eax_18 + (edx_6 & 7)) s>> 3) + 0xff)
    int16_t var_96_1 = ((eax_22 + zx.d(edx_8)) s>> 8).w + arg2
    int32_t eax_26 = *(arg1 + 0x20014)
    int32_t var_88_1 = eax_26
    *(arg1 + 0x20014) = eax_26 + 1
    void* ecx_10
    ecx_10.w = var_98
    int16_t var_1b8_1 = ecx_10.w
    void var_1b0
    sub_458650(&var_1b0, &var_98)
    var_4.b = 2
    int16_t var_128 = var_1b8_1
    void var_120
    sub_458650(&var_120, &var_1b0)
    var_4.b = 3
    void** eax_29 = sub_4592f0(arg1 + 8, &var_1c4, &var_128)
    esi_2 = *eax_29
    edi_1 = eax_29[1]
    var_4.b = 2
    sub_453cc0(&var_120)
    var_4.b = 0
    sub_453cc0(&var_1b0)

if (esi_2 == 0)
    __invalid_parameter_noinfo()

if (edi_1 == *(esi_2 + 4))
    __invalid_parameter_noinfo()

*(arg1 + (zx.d(edi_1[6].w) << 2) + 0x14) = &edi_1[6]
int32_t var_4_1 = 0xffffffff
void* result = sub_453cc0(&var_98)
fsbase->NtTib.ExceptionList = ExceptionList
sub_480cd2(eax_2 ^ &var_1d0)
return result
