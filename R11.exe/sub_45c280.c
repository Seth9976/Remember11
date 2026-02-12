// 函数: sub_45c280
// 地址: 0x45c280
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (arg3 == 0)
    return 0x80070057

(*(*arg3 + 0x20))(arg3)
(*(*arg3 + 0x34))(arg3, *arg1, 6)
int32_t edi = arg1[4]

if (arg1[5] u>= edi)
    void* eax_4 = sub_4826fd(arg1[3], (edi + 0xa) * 0xc)
    
    if (eax_4 == 0)
        return 0x8007000e
    
    int32_t ecx_2 = arg1[4]
    sub_480cf0(eax_4 + ecx_2 * 0xc, 0, (edi + 0xa - ecx_2) * 0xc)
    arg1[3] = eax_4
    arg1[4] = edi + 0xa

*(arg1[3] + arg1[5] * 0xc) = arg3
*(arg1[3] + arg1[5] * 0xc + 8) = *(arg2 + 0x24)
int32_t* eax_14 = arg1[3] + arg1[5] * 0xc
(*(**eax_14 + 0x74))(*eax_14, &arg1[6], arg1[1], 0)
int32_t edx_11 = arg1[5] * 3
int32_t eax_17 = arg1[3]
(*(**(eax_17 + (edx_11 << 2)) + 0x78))(*(eax_17 + (edx_11 << 2)), &arg1[6], arg1[1], 0)
int32_t eax_20 = arg1[0x99]

if (eax_20 != 0)
    eax_20(arg1[3] + arg1[5] * 0xc, arg2, arg1[0x9a])

int32_t* ecx_15 = *(arg1[3] + arg1[5] * 0xc)
(*(*ecx_15 + 4))(ecx_15)
arg1[5] += 1
return 0
