// 函数: sub_40b520
// 地址: 0x40b520
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t eax = sx.d(arg1[4].w)

if (eax == 0)
    sub_419310(arg1[0x11] + 0x3c, *((zx.d(data_2b5cf0d) << 2) + &data_4b16fc))
    arg1[4].w = 1
label_40b57b:
    int32_t edi_1 = 0
    
    if ((data_2b53608 & 0x2100) != 0)
        edi_1 = 1
    
    void* eax_7 = data_e7e648
    
    if (*(eax_7 + 0x289c) == 1)
        edi_1 = 1
    
    if (*(eax_7 + 0x289b) != 0)
        if (sub_419330(arg1[0x11] + 0x3c, 2) == 1 || edi_1 == 1)
            arg1[4].w = 2
    else if (edi_1 == 1)
        arg1[4].w = 2
    
    int32_t* edx_3 = data_2b603ac
    int32_t var_14_2 = 9
    int32_t var_8 = 0x220
    int32_t var_4_1 = 0x180
    sub_43a840(edx_3, &var_8)
else
    if (eax == 1)
        goto label_40b57b
    
    if (eax == 2)
        void* eax_4 = arg1[0x11]
        *(eax_4 + 8) += 4
        sub_40a8a0(arg1)
        return 0

*(arg1 + 0xe) = 0
*(arg1 + 0xd) = 0
return 0
