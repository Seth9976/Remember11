// 函数: sub_446d40
// 地址: 0x446d40
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ebx = arg1
int32_t esi = data_c7bbac

if (ebx == 0xffffffff)
    arg1 = esi
    ebx = esi

int32_t ebp = data_c7b7a8
int32_t edx = data_c7b7a4
void* ebx_3

if (ebx s< 0)
    ebx_3 = esi * 0x4c + edx
else if (ebx s>= ebp)
    ebx_3 = nullptr
else
    ebx_3 = ebx * 0x4c + edx

int32_t i_1 = sx.d(*(ebx_3 + 8))

if (i_1 != 0xffffffff)
    int32_t i
    
    do
        void* eax_1
        
        if (i_1 s< 0)
            eax_1 = esi * 0x4c + edx
        else if (i_1 s>= ebp)
            eax_1 = nullptr
        else
            eax_1 = i_1 * 0x4c + edx
        
        i = sx.d(*(eax_1 + 6))
        sub_446d40(i_1)
        ebp = data_c7b7a8
        edx = data_c7b7a4
        i_1 = i
        esi = data_c7bbac
    while (i != 0xffffffff)

int16_t edi = *(ebx_3 + 4)
int32_t eax_4 = sx.d(edi)
int32_t eax_8
int32_t ecx

if (eax_4 != 0xffffffff)
    ecx = eax_4
    void* eax_11
    
    if (eax_4 s< 0)
        eax_11 = esi * 0x4c + edx
    else if (eax_4 s>= ebp)
        eax_11 = nullptr
    else
        eax_11 = eax_4 * 0x4c + edx
    
    eax_8 = sx.d(*(eax_11 + 8))
else
    ecx = i_1 | eax_4
    int32_t eax_5
    eax_5.b = ebp s<= 0
    eax_8 = sx.d(*(((eax_5 - 1) & edx) + 6))

if (eax_8 == 0xffffffff || eax_8 == arg1)
    if (edi != 0xffff)
        if (ecx s< 0)
            void* esi_7 = esi * 0x4c + edx
            edx.w = *(ebx_3 + 6)
            *(esi_7 + 8) = edx.w
            return sub_4469a0(arg1) __tailcall
        
        if (ecx s< ebp)
            void* ecx_10 = ecx * 0x4c + edx
            edx.w = *(ebx_3 + 6)
            *(ecx_10 + 8) = edx.w
            return sub_4469a0(arg1) __tailcall
        
        edx.w = *(ebx_3 + 6)
        *8 = edx.w
    
    return sub_4469a0(arg1) __tailcall

int32_t ecx_1

do
    ecx_1 = eax_8
    void* eax_15
    
    if (eax_8 s< 0)
        eax_15 = esi * 0x4c + edx
    else if (eax_8 s>= ebp)
        eax_15 = nullptr
    else
        eax_15 = eax_8 * 0x4c + edx
    
    eax_8 = sx.d(*(eax_15 + 6))
while (eax_8 != arg1)

if (ecx_1 s< 0)
    eax_8.w = *(ebx_3 + 6)
    *(esi * 0x4c + edx + 6) = eax_8.w
    return sub_4469a0(arg1) __tailcall

if (ecx_1 s>= ebp)
    eax_8.w = *(ebx_3 + 6)
    *6 = eax_8.w
    return sub_4469a0(arg1) __tailcall

eax_8.w = *(ebx_3 + 6)
*(ecx_1 * 0x4c + edx + 6) = eax_8.w
return sub_4469a0(arg1) __tailcall
