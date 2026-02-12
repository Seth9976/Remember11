// 函数: sub_45dae0
// 地址: 0x45dae0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ebx
int32_t var_4c = ebx
int32_t ebp
int32_t var_50 = ebp
int32_t esi
int32_t var_54 = esi
int16_t x87control
sub_45cbb0(arg1, x87control, &arg1[0x96])
POINT point
BOOL eax_1
int32_t edx
eax_1, edx = GetCursorPos(&point)
int32_t* esp_1 = &var_54
int32_t ebp_1

if (eax_1 != 1)
label_45db81:
    ebp_1 = 0
    data_c785d0 = 0
    data_c785d1 = 0
    data_c785d2 = 0
    data_c785d4 = 0
    data_c785d8 = 0
    data_c785c4 = 0
    data_c785c5 = 0
    data_c785c6 = 0
    data_c785c8 = 0
    data_c785cc = 0
    data_c785dc = 0
    data_c785dd = 0
    data_c785de = 0
    data_c785e0 = 0
    data_c785e4 = 0
else
    ScreenToClient(arg1[1], &point)
    esp_1 = &var_54
    int32_t* eax_4 = (*(*data_c78668 + 0x38))()
    int32_t ecx_1 = *eax_4
    edx = point.x
    
    if (ecx_1 s>= edx || edx s>= eax_4[2] + ecx_1)
        goto label_45db81
    
    int32_t ecx_2 = eax_4[1]
    edx = point.y
    
    if (ecx_2 s>= edx || edx s>= eax_4[3] + ecx_2)
        goto label_45db81
    
    sub_45c980(&data_c785d0, arg1[0x9e].b)
    sub_45c980(&data_c785c4, *(arg1 + 0x279))
    sub_45c980(&data_c785dc, *(arg1 + 0x27a))
    esp_1 = &var_54
    ebp_1 = 0

if (arg1[0x9a].b != 0)
    (*(*arg1 + 0x10))()
    arg1[0x9a].b = 0
    
    if (sub_46ec30() == 0)
        sub_4753c0()
    
    void* eax_10 = arg1[2]
    int32_t edi
    int32_t var_58_6 = edi
    int32_t x
    int32_t x_1
    
    if (&point == 0 || &point == 0)
        x_1 = point.x
        x = point.x
    else
        x = *(eax_10 + 0xc)
        x_1 = *(eax_10 + 0x14)
    
    if (x_1 u> 0)
        int32_t* esi_3 = x + 4
        int32_t i
        
        do
            void* eax_11 = *esi_3
            
            if (eax_11 != 0)
                j_sub_4813df(eax_11)
            
            *esi_3 = 0
            esi_3 = &esi_3[3]
            i = x_1
            x_1 -= 1
        while (i != 1)
    
    void* esi_4 = arg1[2]
    int32_t var_40
    sub_480cf0(&var_40, 0, 0x40)
    int32_t edx_4 = arg1[1]
    void* var_30_1 = esi_4 + 0x18
    int32_t eax_13 = *(esi_4 + 4)
    var_40 = 0x40
    int32_t var_34_1 = 1
    int32_t var_2c_1 = edx_4
    int32_t var_4_1 = 0
    
    if (eax_13 != 0)
        int32_t var_3c_1 = 1
        int32_t var_38_1 = eax_13
    
    int32_t i_1 = 0
    
    if (*(esi_4 + 0x14) u> 0)
        do
            int32_t* ecx_5 = *(*(esi_4 + 0xc) + ebp_1)
            (*(*ecx_5 + 0x20))(ecx_5)
            i_1 += 1
            ebp_1 += 0xc
        while (i_1 u< *(esi_4 + 0x14))
    
    int32_t* eax_16 = *(esi_4 + 8)
    int32_t edx_7 = *(*eax_16 + 0x28)
    int32_t var_5c_5 = 0
    int32_t var_60_2 = 1
    int32_t* var_64_2 = &var_40
    int32_t var_68 = 0
    edx_7(eax_16, var_68, var_64_2, var_60_2, var_5c_5)
    int32_t var_70_1 = 1
    sub_45c660(esi_4, esi_4 + 0x18, 1)
    esp_1 = &var_68

char eax_18 = data_c78599
edx.b = data_c78591
data_c78594 = data_c78595
char ecx_9 = data_c784d5
data_c78598 = eax_18
char eax_19 = data_c7858d
data_c784d4 = ecx_9
data_c78590 = edx.b
data_c7858c = eax_19
data_c78599 = 0
data_c78595 = 0
data_c78591 = 0
data_c7858d = 0
data_c784d5 = 0
*(esp_1 - 4) = arg1[1]
sub_45d980(0xc785e8)
*esp_1
esp_1[1]
esp_1[2]

if (data_c7841c != 0)
    data_c7841d = 0
    data_c7841c = 0

data_c7841d |= data_c7858c | data_c78594 | data_c78598
return 0
