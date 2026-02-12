// 函数: sub_40ec30
// 地址: 0x40ec30
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* esi = *(arg1[0x11] + 8)
int32_t eax_1 = sx.d(arg1[4].w)

if (eax_1 != 0)
    if (eax_1 == 1)
        goto label_40ed4e
    
label_40ec4e:
    *(arg1 + 0xe) = 0
    *(arg1 + 0xd) = 0
    return 0

int32_t eax_2
eax_2.b = *(esi + 1)
uint16_t ecx
ecx.b = eax_2.b
ecx.b &= 0x70

if (ecx.b == 0x20)
    arg1[4].w = 1
label_40ed4e:
    
    if (sub_4024a0(data_e7e648 + 0xb4180) != 1)
        void* eax_15 = data_e7e648
        
        if (*(eax_15 + 0x289c) != 1)
            goto label_40ec4e
        
        if ((*(esi + 1) & 0x80) != 0)
            ecx.b = *(eax_15 + 0xb417e)
            ecx.b &= 0x70
            
            if (ecx.b == 0x70)
                sub_4023e0(eax_15 + 0xb4180, 0x21, 1)
            else
                sub_4023e0(eax_15 + 0xb4180, 0x13, 1)
        else
            sub_4023e0(eax_15 + 0xb4180, 0, 1)
else
    eax_2.b &= 0xf
    
    if (eax_2.b != 2)
        eax_2.w = zx.w(*(esi + 1)) & 0xf
        *(data_e7e648 + 0xb417c) = eax_2.w
        sub_402420(data_e7e648 + 0xb4180, zx.d(*(esi + 1)) & 0xf)
    
    *(data_e7e648 + 0xb417e) = zx.w(*(esi + 1))
    int32_t eax_8 = sub_414cf0(zx.d(*(esi + 2)))
    
    if (eax_8 s<= 0)
        eax_8 = 1
    
    uint32_t ecx_2 = zx.d(*(esi + 1))
    char* var_14_1
    char var_10_2
    
    if (ecx_2.b s< 0)
        var_10_2 = (*(((ecx_2 u>> 4 & 7) << 3) + &data_4b093c)).b
        var_14_1 = data_e7e648 + 0xb4180
    else
        var_10_2 = (*(((ecx_2 u>> 4 & 7) << 3) + &data_4b0938)).b
        var_14_1 = data_e7e648 + 0xb4180
    
    sub_4023e0(var_14_1, var_10_2, eax_8)
    
    if ((*(esi + 1) & 0x70) == 0x70)
        sub_409b20()

void* eax_10 = arg1[0x11]
*(eax_10 + 8) += 4
sub_40a8a0(arg1)
return 0
