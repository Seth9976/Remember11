// 函数: sub_461af0
// 地址: 0x461af0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ebx
int32_t var_58 = ebx
int32_t esi
int32_t var_5c = esi
int32_t edi
int32_t var_60 = edi
sub_4605c0(arg1)
sub_4710a0()
int32_t ecx = data_c79db8
int32_t edx = data_c79dbc
arg1[0x110748] = 0
arg1[0x110749] = 0
arg1[0x11074a] = ecx
arg1[0x11074b] = edx
int32_t ecx_1 = data_c79dbc
int32_t edi_1 = data_c79db8
int32_t edx_1 = edi_1 * 3

if (ecx_1 << 2 u> edx_1)
    uint32_t edx_2 = edx_1 u>> 2
    arg1[0x110748] = 0
    arg1[0x110749] = (ecx_1 - edx_2) u>> 1
    arg1[0x11074a] = edi_1
    arg1[0x11074b] = edx_2

int32_t ecx_4 = data_c79db8
int32_t edi_2 = data_c79dbc

if (edi_2 << 2 u< ecx_4 * 3)
    uint32_t edx_7 = edi_2 u/ 3 * 4
    arg1[0x110748] = (ecx_4 - edx_7) u>> 1
    arg1[0x110749] = 0
    arg1[0x11074a] = edx_7
    arg1[0x11074b] = edi_2

sub_4710a0()
int32_t* eax_2 = arg1[0x732]

if (eax_2 != 0)
    (*(*eax_2 + 8))(eax_2)
    arg1[0x732] = 0

int32_t edx_9 = data_c79dbc
int32_t* eax_3 = arg1[1]
void* ecx_8 = *eax_3
int32_t var_64_2 = 0
int32_t var_6c = 1
int32_t var_70 = 0
float var_74 = 0f
(*(ecx_8 + 0x74))(eax_3, data_c79db8 u>> 1, edx_9 u>> 1, 0x4b, var_74, var_70, var_6c, 
    &arg1[0x732], var_64_2)
int32_t* eax_5 = arg1[1]
(*(*eax_5 + 0x104))(eax_5, 0, 0)
long double x87_r7 = float.t(0)
int32_t* eax_6 = arg1[1]
float var_3c = fconvert.s(x87_r7)
float var_40 = fconvert.s(x87_r7)
float var_44 = fconvert.s(x87_r7)
float var_48 = fconvert.s(x87_r7)
float var_50 = fconvert.s(x87_r7)
float var_54 = fconvert.s(x87_r7)
float var_58_1 = fconvert.s(x87_r7)
float var_5c_1 = fconvert.s(x87_r7)
float var_64_3 = fconvert.s(x87_r7)
float var_68_1 = fconvert.s(x87_r7)
float var_6c_1 = fconvert.s(x87_r7)
float var_70_1 = fconvert.s(x87_r7)
long double x87_r7_1 = float.t(1)
float var_38 = fconvert.s(x87_r7_1)
float var_4c = fconvert.s(x87_r7_1)
float var_60_1 = fconvert.s(x87_r7_1)
var_74 = fconvert.s(x87_r7_1)
(*(*eax_6 + 0xb0))(eax_6, 0x100, &var_74)
int32_t* eax_8 = arg1[1]
(*(*eax_8 + 0xb0))(eax_8, 2, &var_74)
int32_t* eax_10 = arg1[1]
(*(*eax_10 + 0xb0))(eax_10, 3, &var_74)
(*(*arg1 + 0x18))(7, 0)
(*(*arg1 + 0x18))(0x1b, 0)
(*(*arg1 + 0x18))(0xf, 0)
(*(*arg1 + 0x18))(0x18, 8)
(*(*arg1 + 0x18))(0x19, 7)
(*(*arg1 + 0x18))(8, 3)
(*(*arg1 + 0x18))(0xa8, 0xf)
(*(*arg1 + 0x18))(9, 1)
(*(*arg1 + 0x18))(0x89, 0)
(*(*arg1 + 0x18))(0x16, 1)
(*(*arg1 + 0x18))(0xb0, 1)
(*(*arg1 + 0x18))(0x88, 1)
(*(*arg1 + 0x18))(0x98, 0)
(*(*arg1 + 0x18))(0x1c, 0)
(*(*arg1 + 0x18))(0x34, 0)
(*(*arg1 + 0x18))(0x8d, 0)
(*(*arg1 + 0x20))(0, 1, 2)
(*(*arg1 + 0x20))(0, 2, 2)
(*(*arg1 + 0x20))(0, 3, 0)
(*(*arg1 + 0x20))(0, 4, 2)
(*(*arg1 + 0x20))(0, 5, 2)
(*(*arg1 + 0x20))(0, 6, 0)
(*(*arg1 + 0x18))(0x9a, data_4cade0)
(*(*arg1 + 0x1c))(0, 6, 2)
(*(*arg1 + 0x1c))(0, 5, 2)
(*(*arg1 + 0x1c))(0, 7, 0)
int32_t* eax_38 = arg1[1]
(*(*eax_38 + 0xec))(eax_38, 1, &arg1[2])
int32_t* eax_40 = arg1[1]
(*(*eax_40 + 0xec))(eax_40, 1, &arg1[3])
int32_t* esi_3 = arg1[3]
(*(*esi_3 + 0x10))(esi_3)
return 0
