// 函数: sub_442400
// 地址: 0x442400
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ecx = data_c7bc2c
uint32_t var_c = zx.d(data_c7bc34.w)
char* ecx_1 = arg1
uint32_t ebp = zx.d(data_c7bc30.w)
char* edx = ecx_1
char* edi = data_c7bc24
arg1 = edx

if (arg2 != 3)
    do
        var_c.w u>>= 1
        void* eax_2
        
        if ((var_c & 0x100) == 0)
            eax_2.w = zx.w(*ecx_1)
            ecx_1 = &ecx_1[1]
            var_c = zx.d(eax_2.w) | 0xff00
        
        eax_2.w = zx.w(*ecx_1)
        ecx_1 = &ecx_1[1]
        
        if ((var_c.b & 1) == 0)
            edx.w = zx.w(*ecx_1)
            int16_t edx_2 = edx.w
            int16_t esi_2 = eax_2.w | ((zx.d(edx_2.b) & 0xf0) << 4).w
            ecx_1 = &ecx_1[1]
            uint32_t edx_5 = zx.d(esi_2)
            
            if (esi_2 s<= (edx_2 & 0xf) + esi_2 + 2)
                do
                    void* esi_4
                    esi_4.w = zx.w(*((edx_5 & 0xfff) + 0xc7bc38))
                    char ebx_1 = esi_4.b
                    *edi = ebx_1
                    edi = &edi[1]
                    
                    if (edi u>= ecx)
                        ecx_1 = nullptr
                        break
                    
                    int32_t esi_5 = sx.d(ebp.w)
                    edx_5 += 1
                    ebp = (ebp + 1) & 0xfff
                    *(esi_5 + 0xc7bc38) = ebx_1
                while (edx_5.w s<= (edx_2 & 0xf) + esi_2 + 2)
        else
            char eax_5 = eax_2.b
            *edi = eax_5
            edi = &edi[1]
            
            if (edi u>= ecx)
                ecx_1 = nullptr
                break
            
            *(sx.d(ebp.w) + 0xc7bc38) = eax_5
            ebp = (ebp + 1) & 0xfff
        
        edx = arg1
    while (ecx_1 - edx u< arg2 - 3)

data_c7bc30 = sx.d(ebp.w)
data_c7bc24 = edi
data_c7bc34 = zx.d(var_c.w)

if (ecx_1 != 0)
    return edx - ecx_1 + arg2

return 0xffffffff
