// 函数: sub_45b640
// 地址: 0x45b640
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int16_t* edi = arg2
void* ebx_1 = edi & 0x3fff
int16_t* eax = arg1[ebx_1 + 0x4005]

if (eax == 0)
    int32_t __saved_ebp = 0
    void* eax_17
    int80_t st0_2
    st0_2, eax_17 = sub_45ae80(arg1, edi, arg3, arg1[ebx_1 + 5])
    bool cond:1 = *(eax_17 + 0x40) != 0
    *(eax_17 + 0x58) = 0
    
    if (not(cond:1))
        sub_465480(".\texture.cpp", 0x513)
    
    return eax_17

int32_t var_54 = 1
int32_t eax_1
int80_t st0
st0, eax_1 = sub_45ae80(arg1, edi, arg3, eax)
int32_t var_54_1 = 0
void* eax_3
int80_t st0_1
st0_1, eax_3 = sub_45ae80(arg1, edi, arg3, arg1[ebx_1 + 5])
int32_t* eax_4 = *(eax_3 + 0x40)
void var_20
(*(*eax_4 + 0x44))(eax_4, 0, &var_20)
int32_t var_8
int32_t var_4
int32_t var_40 = var_4 << 0x10 | var_8
void* var_30
sub_45ec20(&arg1[0x8009], &var_30, &var_40)
int32_t eax_9 = arg1[0x800a]
void* eax_10 = var_30

if (eax_10 == 0 || eax_10 != &arg1[0x8009])
    __invalid_parameter_noinfo()
    eax_10 = var_30

void* var_2c

if (var_2c != eax_9)
    if (eax_10 == 0)
        __invalid_parameter_noinfo()
        eax_10 = var_30
    
    if (var_2c == *(eax_10 + 4))
        __invalid_parameter_noinfo()
    
    arg2 = *(var_2c + 0x10)
else
    sub_4653f0("Create\n")
    int32_t* esi_1 = arg1[1]
    (*(*esi_1 + 0x5c))(esi_1, var_8, var_4, 1, 1, 0x15, 0, &arg2, 0)
    void* eax_11 = sub_4585d0(&arg1[0x8009], &var_40)
    *eax_11 = arg2

*(eax_3 + 0x58) = 1
*(eax_3 + 0x44) = arg2
*(eax_3 + 0x60) = *(eax + 0x20)
*(eax_3 + 0x64) = *(eax + 0x24)
*(eax_3 + 0x68) = *(eax + 0x28)
int32_t edx_5 = *(eax + 0x2c)
*(eax_3 + 0x5c) = eax_1
*(eax_3 + 0x6c) = edx_5
return eax_3
