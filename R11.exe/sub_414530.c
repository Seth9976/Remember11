// 函数: sub_414530
// 地址: 0x414530
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* ecx = data_e7e648
char* esi = *(ecx + 0x20834)
int32_t eax = sx.d(*(arg1 + 0x10))
int32_t eax_2

if (eax == 0)
    *(ecx + 0x2082e) = 0
    int32_t eax_5 = sub_448760() & 0x8000003f
    
    if (eax_5 s< 0)
        eax_5 = ((eax_5 - 1) | 0xffffffc0) + 1
    
    eax_5.b += 0x40
    esi[3] = eax_5.b
    int32_t eax_9 = sub_448760() & 0x8000007f
    
    if (eax_9 s< 0)
        eax_9 = ((eax_9 - 1) | 0xffffff80) + 1
    
    *esi = eax_9.b
    int32_t eax_13 = sub_448760() & 0x8000007f
    
    if (eax_13 s< 0)
        eax_13 = ((eax_13 - 1) | 0xffffff80) + 1
    
    esi[1] = eax_13.b
    eax_2 = sub_448760() & 0x8000007f
    
    if (eax_2 s< 0)
        eax_2 = ((eax_2 - 1) | 0xffffff80) + 1
    
    esi[2] = eax_2.b
    *(arg1 + 0x10) = 1
else if (eax != 1)
    return 0

eax_2.b = esi[3]

if (eax_2.b u> 0)
    eax_2.b -= 1
    esi[3] = eax_2.b

eax_2.b = *esi

if (eax_2.b u> 0)
    eax_2.b -= 1
    *esi = eax_2.b

eax_2.b = esi[1]

if (eax_2.b u> 0)
    eax_2.b -= 1
    esi[1] = eax_2.b

eax_2.b = esi[2]

if (eax_2.b u> 0)
    eax_2.b -= 1
    esi[2] = eax_2.b

if (*esi == 0 && esi[1] == 0 && esi[2] == 0 && esi[3] == 0)
    sub_412f90(0, 0, 0)

sub_4437c0(0x4b10b0, esi, 3)
return 0
