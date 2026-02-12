// 函数: sub_44aa50
// 地址: 0x44aa50
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t* ecx = arg1
int32_t* result = arg3

while (ecx != arg2)
    if (result != 0)
        *result = *ecx
        result[1] = ecx[1]
    
    ecx = &ecx[2]
    result = &result[2]

return result
