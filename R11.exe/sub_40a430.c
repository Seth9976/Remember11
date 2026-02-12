// 函数: sub_40a430
// 地址: 0x40a430
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* ecx_11 = data_e7e648
void* result = *(ecx_11 + 0xb4458)

if (result != 0)
    if (result u> 0xb0)
        result.b *= 2
        data_4b00f3 = 0xe0 - result.b
    else if (result u<= 0x40)
        result.b *= 2
        data_4b00f3 = result.b
    else
        data_4b00f3 = 0x80
    
    int32_t eax
    int32_t edx_1
    edx_1:eax = mulu.dp.d(0xaaaaaaab, *(ecx_11 + 0xb445c))
    uint32_t edx_2 = edx_1 u>> 3
    *(edx_2 * 0x18 + &data_4b0090) = 0x1e0
    sub_445470(ecx_11 + 0x10f2c4, edx_2 * 0x18 + &data_4b0090, 0x4b00f0, 7)
    void* ecx_1 = data_e7e648
    int32_t esi_4 = *(edx_2 * 0x18 + 0x4b00a0) + 0x1e1
    int32_t eax_2
    int32_t edx_5
    edx_5:eax_2 = mulu.dp.d(0xcccccccd, modu.dp.d(0:(*(ecx_1 + 0xb445c)), 0xc))
    uint32_t edx_6 = edx_5 u>> 3
    *(edx_6 * 0x18 + &data_4aff88) = esi_4
    int32_t eax_4
    int32_t edx_9
    edx_9:eax_4 = mulu.dp.d(0xcccccccd, modu.dp.d(0:(*(ecx_1 + 0xb445c)), 0xc))
    
    if (edx_9 u>> 3 != 0)
        sub_445470(ecx_1 + 0x10f2c4, edx_6 * 0x18 + &data_4aff88, 0x4b00f0, 7)
        ecx_1 = data_e7e648
    
    int32_t esi_5 = esi_4 + *(edx_6 * 0x18 + 0x4aff98)
    uint32_t temp1_4 = modu.dp.d(0:(modu.dp.d(0:(*(ecx_1 + 0xb445c)), 0xc)), 0xa)
    *(temp1_4 * 0x18 + &data_4aff88) = esi_5
    sub_445470(ecx_1 + 0x10f2c4, temp1_4 * 0x18 + &data_4aff88, 0x4b00f0, 7)
    int32_t esi_6 = esi_5 + *(temp1_4 * 0x18 + 0x4aff98)
    void* ecx_4 = data_e7e648
    data_4b00c0 = esi_6
    int32_t eax_8
    int32_t edx_15
    edx_15:eax_8 = mulu.dp.d(0x88888889, *(ecx_4 + 0xb4458))
    
    if (((edx_15 u>> 4).b & 1) == 0)
        sub_445470(ecx_4 + 0x10f2c4, &data_4b00c0, 0x4b00f0, 7)
        ecx_4 = data_e7e648
    
    int32_t esi_7 = esi_6 + data_4b00d0
    int32_t eax_9
    int32_t edx_17
    edx_17:eax_9 = mulu.dp.d(0xcccccccd, *(ecx_4 + 0xb4460))
    uint32_t edx_18 = edx_17 u>> 3
    *(edx_18 * 0x18 + &data_4aff88) = esi_7
    sub_445470(ecx_4 + 0x10f2c4, edx_18 * 0x18 + &data_4aff88, 0x4b00f0, 7)
    void* ecx_7 = data_e7e648
    uint32_t temp1_5 = modu.dp.d(0:(*(ecx_7 + 0xb4460)), 0xa)
    *(temp1_5 * 0x18 + &data_4aff88) = esi_7 + *(edx_18 * 0x18 + 0x4aff98)
    sub_445470(ecx_7 + 0x10f2c4, temp1_5 * 0x18 + &data_4aff88, 0x4b00f0, 7)
    sub_442c30(data_e7e648 + 0x10f2c4, 7)
    sub_43c620(*data_c7bbc0 + 0x108, 0x4b00d8, 0x4b00f0, 7)
    result = data_e7e648
    *(result + 0xb4458) -= 1

return result
