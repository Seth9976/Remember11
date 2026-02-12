// 函数: sub_43bb20
// 地址: 0x43bb20
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* ebx = arg4
char* ebp = arg3
void* esi = arg1

while (true)
    void* ecx_1 = arg2
    arg4 = esi + 0x10
    *(esi + 0x210) = 0
    *(esi + 0xc) = 0
    *esi = ecx_1
    *(esi + 0x218) = ebx
    int32_t eax_4
    int32_t edx_1
    edx_1:eax_4 = sx.q(zx.d(*(ecx_1 + 8)) * ebx)
    *(esi + 0x214) = (eax_4 + (edx_1 & 0xfff)) s>> 0xc
    
    while (true)
        int32_t result
        result.b = *ebp
        
        if (result.b == 0)
            return result
        
        if (result.b == 0x25)
            ebp = &ebp[1]
            
            if (*ebp == 0x4e)
                int32_t eax_21 = *(esi + 8)
                int32_t ecx_4 = *(esi + 0xc)
                data_a5dd1c += 1
                ebp = &ebp[1]
                esi += 0x21c
                *(esi + 8) = eax_21 + ecx_4 + 1
                break
        
        if (arg5 != 0xffffffff && *(esi + 0x210) s> arg5)
            int32_t eax_24 = *(esi + 8) + *(esi + 0xc)
            data_a5dd1c += 1
            esi += 0x21c
            *(esi + 8) = eax_24
            break
        
        int16_t eax_7 = sub_441db0(sx.d(*(ecx_1 + 4)), ebp)
        uint32_t edi_1 = zx.d(eax_7.b)
        int32_t eax_10
        int32_t edx_3
        edx_3:eax_10 = sx.q(edi_1 * ebx)
        *arg4 = *(esi + 0x210) - ((eax_10 + (edx_3 & 0xfff)) s>> 0xc) + 2
        arg4 += 4
        *(esi + 0xc) += 1
        ecx_1 = arg2
        int32_t eax_18
        int32_t edx_8
        edx_8:eax_18 = sx.q((zx.d(eax_7:1.b) - edi_1) * ebx)
        *(esi + 0x210) += ((eax_18 + (edx_8 & 0xfff)) s>> 0xc) + 4
        ebp = &ebp[2]
