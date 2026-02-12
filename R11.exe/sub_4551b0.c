// 函数: sub_4551b0
// 地址: 0x4551b0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int16_t* ebx = arg6
uint32_t edx = zx.d(*ebx)
int32_t eax = *(ebx + 0x30)
int32_t ebp = arg1
char var_15 = 1
int32_t var_14 = 0

if (ebx[3] u> 0)
    int32_t* edi_1 = arg5
    int32_t ecx_4 = ((ebp & 0x3fff) - edx) << 6
    int32_t var_c_1 = ecx_4
    bool cond:1_1
    
    do
        uint32_t eax_1 = zx.d(ebx[2])
        int32_t* edx_4 = eax + ((eax_1 * var_14 + ecx_4) << 2)
        int32_t i = 0
        
        if (eax_1 s> 0)
            int32_t* edx_5 = edi_1
            
            do
                int32_t ecx_5 = *(edx_5 + edx_4 - edi_1)
                uint32_t eax_3 = ecx_5 u>> 0x18
                
                if (eax_3 u>= 0xff)
                    eax_3 = 0xff
                
                *edx_5 = (eax_3 << 8 | zx.d(ecx_5.b)) << 0x10 | zx.d((ecx_5 u>> 0x10).b)
                    | (ecx_5 & 0xff00)
                
                if (*(edx_5 + 3) u< 0x80)
                    var_15 = 0
                
                ebx = arg6
                i += 1
                edx_5 = &edx_5[1]
            while (i s< zx.d(ebx[2]))
            
            ebp = arg1
            ecx_4 = var_c_1
        
        uint32_t edx_6 = zx.d(ebx[2])
        
        if (edx_6 s< arg2)
            do
                int32_t ecx_8 = *edx_4
                uint32_t eax_11 = ecx_8 u>> 0x18
                
                if (eax_11 u>= 0xff)
                    eax_11 = 0xff
                
                edi_1[edx_6] = (eax_11 << 8 | zx.d(ecx_8.b)) << 0x10 | zx.d((ecx_8 u>> 0x10).b)
                    | (ecx_8 & 0xff00)
                
                if (*(&edi_1[edx_6] + 3) u< 0x80)
                    var_15 = 0
                
                edx_6 += 1
            while (edx_6 s< arg2)
            
            ecx_4 = var_c_1
        
        edi_1 += arg4
        cond:1_1 = var_14 + 1 s< zx.d(ebx[3])
        var_14 += 1
    while (cond:1_1)

uint32_t ecx_15 = zx.d(ebx[3])

if (ecx_15 s>= arg3)
    ecx_15.b = var_15
    *(arg7 + 0x48) = ecx_15.b
    return arg7

void* esi_8 = ecx_15 * arg4 + arg5
int32_t* ebp_6 = (((ebp & 0x3fff) - edx) << 8) + eax
uint32_t eax_20 = arg3 - ecx_15
int32_t* var_4_1 = ebp_6
arg3 = eax_20
uint32_t j
uint32_t i_1

do
    int32_t edi_2 = 0
    
    if (ebx[2] u> 0)
        int32_t* edx_8 = esi_8
        
        do
            int32_t ecx_10 = *(edx_8 + ebp_6 - esi_8)
            uint32_t eax_22 = ecx_10 u>> 0x18
            
            if (eax_22 u>= 0xff)
                eax_22 = 0xff
            
            *edx_8 = (eax_22 << 8 | zx.d(ecx_10.b)) << 0x10 | zx.d((ecx_10 u>> 0x10).b)
                | (ecx_10 & 0xff00)
            
            if (*(edx_8 + 3) u< 0x80)
                var_15 = 0
            
            ebx = arg6
            eax_20 = zx.d(ebx[2])
            edi_2 += 1
            edx_8 = &edx_8[1]
        while (edi_2 s< eax_20)
        
        ebp_6 = var_4_1
    
    for (j = zx.d(ebx[2]); j s< arg2; j += 1)
        int32_t ecx_12 = *ebp_6
        uint32_t eax_29 = ecx_12 u>> 0x18
        
        if (eax_29 u>= 0xff)
            eax_29 = 0xff
        
        eax_20 =
            (eax_29 << 8 | zx.d(ecx_12.b)) << 0x10 | zx.d((ecx_12 u>> 0x10).b) | (ecx_12 & 0xff00)
        *(esi_8 + (j << 2)) = eax_20
        
        if (*(esi_8 + (j << 2) + 3) u< 0x80)
            var_15 = 0
    
    esi_8 += arg4
    i_1 = arg3
    arg3 -= 1
while (i_1 != 1)
j.b = var_15
*(arg7 + 0x48) = j.b
return eax_20
