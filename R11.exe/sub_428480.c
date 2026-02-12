// 函数: sub_428480
// 地址: 0x428480
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

sub_420b70(data_a5dce4 + 0xa64)
int32_t result = data_2b5a730
int32_t ebx = 0
void* ecx_1

if (result u<= 0)
    ecx_1 = data_a5dce4
else
    void* edi_1 = data_2b5a72c + 8
    ecx_1 = data_a5dce4
    int32_t esi_1 = 0
    
    do
        *(esi_1 + ecx_1 + 0x826c) = *(edi_1 - 8)
        *(esi_1 + ecx_1 + 0x8274) = *(edi_1 - 4)
        *(esi_1 + ecx_1 + 0x8278) = *edi_1
        *(esi_1 + ecx_1 + 0x8264) = *(edi_1 + 4)
        uint32_t eax_4 = zx.d(*(esi_1 + ecx_1 + 0x8264))
        *(esi_1 + ecx_1 + 0x8268) = *(edi_1 + 6)
        *(esi_1 + ecx_1 + 0x8270) = *(edi_1 + 8)
        *(esi_1 + ecx_1 + 0x827c) = *(edi_1 + 0xc)
        int16_t eax_5 = sub_402120(eax_4)
        ecx_1 = data_a5dce4
        *(esi_1 + ecx_1 + 0x8266) = eax_5
        result = data_2b5a730
        ebx += 1
        edi_1 += 0x18
        esi_1 += 0x20
    while (ebx u< result)

*(ecx_1 + 0xa30) = result
*(ecx_1 + 0xa04) = 0
*(ecx_1 + 0xa10) = 1
return result
