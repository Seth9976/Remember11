// 函数: sub_4187c0
// 地址: 0x4187c0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

for (int32_t i = 0; i s< 4; )
    int32_t esi_2 = i * 0x104
    int32_t edi_1 = i * 9
    int16_t ebp_1 = (&data_2b5a964)[edi_1]
    uint32_t eax
    eax.b = (&data_2b5a972)[edi_1 * 2]
    int32_t edi_2 = edi_1 * 2
    *(esi_2 + data_e7e648 + 0x1f5df) = eax.b
    
    if (ebp_1 != 0xffff)
        int32_t var_14_1 = 0
        int32_t var_18_1 = 0
        *(data_e7e648 + 0xbf0c0) = sub_417d60()
        void* eax_2 = data_e7e648
        uint32_t ebp_2 = zx.d(ebp_1)
        *(eax_2 + 0xbf0c4) = eax_2 + 0xb20450
        sub_414960(0, ebp_2.w)
        sub_418540(ebp_2, *(data_e7e648 + 0xbf0c0), 1)
        *(esi_2 + data_e7e648 + 0x1f5e2) = 1
        *(esi_2 + data_e7e648 + 0x1f5e4) = 0
        int32_t eax_4 = sx.d((&data_2b5a968)[edi_1])
        *(esi_2 + data_e7e648 + 0x1f5f8) = sx.d((&data_2b5a966)[edi_1])
        *(esi_2 + data_e7e648 + 0x1f5fc) = eax_4
        sub_4181e0(i)
        
        if (i != 0)
            sub_418070(i, 1, sx.d((&data_2b5a96a)[edi_1]), sx.d((&data_2b5a96c)[edi_1]), 
                sx.d((&data_2b5a96e)[edi_1]), sx.d((&data_2b5a970)[edi_1]), 1, 0)
        else
            sub_418070(i, 1, sx.d(data_2b5a96a), sx.d(data_2b5a96c), sx.d(data_2b5a96e), 
                sx.d(data_2b5a970), 1, 0)
        
        int32_t ecx_8 = data_e7e648
        *(esi_2 + ecx_8 + 0x1f608) += *(esi_2 + ecx_8 + 0x1f628)
        int32_t edx_8 = *(esi_2 + ecx_8 + 0x1f624)
        int32_t ebp_4 = *(esi_2 + ecx_8 + 0x1f62c)
        *(esi_2 + ecx_8 + 0x1f604) += edx_8
        *(esi_2 + ecx_8 + 0x1f60c) += ebp_4
        int32_t ecx_9 = *(esi_2 + ecx_8 + 0x1f620)
        *(esi_2 + ecx_8 + 0x1f600) += ecx_9
        *(esi_2 + ecx_8 + 0x1f638) = ecx_9
        *(esi_2 + ecx_8 + 0x1f640) = *(esi_2 + ecx_8 + 0x1f628)
        *(esi_2 + ecx_8 + 0x1f63c) = edx_8
        *(esi_2 + ecx_8 + 0x1f644) = ebp_4
        *(esi_2 + ecx_8 + 0x1f620) = 0
        *(esi_2 + ecx_8 + 0x1f624) = 0
        *(esi_2 + ecx_8 + 0x1f628) = 0
        *(esi_2 + ecx_8 + 0x1f62c) = 0
        edx_8.b = (&data_2b5a974)[edi_2]
        *(esi_2 + data_e7e648 + 0x1f676) = edx_8.b
        *(esi_2 + data_e7e648 + 0x1f677) = (&data_2b5a975)[edi_2]
    
    eax = zx.d((&data_2b5a973)[edi_2])
    
    if (eax s>= 0xa)
        eax = 9
    else if (eax s< 0)
        eax = 0
    
    i += 1
    *(esi_2 + data_e7e648 + 0x1f5e1) = eax.b

void* eax_10 = data_e7e648
*(eax_10 + 0xbf0c0) = eax_10 + 0xb20450
void* eax_11 = data_e7e648
*(eax_11 + 0xbf0c4) = eax_11 + 0xe10450
*(data_e7e648 + 0x28c4) = data_2b5a938
void* edx_11
edx_11.b = data_2b5a939
*(data_e7e648 + 0x28c5) = edx_11.b
*(data_e7e648 + 0x28c6) = data_2b5a93a
return sub_4182c0() __tailcall
