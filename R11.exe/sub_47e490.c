// 函数: sub_47e490
// 地址: 0x47e490
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t edi
int32_t var_c = edi
int32_t* arg_c
int32_t* edi_1 = arg_c
void* eax = *edi_1
int32_t var_4 = arg1
int32_t eax_1 = (*(eax + 0x14))(edi_1)
int32_t* esp = &var_c

if (eax_1 s< 0)
label_47e56a:
    *esp
    return eax_1

int32_t edx_2 = *(*edi_1 + 0xc)
int32_t ebx
int32_t var_10_1 = ebx
int32_t esi
int32_t var_14_1 = esi
arg_c = nullptr
int32_t var_8 = 0
int32_t ebx_1 = 0

if (edx_2(edi_1, 1, &arg_c, &var_8) == 0)
    while (true)
        int32_t* arg_14
        int32_t esi_1
        
        if (arg3 == 0)
        label_47e4fd:
            int32_t* var_10_3 = arg_14
            esi_1 = sub_47e3d0(arg2, arg_c)
            
            if (esi_1 s< 0 && ebx_1 s>= 0 && esi_1 != 0x80004005 && esi_1 != 0x80070057
                    && esi_1 != 0x8004022a)
                ebx_1 = esi_1
        else
            if (sub_4807e0(arg_14, arg3) != 0)
                goto label_47e4fd
            
            esi_1 = 0x80040207
        
        sub_480a40(arg_14)
        
        if (esi_1 == 0)
            eax_1 = 0
            esp = &var_4
            goto label_47e56a
        
        if ((*(*edi_1 + 0xc))(edi_1, 1, &arg_14, &__return_addr) != 0)
            if (ebx_1 != 0)
                return ebx_1
            
            break

return 0x80040207
