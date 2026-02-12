// 函数: sub_447460
// 地址: 0x447460
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t esi = 0

if (arg3 s<= 0)
    return 

void* edi_1 = arg2

do
    int32_t eax = *(arg1 + 8)
    
    if (eax != 0)
        esi += eax << 2
        edi_1 += eax << 4
        
        if (esi s>= arg3)
            break
    
    eax.b = *(edi_1 + 3)
    
    switch (zx.d(eax.b))
        case 0, 1, 2, 3, 4, 5, 6, 7, 0x10, 0x11, 0x13
            nop
        case 0x17
            sub_4653f0("Micro Program\n")
        case 0x20
            esi += 1
            edi_1 += 4
        case 0x30
            esi += 4
            edi_1 += 0x10
        case 0x4a
            sub_4653f0("Micro Program Transfer\n")
        case 0x50, 0x51
            uint32_t eax_1 = zx.d(*edi_1)
            esi += eax_1 << 2
            edi_1 += eax_1 << 4
        default
            eax.b &= 0x60
            
            if (eax.b != 0x60)
                break
            
            sub_465480(".\emu.cpp", 0x5e3)
    
    esi += 1
    edi_1 += 4
while (esi s< arg3)
