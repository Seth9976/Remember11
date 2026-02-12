// 函数: sub_40f690
// 地址: 0x40f690
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* edi = *(arg1[0x11] + 8)

switch (sx.d(arg1[4].w))
    case 0
        int32_t eax_1
        eax_1.b = *(edi + 1)
        
        if (zx.d(eax_1.b) == data_2b55e70 || eax_1.b == 2)
            goto label_40f8ae
        
        sub_4050d0(3, 0xa)
        arg1[4].w = 1
        *(arg1 + 0xe) = 0
        *(arg1 + 0xd) = 0
        return 0
    case 1
        if (sub_405130() == 1 || *(data_e7e648 + 0x289c) == 1)
            sub_4050d0(1, 0x80)
            arg1[4].w = 2
            *(arg1 + 0xe) = 0
            *(arg1 + 0xd) = 0
            return 0
    case 2
        if (sub_405130() == 1)
            sub_414960(0, *(edi + 2))
            sub_416b50(0)
            sub_418740(0, zx.d(*(edi + 2)), *(data_e7e648 + 0xbf0c0))
            sub_416860(0, 1)
            sub_4168c0(0, 0, 0)
            sub_4050d0(2, 0xa)
            sub_419310(arg1[0x11] + 0x3c, 0xf0)
            arg1[4].w = 3
    case 3
        if (sub_405130() == 1 || *(data_e7e648 + 0x289c) == 1)
            sub_4050d0(0, 0)
            arg1[4].w = 4
            *(arg1 + 0xe) = 0
            *(arg1 + 0xd) = 0
            return 0
    case 4
        if (sub_405130() == 1)
            *(arg1 + 0xe) = 0
            *(arg1 + 0xd) = 0
            int32_t var_c_2 = *(data_e7e648 + 0xbf0c0)
            uint32_t var_10 = zx.d(*(edi + 1))
            *(data_e7e648 + 0x2894) = 0
            arg1[4].w = 5
            *(arg1 + 0xe) = 0
            *(arg1 + 0xd) = 0
            return 0
    case 5
        int32_t eax_15 = sub_446f90(*(data_e7e648 + 0x2894))
        
        if (eax_15 s> 0)
            if (eax_15 s<= 2)
                sub_4050d0(3, 0xa)
                arg1[4].w = 6
                *(arg1 + 0xe) = 0
                *(arg1 + 0xd) = 0
                return 0
            
            if (eax_15 == 3)
                arg1[4].w = 3
    case 6
        if (sub_405130() == 1 || *(data_e7e648 + 0x289c) == 1)
            sub_4050d0(1, 0x80)
        label_40f8ae:
            arg1[4].w = 7
            *(arg1 + 0xe) = 0
            *(arg1 + 0xd) = 0
            return 0
    case 7
        if (sub_405130() == 1 || *(data_e7e648 + 0x289c) == 1)
            sub_414960(0, 0)
            sub_416b50(0)
            sub_418740(0, 0, *(data_e7e648 + 0xbf0c0))
            sub_416860(0, 1)
            sub_4050d0(0, 0)
            *(data_e7e648 + 0x2858) = *(edi + 1)
            void* eax_22 = arg1[0x11]
            *(eax_22 + 8) += 4
            sub_40a8a0(arg1)
            return 0

*(arg1 + 0xe) = 0
*(arg1 + 0xd) = 0
return 0
