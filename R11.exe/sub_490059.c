// 函数: sub_490059
// 地址: 0x490059
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t result = 0

while (true)
    arg1 = *arg2
    
    if (arg1 == 0)
        break
    
    int32_t eax
    eax.b = arg1
    eax.b -= 0x61
    arg2 = &arg2[1]
    
    if (eax.b u> 5)
        eax.b = arg1
        eax.b -= 0x41
        
        if (eax.b u<= 5)
            arg1 -= 7
    else
        arg1 -= 0x27
    
    result = (result << 4) + sx.d(arg1) - 0x30

return result
