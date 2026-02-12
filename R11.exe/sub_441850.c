// 函数: sub_441850
// 地址: 0x441850
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (arg1 u> data_c7cc84)
    return 

int32_t* ecx_1 = arg1 * 0x7c + data_c7cc80
*ecx_1 = arg4
ecx_1[1] = arg5
ecx_1[2] = arg6
ecx_1[3] = arg7
ecx_1[4] = arg8
int32_t esi_1 = arg10
ecx_1[0x1b] = arg9
ecx_1[0xa] = arg12
ecx_1[9] = arg13
ecx_1[0xb] = arg14

if (esi_1 == 0)
    esi_1 = 0x30

int32_t edi_1 = arg11

if (edi_1 == 0)
    edi_1 = 0x2f

int32_t eax_7
int32_t edx_5
edx_5:eax_7 = sx.q(esi_1)
ecx_1[5] = (eax_7 - edx_5) s>> 1
int32_t eax_11
int32_t edx_6
edx_6:eax_11 = sx.q(edi_1)
int32_t eax_12 = eax_11 - edx_6
edx_6.w = arg2
ecx_1[6] = eax_12 s>> 1
ecx_1[0xc].w = edx_6.w
ecx_1[8] = edi_1
*(ecx_1 + 0x3a) = esi_1.w
ecx_1[7] = esi_1
*(ecx_1 + 0x32) = 1
ecx_1[0xd].w = 0x14
*(ecx_1 + 0x36) = 0
ecx_1[0xe].w = 0
ecx_1[0xf].w = edi_1.w
*(ecx_1 + 0x3e) = arg3
ecx_1[0x10].w = 0
