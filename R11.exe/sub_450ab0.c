// 函数: sub_450ab0
// 地址: 0x450ab0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int16_t* eax_6 = arg3
int32_t* ecx_5 = (((arg2 u>> 5 & 0x3fff) - zx.d(*eax_6)) << 8) + *(eax_6 + 0x30)
int32_t* edi = arg1
arg1 = ecx_5

if (eax_6[6] != 0)
    if (data_4ca1c2 == 1)
        eax_6 = sub_464790(".\texture.cpp", 0x5a6)
        data_4ca1c2 = 0
    
    return eax_6

arg3 = nullptr
int32_t esi = 0
int32_t eax_1 = 0
void* ebx = nullptr

while (true)
    int32_t edx_8 = ecx_5[(esi & 7) + ((ebx + (((esi u>> 3) + eax_1) << 1)) << 3)]
    uint32_t ecx_7 = edx_8 u>> 0x18
    
    if (ecx_7 u>= 0xff)
        ecx_7 = 0xff
    
    *edi = (ecx_7 << 8 | zx.d(edx_8.b)) << 0x10 | zx.d((edx_8 u>> 0x10).b) | (edx_8 & 0xff00)
    esi += 1
    edi = &edi[1]
    
    if (esi s< 0x10)
        ecx_5 = arg1
    else
        void* ebx_2 = arg3 + 1
        arg3 = ebx_2
        
        if (ebx_2 s>= 0x10)
            break
        
        ecx_5 = arg1
        int32_t eax_3
        int32_t edx_2
        edx_2:eax_3 = sx.q(ebx_2)
        esi = 0
        eax_1 = ((eax_3 - edx_2) s>> 1) * 2
        ebx = ebx_2 & 1

return eax_1
