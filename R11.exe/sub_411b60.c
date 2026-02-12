// 函数: sub_411b60
// 地址: 0x411b60
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* eax = *(arg1 + 0x44)
int32_t edx = *(eax + 0x4c)
bool cond:0 = *(eax + 0xc) != 1
data_a59b24 = eax
data_a59b00 = edx

if (not(cond:0))
    *(eax + 8) = 0
    *(arg1 + 0x10) = 0x64

int32_t edx_1 = sx.d(*(arg1 + 0x10))
int32_t edx_2 = edx_1
int32_t var_c_1

if (edx_1 == 0)
    *(eax + 8) = 0
    *(eax + 0x14) = 0
    *(arg1 + 0x10) = 1
label_411bb5:
    int16_t ecx = *(eax + 0x2a)
    
    if (ecx != 0)
        if (*(eax + 8) == zx.d(ecx))
            int32_t var_c_2 = 0
            sub_40fca0(eax, edx_2.b)
            eax = data_a59b24
        
        *(eax + 8) += 1
    
    sub_442e20()
    int32_t edx_4 = data_a59b00
    data_c7bbf0 = 1
    void* edx_5 = data_e7e648
    int16_t* var_28_1
    int32_t* var_24_1
    
    if (*edx_4 != 0)
        data_4b0d90 = 0x270 - *(data_a59b24 + 0x14)
        data_4b0d94 = 0xe0
        sub_445790(edx_5 + 0x10f138, &data_4b0d90, 0x4b0df0, 3)
        void* eax_5 = data_a59b24
        int32_t var_1c_2 = 3
        data_4b0dd0 = 0x280 - *(eax_5 + 0x14)
        data_4b0dd4 = 0xe0
        int32_t var_20_2 = 0x4b0df0
        var_24_1 = &data_4b0dd0
        int16_t* eax_7 = data_e7e648 + 0x10f138
        data_4b0dd8 = *(eax_5 + 0x14)
        data_4b0ddc = 0x20
        var_28_1 = eax_7
    else
        data_4b0d90 = *(data_a59b24 + 0x14) - 0x10
        data_4b0d94 = 0xe0
        sub_445790(edx_5 + 0x10f138, &data_4b0d90, 0x4b0df0, 3)
        void* eax_3 = data_a59b24
        void* edx_7 = data_e7e648
        int32_t var_1c_1 = 3
        int32_t var_20_1 = 0x4b0df0
        data_4b0db0 = 0
        data_4b0db4 = 0xe0
        var_24_1 = &data_4b0db0
        data_4b0db8 = *(eax_3 + 0x14)
        data_4b0dbc = 0x20
        var_28_1 = edx_7 + 0x10f138
    
    sub_445790(var_28_1, var_24_1, 0x4b0df0, 3)
    char edx_3 = sub_442c30(data_e7e648 + 0x10f138, 3)
    sub_442f40()
    eax = data_a59b24
    int32_t ecx_9 = *(eax + 0x14)
    
    if (ecx_9 s< 0x348)
        *(eax + 0x14) = ecx_9 + 0x40
        return 0
    
    var_c_1 = 0
    sub_40fca0(eax, edx_3)
else
    int32_t temp1_1 = edx_2
    edx_2 -= 1
    
    if (temp1_1 == 1)
        goto label_411bb5
    
    if (edx_2 == 0x63)
        var_c_1 = 0
        sub_40fca0(eax, edx_2.b - 0x63)
return 0
