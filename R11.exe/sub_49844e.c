// 函数: sub_49844e
// 地址: 0x49844e
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t result

for (int32_t i = 0xc7b650; i s< 0xc7b748; i += 4)
    result = InterlockedExchange(i, 0)
    int32_t esi_1 = result
    
    if (esi_1 != 0)
        int32_t j
        
        do
            j = *esi_1
            sub_487eec(*(esi_1 + 8))
            result = sub_4813df(esi_1)
            esi_1 = j
        while (j != 0)

return result
