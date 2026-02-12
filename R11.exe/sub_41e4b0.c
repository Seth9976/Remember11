// 函数: sub_41e4b0
// 地址: 0x41e4b0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* eax = data_4b187c
int32_t ecx = *(eax + 0x1c)

if (arg1 != 0)
    if (*(eax + 4) == 0)
        if (ecx != 0)
            *(eax + 0x1c) = ecx - 1
            return 0
    else if (ecx s> 1)
        *(eax + 0x1c) = ecx - 1
        return 0
    
    return 1

int32_t esi = *(eax + 0xc)
int32_t edx_1 = *(eax + 4) + ecx
bool cond:1_1

if (edx_1 s< esi - 2)
    cond:1_1 = ecx s>= 8
label_41e4d3:
    
    if (not(cond:1_1))
        *(eax + 0x1c) = ecx + 1
        return 0
else if (ecx s< 9)
    cond:1_1 = edx_1 s>= esi - 1
    goto label_41e4d3
return 1
