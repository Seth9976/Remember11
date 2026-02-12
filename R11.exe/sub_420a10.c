// 函数: sub_420a10
// 地址: 0x420a10
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t __saved_esi_2 = arg1
void* edi = data_e7e648
arg1.b = *(edi + 0x20945)
data_a5d90c = edi + 0x20934

if (arg1.b == 0)
    sub_406780(0, 0)
    return 0

int32_t eax_4
int32_t edx
edx:eax_4 = sx.q(zx.d(*(edi + 0x20946)) * 0xa0)
int32_t ecx_1 = arg1 & 0xf
int32_t esi_1 = (eax_4 + (edx & 7)) s>> 3
int32_t __saved_esi_1

if (ecx_1 == 0)
    __saved_esi_1 = esi_1 + 0x40
else
    uint32_t eax_9
    
    if (ecx_1 == 1)
        eax_9 = sub_441360(zx.d(*(edi + 0x2093c)) << 0xe u>> 0x10)
    label_420a8c:
        int32_t eax_11
        int16_t edx_2
        edx_2:eax_11 = sx.q(eax_9 << 8)
        int32_t eax_15
        char edx_4
        edx_4:eax_15 = sx.q(((eax_11 + zx.d(edx_2)) s>> 0x10) * esi_1)
        __saved_esi_1 = ((eax_15 + zx.d(edx_4)) s>> 8) + 0x40
    else
        if (ecx_1 == 2)
            eax_9 = sub_441380(zx.d(*(edi + 0x2093c)) << 0xe u>> 0x10)
            goto label_420a8c
        
        __saved_esi_1 = __saved_esi_2

int32_t __saved_esi

if (*(data_e7e648 + 0x289e) != 0)
    __saved_esi = 0
else
    __saved_esi = __saved_esi_1

sub_406780(0, __saved_esi)
void* eax_18 = data_a5d90c
uint16_t ecx_8
ecx_8.b = *(eax_18 + 0x15)

if (ecx_8.b == 0)
    if (*(eax_18 + 0xc) u> 0x708)
        sub_406780(0, 0)
        eax_18 = data_a5d90c
        *(eax_18 + 0x11) = 0
    
    *(eax_18 + 0xc) += 1
else if (*(eax_18 + 0xa) u>= zx.w(ecx_8.b))
    sub_406780(0, 0)
    eax_18 = data_a5d90c
    *(eax_18 + 0x11) = 0

uint32_t ecx_9 = zx.d(*(eax_18 + 0x14))
*(eax_18 + 4) += zx.d(*(eax_18 + 0x13)) * 0x666
*(eax_18 + 8) += ecx_9 * 0x666
return 0
