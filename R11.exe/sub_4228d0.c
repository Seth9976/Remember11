// 函数: sub_4228d0
// 地址: 0x4228d0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ecx
int32_t var_4_2 = ecx
void* ecx_1 = data_a5d910
int32_t result = 0
int32_t ebx = 1
int32_t var_4 = 1
void* edx_2 = *(ecx_1 + 0x24) * 0x3c0 + ecx_1 + 0x4c
int32_t i_2 = 4
int32_t i

do
    if (*(edx_2 + 2) != 0 && *edx_2 == 1)
        result += 1
        
        if (*(edx_2 + 1) == 1)
            ebx = 0
    
    if (*(edx_2 + 0x32) != 0 && *(edx_2 + 0x30) == 1)
        result += 1
        
        if (*(edx_2 + 0x31) == 1)
            ebx = 0
    
    if (*(edx_2 + 0x62) != 0 && *(edx_2 + 0x60) == 1)
        result += 1
        
        if (*(edx_2 + 0x61) == 1)
            ebx = 0
    
    if (*(edx_2 + 0x92) != 0 && *(edx_2 + 0x90) == 1)
        result += 1
        
        if (*(edx_2 + 0x91) == 1)
            ebx = 0
    
    if (*(edx_2 + 0xc2) != 0 && *(edx_2 + 0xc0) == 1)
        result += 1
        
        if (*(edx_2 + 0xc1) == 1)
            ebx = 0
    
    edx_2 += 0xf0
    i = i_2
    i_2 -= 1
while (i != 1)
int32_t var_4_1 = ebx

for (int32_t i_1 = 0; i_1 s< 4; i_1 += 1)
    void* esi_3 = (i_1 + (*(ecx_1 + 0x24) << 2)) * 0xf0 + ecx_1
    
    if (ebx != 0)
        if (*(esi_3 + 0x4e) == 0 || *(esi_3 + 0x4c) != 1)
            ebx = var_4_1
        else
            ebx = var_4_1
            *(esi_3 + 0x4d) = ebx.b
        
        void* esi_23 = (i_1 + (*(ecx_1 + 0x24) << 2)) * 0xf0 + ecx_1
        
        if (*(esi_23 + 0x7e) != 0 && *(esi_23 + 0x7c) == 1)
            *(esi_23 + 0x7d) = ebx.b
        
        void* esi_27 = (i_1 + (*(ecx_1 + 0x24) << 2)) * 0xf0 + ecx_1
        
        if (*(esi_27 + 0xae) != 0 && *(esi_27 + 0xac) == 1)
            *(esi_27 + 0xad) = ebx.b
        
        void* esi_31 = (i_1 + (*(ecx_1 + 0x24) << 2)) * 0xf0 + ecx_1
        
        if (*(esi_31 + 0xde) != 0 && *(esi_31 + 0xdc) == 1)
            *(esi_31 + 0xdd) = ebx.b
        
        void* esi_35 = (i_1 + (*(ecx_1 + 0x24) << 2)) * 0xf0 + ecx_1
        
        if (*(esi_35 + 0x10e) != 0 && *(esi_35 + 0x10c) == 1)
            *(esi_35 + 0x10d) = ebx.b
    else
        if (*(esi_3 + 0x4e) != ebx.w && *(esi_3 + 0x4c) == 1)
            *(esi_3 + 0x4d) = ebx.b
        
        void* esi_7 = (i_1 + (*(ecx_1 + 0x24) << 2)) * 0xf0 + ecx_1
        
        if (*(esi_7 + 0x7e) != ebx.w && *(esi_7 + 0x7c) == 1)
            *(esi_7 + 0x7d) = ebx.b
        
        void* esi_11 = (i_1 + (*(ecx_1 + 0x24) << 2)) * 0xf0 + ecx_1
        
        if (*(esi_11 + 0xae) != ebx.w && *(esi_11 + 0xac) == 1)
            *(esi_11 + 0xad) = ebx.b
        
        void* esi_15 = (i_1 + (*(ecx_1 + 0x24) << 2)) * 0xf0 + ecx_1
        
        if (*(esi_15 + 0xde) != ebx.w && *(esi_15 + 0xdc) == 1)
            *(esi_15 + 0xdd) = ebx.b
        
        void* esi_19 = (i_1 + (*(ecx_1 + 0x24) << 2)) * 0xf0 + ecx_1
        
        if (*(esi_19 + 0x10e) != ebx.w && *(esi_19 + 0x10c) == 1)
            *(esi_19 + 0x10d) = ebx.b
        
        ebx = var_4_1

return result
