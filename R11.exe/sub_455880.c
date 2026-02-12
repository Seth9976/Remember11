// 函数: sub_455880
// 地址: 0x455880
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ebx
int32_t var_68 = ebx
int32_t esi
int32_t var_6c = esi
int32_t edi
int32_t var_70 = edi
uint32_t edi_1 = zx.d(*arg6)
int32_t var_74 = arg4
int32_t var_78 = arg3
int32_t var_54 = *(arg6 + 0x30)
sub_4653f0("Create Texture %dx%d(16)\n")
int32_t arg_1084 = arg7
char arg_10a7 = 1
void arg_10b4
enum MESSAGEBOX_RESULT eax_2 = sub_450a10(&arg_10b4, arg1, arg2)
int32_t edx_1 = 0
int32_t arg_10a8 = 0

if (arg6[3] u<= 0)
    *(arg8 + 0x48) = 1
    return eax_2

uint32_t edx_2

while (true)
    int32_t* ecx_6 = (*(arg8 + 0x24) + edx_1) * *arg5 + (*(arg8 + 0x20) << 2) + arg5[1]
    uint32_t esi_6 = zx.d(arg6[2])
    int32_t eax_7
    edx_2:eax_7 = sx.q(esi_6 * edx_1)
    int32_t eax_11 = ((eax_7 - edx_2) s>> 1) + (((arg1 & 0x3fff) - edi_1) << 8) + arg12
    void* i = nullptr
    
    if (esi_6 u>> 1 s> 0)
        do
            *ecx_6 = *(&arg_10b4 + ((zx.d(*(i + eax_11)) & 0xf) << 2))
            bool cond:2_1 = *(ecx_6 + 3) u>= 0x80
            ecx_6[1] = *(&arg_10b4 + (zx.d(*(i + eax_11)) u>> 4 << 2))
            
            if (not(cond:2_1) && *(ecx_6 + 7) u< 0x80)
                arg_10a7 = 0
            
            i += 1
            ecx_6 = &ecx_6[2]
        while (i s< zx.d(arg6[2]) u>> 1)
    
    bool cond:1_1 = arg_10a8 + 1 s< zx.d(arg6[3])
    arg_10a8 += 1
    
    if (not(cond:1_1))
        break
    
    edx_1 = arg_10a8

edx_2.b = arg_10a7
*(arg8 + 0x48) = edx_2.b
return arg8
