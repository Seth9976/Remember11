// 函数: sub_486607
// 地址: 0x486607
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t i = 0
int32_t edi = 0xc7ada8

do
    if (*((i << 3) + &data_4cbf5c) == 1)
        *((i << 3) + &data_4cbf58) = edi
        edi += 0x18
        
        if (sub_48c1dd(*((i << 3) + &data_4cbf58), 0xfa0) == 0)
            *((i << 3) + &data_4cbf58) = 0
            return 0
    
    i += 1
while (i s< 0x24)

return 1
