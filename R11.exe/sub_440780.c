// 函数: sub_440780
// 地址: 0x440780
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int16_t* ebx = arg4

if (*ebx == 0)
    return 

int16_t* esi_1 = *data_c7bbcc
int32_t eax_2 = sub_448f10(esi_1, 1)
sub_4479d0(esi_1, 0, 0x47, 0, data_a59990, data_a59994)
sub_448880(data_c7bbc8, arg6, esi_1)
int32_t* eax = data_c7bbcc
*eax += eax_2 << 4
void* esi_2 = &ebx[6]
int32_t* var_3c_1 = nullptr

if (*ebx u<= 0)
    return 

bool cond:1_1

do
    int32_t eax_4 = data_e7e624
    int32_t ecx_3 = data_e7e620
    int16_t* edi_3 = *data_c7bbcc
    int32_t edx_4 = (eax_4 * ecx_3) << 4
    int32_t edx_7 = *(edx_4 + 0xd7e614) - data_d7e624
    int32_t ebx_2 = *(edx_4 + 0xd7e610) - data_d7e620
    int16_t eax_16 = (divs.dp.d(
        sx.q(divs.dp.d(sx.q((zx.d(*(esi_2 + 8)) << 4) * zx.d(*(esi_2 + 0x10))), 
            zx.d(*(esi_2 + 0x14))) * ebx_2), 
        ecx_3 * 0xe0 - 0xe0)).w + (data_d7e620).w
    uint32_t edx_14 = zx.d(*(esi_2 + 0xc))
    int16_t eax_25 = (divs.dp.d(
        sx.q(divs.dp.d(sx.q((zx.d(*(esi_2 + 0xa)) << 4) * zx.d(*(esi_2 + 0x12))), 
            zx.d(*(esi_2 + 0x16))) * edx_7), 
        eax_4 * 0xe0 - 0xe0)).w + (data_d7e624).w
    uint32_t ebx_3 = zx.d(*(esi_2 + 0xe))
    int16_t eax_35 = (divs.dp.d(
        sx.q(divs.dp.d(sx.q(((zx.d(*(esi_2 + 8)) + edx_14) * zx.d(*(esi_2 + 0x10))) << 4), 
            zx.d(*(esi_2 + 0x14))) * ebx_2), 
        ecx_3 * 0xe0 - 0xe0)).w + (data_d7e620).w
    int32_t edx_21 = *(edi_3 + 0x44)
    int16_t eax_45 = (divs.dp.d(
        sx.q(divs.dp.d(sx.q(((zx.d(*(esi_2 + 0xa)) + ebx_3) * zx.d(*(esi_2 + 0x12))) << 4), 
            zx.d(*(esi_2 + 0x16))) * edx_7), 
        eax_4 * 0xe0 - 0xe0)).w + (data_d7e624).w
    *(edi_3 + 0x40) &= 0xffffc000
    *(edi_3 + 0x40) &= 0xc000ffff
    *(edi_3 + 0x44) = edx_21
    int32_t ebp_5 = *(edi_3 + 0x4c)
    edi_3[0x24] = eax_16
    edi_3[0x25] = eax_25
    int32_t eax_50 = *(edi_3 + 0x48)
    *(edi_3 + 0x4c) = (data_c7bbd8 & 0xffffff) | (ebp_5 & 0xff000000)
    *(edi_3 + 0x4c) |= 0xff000000
    *(edi_3 + 0x48) = eax_50
    int32_t eax_53
    int32_t edx_27
    edx_27:eax_53 = sx.q(edx_14 << 4 & 0x3fff)
    int32_t ebp_8 = *(edi_3 + 0x54) | edx_27
    *(edi_3 + 0x50) = (*(edi_3 + 0x50) & 0xffffc000) | eax_53
    *(edi_3 + 0x50) &= 0xc000ffff
    *(edi_3 + 0x54) = ebp_8
    int32_t ebp_9 = *(edi_3 + 0x5c)
    edi_3[0x2d] = eax_25
    edi_3[0x2c] = eax_35
    int32_t eax_56 = *(edi_3 + 0x58)
    *(edi_3 + 0x5c) = (data_c7bbd8 & 0xffffff) | (ebp_9 & 0xff000000)
    *(edi_3 + 0x5c) |= 0xff000000
    *(edi_3 + 0x58) = eax_56
    int32_t eax_57 = *(edi_3 + 0x64)
    *(edi_3 + 0x60) &= 0xffffc000
    int32_t ebx_10 = *(edi_3 + 0x60)
    *(edi_3 + 0x64) = eax_57
    int32_t eax_60
    int32_t edx_33
    edx_33:eax_60 = sx.q(ebx_3 << 4 & 0x3fff)
    int32_t edx_34 = edx_33 << 0x10 | eax_60 u>> 0xfffffff0
    int32_t eax_61 = eax_60 << 0x10
    *(edi_3 + 0x64) |= edx_34
    *(edi_3 + 0x60) = (ebx_10 & 0xc000ffff) | eax_61
    int32_t ebp_13 = *(edi_3 + 0x6c)
    edi_3[0x35] = eax_45
    edi_3[0x34] = eax_16
    int32_t eax_63 = *(edi_3 + 0x68)
    *(edi_3 + 0x6c) = (data_c7bbd8 & 0xffffff) | (ebp_13 & 0xff000000)
    *(edi_3 + 0x6c) |= 0xff000000
    *(edi_3 + 0x68) = eax_63
    int32_t eax_66 = (*(edi_3 + 0x70) & 0xffffc000) | eax_53
    *(edi_3 + 0x74) = *(edi_3 + 0x74) | edx_27 | edx_34
    *(edi_3 + 0x70) = (eax_66 & 0xc000ffff) | eax_61
    int32_t ebp_15 = *(edi_3 + 0x7c)
    edi_3[0x3c] = eax_35
    edi_3[0x3d] = eax_45
    int32_t edx_44 = *(edi_3 + 0x78)
    *(edi_3 + 0x7c) = (data_c7bbd8 & 0xffffff) | (ebp_15 & 0xff000000)
    *(edi_3 + 0x7c) |= 0xff000000
    *(edi_3 + 0x78) = edx_44
    int32_t eax_74
    int16_t x87control
    eax_74, x87control = sub_43f900(x87control, edi_3, 1)
    int32_t eax_76
    int32_t edx_45
    edx_45:eax_76 = sx.q(zx.d(arg5[3]))
    int32_t ecx_15 = eax_76 | 0x80000000
    int32_t eax_78
    int32_t edx_47
    edx_47:eax_78 = sx.q(zx.d(arg5[2]))
    int32_t ecx_17 = ecx_15 << 8 | eax_78
    int32_t eax_81
    int32_t edx_48
    edx_48:eax_81 = sx.q(zx.d(arg5[1]))
    int32_t ecx_19 = ecx_17 << 8 | eax_81
    int32_t eax_83
    int32_t edx_50
    edx_50:eax_83 = sx.q(zx.d(*arg5))
    *(edi_3 + 0x24) = (((edx_45 | 0x3f) << 8 | ecx_15 u>> 0xffffffe8 | edx_47) << 8
        | ecx_17 u>> 0xffffffe8 | edx_48) << 8 | ecx_19 u>> 0xffffffe8 | edx_50
    *(edi_3 + 0x28) = 1
    *(edi_3 + 0x2c) = 0
    *(edi_3 + 0x20) = ecx_19 << 8 | eax_83
    sub_448880(data_c7bbc8, arg6, edi_3)
    int32_t* eax_85 = data_c7bbcc
    *eax_85 += eax_74 << 4
    sub_440070(*(esi_2 + (zx.d(*esi_2) << 2) - 4) + arg1 + 8, arg2, arg3, arg6, *(esi_2 + 0xc), 
        *(esi_2 + 0xe))
    int16_t var_14 = arg2
    int16_t var_12_1 = 8
    int16_t var_10_1 = 0
    int16_t var_e_1 = 0
    int16_t var_c_1 = 0
    int16_t var_a_1 = *(esi_2 + 0xc)
    int16_t var_8_1 = *(esi_2 + 0xe)
    int16_t var_6_1 = arg3
    int16_t var_4_1 = 0
    int16_t* edi_5 = *data_c7bbcc
    sub_449010(edi_5, 0)
    int32_t var_98_1 = data_c7bbf0
    int32_t var_9c_1 = 0
    sub_447b50(edi_5, &var_14)
    sub_448880(data_c7bbc8, arg6, edi_5)
    int32_t* eax_88 = data_c7bbcc
    *eax_88 += 0x50
    esi_2 += zx.d(*esi_2) << 2
    cond:1_1 = var_3c_1 + 1 s< zx.d(*arg4)
    var_3c_1 += 1
while (cond:1_1)
