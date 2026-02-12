// 函数: sub_431b00
// 地址: 0x431b00
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t i = 0
void* edi = data_4bf67c
void* result

if (data_2b5cf1b u> 0)
    void* esi_1 = &data_2b5cfea
    result = edi + 0x2d
    
    do
        *(result - 5) = i
        *result = 0
        *(result + 1) = 1
        *(result + 2) = 0
        *(result + 3) = 0
        *(result + 7) = esi_1 - 0xce
        uint32_t ecx_3 = zx.d(*(esi_1 - 2)) * 2
        *(result + 0xb) = *(data_2b55e88 + (ecx_3 << 2) + 4)
        *(result + 0xf) = *(data_2b55e88 + (ecx_3 << 2))
        *(result + 0x13) = *(data_2b55e88 + (ecx_3 << 2) + 4)
        *(result + 0x17) = *(data_2b55e88 + (ecx_3 << 2))
        int32_t ecx_6
        ecx_6.b = *(data_2b5a720 + ((zx.d(*esi_1) & 0xfff) << 1))
        *(result - 1) = ecx_6.b
        i += 1
        esi_1 += 0x1bc
        result += 0x20
    while (i s< zx.d(data_2b5cf1b))

if (data_2b5cf1b u<= 0 || i s< 0x1e)
    int32_t i_1 = i * 0x1bc + 0x2b5cf1c
    result = (i << 5) + edi + 0x2d
    
    do
        *(result - 5) = i
        *(result + 7) = i_1
        *result = 1
        *(result + 1) = 0
        *(result + 2) = 0
        *(result + 3) = 0
        *(result + 0xb) = data_4bf5d4
        *(result + 0xf) = data_4bf5d4
        *(result + 0x13) = data_4bf5d4
        *(result + 0x17) = data_4bf5d4
        *(result - 1) = 0xff
        i_1 += 0x1bc
        i += 1
        result += 0x20
    while (i_1 s< 0x2b60324)

return result
