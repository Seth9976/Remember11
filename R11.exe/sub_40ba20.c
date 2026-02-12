// 函数: sub_40ba20
// 地址: 0x40ba20
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* ecx = data_e7e648

if (*(ecx + 0x28fc) == 0)
    return 0xffffffff

char* esi = *(ecx + 0x28fc)
int32_t ebp = 0
void* edi = ecx + 0x2900
void* ebx = nullptr

while (true)
    int32_t eax
    eax.b = *esi
    
    if (eax.b != 0)
        if (eax.b == 0x25)
            eax.b = esi[1]
            
            if (eax.b == 0x50)
                *(edi + 1) = 0
                *edi = 0
                *(data_e7e648 + 0x28fc) = &esi[2]
                return 1
            
            if (eax.b == 0x70)
                *(edi + 1) = 0
                *edi = 0
                *(data_e7e648 + 0x28fc) = 0
                return 8
            
            if (eax.b != 0x4e)
                if (eax.b == 0x4b)
                    *(edi + 1) = 0
                    *edi = 0
                    *(data_e7e648 + 0x28fc) = &esi[2]
                    return 2
                
                if (eax.b == 0x42)
                    *(edi + 1) = 0
                    *edi = 0
                    *(data_e7e648 + 0x28fc) = &esi[2]
                    return 2
                
                if (eax.b == 0x56)
                    *(edi + 1) = 0
                    *edi = 0
                    *(data_e7e648 + 0x28fc) = &esi[2]
                    return 4
                
                char edx
                
                if (eax.b == 0x54)
                    edx = esi[2]
                
                if (eax.b == 0x54 && edx != 0x53 && edx != 0x45)
                    *(edi + 1) = 0
                    *edi = 0
                    *(data_e7e648 + 0x28e4) = 0
                    *(data_e7e648 + 0x28e8) = zx.d(esi[3]) + zx.d(esi[2]) * 0xa - 0x210
                    *(data_e7e648 + 0x28fc) = &esi[4]
                    return 5
                
                if (eax.b == 0x57)
                    *(edi + 1) = 0
                    *edi = 0
                    *(data_e7e648 + 0x28e4) = 0
                    *(data_e7e648 + 0x28e8) = 0x1e
                    *(data_e7e648 + 0x28fc) = &esi[2]
                    return 5
                
                if (eax.b == 0x4f)
                    break
                
                if (eax.b == 0x53)
                    ebx = &esi[2]
                    eax = sub_414cf0(zx.d(**(ecx + 0x28f8)))
                    void* ecx_2 = data_e7e648
                    ebp += 1
                    *(ecx_2 + 0x28f8) += 2
                    esi = eax + ecx_2 + 0x3220
                    ecx = data_e7e648
                    continue
                else if (eax.b == 0x44)
                    ebx = &esi[2]
                    sub_4414c0(sub_414cf0(zx.d(**(ecx + 0x28f8))), ecx + 0x2c70, "%d")
                    eax = data_e7e648
                    ebp += 1
                    *(eax + 0x28f8) += 2
                    ecx = data_e7e648
                    esi = eax + 0x2c70
                    continue
            else
                *(ecx + 0x28d4) = 1
        
        if (sub_441a20(*esi).w == 0)
            *edi = *esi
            *(edi + 1) = esi[1]
            ecx = data_e7e648
            esi = &esi[2]
            edi += 2
        else
            eax.b = *esi
            *edi = eax.b
            ecx = data_e7e648
            esi = &esi[1]
            edi += 1
    else
        if (ebp == 0)
            *(edi + 1) = 0
            *edi = 0
            *(data_e7e648 + 0x28fc) = 0
            return 0xffffffff
        
        ebp -= 1
        esi = ebx

*(edi + 1) = 0
*edi = 0
*(data_e7e648 + 0x28fc) = &esi[2]
return 6
