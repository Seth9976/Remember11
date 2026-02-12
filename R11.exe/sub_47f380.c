// 函数: sub_47f380
// 地址: 0x47f380
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* var_4 = arg1
int32_t* arg_4
int32_t* edi = arg_4
*edi = 0
int32_t* eax = *(arg1 + 0x18)

if ((*(*eax + 0x18))(eax, &arg_4) s>= 0)
    int32_t* eax_4 = arg_4
    int32_t esi
    int32_t var_c_1 = esi
    int32_t eax_6 = (**eax_4)(eax_4, 0x4a5d74, &var_4)
    (*(*arg2 + 8))(arg2)
    
    if (eax_6 s>= 0)
        *edi = var_4
        return 0

return 0x80004001
