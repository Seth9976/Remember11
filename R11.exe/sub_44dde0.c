// 函数: sub_44dde0
// 地址: 0x44dde0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t* eax_26 = arg4
arg4 = *eax_26
int32_t ecx_1 = *(arg1 + 4)
int32_t edi

if (ecx_1 != 0)
    edi = (*(arg1 + 0xc) - ecx_1) s>> 2
else
    edi = 0

if (arg3 == 0)
    return eax_26

int32_t eax

if (ecx_1 != 0)
    eax = (*(arg1 + 8) - ecx_1) s>> 2
else
    eax = 0

if (0x3fffffff - eax u< arg3)
    sub_44d6e0()
    noreturn

int32_t eax_3

if (ecx_1 != 0)
    eax_3 = (*(arg1 + 8) - ecx_1) s>> 2
else
    eax_3 = 0

if (edi u>= eax_3 + arg3)
    int128_t* ebp_2 = *(arg1 + 8)
    int32_t* edi_7 = arg2
    int32_t eax_20 = arg3 << 2
    
    if ((ebp_2 - edi_7) s>> 2 u>= arg3)
        void* ebx_4 = ebp_2 - eax_20
        *(arg1 + 8) = sub_44d5c0(ebx_4, ebp_2, ebp_2)
        sub_467440(edi_7, ebx_4, ebp_2)
        return sub_44d1d0(edi_7, &edi_7[arg3], &arg4)
    
    sub_44d5c0(edi_7, ebp_2, &edi_7[arg3])
    int32_t* eax_22 = *(arg1 + 8)
    sub_4679c0(eax_22, arg3 - ((eax_22 - edi_7) s>> 2), &arg4)
    *(arg1 + 8) += eax_20
    return sub_44d1d0(edi_7, *(arg1 + 8) - eax_20, &arg4)

uint32_t eax_8 = edi u>> 1
int32_t edi_3

if (0x3fffffff - eax_8 u>= edi)
    edi_3 = edi + eax_8
else
    edi_3 = 0

int32_t eax_9

if (ecx_1 != 0)
    eax_9 = (*(arg1 + 8) - ecx_1) s>> 2
else
    eax_9 = 0

if (edi_3 u< eax_9 + arg3)
    int32_t edi_4
    
    if (ecx_1 != 0)
        edi_4 = (*(arg1 + 8) - ecx_1) s>> 2
    else
        edi_4 = 0
    
    edi_3 = edi_4 + arg3

int32_t var_14_1 = 0
void* eax_13 = sub_44d100(edi_3)
void* eax_16 = sub_4679c0(sub_44d5c0(*(arg1 + 4), arg2, eax_13), arg3, &arg4)
sub_44d5c0(arg2, *(arg1 + 8), eax_16)
void* eax_18 = *(arg1 + 4)
int32_t ecx_7

if (eax_18 != 0)
    ecx_7 = (*(arg1 + 8) - eax_18) s>> 2
else
    ecx_7 = 0

if (eax_18 != 0)
    j_sub_4813df(eax_18)

void* eax_19 = eax_13 + ((arg3 + ecx_7) << 2)
*(arg1 + 4) = eax_13
*(arg1 + 0xc) = eax_13 + (edi_3 << 2)
*(arg1 + 8) = eax_19
return eax_19
