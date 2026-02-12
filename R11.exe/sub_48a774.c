// 函数: sub_48a774
// 地址: 0x48a774
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (arg1 == 0)
    sub_48b1de()
    noreturn

int32_t i = 0
char var_5 = 0

if (*arg1 s> 0)
    do
        int32_t* eax_2 = *(*(arg2 + 0x1c) + 0xc)
        int32_t j = *eax_2
        void* esi_1 = &eax_2[1]
        
        while (j s> 0)
            if (sub_48a535(arg1[1] + (i << 4), *esi_1, *(arg2 + 0x1c)) != 0)
                var_5 = 1
                break
            
            j -= 1
            esi_1 += 4
        
        i += 1
    while (i s< *arg1)

int32_t result
result.b = var_5
return result
