// 函数: sub_4668a0
// 地址: 0x4668a0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int16_t* ecx = arg1
int16_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x55555556, arg2 - ecx)

if (ecx != arg2)
    int16_t* edx_4 = arg3 - ecx
    
    do
        *(edx_4 + ecx) = *ecx
        eax.b = ecx[1].b
        *(edx_4 + ecx + 2) = eax.b
        ecx += 3
    while (ecx != arg2)

return ((edx_2 u>> 0x1f) + edx_2) * 3 + arg3
