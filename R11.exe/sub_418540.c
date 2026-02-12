// 函数: sub_418540
// 地址: 0x418540
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t* ebp = arg2
void* ecx_1 = ebp[1] + ebp

if (arg3 == 0)
    void* eax_1 = sub_417d60()
    sub_480ea0(eax_1, ebp, ebp[*ebp])
    ebp = eax_1
    ecx_1 = *(eax_1 + 4) + eax_1

int32_t entry_ebx
int32_t edi_1 = entry_ebx * 0x104
int16_t* esi_2 = edi_1 + data_e7e648 + 0x1f5dc
int32_t edx_1 = arg1
uint32_t i
i.b = (edx_1 u>> 0xc).b & 0xf
*esi_2 = 0xffff
esi_2[1].b = i.b
*(esi_2 + 0xfc) = ebp

if (arg3 != 2)
    *(esi_2 + 0xf4) = zx.d(*(ecx_1 + 8))
    *(esi_2 + 0xf8) = zx.d(*(ecx_1 + 0xa))
else
    *(esi_2 + 0xf4) = 0
    *(esi_2 + 0xf8) = 0

if (i.b == 2)
    i, ecx_1 = sub_4152c0(edx_1, 1)
    edx_1 = arg1
    *(esi_2 + 3) = 0

esi_2[0x4c].b = 0

if (esi_2[1].b == 1)
    char* eax_5 = edx_1 & 0xfff
    ecx_1.b = eax_5[data_2b55efc]
    *(esi_2 + 0x99) = ecx_1.b
    int32_t edx_2
    edx_2.b = eax_5[0x2b55f0c]
    *(esi_2 + 3) = edx_2.b
    
    for (i = 0; i s< 0x1248; i += 0x104)
        ecx_1.b = *(esi_2 + 3)
        *(i + data_e7e648 + 0x1f5df) = ecx_1.b
        *(i + data_e7e648 + 0x1f6cc) = zx.d(*(esi_2 + 0x99))

i.b = *(esi_2 + 3)
esi_2[9].b = i.b
*(edi_1 + data_e7e648 + 0x1f65c) = 0
*(edi_1 + data_e7e648 + 0x1f660) = 0
*(edi_1 + data_e7e648 + 0x1f664) = 0
char* result = sub_40a1e0(entry_ebx)
*esi_2 = arg1.w
void* ecx_6 = data_e7e648

if (*(ecx_6 + 0x3044) != 0)
    int32_t eax_8 = (entry_ebx + 0xc) * 0x104
    *(eax_8 + ecx_6 + 0x1f5dc) = 0xffff
    *(eax_8 + data_e7e648 + 0x1f5de) = 0xff
    *(eax_8 + data_e7e648 + 0x1f5e2) = 0xff
    sub_4184d0(entry_ebx + 0xc, entry_ebx)
    int32_t eax_10 = (entry_ebx + 0xc) * 0x104
    *(eax_10 + data_e7e648 + 0x1f5e2) = 0
    int32_t var_18_2 = 0
    int32_t var_1c_1 = 0
    *(eax_10 + data_e7e648 + 0x1f5e4) = 0
    result = data_e7e648
    
    if (*(edi_1 + result + 0x1f5dc) != 0xffff)
        return j_sub_450c70(*(edi_1 + result + 0x1f6d8))

return result
