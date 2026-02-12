// 函数: sub_472390
// 地址: 0x472390
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t* eax = sub_471040()
int32_t ecx = sub_480cf0(arg1, 0, 0x48)

if (*arg3 != 0)
    *arg1 = *arg2
else
    *arg1 = 0

if (arg3[1] != 0)
    ecx = arg2[1]
    arg1[1] = ecx
else
    arg1[1] = 1

if (arg3[2] != 0)
    arg1[0xc] = arg2[0xc]
else
    arg1[0xc] = 1

int32_t var_10

if (arg3[3] != 0)
    arg1[2] = arg2[2]
else
    ecx = (*(*eax + 0x20))(eax, *arg1, &var_10)
    int32_t var_4
    
    if (arg1[0xc] != 0)
        arg1[2] = var_4
    else
        ecx = var_4
        
        if (sub_477a40(ecx) u>= 8)
            arg1[2] = var_4
        else
            arg1[2] = 0x16

if (arg3[4] != 0)
    ecx = arg2[3]
    arg1[3] = ecx
else
    arg1[3] = 0x40

if (arg3[5] != 0)
    arg1[4] = arg2[4]
    arg1[5] = arg2[5]
else if (arg1[0xc] == 0)
    (*(*eax + 0x20))(eax, *arg1, &var_10)
    int32_t var_c
    ecx = var_c
    arg1[4] = var_10
    arg1[5] = ecx
else
    arg1[4] = 0x280
    arg1[5] = 0x1e0

int32_t eax_9 = 0

if (arg3[6] != 0)
    arg1[6] = arg2[6]
else
    ecx = arg1[2]
    arg1[6] = ecx

if (arg3[7] != 0)
    ecx = arg2[7]
    arg1[7] = ecx
else
    arg1[7] = 2

if (arg3[8] != 0)
    arg1[8] = arg2[8]
    ecx = arg2[9]
    arg1[9] = ecx
else
    arg1[8] = 0
    arg1[9] = 0

if (arg3[9] != 0)
    arg1[0xa] = arg2[0xa]
else
    arg1[0xa] = 1

if (arg3[0xa] != 0 || arg3[0xb] != 0)
    arg1[0xe] = arg2[0xe]
else
    eax_9 = sub_477a40(arg1[6])
    arg1[0xe] = (sbb.d(ecx, ecx, eax_9 u< 8) & 9) + 0x47

if (arg3[0xc] != 0)
    eax_9 = arg2[0xf]
    arg1[0xf] = eax_9
else
    arg1[0xf] = 2

if (arg3[0xd] != 0)
    arg1[0x10] = arg2[0x10]
else
    arg1[0x10] = 0

if (arg3[0xe] != 0)
    int32_t eax_10 = arg2[0x11]
    arg1[0x11] = eax_10
    return eax_10

int32_t edx_11 = arg1[0xc]
int32_t edx_12 = neg.d(edx_11)
arg1[0x11] = sbb.d(edx_12, edx_12, edx_11 != 0) & 0x80000000
return eax_9
