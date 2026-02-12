// 函数: sub_4840c0
// 地址: 0x4840c0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

char* ecx = arg1
char* ebp = arg2

if (ebp u<= ecx)
    return 

int32_t i_1 = arg3
arg2 = &ecx[i_1]

do
    char* esi_1 = arg2
    char* edi_1 = ecx
    
    if (esi_1 u<= ebp)
        do
            if (arg4(esi_1, edi_1) s> 0)
                edi_1 = esi_1
            
            esi_1 = &esi_1[i_1]
        while (esi_1 u<= ebp)
        
        ecx = arg1
    
    int32_t i = i_1
    char* eax = ebp
    
    if (edi_1 != ebp && i_1 != 0)
        char* ecx_2 = edi_1 - ebp
        
        do
            i_1.b = *eax
            char edx = *(ecx_2 + eax)
            *(ecx_2 + eax) = i_1.b
            i -= 1
            *eax = edx
            eax = &eax[1]
        while (i != 0)
        
        i_1 = arg3
        ecx = arg1
    
    ebp -= i_1
while (ebp u> ecx)
