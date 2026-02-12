// 函数: sub_409d10
// 地址: 0x409d10
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* eax = data_e7e648
void* edi_2 = (((((*(eax + 0x110450) << 2) + 0x13) u>> 4) + *(eax + 0x110484) + 0x11045) << 4) + eax
int32_t esi = 0
void* ebx = edi_2 + 4
uint32_t result

while (true)
    result = sub_4427e0(esi + eax + 0x10f348, 0x900, 0x920, 
        (((((*edi_2 << 2) + 0x13) u>> 4) + *ebx) << 4) + edi_2)
    esi += 0x2c
    ebx += 4
    
    if (esi s>= 0xb2c)
        break
    
    eax = data_e7e648

return result
