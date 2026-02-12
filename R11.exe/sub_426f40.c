// 函数: sub_426f40
// 地址: 0x426f40
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* esi = *(arg1 + 0x44)
int32_t* var_c = esi + 0x210
int32_t eax = sub_4502a0(1, esi + 0x20c)

if (eax == 0xffffffff)
    int32_t var_c_1 = *(esi + 8)
    int32_t var_10_1 = *(esi + 4)
    sub_450100()
else if (eax == 1)
    int32_t eax_1 = *(esi + 0x210)
    
    if (eax_1 == 0xffffffff)
        *(esi + 0x210) = 0xfffffff6
        return 2
    
    int32_t edx
    edx.b = eax_1 != 0
    return edx + 1

return 0
