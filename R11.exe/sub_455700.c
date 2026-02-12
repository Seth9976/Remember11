// 函数: sub_455700
// 地址: 0x455700
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* eax_1
int32_t edx_1
eax_1, edx_1 = (*(*data_c78668 + 0x38))()

for (int32_t* i = &data_c7863c; i s< &data_c78650; i = &i[1])
    int32_t* ecx_1 = *i
    
    if (ecx_1 != 0)
        edx_1 = (**ecx_1)(1)
        *i = 0
    
    void* ecx_2 = *(eax_1 + 8)
    int32_t* eax_4 = *(arg1 + 4)
    struct IRenderTexture::CRenderTexture::VTable** eax_5
    eax_5, edx_1 = sub_451270(eax_4, edx_1, ecx_2, eax_4, ecx_2, *(eax_1 + 0xc), 0x16)
    *i = eax_5

return 0
