// 函数: sub_46aa90
// 地址: 0x46aa90
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t edi = arg2
int32_t result = 0

if (edi == 0)
    return 0x80070057

int16_t* esi = arg3
int16_t* ecx_1 = arg1

while (true)
    int16_t edx_1 = *esi
    
    if (edx_1 == 0)
        break
    
    *ecx_1 = edx_1
    ecx_1 = &ecx_1[1]
    esi = &esi[1]
    int32_t temp1_1 = edi
    edi -= 1
    
    if (temp1_1 == 1)
        *(ecx_1 - 2) = edi.w
        return 0x8007007a

if (edi == 0)
    ecx_1 -= 2
    result = 0x8007007a

*ecx_1 = 0
return result
