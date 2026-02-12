// 函数: sub_417f40
// 地址: 0x417f40
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t eax = arg1
int32_t edx

if (eax != 0xffffffff)
    edx = eax + 1
else
    eax = 0
    edx = 0x12

int32_t ecx = eax

if (eax s< edx)
    int32_t* eax_2 = eax * 0x104 + data_e7e648 + 0x1f668
    
    do
        if (*eax_2 != 0)
            return 1
        
        ecx += 1
        eax_2 = &eax_2[0x41]
    while (ecx s< edx)

return 0
