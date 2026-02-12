// 函数: sub_48246a
// 地址: 0x48246a
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ecx
int32_t var_4_1 = ecx
void* eax = sub_488bb0(data_2b6b9ec)
void* edi = sub_488bb0(data_2b6b9e8)

if (edi u>= eax)
    void* ebx_2 = edi - eax
    
    if (ebx_2 + 4 u>= 4)
        uint32_t eax_2 = sub_48b34f(eax)
        
        if (eax_2 u>= ebx_2 + 4)
            goto label_482503
        
        uint32_t eax_3 = 0x800
        
        if (eax_2 u< 0x800)
            eax_3 = eax_2
        
        uint32_t eax_4 = eax_3 + eax_2
        void* eax_5
        
        if (eax_4 u>= eax_2)
            eax_5 = sub_48b304(eax, eax_4)
        
        if (eax_4 u>= eax_2 && eax_5 != 0)
        label_4824ec:
            edi = eax_5 + (ebx_2 s>> 2 << 2)
            data_2b6b9ec = sub_488b39(eax_5)
        label_482503:
            *edi = sub_488b39(arg1)
            data_2b6b9e8 = sub_488b39(edi + 4)
            return arg1
        
        if (eax_2 + 0x10 u>= eax_2)
            eax_5 = sub_48b304(eax, eax_2 + 0x10)
            
            if (eax_5 != 0)
                goto label_4824ec

return 0
