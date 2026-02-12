// 函数: sub_489a9a
// 地址: 0x489a9a
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (data_2b6b9f0 == 0)
    ___initmbctable()

data_c7b374 = 0
void* ecx = GetModuleFileNameA(nullptr, &data_c7b270, 0x104)
void* eax = data_2b6b9f8
data_c7aa58 = &data_c7b270
void* var_8_1

if (eax != 0)
    var_8_1 = eax

if (eax == 0 || *eax == 0)
    var_8_1 = &data_c7b270

int32_t var_c
int32_t* var_20 = &var_c
int32_t var_10
sub_489902(&var_c, var_8_1, &var_10, ecx, nullptr, nullptr)
int32_t eax_2 = var_c

if (eax_2 u< 0x3fffffff)
    int32_t ecx_1 = var_10
    
    if (ecx_1 u< 0xffffffff)
        int32_t edi_2 = eax_2 << 2
        uint32_t eax_3 = edi_2 + ecx_1
        
        if (eax_3 u>= ecx_1)
            void* eax_4 = sub_48b27c(eax_3)
            
            if (eax_4 != 0)
                int32_t* var_20_2 = &var_c
                sub_489902(&var_c, var_8_1, &var_10, eax_3, eax_4, edi_2 + eax_4)
                data_c7aa3c = var_c - 1
                data_c7aa40 = eax_4
                return 0

return 0xffffffff
