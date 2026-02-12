// 函数: sub_40b010
// 地址: 0x40b010
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* esi = *(arg2[0x11] + 8)
uint32_t edi = zx.d(sub_414cf0(zx.d(*(esi + 2))))
uint32_t ebx = zx.d(sub_414cf0(zx.d(*(esi + 4))))
sub_414e90(*(esi + 2))
sub_414e90(*(esi + 4))
int16_t var_14_1
int16_t eax_6

switch (zx.d(*(esi + 1)))
    case 0
        sub_414db0(*(esi + 2), ebx.w)
    case 1, 0xd
        sub_414db0(*(esi + 2), ebx.w + edi.w)
    case 2
        eax_6 = edi.w - ebx.w
    label_40b2a2:
        sub_414db0(*(esi + 2), eax_6)
    case 3
        sub_414db0(*(esi + 2), ebx.w * edi.w)
    case 4
        sub_414db0(*(esi + 2), (divs.dp.d(sx.q(edi.w), sx.d(ebx.w))).w)
    case 5
        sub_414db0(*(esi + 2), (mods.dp.d(sx.q(edi.w), sx.d(ebx.w))).w)
    case 6
        sub_414db0(*(esi + 2), ebx.w & edi.w)
    case 7
        sub_414db0(*(esi + 2), ebx.w | edi.w)
    case 8
        sub_414db0(*(esi + 2), zx.w(*(*(arg2[0x11] + 0xc) + zx.d(ebx.w))))
    case 9
        char* eax_19 = zx.d(ebx.w) + *(arg2[0x11] + 0xc)
        int16_t edx_1 = zx.w(eax_19[1])
        eax_19.w = zx.w(*eax_19)
        sub_414db0(*(esi + 2), (edx_1 << 8) + eax_19.w)
    case 0xa
        *(zx.d(edi.w) + *(arg2[0x11] + 0xc)) = ebx.b
    case 0xb
        char* eax_22 = zx.d(edi.w) + *(arg2[0x11] + 0xc)
        *eax_22 = ebx.b
        eax_22[1] = (ebx s>> 8).b
    case 0xc
        sub_414db0(*(esi + 2), *(esi + 4))
    case 0xe
        void* eax_24 = arg2[0x11]
        *(eax_24 + 8) = zx.d(edi.w) + *(eax_24 + 0xc)
        sub_40a8a0(arg2)
        return 0
    case 0xf
        void* eax_26 = arg2[0x11]
        int32_t ecx_18 = *(eax_26 + 0xc)
        char* edx_18 = zx.d(*(esi + 2)) + ecx_18 + (sx.d(ebx.w) << 1)
        int32_t esi_2
        esi_2.w = zx.w(edx_18[1])
        edx_18.w = zx.w(*edx_18)
        esi_2.w <<= 8
        esi_2.w += edx_18.w
        *(eax_26 + 8) = zx.d(esi_2.w) + ecx_18
        sub_40a8a0(arg2)
        return 0
    case 0x10
        var_14_1 = (mods.dp.d(sx.q(sub_448760()), sx.d(ebx.w))).w
        sub_414db0(*(esi + 2), var_14_1)
    case 0x11
        if (sx.d(ebx.w) + sx.d(edi.w) s<= 0xff)
            eax_6 = edi.w + ebx.w
        else
            eax_6 = 0xff
        
        goto label_40b2a2
    case 0x12
        int16_t var_18_1
        
        if (sx.d(edi.w) - sx.d(ebx.w) s>= 0)
            var_14_1 = edi.w - ebx.w
            var_18_1 = *(esi + 2)
        else
            var_14_1 = 0
            var_18_1 = *(esi + 2)
        
        sub_414db0(var_18_1, var_14_1)
    case 0x13
        if (ebx.w != 0)
            edi += 1
        
        eax_6 = edi.w
        goto label_40b2a2
    case 0x14
        uint32_t eax_34 = zx.d(*(esi + 2))
        
        if ((eax_34 & 0xf000) == 0x2000)
            sub_4152c0(zx.d(eax_34.w), arg1)
    case 0x15
        *(data_e7e648 + 0x2856) = *(esi + 2)
        sub_4166e0(zx.d(*(data_e7e648 + 0x2856)), 1)
    case 0x16
        sub_4167c0(zx.d(*(esi + 2)), arg1)
    case 0x17
        sub_4161d0(zx.d(*(esi + 2)), arg1)
    case 0x18
        eax_6 = sub_414f10()
        goto label_40b2a2

void* eax_38 = arg2[0x11]
*(eax_38 + 8) += 6
sub_40a8a0(arg2)
return 0
