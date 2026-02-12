// 函数: sub_48f5bb
// 地址: 0x48f5bb
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* esi

if (*(arg1 + 0x20) == 0)
    esi = &data_4cc878
else
    esi = sub_48b2bc(1, 0xb8)
    
    if (esi == 0)
        return 1
    
    if (sub_48f012(arg1, esi) != 0)
        sub_48f42b(esi)
        sub_4813df(esi)
        return 1
    
    *(esi + 0xb4) = 1

void* eax_4 = *(arg1 + 0xd4)

if (eax_4 != &data_4cc878)
    InterlockedDecrement(eax_4 + 0xb4)

*(arg1 + 0xd4) = esi
return 0
