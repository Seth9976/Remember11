// 函数: sub_439520
// 地址: 0x439520
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ebp = 0
int32_t i = 0
int32_t var_8 = 0
int32_t ecx

if (data_2b55ef8 u> 0)
    do
        int32_t eax_2
        eax_2, ecx = sub_401e00(zx.d(*(data_2b55ef4 + (i << 1))))
        
        if (eax_2 != 0)
            ebp += 1
        
        i += 1
    while (i u< data_2b55ef8)
    
    var_8 = ebp

int32_t edi = 0

for (int32_t i_1 = 0; i_1 s< 0x10000; i_1 += 4)
    uint32_t edx_2
    edx_2.b = *((i_1 u>> 3) + 0x2b5ab71)
    ecx.b = i_1.b
    ecx.b &= 7
    edx_2.b u>>= ecx.b
    
    if ((edx_2.b & 1) != 0)
        edi += 1
    
    uint32_t edx_4
    edx_4.b = *(((i_1 + 1) u>> 3) + 0x2b5ab71)
    ecx.b = i_1.b
    ecx.b += 1
    ecx.b &= 7
    edx_4.b u>>= ecx.b
    
    if ((edx_4.b & 1) != 0)
        edi += 1
    
    uint32_t edx_6
    edx_6.b = *(((i_1 + 2) u>> 3) + 0x2b5ab71)
    ecx.b = i_1.b
    ecx.b += 2
    ecx.b &= 7
    edx_6.b u>>= ecx.b
    
    if ((edx_6.b & 1) != 0)
        edi += 1
    
    ecx.b = i_1.b
    edx_6.b = *(((i_1 + 3) u>> 3) + 0x2b5ab71)
    ecx.b += 3
    ecx.b &= 7
    edx_6.b u>>= ecx.b
    
    if ((edx_6.b & 1) != 0)
        edi += 1

int32_t ecx_3 = sbb.d(ecx, ecx, edi u< *(data_2b55e84 + 0x804)) + 1
char* ebx_1 = data_a5dd18 + 0x29418
int32_t var_4 = ecx_3
void* esi_3 = nullptr
void* result

while (true)
    result = *(esi_3 + 0x4bf8dc)
    *(esi_3 + &data_4bf8d8) = 0
    
    if (result != 0)
        if (result s<= ebp)
            *(esi_3 + &data_4bf8d8) = 1
    else if (ecx_3 == 1)
        *(esi_3 + &data_4bf8d8) = 1
    
    if (*(esi_3 + &data_4bf8d8) == 0)
        void* ebp_1 = &ebx_1[0xffff7c00]
        *ebp_1 = 0
        char* eax_4 = *(esi_3 + 0x4bf8e8)
        int32_t i_2 = 0
        
        do
            ecx_3.b = *eax_4
            eax_4 = &eax_4[1]
        while (ecx_3.b != 0)
        
        if (((eax_4 - &eax_4[1]) & 0xfffffffe) u> 0)
            void* eax_8
            void* edx_9
            
            do
                void* eax_7 = ebp_1 - 1
                
                do
                    ecx_3.b = *(eax_7 + 1)
                    eax_7 += 1
                while (ecx_3.b != 0)
                
                ecx_3.w = 0x4881
                *eax_7 = 0x4881
                *(eax_7 + 2) = 0
                eax_8 = *(esi_3 + 0x4bf8e8)
                edx_9 = eax_8 + 1
                i_2 += 1
                
                do
                    ecx_3.b = *eax_8
                    eax_8 += 1
                while (ecx_3.b != 0)
            while (i_2 u< (eax_8 - edx_9) u>> 1)
        
        *ebx_1 = 0
        char* eax_11 = *(esi_3 + 0x4bf8e4)
        int32_t edi_2 = 0
        
        do
            ecx_3.b = *eax_11
            eax_11 = &eax_11[1]
        while (ecx_3.b != 0)
        
        result = eax_11 - &eax_11[1]
        
        if ((result & 0xfffffffe) u> 0)
            do
                void* eax_13 = &ebx_1[0xffffffff]
                
                do
                    ecx_3.b = *(eax_13 + 1)
                    eax_13 += 1
                while (ecx_3.b != 0)
                
                ecx_3.w = 0x4881
                *eax_13 = 0x4881
                *(eax_13 + 2) = 0
                char* eax_14 = *(esi_3 + 0x4bf8e4)
                edi_2 += 1
                
                do
                    ecx_3.b = *eax_14
                    eax_14 = &eax_14[1]
                while (ecx_3.b != 0)
                
                result = (eax_14 - &eax_14[1]) u>> 1
            while (edi_2 u< result)
    else
        char* ecx_4 = *(esi_3 + 0x4bf8e8)
        char* edx_7 = &ebx_1[0xffff7c00]
        
        do
            result.b = *ecx_4
            *edx_7 = result.b
            ecx_4 = &ecx_4[1]
            edx_7 = &edx_7[1]
        while (result.b != 0)
        
        char* ecx_5 = *(esi_3 + 0x4bf8e4)
        char* edx_8 = ebx_1
        
        do
            result.b = *ecx_5
            *edx_8 = result.b
            ecx_5 = &ecx_5[1]
            edx_8 = &edx_8[1]
        while (result.b != 0)
    
    esi_3 += 0x14
    ebx_1 = &ebx_1[0x400]
    
    if (esi_3 u>= 0xc8)
        break
    
    ebp = var_8
    ecx_3 = var_4

return result
