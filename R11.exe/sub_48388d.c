// 函数: sub_48388d
// 地址: 0x48388d
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

uint32_t eax = data_2b6b9e0

if (eax == 0)
    eax = 0x200
    data_2b6b9e0 = eax
else if (eax s< 0x14)
    eax = 0x14
    data_2b6b9e0 = eax

void* eax_1 = sub_48b2bc(eax, 4)
data_2b6a9c4 = eax_1

if (eax_1 == 0)
    data_2b6b9e0 = 0x14
    eax_1 = sub_48b2bc(0x14, 4)
    data_2b6a9c4 = eax_1
    
    if (eax_1 == 0)
        return 0x1a

int32_t* edx = nullptr
int32_t ecx_2 = 0x4cbae0

while (true)
    *(edx + eax_1) = ecx_2
    ecx_2 += 0x20
    edx = &edx[1]
    
    if (ecx_2 s>= &data_4cbd60)
        break
    
    eax_1 = data_2b6a9c4

int32_t edx_1 = 0

for (void* i = &data_4cbaf0; i s< 0x4cbb50; )
    int32_t eax_6 = *((edx_1 & 0x1f) * 0x38 + (&data_2b6a8a0)[edx_1 s>> 5])
    
    if (eax_6 == 0xffffffff || eax_6 == 0xfffffffe || eax_6 == 0)
        *i = 0xfffffffe
    
    i += 0x20
    edx_1 += 1

return 0
