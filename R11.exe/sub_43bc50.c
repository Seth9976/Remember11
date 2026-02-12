// 函数: sub_43bc50
// 地址: 0x43bc50
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
    *(esi + 0x214) = ((eax_4 + (edx_1 & 0xfff)) s>> 0xc) + arg7
    
    while (true)
        int32_t result
        result.b = *ebp
        
        if (result.b == 0)
            return result
        
        if (result.b == 0x25)
            ebp = &ebp[1]
            
            if (*ebp == 0x4e)
                int32_t eax_27 = *(esi + 8)
                int32_t ecx_5 = *(esi + 0xc)
                data_a5dd1c += 1
                ebp = &ebp[1]
                esi += 0x21c
                *(esi + 8) = eax_27 + ecx_5 + 1
                break
        
        if (arg5 != 0xffffffff && *(esi + 0x210) s> arg5)
            int32_t eax_30 = *(esi + 8) + *(esi + 0xc)
            data_a5dd1c += 1
            esi += 0x21c
            *(esi + 8) = eax_30
            break
        
        int16_t eax_8 = sub_441db0(sx.d(*(ecx_1 + 4)), ebp)
        uint32_t edi_1 = zx.d(eax_8.b)
        int32_t eax_12
        int32_t edx_3
        edx_3:eax_12 = sx.q((edi_1 * ebx) << 0xc)
        int32_t* eax_17 = arg4
        *eax_17 = *(esi + 0x210) - ((((eax_12 + (edx_3 & 0xfff)) s>> 0xc) - 0xfff) s>> 0xc) - arg6
        arg4 = &eax_17[1]
        *(esi + 0xc) += 1
        int32_t eax_23
        int32_t edx_8
        edx_8:eax_23 = sx.q(((zx.d(eax_8:1.b) - edi_1) * ebx) << 0xc)
        *(esi + 0x210) += ((((eax_23 + (edx_8 & 0xfff)) s>> 0xc) + 0xfff) s>> 0xc) + (arg6 << 1)
        ecx_1 = arg2
        ebp = &ebp[2]
