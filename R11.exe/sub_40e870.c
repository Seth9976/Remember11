// 函数: sub_40e870
// 地址: 0x40e870
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* edx_21 = data_e7e648
void* esi = *(arg1[0x11] + 8)
uint32_t eax_1 = zx.d(*(esi + 1))
void* edi = eax_1 * 0x50 + edx_21 + 0x20838
int32_t ecx_2 = sx.d(arg1[4].w)

if (ecx_2 == 0)
    eax_1.b = *(esi + 2)
    
    if (zx.d(eax_1.b) - 0xfc u> 3)
        *(edi + 0x28) = eax_1.b
        *(edi + 0x29) = *(esi + 3)
        *(edi + 0x2a) = *(esi + 4)
        *(edi + 0x2c) = *(esi + 6)
        *(edi + 0x2e) = *(esi + 8)
        *(edi + 0x30) = *(esi + 0xa)
        *(edi + 0x32) = *(esi + 0xc)
        *(edi + 0x34) = *(esi + 0xe)
        *(edi + 0x36) = *(esi + 0x10)
        *(edi + 0x38) = *(esi + 0x12)
        *(edi + 0x3a) = *(esi + 0x14)
        *(edi + 0x3c) = *(esi + 0x16)
        *(edi + 0x3e) = *(esi + 0x18)
        *(edi + 0x40) = *(esi + 0x1a)
        *(edi + 0x42) = *(esi + 0x1c)
        *(edi + 0x44) = *(esi + 0x1e)
        *(edi + 0x46) = *(esi + 0x20)
        *(edi + 0x48) = *(esi + 0x22)
        *(edi + 0x4a) = *(esi + 0x24)
        sub_40fcf0(zx.d(*(esi + 1)))
        sub_40fd40(zx.d(*(esi + 1)))
        char eax_32 = *(edi + 0x28)
        
        if (eax_32 != 0x14 && eax_32 != 0x18)
        label_40e923:
            void* eax_8 = arg1[0x11]
            *(eax_8 + 8) += 0x26
            sub_40a8a0(arg1)
            return 0
        
        for (int32_t i = 0; i s< 6; i += 1)
            if (sub_416cc0(i) != 0xffff)
                sub_4184d0(i + 0xc, i)
                sub_416860(i + 0xc, 0)
                sub_416820(i)
        
        *(data_e7e648 + 0x3044) = 1
        sub_40fd40(zx.d(*(esi + 1)))
        sub_409b20()
        sub_4023e0(data_e7e648 + 0x3048, 0x16, zx.d(*(esi + 4)))
        arg1[4].w = 2
    else
        int32_t ecx_7
        
        switch (eax_1.b)
            case 0xfc
                eax_1.b = *(edi + 0x28)
                
                if (eax_1.b != 0x14 && eax_1.b != 0x18)
                    eax_1.w = *(esi + 4)
                    *(edi + 0x2a) = eax_1.w
                    ecx_7.b = *(esi + 3)
                    *(edi + 0x29) = ecx_7.b
                    sub_40fdb0(zx.d(*(esi + 1)))
                label_40e97f:
                    arg1[4].w = 1
                    *(arg1 + 0xe) = 0
                    *(arg1 + 0xd) = 0
                    return 0
                
                for (int32_t i_1 = 0; i_1 s< 6; i_1 += 1)
                    if (sub_416cc0(i_1 + 0xc) != 0xffff)
                        sub_416b50(i_1)
                        sub_416bf0(i_1, i_1 + 0xc)
                        sub_416860(i_1, 1)
                        sub_416b50(i_1 + 0xc)
                
                *(edi + 0x28) = 0
                sub_40fd40(zx.d(*(esi + 1)))
                sub_409b20()
                sub_4023e0(data_e7e648 + 0x3048, 0x16, zx.d(*(esi + 4)))
                *(data_e7e648 + 0x3044) = 0
            case 0xfd
                goto label_40e97f
            case 0xfe
                ecx_7.b = *(esi + 3)
                *(edi + 0x29) = ecx_7.b
                *(edi + 0x2a) = *(esi + 4)
                *(edi + 0x2c) = *(esi + 6)
                *(edi + 0x2e) = *(esi + 8)
                *(edi + 0x30) = *(esi + 0xa)
                *(edi + 0x32) = *(esi + 0xc)
                *(edi + 0x34) = *(esi + 0xe)
                *(edi + 0x36) = *(esi + 0x10)
                *(edi + 0x38) = *(esi + 0x12)
                *(edi + 0x3a) = *(esi + 0x14)
                *(edi + 0x3c) = *(esi + 0x16)
                *(edi + 0x3e) = *(esi + 0x18)
                *(edi + 0x40) = *(esi + 0x1a)
                *(edi + 0x42) = *(esi + 0x1c)
                *(edi + 0x44) = *(esi + 0x1e)
                *(edi + 0x46) = *(esi + 0x20)
                *(edi + 0x48) = *(esi + 0x22)
                *(edi + 0x4a) = *(esi + 0x24)
                sub_40fcf0(zx.d(*(esi + 1)))
            label_40eaac:
                void* eax_23 = arg1[0x11]
                *(eax_23 + 8) += 0x26
                sub_40a8a0(arg1)
                return 0
            case 0xff
                *(edi + 0x28) = 0
                sub_40fd40(zx.d(*(esi + 1)))
                goto label_40eaac
        
        arg1[4].w = 2
else if (ecx_2 == 1)
    int32_t eax_7 = sub_40fd90(eax_1)
    
    if (eax_7 == 0)
        if (*(esi + 2) == 0xfc)
            *(edi + 0x28) = eax_7.b
            sub_40fd40(zx.d(*(esi + 1)))
        
        goto label_40e923
else if (ecx_2 == 2)
    bool cond:0_1 = sub_4024a0(edx_21 + 0x3048) == 1
    void* eax_3 = data_e7e648
    
    if (cond:0_1 || *(eax_3 + 0x289c) == 1)
        sub_4023e0(eax_3 + 0x3048, 0, 1)
        void* eax_5 = arg1[0x11]
        *(eax_5 + 8) += 0x26
        sub_40a8a0(arg1)
        return 0

*(arg1 + 0xe) = 0
*(arg1 + 0xd) = 0
return 0
