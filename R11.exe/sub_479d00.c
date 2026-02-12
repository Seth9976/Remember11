// 函数: sub_479d00
// 地址: 0x479d00
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t i = 0
int32_t* var_c = arg1 + 0x20

do
    sub_479950(arg1, i)
    int32_t* eax_1 = *var_c
    int32_t var_8
    (*(*eax_1 + 0x4c))(eax_1, 0, &var_8, 0, 0)
    char* var_4
    char* esi_1 = var_4
    int32_t j = 0
    
    if (*(arg1 + 0x34) s> 0)
        do
            sub_480cf0(esi_1, 0, *(arg1 + 0x30) * 4)
            esi_1 = &esi_1[var_8]
            j += 1
        while (j s< *(arg1 + 0x34))
    
    int32_t* eax_5 = *var_c
    (*(*eax_5 + 0x50))(eax_5, 0)
    i += 1
    var_c = &var_c[1]
while (i s< 2)

return 0
