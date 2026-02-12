// 函数: sub_417130
// 地址: 0x417130
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

for (int32_t i = 0; i s< 0x1248; i += 0x104)
    void* edx_1 = data_e7e648
    uint32_t eax
    
    if (*(i + edx_1 + 0x1f5dc) != 0xffff)
        switch (zx.d(*(i + edx_1 + 0x1f5e2)))
            case 0
                *(i + edx_1 + 0x1f5ed) = 0
            case 1
                *(i + edx_1 + 0x1f5ed) = 0x80
            case 2
                if (*(edx_1 + 0x289c) != 0)
                label_4172fd:
                    *(i + edx_1 + 0x1f5ed) = 0x80
                    *(i + edx_1 + 0x1f5e2) = 1
                    *(i + edx_1 + 0x1f5ec) = 0
                else
                    uint32_t esi_1 = zx.d(*(i + edx_1 + 0x1f5e8))
                    eax = *(i + edx_1 + 0x1f5e4)
                    
                    if (eax s>= esi_1)
                        goto label_4172fd
                    
                    *(i + edx_1 + 0x1f5e4) = eax + 1
                    *(i + edx_1 + 0x1f5ec) = 2
                    *(i + edx_1 + 0x1f5ed) = divs.dp.d(sx.q((eax + 1) << 7), esi_1).b
            case 3
                if (*(edx_1 + 0x289c) != 0)
                label_4171c8:
                    *(i + edx_1 + 0x1f5e2) = 0
                    *(i + edx_1 + 0x1f5ed) = 0
                    *(i + edx_1 + 0x1f5ec) = 0
                else
                    uint32_t esi_2 = zx.d(*(i + edx_1 + 0x1f5e8))
                    eax = *(i + edx_1 + 0x1f5e4)
                    
                    if (eax s>= esi_2)
                        goto label_4171c8
                    
                    *(i + edx_1 + 0x1f5e4) = eax + 1
                    *(i + edx_1 + 0x1f5ec) = 2
                    *(i + edx_1 + 0x1f5ed) = 0x80 - divs.dp.d(sx.q((eax + 1) << 7), esi_2).b
            case 4
                if (*(edx_1 + 0x289c) != 0)
                    goto label_4172fd
                
                uint32_t esi_3 = zx.d(*(i + edx_1 + 0x1f5e8))
                eax = *(i + edx_1 + 0x1f5e4)
                
                if (eax s>= esi_3)
                    goto label_4172fd
                
                *(i + edx_1 + 0x1f5e4) = eax + 1
                int32_t temp0_3 = divs.dp.d(sx.q((eax + 1) << 7), esi_3)
                *(i + edx_1 + 0x1f5ec) = 2
                *(i + edx_1 + 0x1f5ed) = temp0_3.b
                
                if (temp0_3.b u>= 0x40)
                    *(i + edx_1 + 0x1f5ed) = 0x80
                else
                    int32_t eax_12
                    int32_t edx_8
                    edx_8:eax_12 = sx.q(zx.d(temp0_3.b) << 7)
                    *(i + edx_1 + 0x1f5ed) = ((eax_12 + (edx_8 & 0x3f)) s>> 6).b
            case 5
                if (*(edx_1 + 0x289c) != 0)
                    goto label_4171c8
                
                uint32_t esi_4 = zx.d(*(i + edx_1 + 0x1f5e8))
                eax = *(i + edx_1 + 0x1f5e4)
                
                if (eax s< esi_4)
                    *(i + edx_1 + 0x1f5e4) = eax + 1
                    int32_t eax_16
                    int32_t edx_10
                    edx_10:eax_16 = sx.q((eax + 1) << 7)
                    *(i + edx_1 + 0x1f5ec) = 2
                    *(i + edx_1 + 0x1f5ed) = 0x80 - divs.dp.d(edx_10:eax_16, esi_4).b
                    
                    if (0x80 - divs.dp.d(edx_10:eax_16, esi_4).b u< 0x40)
                        *(i + edx_1 + 0x1f5ed) = 0x80
                    else
                        int32_t eax_19
                        int32_t edx_13
                        edx_13:eax_19 =
                            sx.q((0x40 - zx.d(0x80 - divs.dp.d(edx_10:eax_16, esi_4).b)) << 7)
                        eax.b = ((eax_19 + (edx_13 & 0x3f)) s>> 6).b - 0x80
                        *(i + edx_1 + 0x1f5ed) = eax.b
                else
                    *(i + edx_1 + 0x1f5e2) = 0
                    *(i + edx_1 + 0x1f5ed) = 0
                    *(i + edx_1 + 0x1f5ec) = 0
            case 6
                if (*(edx_1 + 0x289c) != 0)
                    goto label_4172fd
                
                uint32_t esi_5 = zx.d(*(i + edx_1 + 0x1f5e8))
                eax = *(i + edx_1 + 0x1f5e4)
                
                if (eax s>= esi_5)
                    goto label_4172fd
                
                *(i + edx_1 + 0x1f5e4) = eax + 1
                *(i + edx_1 + 0x1f5ec) = 4
                *(i + edx_1 + 0x1f5ed) = divs.dp.d(sx.q((eax + 1) << 7), esi_5).b
            case 7
                if (*(edx_1 + 0x289c) != 0)
                    goto label_4171c8
                
                uint32_t esi_6 = zx.d(*(i + edx_1 + 0x1f5e8))
                eax = *(i + edx_1 + 0x1f5e4)
                
                if (eax s< esi_6)
                    *(i + edx_1 + 0x1f5e4) = eax + 1
                    *(i + edx_1 + 0x1f5ec) = 5
                    *(i + edx_1 + 0x1f5ed) = 0x80 - divs.dp.d(sx.q((eax + 1) << 7), esi_6).b
                else
                    *(i + edx_1 + 0x1f5e2) = 0
                    *(i + edx_1 + 0x1f5ed) = 0
                    *(i + edx_1 + 0x1f5ec) = 0
            case 8
                *(i + edx_1 + 0x1f5ec) = 1
            case 9
                *(i + edx_1 + 0x1f5e2) = 1
                *(i + edx_1 + 0x1f5ec) = 0
