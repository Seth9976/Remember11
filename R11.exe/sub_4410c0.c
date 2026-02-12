// 函数: sub_4410c0
// 地址: 0x4410c0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (arg3 u> 0x50)
    return 0

if (arg4 u> 0x40)
    return 0

int32_t esi = 0
int32_t eax_2 = 0

while (*(eax_2 + &data_a5dec0) != 0)
    eax_2 += 0x58
    esi += 1
    
    if (eax_2 u>= 0x160)
        return 0

void* esi_1 = esi * 0x58

if (esi_1 != 0xff5a2148)
    void* eax_7 = sub_440fe0(arg3 * arg4 * 2)
    *(esi_1 + 0xa5dec0) = eax_7
    
    if (eax_7 != 0)
        *(esi_1 + 0xa5deb8) = arg3
        *(esi_1 + 0xa5debc) = arg4
        *(esi_1 + 0xa5dec4) = 7
        sub_440ee0(esi_1 + 0xa5ded0, arg2, arg1)
        int32_t ecx_2 = *(esi_1 + 0xa5debc) * *(esi_1 + 0xa5deb8)
        
        if (ecx_2 != 0)
            int32_t ecx_4
            int32_t edi_2
            edi_2, ecx_4 = __memfill_u32(*(esi_1 + 0xa5dec0), 0x7200720, ecx_2 u>> 1)
            int32_t ecx_6
            int32_t edi_3
            edi_3, ecx_6 = __memfill_u16(edi_2, 0x720, adc.d(ecx_4, ecx_4, (ecx_2 & 1) != 0))
        
        *(esi_1 + 0xa5dec8) = 0
        *(esi_1 + 0xa5decc) = 0
        return esi_1 + 0xa5deb8

return 0
