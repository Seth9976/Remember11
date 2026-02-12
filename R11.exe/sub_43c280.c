// 函数: sub_43c280
// 地址: 0x43c280
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t* ebp = arg1

if (*ebp == 0)
    return 0

void* eax_1 = sub_441920(arg2)
int32_t ecx = arg4
int16_t edx = arg3.w
ebp[1].b = arg2.b
*(ebp + 6) = edx

if (ecx s< 0)
    ecx = *(eax_1 + 0x14)

char* esi = *ebp
int32_t edi_1 = arg2 << 0x10
ebp[2].b = ecx.b
int32_t ebx_1 = 0
sub_43aa10(zx.d(edx) | edi_1, esi)
int32_t __saved_ecx = 1

if (*esi != 0)
    int32_t ebp_2 = arg3 + 1
    
    do
        esi = &esi[2]
        ebx_1 += 1
        sub_43aa10(zx.d(ebp_2.w) | edi_1, esi)
        __saved_ecx += 1
        ebp_2 += 1
    while (*esi != 0)
    
    ebp = arg1

*(ebp + 5) = ebx_1.b
return __saved_ecx
