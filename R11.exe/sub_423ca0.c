// 函数: sub_423ca0
// 地址: 0x423ca0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

sub_41cdb0(data_4b1de0 + 0xa56c)
sub_41cdc0()
uint32_t ecx = zx.d(arg1)
void* ebx = data_4b1de0
void* ebp = ecx + ebx
void* esi = ebp + 0x113f0

if (*(ecx + ebx + 0x113ec) != 0x25)
    esi = ebp + 0x113f2

arg1.d = 0

if (*(ebp + 0x113ed) u> 0)
    bool cond:2_1
    
    do
        int32_t edi_1 = *(ebx + 8)
        
        if (sub_423b60(edi_1, zx.d(*(esi + 4))) != 0)
            int16_t eax_2 = *(esi + 6)
            int16_t eax_5
            
            if (eax_2 == 0xffff)
                eax_5 = 0
            else
                eax_5 =
                    sub_401fb0(zx.d(*(*((edi_1 << 5) + *(ebx + 0x54) + 0xc) + 0xce)), zx.d(eax_2))
            
            sub_41d400(0xffffffff, 0xffffffff, 1, *(esi + 2), eax_5)
            sub_41d1f0(zx.d(*esi) + data_4b1de0 + 0x113ec, 3, 4)
            ebx = data_4b1de0
        
        esi += 8
        cond:2_1 = arg1.d + 1 s< zx.d(*(ebp + 0x113ed))
        arg1.d += 1
    while (cond:2_1)

sub_41d3c0(2)
void* result = data_4b1de0
*(result + 0xa572) = 0xff
*(result + 0x5c) = 2
return result
