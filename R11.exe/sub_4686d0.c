// 函数: sub_4686d0
// 地址: 0x4686d0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

struct std::streambuf::VTable** var_4 = arg1
int32_t* ebx = arg1[0xe]
*arg1 = &std::streambuf::`vftable'

if (ebx != 0)
    void* edi_1 = *ebx
    
    if (edi_1 != 0)
        sub_4973f8(&var_4, 0)
        int32_t eax_1 = *(edi_1 + 4)
        
        if (eax_1 u> 0 && eax_1 u< 0xffffffff)
            *(edi_1 + 4) = eax_1 - 1
        
        int32_t esi_1 = *(edi_1 + 4)
        int32_t esi_2 = neg.d(esi_1)
        void* esi_5 = not.d(sbb.d(esi_2, esi_2, esi_1 != 0)) & edi_1
        sub_497419(&var_4)
        
        if (esi_5 != 0)
            (**esi_5)(1)
    
    j_sub_4813df(ebx)

return sub_497844(&arg1[1]) __tailcall
