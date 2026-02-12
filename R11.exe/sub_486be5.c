// 函数: sub_486be5
// 地址: 0x486be5
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ecx
int32_t var_8 = ecx
int32_t var_c = ecx
int32_t i = *(arg1 + 8)
void* esi = *(arg1 + 0x10)
int32_t result = 0

while (i s>= 0)
    i *= 2
    result += 1

void* eax_2 = result * 0x204 + esi + 0x144
void* var_c_1 = eax_2
int32_t i_4 = 0x3f
int32_t i_1

do
    *(eax_2 + 8) = eax_2
    *(eax_2 + 4) = eax_2
    eax_2 += 8
    i_1 = i_4
    i_4 -= 1
while (i_1 != 1)
void* lpAddress = (result << 0xf) + *(arg1 + 0xc)

if (VirtualAlloc(lpAddress, 0x8000, MEM_COMMIT, PAGE_READWRITE) == 0)
    return 0xffffffff

void* edx = lpAddress + 0x7000

if (lpAddress u<= edx)
    void* eax_5 = lpAddress + 0x10
    int32_t i_3 = ((edx - lpAddress) u>> 0xc) + 1
    int32_t i_2
    
    do
        *(eax_5 - 8) = 0xffffffff
        *(eax_5 + 0xfec) = 0xffffffff
        *eax_5 = eax_5 + 0xffc
        *(eax_5 - 4) = 0xff0
        *(eax_5 + 4) = eax_5 - 0x1004
        *(eax_5 + 0xfe8) = 0xff0
        eax_5 += 0x1000
        i_2 = i_3
        i_3 -= 1
    while (i_2 != 1)

*(var_c_1 + 0x1fc) = lpAddress + 0xc
*(lpAddress + 0x14) = var_c_1 + 0x1f8
*(var_c_1 + 0x200) = edx + 0xc
*(edx + 0x10) = var_c_1 + 0x1f8
*(esi + (result << 2) + 0x44) = 0
*(esi + (result << 2) + 0xc4) = 1
void* eax_7
eax_7.b = *(esi + 0x43)
void* ecx_6
ecx_6.b = eax_7.b
ecx_6.b += 1
*(esi + 0x43) = ecx_6.b

if (eax_7.b == 0)
    *(arg1 + 4) |= 1

*(arg1 + 8) &= not.d(0x80000000 u>> result.b)
return result
