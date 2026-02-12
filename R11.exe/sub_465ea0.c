// 函数: sub_465ea0
// 地址: 0x465ea0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* esi = arg1
arg1.b = *arg4
char* eax = *(esi + 4)
arg4.b = arg1.b
void* ebp

if (eax != 0)
    ebp = *(esi + 0xc) - eax
else
    ebp = nullptr

if (arg3 == 0)
    return eax

void* ecx

if (eax != 0)
    ecx = *(esi + 8) - eax
else
    ecx = nullptr

if (0xffffffff - ecx u< arg3)
    sub_44d6e0()
    noreturn

void* ecx_2

if (eax != 0)
    ecx_2 = *(esi + 8) - eax
else
    ecx_2 = nullptr

if (ebp u>= ecx_2 + arg3)
    int128_t* ebp_5 = *(esi + 8)
    
    if (ebp_5 - arg2 u>= arg3)
        void* eax_11 = ebp_5 - arg3
        *(esi + 8) = sub_465d50(eax_11, ebp_5, ebp_5)
        sub_465c20(arg2, eax_11, ebp_5)
        return sub_465c00(arg2, arg2 + arg3, &arg4)
    
    sub_465d50(arg2, ebp_5, arg2 + arg3)
    char* eax_8 = *(esi + 8)
    sub_465e50(eax_8, arg2 - eax_8 + arg3, &arg4)
    *(esi + 8) += arg3
    return sub_465c00(arg2, *(esi + 8) - arg3, &arg4)

uint32_t ecx_6 = ebp u>> 1
void* ebp_2

if (0xffffffff - ecx_6 u>= ebp)
    ebp_2 = ebp + ecx_6
else
    ebp_2 = nullptr

void* ecx_7

if (eax != 0)
    ecx_7 = *(esi + 8) - eax
else
    ecx_7 = nullptr

if (ebp_2 u< ecx_7 + arg3)
    void* ebp_3
    
    if (eax != 0)
        ebp_3 = *(esi + 8) - eax
    else
        ebp_3 = nullptr
    
    ebp_2 = ebp_3 + arg3

int32_t var_14_1 = 0
void* eax_1 = sub_4487e0(ebp_2)
int128_t* ecx_10 = *(esi + 4)
void* eax_3 = arg2 - ecx_10

if (arg2 != ecx_10)
    sub_481dca(eax_1, eax_3, ecx_10, eax_3)

void* eax_4 = sub_465e50(eax_3 + eax_1, arg3, &arg4)
int32_t ecx_13 = *(esi + 8)
void* ecx_14 = ecx_13 - arg2

if (ecx_13 != arg2)
    sub_481dca(eax_4, ecx_14, arg2, ecx_14)

void* ecx_15 = *(esi + 4)
void* eax_5

if (ecx_15 != 0)
    eax_5 = *(esi + 8) - ecx_15
else
    eax_5 = nullptr

if (ecx_15 != 0)
    j_sub_4813df(ecx_15)

void* eax_7 = eax_1 + arg3 + eax_5
*(esi + 4) = eax_1
*(esi + 0xc) = eax_1 + ebp_2
*(esi + 8) = eax_7
return eax_7
