// 函数: sub_409730
// 地址: 0x409730
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t* ebp = *(arg1 + 0x44)
void* esi = ebp[5]
void* var_20
void* eax_13

switch (sx.d(*(arg1 + 0x10)))
    case 0
        *(arg1 + 0xc) = 0xff
        
        if (*ebp != 0)
            sub_408ef0()
            *(arg1 + 0x10) = 2
        else
            int32_t eax_1 = ebp[5]
            ebp[3] = sub_405c80(4, ebp[1], eax_1, eax_1 + 0xf0000)
            *(arg1 + 0x10) = 1
            sub_448310(ebp[1])
        label_40978b:
            
            if (sub_405bd0(ebp[3]) == 1)
                sub_408ef0()
                *(arg1 + 0x10) = 2
    case 1
        goto label_40978b
    case 2
        int32_t eax_6 = data_8969e0
        var_20 = ((*(esi + 4) + 1) << 4) + esi
        int32_t var_1c_1 = eax_6
        int32_t var_18_1 = 0xe000
        int32_t var_14_1 = 0
        int32_t var_34_3 = 0
        void* var_10_1 = ((*(esi + 8) + 1) << 4) + esi
        int32_t var_c_1 = data_8969dc
        int32_t var_8_1 = 0x2000
        int32_t var_4_1 = 0
        sub_448170(&var_20, 2)
        ebp[4] = 1
        *(arg1 + 0x10) = 3
        goto label_40981b
    case 3
    label_40981b:
        int32_t var_34_4 = ebp[4]
        eax_13 = ((*(esi + 0xc) + 1) << 4) + esi
        data_896934 = data_8969d0
        data_89693c = 0x86000
        data_896938 = 0x1000
        data_8969cc = eax_13
        data_8969c8 = 0x110000
        *(arg1 + 0x10) = 4
        goto label_4098a4
    case 4
        eax_13 = data_8969cc
    label_4098a4:
        int32_t edx_8 = data_8969d0
        int32_t var_34_6 = 0
        var_20 = eax_13
        int32_t var_1c_2 = edx_8
        int32_t var_18_2 = 0x1000
        int32_t var_14_2 = 0
        sub_448170(&var_20, 1)
        ebp[4] = 1
        *(arg1 + 0x10) = 5
    label_4098e7:
        int32_t var_34_7 = ebp[4]
        int32_t var_34_8 = 0
        
        if (sub_4072c0(0x90e0, &data_896930) s< 0)
            int32_t i
            
            do
                data_8969a4 += 1
                int32_t j
                
                do
                    j = sub_4072c0(0x80f0, &data_896930)
                while (j != 1)
                i = sub_4072c0(0x90e0, &data_896930)
            while (i s< 0)
        
        *(arg1 + 0x10) = 6
        goto label_40996c
    case 5
        goto label_4098e7
    case 6
    label_40996c:
        int32_t* var_34_5
        
        if (sub_4072c0(0x80f0, &data_896930) != 1)
            var_34_5 = data_4ca040
        label_40982f:
            
            if (sub_448340(var_34_5) u<= 0xdc)
                *(arg1 + 0xd) = 1
                return 0
            
            *(arg1 + 0xe) = 0
            *(arg1 + 0xd) = 0
            return 0
        
        int32_t eax_17 = data_8969c8
        data_89693c += 0x1000
        data_8969cc += 0x1000
        data_8969c8 = eax_17 - 0x1000
        
        if (eax_17 - 0x1000 s<= 0)
            *(arg1 + 0x10) = 7
            goto label_4099c3
        
        *(arg1 + 0x10) = 4
        var_34_5 = data_4ca040
        goto label_40982f
    case 7
    label_4099c3:
        int32_t eax_19 = data_8969d0
        int32_t var_34_9 = 0
        data_896930 = data_8969dc
        data_896934 = eax_19
        data_89693c = 0x86000
        data_896938 = 0x110000
        sub_4072c0(0x90b1, &data_896930)
        sub_4072c0(0xc1, 0x3010)
        sub_4072c0(0xd1, 0x100)
        sub_4072c0(0x80a0, data_8969e0)
        
        if (*ebp == 0)
            int32_t var_34_10 = 1
            sub_4095f0()
        
        ebp[1] = 0xffffffff
        return 1

return 0
