// 函数: sub_44f0b0
// 地址: 0x44f0b0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ebp
int32_t var_4 = ebp
void* edi = *arg1[1]
void* esi = arg1
int32_t* ebx_1 = arg1
void* var_20
void var_10

while (true)
    int32_t ebp_1 = ebx_1[1]
    
    if (esi == 0 || esi != ebx_1)
        __invalid_parameter_noinfo()
    
    if (edi == ebp_1)
        break
    
    var_20 = esi
    sub_450e20(&var_20)
    
    if (esi == 0)
        __invalid_parameter_noinfo()
    
    if (edi == *(esi + 4))
        __invalid_parameter_noinfo()
    
    void* esi_1 = *(edi + 0xc)
    int32_t* ecx_1 = *(esi_1 + 4)
    
    if (ecx_1 != 0)
        (**ecx_1)(1)
    
    void* var_28 = esi_1
    int32_t* var_18
    sub_45ec20(0xc7781c, &var_18, &var_28)
    int32_t* edi_1 = var_18
    int32_t ebx_2 = data_c77820
    
    if (edi_1 == 0 || edi_1 != 0xc7781c)
        __invalid_parameter_noinfo()
    
    int32_t var_14
    
    if (var_14 == ebx_2)
        sub_465480(".\libadxf.cpp", 0x107)
    
    int32_t var_3c_2 = var_14
    sub_44d960(0xc7781c, &var_10, edi_1)
    *(esi_1 + 4) = 0
    *(esi_1 + 1) = 1
    j_sub_4813df(esi_1)
    esi = var_20
    ebx_1 = arg1

void* esi_2 = &data_c77810
void* edi_2 = *data_c77814
var_20 = &data_c77810
void* var_1c_2 = edi_2

while (true)
    int32_t ebp_3 = data_c77814
    
    if (esi_2 == 0 || esi_2 != &data_c77810)
        __invalid_parameter_noinfo()
    
    if (edi_2 == ebp_3)
        break
    
    if (esi_2 == 0)
        __invalid_parameter_noinfo()
    
    if (edi_2 == *(esi_2 + 4))
        __invalid_parameter_noinfo()
    
    void* edi_3 = *(edi_2 + 0x10)
    
    if (edi_3 != 0)
        void* eax_3 = *(edi_3 + 0x18)
        
        if (eax_3 != 0)
            int32_t* var_3c_4 = arg1
            void* var_40_3 = edi_3 + 0x14
            sub_44dc20(eax_3, *(edi_3 + 0x1c))
            j_sub_4813df(*(edi_3 + 0x18))
        
        *(edi_3 + 0x18) = 0
        *(edi_3 + 0x1c) = 0
        *(edi_3 + 0x20) = 0
        void* eax_4 = *(edi_3 + 8)
        
        if (eax_4 != 0)
            j_sub_4813df(eax_4)
        
        *(edi_3 + 8) = 0
        *(edi_3 + 0xc) = 0
        *(edi_3 + 0x10) = 0
        j_sub_4813df(edi_3)
    
    sub_450e20(&var_20)
    edi_2 = var_1c_2
    esi_2 = var_20

int32_t* eax_5 = ebx_1[1]
sub_44e060(ebx_1, &var_10, ebx_1, *eax_5, ebx_1, eax_5)
j_sub_4813df(ebx_1[1])
ebx_1[1] = 0
ebx_1[2] = 0
var_4
return 0
