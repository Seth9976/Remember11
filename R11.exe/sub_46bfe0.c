// 函数: sub_46bfe0
// 地址: 0x46bfe0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t* var_4 = arg1
int32_t* eax_1 = (*(*arg1 + 0xc))()

if (eax_1 == 0)
    return 0x80004005

int32_t result = sub_46b420(eax_1, &var_4)

if (result s>= 0)
    if (var_4 == 0)
    label_46c033:
        (*(*eax_1 + 0x30))(eax_1, 0, arg1[0xb], arg1[0xc])
        arg1[0xd].b = 0
        return 0
    
    result = (*(*arg1 + 8))(eax_1, 0)
    
    if (result s>= 0)
        goto label_46c033

return result
