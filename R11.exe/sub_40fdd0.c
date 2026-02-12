// 函数: sub_40fdd0
// 地址: 0x40fdd0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ecx
int32_t var_4_1 = ecx
int32_t var_4 = 0
int32_t ebx = 0
int32_t* result

for (void* i = &data_2b5a9ae; i s< &data_2b5aa1a; )
    void* esi_1 = ebx + data_e7e648 + 0x20838
    *(esi_1 + 4) = sub_446d10(&(&data_4b0ad8)[zx.d(*(esi_1 + 0x28)) * 3], esi_1, 0, 2)
    int32_t eax_3
    eax_3.b = *(i - 2)
    *(esi_1 + 0x28) = eax_3.b
    *(esi_1 + 0x29) = 1
    *(esi_1 + 0x2a) = *i
    *(esi_1 + 0x2c) = *(i + 2)
    *(esi_1 + 0x2e) = *(i + 4)
    *(esi_1 + 0x30) = *(i + 6)
    *(esi_1 + 0x32) = *(i + 8)
    *(esi_1 + 0x34) = *(i + 0xa)
    *(esi_1 + 0x36) = *(i + 0xc)
    *(esi_1 + 0x38) = *(i + 0xe)
    *(esi_1 + 0x3a) = *(i + 0x10)
    *(esi_1 + 0x3c) = *(i + 0x12)
    *(esi_1 + 0x3e) = *(i + 0x14)
    *(esi_1 + 0x40) = *(i + 0x16)
    *(esi_1 + 0x42) = *(i + 0x18)
    *(esi_1 + 0x44) = *(i + 0x1a)
    *(esi_1 + 0x46) = *(i + 0x1c)
    uint32_t eax_9 = zx.d(*(esi_1 + 0x28))
    *(esi_1 + 0x48) = *(i + 0x1e)
    *(esi_1 + 0x4a) = *(i + 0x20)
    
    if (eax_9 == 0x13 || eax_9 == 0x15)
        *(esi_1 + 0x2a) = 1
    
    sub_40fcf0(var_4)
    *(data_e7e648 + 0x1f5d0) = 0
    *(data_e7e648 + 0x1f5d4) = 0
    void* eax_13 = data_e7e648
    void* ecx_8
    ecx_8.b = *(eax_13 + ebx + 0x20860)
    int32_t edx_9 = *(eax_13 + ebx + 0x2083c)
    void* eax_14 = eax_13 + ebx
    *(eax_14 + 0x20860) = ecx_8.b
    uint32_t ecx_9 = zx.d(ecx_8.b)
    *(eax_14 + 0x20844) = 0
    *(eax_14 + 0x20848) = 0
    result = sub_446760(edx_9)
    result[4].w = 0
    *result = (&data_4b0ad8)[ecx_9 * 3]
    char* ecx_11 = (&data_4b0adc)[ecx_9 * 3]
    void* edx_10 = &result[5]
    
    do
        result.b = *ecx_11
        *edx_10 = result.b
        ecx_11 = &ecx_11[1]
        edx_10 += 1
    while (result.b != 0)
    
    result.b = *(esi_1 + 0x28)
    
    if (result.b == 0x14 || result.b == 0x18)
        *(data_e7e648 + 0x3044) = 1
    
    var_4 += 1
    i += 0x24
    ebx += 0x50

return result
