// 函数: sub_431970
// 地址: 0x431970
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* result = data_4bf67c
int32_t ebx = 0
int32_t esi = 0

for (void* i = &data_223c2c0; i s< &data_2243ac0; )
    *(esi + result + 0x34) = i + 4
    *(esi + result + 0x28) = ebx
    int32_t eax = sub_441550(i, 0x1fc)
    int32_t eax_1 = sub_441580(i, 0x1fc)
    int32_t ecx_2
    
    if (eax != *(i + 0x1fc))
        ecx_2.b = eax_1 != 0
        ecx_2 += 1
    else
        ecx_2.b = eax_1 == 0
    
    result = data_4bf67c
    *(esi + result + 0x2d) = ecx_2.b
    int32_t ecx_3 = sx.d(ecx_2.b)
    *(esi + result + 0x30) = 0
    
    if (ecx_3 == 0)
        void* edx_5 = *(esi + result + 0x34)
        uint32_t ecx_12 = zx.d(*(edx_5 + 0xcc)) * 2
        *(esi + result + 0x38) = *(data_2b55e88 + (ecx_12 << 2) + 4)
        *(esi + result + 0x3c) = *(data_2b55e88 + (ecx_12 << 2))
        *(esi + result + 0x40) = *(data_2b55e88 + (ecx_12 << 2) + 4)
        *(esi + result + 0x44) = *(data_2b55e88 + (ecx_12 << 2))
        uint32_t ecx_14
        ecx_14.b = ebx == zx.d(data_2238bbc)
        ecx_14.b += 1
        *(esi + result + 0x2e) = ecx_14.b
        *(esi + result + 0x2f) = 0
        int32_t edx_7
        edx_7.b = *(data_2b5a720 + ((zx.d(*(edx_5 + 0xce)) & 0xfff) << 1))
        *(esi + result + 0x2c) = edx_7.b
    else if (ecx_3 == 1)
        *(esi + result + 0x2e) = 0
        *(esi + result + 0x2f) = 0
        *(esi + result + 0x38) = data_4bf5d4
        *(esi + result + 0x3c) = data_4bf5dc
        *(esi + result + 0x40) = data_4bf5d4
        *(esi + result + 0x44) = data_4bf5d4
        *(esi + result + 0x2c) = 0xff
    else if (ecx_3 == 2)
        *(esi + result + 0x2e) = (ecx_3 - 1).b - 1
        *(esi + result + 0x2f) = 1
        *(esi + result + 0x38) = data_4bf5d8
        *(esi + result + 0x3c) = data_4bf5dc
        *(esi + result + 0x40) = data_4bf5d8
        *(esi + result + 0x44) = data_4bf5d8
        *(esi + result + 0x2c) = 0xff
    
    i += 0x200
    ebx += 1
    esi += 0x20

return result
