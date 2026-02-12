// 函数: sub_416fd0
// 地址: 0x416fd0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t* ebp = 0xffffffff
void* result

for (int32_t i = 0; i s< 0x1248; i += 0x104)
    result = data_e7e648
    
    if (*(i + result + 0x1f5dc) != 0xffff && *(i + result + 0x1f5e2) == 1)
        if (*(i + result + 0x1f5de) == 3)
            switch (zx.d(*(i + result + 0x1f650)))
                case 0
                    *(i + result + 0x1f658) = 0
                case 1
                    int32_t eax_2 = *(i + result + 0x1f654)
                    
                    if (eax_2 u> 0)
                        *(i + result + 0x1f654) = eax_2 - 1
                    else
                        int32_t eax_4 = *(i + result + 0x1f658) + 1
                        *(i + result + 0x1f654) = 0x3c
                        *(i + result + 0x1f658) = modu.dp.d(0:eax_4, 3)
                case 2
                    if (ebp == 0xffffffff)
                        ebp = sub_409250(0)
                    
                    *(i + result + 0x1f658) = ebp
                case 3
                    int32_t eax_8 = *(i + result + 0x1f654)
                    
                    if (eax_8 u> 0)
                        *(i + result + 0x1f654) = eax_8 - 1
                    else
                        *(i + result + 0x1f654) = mods.dp.d(sx.q(sub_448760()), 0xa) + 5
                        *(i + result + 0x1f658) = mods.dp.d(sx.q(sub_448760()), 3)
                    
                    if (ebp == 0xffffffff)
                        ebp = *(i + result + 0x1f658)
            
            void* eax_16 = data_e7e648
            
            if (*(eax_16 + 0x28c4) != 0)
                *(i + eax_16 + 0x1f65c) = 0
                *(i + data_e7e648 + 0x1f660) = 0
                *(i + data_e7e648 + 0x1f664) = 0
            else
                sub_416f00(i + result + 0x1f5dc)
            
            if (*(i + result + 0x1f650) != 0)
                sub_409d90(i + result + 0x1f678, ebp)
            
            result = sub_409e30(i + result + 0x1f678)
        else
            *(i + result + 0x1f658) = 0

return result
