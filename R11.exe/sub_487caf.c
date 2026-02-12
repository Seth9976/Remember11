// 函数: sub_487caf
// 地址: 0x487caf
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

InterlockedIncrement(arg1)
int32_t eax = *(arg1 + 0xb0)

if (eax != 0)
    InterlockedIncrement(eax)

int32_t eax_1 = *(arg1 + 0xb8)

if (eax_1 != 0)
    InterlockedIncrement(eax_1)

int32_t eax_2 = *(arg1 + 0xb4)

if (eax_2 != 0)
    InterlockedIncrement(eax_2)

int32_t eax_3 = *(arg1 + 0xc0)

if (eax_3 != 0)
    InterlockedIncrement(eax_3)

void* ebx = arg1 + 0x50
int32_t i_1 = 6
int32_t i

do
    if (*(ebx - 8) != &data_4cc658)
        int32_t eax_4 = *ebx
        
        if (eax_4 != 0)
            InterlockedIncrement(eax_4)
    
    if (*(ebx - 4) != 0)
        int32_t eax_5 = *(ebx + 4)
        
        if (eax_5 != 0)
            InterlockedIncrement(eax_5)
    
    ebx += 0x10
    i = i_1
    i_1 -= 1
while (i != 1)
return InterlockedIncrement(*(arg1 + 0xd4) + 0xb4)
