// 函数: sub_481694
// 地址: 0x481694
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* var_1c
sub_481612(&var_1c, arg2)
uint32_t ebx = arg1
uint32_t eax_4

if (ebx u< 0x100)
    void* ecx_1 = var_1c
    int32_t eax
    
    if (*(ecx_1 + 0xac) s<= 1)
        eax = zx.d(*(*(ecx_1 + 0xc8) + (ebx << 1))) & 1
    else
        eax = sub_48956a(ebx, 1, &var_1c)
        ecx_1 = var_1c
    
    void* var_14
    char var_10
    
    if (eax == 0)
    label_4816f7:
        
        if (var_10 != 0)
            *(var_14 + 0x70) &= 0xfffffffd
        
        return ebx
    
    eax_4 = zx.d(*(*(ecx_1 + 0xcc) + ebx))
label_48179e:
    
    if (var_10 != 0)
        *(var_14 + 0x70) &= 0xfffffffd
    
    return eax_4

char var_8
PSTR ecx_3

if (*(var_1c + 0xac) s<= 1)
label_481749:
    *__errno() = 0x2a
    var_8 = ebx.b
    char var_7_2 = 0
    ecx_3 = 1
else
    arg1 = ebx s>> 8
    
    if (sub_489526(arg1.b, &var_1c) == 0)
        goto label_481749
    
    int32_t eax_9
    eax_9.b = arg1.b
    var_8 = eax_9.b
    char var_7_1 = ebx.b
    char var_6_1 = 0
    ecx_3 = 2

void* eax_11 = var_1c
char var_c
int32_t eax_12 =
    sub_4894e3(&var_1c, *(eax_11 + 0x14), 0x100, &var_8, ecx_3, &var_c, 3, *(eax_11 + 4), 1)

if (eax_12 == 0)
    goto label_4816f7

if (eax_12 != 1)
    int32_t eax_13
    eax_13:1.b = var_c
    char var_b
    eax_4 = eax_13 | zx.d(var_b)
else
    eax_4 = zx.d(var_c)

goto label_48179e
