// 函数: sub_466940
// 地址: 0x466940
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int16_t* ecx = arg1
int16_t* result = arg3

while (ecx != arg2)
    if (result != 0)
        *result = *ecx
        int16_t edx
        edx.b = ecx[1].b
        result[1].b = edx.b
    
    ecx += 3
    result += 3

return result
