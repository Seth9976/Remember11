// 函数: sub_44b1c0
// 地址: 0x44b1c0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* result_1 = arg2
uint32_t ecx = arg3
void* result = result_1
int32_t ebp = 0

if (ecx s> 0)
    do
        ecx.b = *(result_1 + 3)
        int16_t eax = *result_1
        int16_t edx
        edx.b = ecx.b
        edx.b &= 0x60
        
        if (edx.b != 0x60)
            switch (zx.d(ecx.b))
                case 0, 5, 6, 7, 0x10, 0x11, 0x13
                    nop
                case 1, 0x17, 0x20, 0x4a
                    ecx, edx = sub_465480(".\emu.cpp", 0x617)
                case 2
                    ecx, edx = sub_465480(".\emu.cpp", 0x61b)
                case 3
                    ecx, edx = sub_465480(".\emu.cpp", 0x61f)
                case 4
                    ecx, edx = sub_465480(".\emu.cpp", 0x623)
                case 0x30
                    *arg1 = eax
                    arg1[1] = *(result_1 + 2)
                    arg1[2] = *(result_1 + 4)
                    ecx.w = *(result_1 + 6)
                    ebp += 4
                    arg1[3] = ecx.w
                    result_1 += 0x10
                case 0x50, 0x51
                    if (arg4 == 0)
                        uint32_t esi_2 = zx.d(eax)
                        ecx, edx = sub_44acb0(0xc5f7a0, result_1 + 4, esi_2)
                        ebp += esi_2 << 2
                        result_1 += esi_2 << 4
                    else if (ebp != arg3 - 1)
                        ecx, edx = sub_465480(".\emu.cpp", 0x60e)
                    else
                        uint32_t esi_4 = zx.d(eax)
                        sub_44acb0(0xc5f7a0, arg4, esi_4)
                        uint32_t eax_2 = esi_4 << 2
                        
                        if (arg5 != eax_2)
                            ecx, edx = sub_44b1c0((esi_4 << 4) + arg4, arg5 - eax_2, 0, 0)
                default
                    uint32_t var_14_4 = arg5
                    void* var_18_3 = arg4
                    sub_447460(arg1, result, arg3)
                    ecx, edx = sub_465480(".\emu.cpp", 0x642)
        else
            ecx, edx = sub_465480(".\emu.cpp", 0x5fc)
        
        ebp += 1
        result_1 += 4
    while (ebp s< arg3)
    
    ecx = arg3

if (result + (ecx << 2) == result_1)
    return result

uint32_t __saved_esi_1 = arg5
void* var_14_5 = arg4
sub_447460(arg1, result, ecx)
return sub_465480(".\emu.cpp", 0x64a)
