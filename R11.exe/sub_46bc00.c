// 函数: sub_46bc00
// 地址: 0x46bc00
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t* ebp = arg2
int128_t* var_4 = nullptr
int32_t var_8 = 0
void* var_c = nullptr

if (ebp == 0)
    return 0x800401f0

int32_t result = sub_46b420(ebp, nullptr)

if (result s>= 0)
    result = (*(*ebp + 0x2c))(ebp, arg4, arg5, &var_4, &var_8, 0, 0, 0)
    
    if (result s>= 0)
        if (arg5 != var_8)
            DebugBreak()
        
        (*(**(arg1 + 0xc) + 8))(*(arg1 + 0x38) + arg4, var_8, &var_c)
        sub_480ea0(var_4, *(arg1 + 0x38) + arg4, var_c)
        void* edx_4 = var_c
        int32_t eax_7 = var_8
        
        if (edx_4 u< eax_7)
            if (arg3 == 0)
                void* edi_3 = *(arg1 + 0x38)
                int32_t eax_14 = (*(**(arg1 + 0xc) + 0x14))(eax_7 - edx_4)
                sub_480cf0(edi_3 + var_c + arg4, ((*(eax_14 + 0xe) != 8) - 1) & 0x80)
                int32_t eax_18 = (*(**(arg1 + 0xc) + 0x14))(var_8 - var_c)
                sub_480cf0(var_c + var_4, ((*(eax_18 + 0xe) != 8) - 1) & 0x80)
                eax_7 = var_8
                ebp = arg2
            else
                void* edi_2 = edx_4
                
                do
                    result = (*(**(arg1 + 0xc) + 0x10))(1)
                    
                    if (result s< 0)
                        return result
                    
                    (*(**(arg1 + 0xc) + 8))(edi_2 + arg4 + *(arg1 + 0x38), var_8 - edi_2, &var_c)
                    sub_480ea0(edi_2 + var_4, edi_2 + arg4 + *(arg1 + 0x38), var_c)
                    edi_2 += var_c
                    eax_7 = var_8
                while (edi_2 u< eax_7)
        
        (*(*ebp + 0x4c))(ebp, var_4, eax_7, 0, 0)
        return 0

return result
