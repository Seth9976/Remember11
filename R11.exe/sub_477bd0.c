// 函数: sub_477bd0
// 地址: 0x477bd0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t edi = arg2

if (edi s< 0)
    return 0x80070057

if (edi == 0)
    void* eax_2 = *arg1
    
    if (eax_2 != 0)
        sub_4813df(eax_2)
        *arg1 = 0
    
    arg1[2] = 0
    arg1[1] = 0
    return 0

void* edx = *arg1

if (edx == 0 || edi s> arg1[2])
    int32_t eax_4 = arg1[2]
    int32_t ecx = 0x10
    
    if (eax_4 != 0)
        ecx = eax_4
    
    int32_t eax_5 = eax_4 + ecx
    
    if (edi s<= eax_5)
        edi = eax_5
    
    void* eax_7 = sub_4826fd(edx, edi << 2)
    
    if (eax_7 == 0)
        return 0x8007000e
    
    *arg1 = eax_7
    arg1[2] = edi

return 0
