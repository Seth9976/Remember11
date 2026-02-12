// 函数: sub_441930
// 地址: 0x441930
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

uint32_t eax_1 = zx.d((arg1 u>> 8).b) | zx.d((arg2 << 0x18).b)
uint32_t esi = zx.d(arg1.b)
int32_t ecx_1 = 0
int32_t edx = adc.d(0, 0xffffffff, eax_1 u>= 0x81)

if (edx u> 0 || (edx u>= 0 && eax_1 - 0x81 u> 0x1e))
    int32_t edx_1 = adc.d(0, 0xffffffff, eax_1 u>= 0xe0)
    
    if (edx_1 u<= 0 && (edx_1 u< 0 || eax_1 - 0xe0 u<= 0xf))
        uint32_t temp9_1 = eax_1
        eax_1 -= 0xc1
        ecx_1 = adc.d(0, 0xffffffff, temp9_1 u>= 0xc1)
else
    uint32_t temp6_1 = eax_1
    eax_1 -= 0x81
    ecx_1 = adc.d(0, 0xffffffff, temp6_1 u>= 0x81)

int32_t ecx_2 = ecx_1 << 1 | eax_1 u>> 0xffffffe1
uint32_t eax_2 = eax_1 * 2
int32_t edx_2 = adc.d(0, 0xffffffff, esi u>= 0x40)

if (edx_2 u> 0 || (edx_2 u>= 0 && esi - 0x40 u> 0x3e))
    int32_t edx_3 = adc.d(0, 0xffffffff, esi u>= 0x80)
    
    if (edx_3 u> 0 || (edx_3 u>= 0 && esi - 0x80 u> 0x1e))
        int32_t edx_4 = adc.d(0, 0xffffffff, esi u>= 0x9f)
        
        if (edx_4 u<= 0 && (edx_4 u< 0 || esi - 0x9f u<= 0x5d))
            esi -= 0x9f
            uint32_t temp17_1 = eax_2
            eax_2 += 1
            ecx_2 = adc.d(ecx_2, 0, temp17_1 u>= 0xffffffff)
    else
        esi -= 0x41
else
    esi -= 0x40

int32_t eax_3
int32_t edx_5
eax_3, edx_5 = __allmul(eax_2, ecx_2, 0x100, 0)
return eax_3 + esi + 0x2121
