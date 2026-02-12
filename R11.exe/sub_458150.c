// 函数: sub_458150
// 地址: 0x458150
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ebp
int32_t var_4 = ebp
void* var_18 = arg1

for (int32_t* i = &data_c7863c; i s< &data_c78650; i = &i[1])
    int32_t* ecx = *i
    
    if (ecx != 0)
        (**ecx)(1)
        *i = 0

void* ebp_1 = **(arg1 + 0x20028)
void* edi_1 = arg1 + 0x20024
void* var_10 = edi_1
void* var_c = ebp_1

while (true)
    int32_t ebx_1 = *(arg1 + 0x20028)
    
    if (edi_1 == 0 || edi_1 != arg1 + 0x20024)
        __invalid_parameter_noinfo()
    
    if (ebp_1 == ebx_1)
        break
    
    if (edi_1 == 0)
        __invalid_parameter_noinfo()
    
    if (ebp_1 == *(edi_1 + 4))
        __invalid_parameter_noinfo()
    
    if (*(ebp_1 + 0x10) != 0)
        if (ebp_1 == *(edi_1 + 4))
            __invalid_parameter_noinfo()
        
        int32_t* eax_3 = *(ebp_1 + 0x10)
        (*(*eax_3 + 8))(eax_3)
        
        if (ebp_1 == *(edi_1 + 4))
            __invalid_parameter_noinfo()
        
        *(ebp_1 + 0x10) = 0
    
    sub_450e20(&var_10)
    ebp_1 = var_c
    edi_1 = var_10

void** ebp_2 = *(*(arg1 + 0x20028) + 4)
void** edi_2 = ebp_2

if (*(ebp_2 + 0x15) == 0)
    do
        sub_45d7c0(edi_2[2])
        edi_2 = *edi_2
        j_sub_4813df(ebp_2)
        ebp_2 = edi_2
    while (*(edi_2 + 0x15) == 0)

void* eax_5 = *(arg1 + 0x20028)
void* ebx_2 = var_18
*(eax_5 + 4) = eax_5
int32_t* eax_6 = *(arg1 + 0x20028)
*(arg1 + 0x2002c) = 0
*eax_6 = eax_6
void* esi_1 = *(arg1 + 0x20028)
*(esi_1 + 8) = esi_1
void* edi_3 = **(ebx_2 + 0xc)
void* esi_2 = ebx_2 + 8
var_10 = esi_2
void* var_c_1 = edi_3

while (true)
    int32_t ebp_3 = *(ebx_2 + 0xc)
    
    if (esi_2 == 0 || esi_2 != ebx_2 + 8)
        __invalid_parameter_noinfo()
    
    if (edi_3 == ebp_3)
        break
    
    if (esi_2 == 0)
        __invalid_parameter_noinfo()
    
    if (edi_3 == *(esi_2 + 4))
        __invalid_parameter_noinfo()
    
    if (*(edi_3 + 0x72) == 1 || *(edi_3 + 0x71) == 1)
        int32_t ebp_5 = 0
        
        while (true)
            int32_t ecx_7 = *(edi_3 + 0x54)
            
            if (ecx_7 == 0)
                break
            
            if (ebp_5 u>= (*(edi_3 + 0x58) - ecx_7) s>> 3)
                break
            
            if (ecx_7 == 0 || ebp_5 u>= (*(edi_3 + 0x58) - ecx_7) s>> 3)
                __invalid_parameter_noinfo()
            
            void* esi_4 = *(*(edi_3 + 0x54) + (ebp_5 << 3))
            int32_t* eax_13 = *(esi_4 + 0x40)
            
            if (eax_13 != 0)
                (*(*eax_13 + 8))(eax_13)
                *(esi_4 + 0x40) = 0
            
            ebp_5 += 1
    else
        int32_t* edi_4 = *(edi_3 + 0x58)
        
        if (*(edi_3 + 0x54) u> edi_4)
            __invalid_parameter_noinfo()
        
        int32_t* ebp_4 = *(edi_3 + 0x54)
        
        if (ebp_4 u> *(edi_3 + 0x58))
            __invalid_parameter_noinfo()
        
        sub_456940(edi_3 + 0x50, &var_18, edi_3 + 0x50, ebp_4, edi_3 + 0x50, edi_4)
    
    sub_450e90(&var_10)
    edi_3 = var_c_1
    esi_2 = var_10

HANDLE hHandle = data_c781d8

if (hHandle != 0)
    WaitForSingleObject(hHandle, 0xffffffff)

EnterCriticalSection(&data_c781dc)
void* eax_15 = data_c78204
void** edi_5 = *(eax_15 + 4)
void** esi_6 = edi_5

if (*(edi_5 + 0x31) == 0)
    do
        sub_4537c0(esi_6[2])
        esi_6 = *esi_6
        sub_4528a0(edi_5)
        j_sub_4813df(edi_5)
        edi_5 = esi_6
    while (*(esi_6 + 0x31) == 0)
    
    eax_15 = data_c78204

*(eax_15 + 4) = eax_15
int32_t* eax_16 = data_c78204
data_c78208 = 0
*eax_16 = eax_16
void* eax_17 = data_c78204
*(eax_17 + 8) = eax_17
LeaveCriticalSection(&data_c781dc)
var_4
return 0
