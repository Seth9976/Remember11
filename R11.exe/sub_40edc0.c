// 函数: sub_40edc0
// 地址: 0x40edc0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* esi = *(arg1[0x11] + 8)
uint32_t eax_1 = zx.d(*(esi + 4))

if ((eax_1 & 0xf000) == 0)
    *(data_e7e648 + 0xb417c) = eax_1.w

void* ecx_2 = data_e7e648
int16_t edx = *(ecx_2 + 0xb417c) & 0xfff
char var_14
char __saved_ebx
char __saved_edi

if (edx == 0xfff)
    __saved_edi = -1
    __saved_ebx = -1
    var_14 = -1
else
    uint32_t eax_3 = zx.d(edx)
    __saved_edi = ((eax_3 & 0xf) << 4).b
    __saved_ebx = ((eax_3 u>> 4 & 0xf) << 4).b
    var_14 = ((eax_3 u>> 8 & 0xf) << 4).b

sub_402450(ecx_2 + 0xb4180, var_14, __saved_ebx, __saved_edi)
int32_t edi = sub_414cf0(zx.d(*(esi + 2)))

if (edi s<= 0)
    edi = 1

int32_t eax_8
eax_8.b = *(esi + 1)

if (eax_8.b == 0x7f)
    void* eax_9 = data_e7e648
    *(eax_9 + 0xb417e) &= 0x7f
else
    *(data_e7e648 + 0xb417e) = zx.w(eax_8.b)

void* edx_9 = data_e7e648
char ebx = (*(edx_9 + 0xb417e)).b
uint32_t esi_1 = (zx.d(ebx) & 0x7f) * 3
char var_14_1
uint32_t esi_3

if (ebx s< 0)
    uint32_t esi_4 = esi_1 * 2
    esi_3 = esi_4 * 2
    var_14_1 = (*(esi_4 * 2 + 0x4b097c)).b
else
    uint32_t esi_2 = esi_1 * 2
    esi_3 = esi_2 * 2
    var_14_1 = (*(esi_2 * 2 + 0x4b0978)).b

sub_4023e0(edx_9 + 0xb4180, var_14_1, edi)

if (*(esi_3 + &data_4b0980) != 0)
    sub_409b20()

void* eax_13 = arg1[0x11]
*(eax_13 + 8) += 6
sub_40a8a0(arg1)
return 0
