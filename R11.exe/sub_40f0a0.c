// 函数: sub_40f0a0
// 地址: 0x40f0a0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* eax = arg1[0x11]
void* edi = *(eax + 8)

switch (sx.d(arg1[4].w))
    case 0
        if (sub_41c6c0() == 1)
            sub_41c690(3)
        
        arg1[4].w = 1
        *(arg1 + 0xe) = 0
        *(arg1 + 0xd) = 0
        return 0
    case 1
        if (sub_41b650() == 0)
            sub_4023e0(data_e7e648 + 0x3048, 3, 0x14)
            arg1[4].w = 2
            *(arg1 + 0xe) = 0
            *(arg1 + 0xd) = 0
            return 0
    case 2
        bool cond:1_1 = sub_4024a0(data_e7e648 + 0x3048) == 1
        void* eax_8 = data_e7e648
        
        if (cond:1_1 || *(eax_8 + 0x289c) == 1)
            sub_4023e0(eax_8 + 0x3048, 1, 1)
            arg1[4].w = 3
            *(arg1 + 0xe) = 0
            *(arg1 + 0xd) = 0
            return 0
    case 3
        if (sub_4024a0(data_e7e648 + 0x3048) == 1)
            void* eax_12 = data_e7e648
            int32_t ecx
            ecx.w = *(eax_12 + 0x1f5dc)
            *(eax_12 + 0x28b4) = ecx.w
            
            for (int32_t i = 0; i s< 0x12; i += 1)
                sub_416b50(i)
            
            sub_418260(1)
            sub_414960(0, *(edi + 2))
            sub_416b50(0)
            sub_418740(0, zx.d(*(edi + 2)), *(data_e7e648 + 0xbf0c0))
            sub_416860(0, 1)
            sub_4168c0(0, 0, 0)
            sub_418260(0)
            sub_40a220()
            sub_40a260()
            sub_4023e0(data_e7e648 + 0x3048, 2, 0x14)
            sub_419310(arg1[0x11] + 0x3c, 0xf0)
            arg1[4].w = 4
            *(arg1 + 0xe) = 0
            *(arg1 + 0xd) = 0
            return 0
    case 4
        bool cond:2_1 = sub_4024a0(data_e7e648 + 0x3048) == 1
        void* eax_18 = data_e7e648
        
        if (cond:2_1 || *(eax_18 + 0x289c) == 1)
            sub_4023e0(eax_18 + 0x3048, 0, 1)
            arg1[4].w = 5
        
        sub_40a260()
    case 5
        if (sub_4024a0(data_e7e648 + 0x3048) == 1)
            arg1[4].w = 6
        
        sub_40a260()
    case 6
        bool cond:3_1 = sub_419330(eax + 0x3c, 0) == 1
        void* eax_26 = data_e7e648
        
        if (cond:3_1 || *(eax_26 + 0x289c) == 1)
            sub_4023e0(eax_26 + 0x3048, 3, 0x14)
            arg1[4].w = 7
        
        sub_40a260()
    case 7
        bool cond:4_1 = sub_4024a0(data_e7e648 + 0x3048) == 1
        void* eax_29 = data_e7e648
        
        if (cond:4_1 || *(eax_29 + 0x289c) == 1)
            int32_t var_10_15 = 1
            int32_t var_14_8 = 1
            void var_7c
            __builtin_memcpy(&var_7c, eax_29 + 0x3048, 0x68)
            sub_4023e0()
            arg1[4].w = 8
        
        sub_40a260()
    case 8
        if (sub_4024a0(data_e7e648 + 0x3048) == 1)
            sub_416b50(0)
            sub_418260(1)
            sub_414960(0, *(data_e7e648 + 0x28b4))
            void* eax_32 = data_e7e648
            sub_418740(0, zx.d(*(eax_32 + 0x28b4)), *(eax_32 + 0xbf0c0))
            sub_416860(0, 1)
            sub_418260(0)
            sub_4023e0(data_e7e648 + 0x3048, 0, 1)
            void* eax_34 = arg1[0x11]
            *(eax_34 + 8) += 4
            sub_40a8a0(arg1)
            return 0

*(arg1 + 0xe) = 0
*(arg1 + 0xd) = 0
return 0
