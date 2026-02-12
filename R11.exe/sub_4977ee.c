// 函数: sub_4977ee
// 地址: 0x4977ee
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t* result

if (*(arg1 + 4) u<= 0)
label_49780f:
    result = sub_497758(arg1)
    int32_t* esi_1 = *(arg1 + 0x24)
    
    if (esi_1 != 0)
        sub_468400(esi_1)
        result = j_sub_4813df(esi_1)
else
    void* eax_1 = *(arg1 + 4)
    *(eax_1 + 0xc7b5ac) -= 1
    result = *(arg1 + 4)
    
    if (result[0x31ed6b].b s<= 0)
        goto label_49780f

return result
