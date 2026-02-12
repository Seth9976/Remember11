// 函数: sub_41b3c0
// 地址: 0x41b3c0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

*(arg2 + 0x59ec) = *arg1
*(arg2 + 0x59f0) = arg1[1] - 0x3a
int32_t edx_2 = *(arg2 + 0x59f4)

if (edx_2 s< 0x4e)
    int32_t eax_2
    int32_t edx_3
    edx_3:eax_2 = sx.q(0x4e - edx_2)
    *(arg2 + 0x59ec) += (eax_2 - edx_3) s>> 1

int32_t esi = arg1[1]
int32_t i = 0
void* ecx_1 = arg2 + 0x59fc

if (*(arg2 + 0x74) s> 0)
    do
        int32_t eax_5 = *ecx_1
        *(ecx_1 + 0x10) = esi
        
        if (eax_5 == 0)
            *(ecx_1 + 0xc) = *arg1
        else if (eax_5 == 1)
            int32_t eax_14
            int32_t edx_4
            edx_4:eax_14 = sx.q(*(arg2 + 0x44) - *(ecx_1 + 0x14))
            *(ecx_1 + 0xc) = ((eax_14 - edx_4) s>> 1) + *arg1
        else if (eax_5 == 2)
            *(ecx_1 + 0xc) = *(arg2 + 0x44) - *(ecx_1 + 0x14) + *arg1
        
        esi += *(ecx_1 + 0x18)
        i += 1
        ecx_1 += 0x1c
    while (i s< *(arg2 + 0x74))

return sub_41ab40(arg2, arg3)
