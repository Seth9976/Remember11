// 函数: sub_40e6f0
// 地址: 0x40e6f0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* ebp = *(arg1[0x11] + 8)

switch (sx.d(arg1[4].w))
    case 0
        if (sub_41c6c0() == 1)
            sub_41c690(3)
        
        arg1[4].w = 1
        goto label_40e726
    case 1
    label_40e726:
        
        if (sub_41b650() == 0)
            sub_418bc0()
            arg1[4].w = 2
    case 2
        sub_420540()
        sub_40a3f0()
        sub_40f960()
        sub_41db10(0xffffffff)
        char* eax_5 = *(((zx.d(*(ebp + 1)) & 0xfff) << 5) + &data_4af374)
        
        if (eax_5 != 0)
            sub_4152c0(eax_5, 1)
        
        eax_5.w = *(data_e7e648 + 0x1f5dc)
        data_a59af0 = eax_5.w
        
        for (int32_t i = 0; i s< 0x12; i += 1)
            sub_416b50(i)
        
        sub_4010a0(data_e7e648 + 0x210450)
        sub_4010b0(zx.d(*(ebp + 1)))
        arg1[4].w = 3
        *(arg1 + 0xe) = 0
        *(arg1 + 0xd) = 0
        return 0
    case 3
        int32_t __saved_esi_1 = 0
        int32_t eax_7 = sub_44c8d0()
        
        if (eax_7 == 3 || eax_7 == 4)
            int32_t __saved_esi_2 = 0
            sub_44c890()
            sub_414960(0, data_a59af0)
            sub_418740(0, zx.d(data_a59af0), *(data_e7e648 + 0xbf0c0))
            sub_416860(0, 1)
            sub_4168c0(0, 0, 0)
            void* eax_10 = arg1[0x11]
            *(eax_10 + 8) += 2
            sub_40a8a0(arg1)
            return 0

*(arg1 + 0xe) = 0
*(arg1 + 0xd) = 0
return 0
