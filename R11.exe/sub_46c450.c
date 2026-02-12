// 函数: sub_46c450
// 地址: 0x46c450
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t* eax_1 = *arg1[1]
int32_t var_c
int32_t var_8

if ((*(*eax_1 + 0x10))(eax_1, &var_c, &var_8) s< 0)
    return 0x80004005

int32_t edx = var_c
int32_t ecx_1 = var_8
int32_t eax_5

if (edx u> ecx_1)
    eax_5 = arg1[2] + ecx_1
else
    eax_5 = ecx_1

int32_t edi = arg1[0x10]
int32_t ebx
ebx.b = arg1[0xf] + edi s< edx
int32_t edx_1
edx_1.b = eax_5 s< edi

if (ebx == edx_1)
    return 0x80004005

int32_t* eax_8 = arg1[1]

if (eax_8 == 0 || arg1[3] == 0)
    return 0x800401f0

int32_t result = sub_46b420(*eax_8, &var_8)

if (result s>= 0)
    if (var_8 != 0)
        int32_t eax_10 = (*(*arg1 + 8))(*arg1[1], arg2)
        int32_t ecx_8
        ecx_8.b = eax_10 s>= 0
        return eax_10 & (ecx_8 - 1)
    
    result = sub_46bc00(arg1, *arg1[1], arg2, arg1[0x10], arg1[0xf])
    
    if (result s>= 0)
        int32_t* eax_14 = *arg1[1]
        void var_4
        result = (*(*eax_14 + 0x10))(eax_14, &var_4, 0)
        
        if (result s>= 0)
            arg1[0xa] += arg1[0xf]
            arg1[9] = modu.dp.d(0:(arg1[0xa]), arg1[2])
            
            if (arg2 == 0 && (*(*arg1[3] + 0x20))() != 0)
                uint32_t edi_2 = zx.d(*((*(*arg1[3] + 0x14))() + 0xc))
                int32_t eax_24 = (*(*arg1[3] + 0x20))() * edi_2
                
                if (arg1[0xa] u>= eax_24)
                    int32_t* eax_25 = *arg1[1]
                    (*(*eax_25 + 0x48))(eax_25)
            
            arg1[0x10] = modu.dp.d(0:(arg1[0xf] + arg1[0x10]), arg1[2])
            return 0

return result
