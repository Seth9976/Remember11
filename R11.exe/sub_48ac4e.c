// 函数: sub_48ac4e
// 地址: 0x48ac4e
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_8 = arg3
int32_t var_c = arg3
int32_t* esi = arg4

if (*esi == 0x80000003)
    return 

if (*(__getptd() + 0x80) != 0)
    void* edi_1 = __getptd() + 0x80
    int32_t eax_2 = sub_488ba7()
    
    if (*edi_1 == eax_2 || *esi == 0xe0434f4d)
        goto label_48acb4
    
    int32_t* __saved_ebx_1 = arg11
    
    if (sub_482192(esi, arg5, arg6, arg7, arg8, arg10) == 0)
        goto label_48acb4
    
    return 

label_48acb4:

if (*(arg8 + 0xc) == 0)
    sub_48b1de()
    noreturn

int32_t esi_1 = arg9
int32_t* edi_3 = sub_482304(arg8, arg10, esi_1, &var_8, &var_c)

while (var_8 u< var_c)
    if (esi_1 s>= *edi_3 && esi_1 s<= edi_3[1])
        void* eax_6 = (edi_3[3] << 4) + edi_3[4]
        void* ecx_1 = *(eax_6 - 0xc)
        
        if ((ecx_1 == 0 || *(ecx_1 + 8) == 0) && (*(eax_6 - 0x10) & 0x40) == 0)
            sub_48abe2(arg5, edi_3, arg4, arg6, arg7, arg8, nullptr, arg10, arg11)
            esi_1 = arg9
    
    var_8 += 1
    edi_3 = &edi_3[5]
