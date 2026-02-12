// 函数: sub_440fe0
// 地址: 0x440fe0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ecx = data_4bfbd0

if ((ecx & 0xfffffff) == 0xfffffff)
    ecx = 0x27fe
    data_4bfbd0 = 0x27fe
    data_4c9bcc = 0x30000000

uint32_t esi_2 = (arg1 + 3) u>> 2
int32_t edx_2 = 0

if ((ecx & 0xf0000000) == 0x30000000)
    return nullptr

int32_t* ecx_2 = &data_4bfbd0

do
    int32_t edi_1 = *ecx_2
    int32_t ecx_4 = edi_1 & 0xfffffff
    
    if ((edi_1 & 0xf0000000) == 0 && esi_2 u<= ecx_4)
        if (esi_2 != ecx_4)
            *(((edx_2 + esi_2) << 2) + &data_4bfbd4) = (ecx_4 - esi_2 - 1) & 0xfffffff
            (&data_4bfbd0)[edx_2] ^= ((&data_4bfbd0)[edx_2] ^ esi_2) & 0xfffffff
        
        (&data_4bfbd0)[edx_2] = ((&data_4bfbd0)[edx_2] & 0xfffffff) | 0x10000000
        return (edx_2 << 2) + &data_4bfbd4
    
    edx_2 = edx_2 + ecx_4 + 1
    ecx_2 = &(&data_4bfbd0)[edx_2]
while (((&data_4bfbd0)[edx_2] & 0xf0000000) != 0x30000000)

return 0
