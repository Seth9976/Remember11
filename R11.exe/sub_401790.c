// 函数: sub_401790
// 地址: 0x401790
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

char* i = sub_480cf0(&data_2b56718, 0, 0x1000)
int16_t* esi = data_2b56710
int32_t edx = 0

if (*esi != 0xffff)
    void* ecx_1 = esi
    
    do
        for (i = zx.d(*ecx_1) & 0xfff; i s< (zx.d(*(ecx_1 + 2)) & 0xfff); i = &i[1])
            *((i << 1) + &data_2b56718) = edx.w
        
        edx += 1
        ecx_1 = &esi[edx * 2]
    while (esi[edx * 2] != 0xffff)

data_2b56714 = edx
return i
