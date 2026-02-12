// 函数: sub_46b8b0
// 地址: 0x46b8b0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* const var_4 = arg1

if (*(arg1 + 4) == 0)
    return 0

int32_t i = 0
int32_t temp3 = *(arg1 + 0x10)
bool cond:0 = 0 == temp3

if (0 u< temp3)
    do
        int32_t eax_2 = *(arg1 + 4)
        
        if (*(eax_2 + (i << 2)) != 0)
            var_4 = nullptr
            int32_t* eax_3 = *(eax_2 + (i << 2))
            (*(*eax_3 + 0x24))(eax_3, &var_4)
            
            if ((var_4.b & 1) == 0)
                break
        
        i += 1
    while (i u< *(arg1 + 0x10))
    
    cond:0 = i == *(arg1 + 0x10)

if (not(cond:0))
    return *(*(arg1 + 4) + (i << 2))

int32_t eax_6 = sub_481bf3()
return *(*(arg1 + 4) + (modu.dp.d(0:eax_6, *(arg1 + 0x10)) << 2))
