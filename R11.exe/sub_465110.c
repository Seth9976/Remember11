// 函数: sub_465110
// 地址: 0x465110
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* var_4_1 = arg1
EnterCriticalSection(arg1 + 4)

if (arg2 != 1)
    if (*(arg1 + 0x14c) == 1)
        int32_t i = 0
        void* edi_3 = arg1 + 0x20
        
        do
            int32_t* ecx_3 = *edi_3
            
            if (ecx_3 != 0 && *(i + arg1 + 0x12c) == 1)
                (*(*ecx_3 + 0x28))()
                *(i + arg1 + 0x12c) = 0
            
            i += 1
            edi_3 += 4
        while (i s< 0x20)
        
        *(arg1 + 0x14c) = 0
else if (*(arg1 + 0x14c) == 0)
    void* edi_1 = arg1 + 0x12c
    void* esi_1 = arg1 + 0x20
    int32_t i_2 = 0x20
    int32_t i_1
    
    do
        int32_t* ecx = *esi_1
        int32_t eax_2
        
        if (ecx != 0)
            eax_2 = (*(*ecx + 0x34))()
        
        if (ecx == 0 || eax_2 == 0)
            *edi_1 = 0
        else
            (*(**esi_1 + 0x24))()
            *edi_1 = 1
        
        esi_1 += 4
        edi_1 += 1
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)
    *(arg1 + 0x14c) = 1
    LeaveCriticalSection(arg1 + 4)
    return 0

LeaveCriticalSection(arg1 + 4)
return 0
