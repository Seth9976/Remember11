// 函数: sub_45d860
// 地址: 0x45d860
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t* ecx = arg1
int32_t* result = arg3

while (ecx != arg2)
    if (result != 0)
        *result = *ecx
        result[1] = ecx[1]
        result[2] = ecx[2]
        result[3] = ecx[3]
        result[4] = ecx[4]
    
    ecx = &ecx[5]
    result = &result[5]

return result
