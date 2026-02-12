// 函数: sub_44f930
// 地址: 0x44f930
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_14 = arg3
void* eax = sub_44e4e0(arg2)
void* eax_3 = j_sub_481fef(sub_44cd70(eax) << 0xb)
sub_44cda0(eax, sub_44cd70(eax), eax_3)

if (sub_44ce00(eax) != 3)
    int32_t i
    
    do
        Sleep(1)
        i = sub_44ce00(eax)
    while (i != 3)

sub_44dce0(eax)
int32_t eax_6 = 4
char const* const ecx = "OggS"
void* edx = eax_3
int32_t eax_10

while (true)
    if (*edx != *ecx)
    label_44f9bf:
        uint32_t esi_2 = zx.d(*edx)
        uint32_t edi_1 = zx.d(*ecx)
        uint32_t esi_3 = esi_2 - edi_1
        
        if (esi_2 != edi_1)
        label_44fa10:
            eax_10 = 1
            
            if (esi_3 s<= 0)
                eax_10 = 0xffffffff
            
            break
        
        if (eax_6 != 1)
            uint32_t esi_4 = zx.d(*(edx + 1))
            uint32_t edi_2 = zx.d(ecx[1])
            esi_3 = esi_4 - edi_2
            
            if (esi_4 != edi_2)
                goto label_44fa10
            
            if (eax_6 != 2)
                uint32_t esi_5 = zx.d(*(edx + 2))
                uint32_t edi_3 = zx.d(ecx[2])
                esi_3 = esi_5 - edi_3
                
                if (esi_5 != edi_3)
                    goto label_44fa10
                
                if (eax_6 != 3)
                    uint32_t esi_6 = zx.d(*(edx + 3))
                    uint32_t ecx_4 = zx.d(ecx[3])
                    esi_3 = esi_6 - ecx_4
                    
                    if (esi_6 != ecx_4)
                        goto label_44fa10
    else
        eax_6 -= 4
        ecx = &ecx[4]
        edx += 4
        
        if (eax_6 u>= 4)
            continue
        else if (eax_6 != 0)
            goto label_44f9bf
    
    eax_10 = 0
    break

if (eax_10 != 0)
    return j_sub_4813df(eax_3)

void* eax_11 = sub_481fef(0x50)
struct CFile::CMemoryFile::VTable** edi_4

if (eax_11 == 0)
    edi_4 = nullptr
else
    edi_4 = sub_466100(eax_11)

int32_t var_18_3 = arg3
(*edi_4)->vFunc_16(eax_3, sub_44d5f0(arg2), 1)
void* eax_15 = sub_46b0e0(edi_4)
(*(*data_c7865c + 4))(sx.d(*(arg1 + 0xae)), eax_15)
int32_t result = (*(*data_c7865c + 0xc))(sx.d(*(arg1 + 0xae)), 0, sx.d(*(arg1 + 0x40)))
*(arg1 + 1) = 3
return result
