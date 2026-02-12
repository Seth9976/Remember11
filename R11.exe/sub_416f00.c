// 函数: sub_416f00
// 地址: 0x416f00
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

uint32_t eax_4 = zx.d(*(arg1 + 0x80))

if (eax_4 u<= 3)
    int32_t eax_3
    
    switch (eax_4)
        case 0
            *(arg1 + 0x80) = 1
            *(arg1 + 0x88) = 0
            *(arg1 + 0x84) = mods.dp.d(sx.q(sub_448760()), 0xf0) + 0xb4
        label_416f41:
            eax_3 = *(arg1 + 0x84)
            
            if (eax_3 == 0)
                *(arg1 + 0x80) = 2
                *(arg1 + 0x88) = 2
                *(arg1 + 0x84) = 0xa
                return 2
        case 1
            goto label_416f41
        case 2
            eax_3 = *(arg1 + 0x84)
            
            if (eax_3 == 0)
                *(arg1 + 0x80) = 3
                *(arg1 + 0x88) = 1
                *(arg1 + 0x84) = 6
                return eax_3
        case 3
            eax_3 = *(arg1 + 0x84)
            
            if (eax_3 == 0)
                *(arg1 + 0x80) = eax_3.b
                *(arg1 + 0x88) = eax_3
                *(arg1 + 0x84) = eax_3
                return eax_3
    
    eax_4 = eax_3 - 1
    *(arg1 + 0x84) = eax_4

return eax_4
