// 函数: sub_4836ad
// 地址: 0x4836ad
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int16_t eax = (arg1[3]).w
int32_t result = 0

if ((eax.b & 3) == 2 && (eax & 0x108) != 0)
    uint8_t* eax_1 = arg1[2]
    uint32_t edi_2 = *arg1 - eax_1
    
    if (edi_2 s> 0)
        if (sub_48d76b(sub_48d847(arg1), eax_1, edi_2) != edi_2)
            arg1[3] |= 0x20
            result = 0xffffffff
        else
            int32_t eax_4 = arg1[3]
            
            if (eax_4.b s< 0)
                arg1[3] = eax_4 & 0xfffffffd

int32_t eax_6 = arg1[2]
arg1[1] = 0
*arg1 = eax_6
return result
