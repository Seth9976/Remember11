// 函数: sub_44a280
// 地址: 0x44a280
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

uint32_t result = arg3
int32_t* esi_1 = arg2 + 0x10

if (result s> 0)
    arg2 = result
    uint32_t i
    
    do
        int32_t j_1 = arg4
        
        if (j_1 s> 0)
            int32_t j
            
            do
                uint32_t eax = zx.d(esi_1[2].b)
                
                if (eax u<= 0x62 && eax u<= 0x62)
                    switch (eax)
                        case 0, 6, 7, 8, 9, 0xa, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 
                                0x1c, 0x22, 0x34, 0x35, 0x36, 0x37, 0x3b, 0x3d, 0x3f, 0x40, 0x41, 
                                0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49, 0x4a, 0x4b, 0x4c, 
                                0x4d, 0x4e, 0x4f, 0x50, 0x51, 0x52, 0x53, 0x54, 0x60, 0x61, 0x62
                            int32_t eax_2 = *(arg1 + 0x18010)
                            
                            if (eax_2 != 0)
                                (*(*data_c78668 + 0x68))(arg1, eax_2)
                                *(arg1 + 0x18010) = 0
                                *(arg1 + 0x18014) = arg1
                                *(arg1 + 0xc) = data_c78890
                
                result = zx.d(esi_1[2].b)
                
                if (result u> 0x7f || result u> 0x7f)
                    result = sub_465480(".\emu.cpp", 0x547)
                else
                    switch (result)
                        case 0
                            result = sub_4473b0(arg1, *esi_1, esi_1[1])
                        case 1
                            result = sub_4472d0(arg1, esi_1)
                        case 2
                            *(*(arg1 + 0x18014) + 0x10) = fconvert.s(fconvert.t(*esi_1))
                            result = *(arg1 + 0x18014)
                            *(result + 0x14) = fconvert.s(fconvert.t(esi_1[1]))
                        case 3
                            result = sub_447310(arg1, esi_1)
                        case 4
                            result = sub_44a1e0(arg1, esi_1)
                        case 5
                            result = sub_44a1e0(arg1, esi_1)
                        case 6
                            data_c787b0 = *esi_1
                            data_c787b4 = esi_1[1]
                        case 7
                            result = *esi_1
                            data_c787b8 = result
                            data_c787bc = esi_1[1]
                        case 8
                            data_c787f0 = *esi_1
                            data_c787f4 = esi_1[1]
                        case 9
                            result = *esi_1
                            data_c787f8 = result
                            data_c787fc = esi_1[1]
                        case 0xb, 0xe, 0x10, 0x11, 0x12, 0x13, 0x1d, 0x1e, 0x1f, 0x20, 0x21, 0x23, 
                                0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 
                                0x2f, 0x30, 0x31, 0x32, 0x33, 0x38, 0x39, 0x3a, 0x3c, 0x3e, 0x55, 
                                0x56, 0x57, 0x58, 0x59, 0x5a, 0x5b, 0x5c, 0x5d, 0x5e, 0x5f, 0x65, 
                                0x69, 0x6a, 0x6b, 0x6c, 0x6d, 0x6e, 0x6f, 0x70, 0x71, 0x72, 0x73, 
                                0x74, 0x75, 0x76, 0x77, 0x78, 0x79, 0x7a, 0x7b, 0x7c, 0x7d, 0x7e
                            result = sub_465480(".\emu.cpp", 0x547)
                        case 0xc
                            if (data_4ca0bc == 1)
                                result = sub_464790(".\emu.cpp", 0x4aa)
                                data_4ca0bc = 0
                        case 0xd
                            result = sub_44a1e0(arg1, esi_1)
                        case 0x14
                            data_c787c0 = *esi_1
                            result = esi_1[1]
                            data_c787c4 = result
                        case 0x15
                            data_c787c8 = *esi_1
                            data_c787cc = esi_1[1]
                        case 0x16
                            result = sub_447350(esi_1, 0)
                        case 0x17
                            result = sub_447350(esi_1, 1)
                        case 0x18
                            data_c78830 = *esi_1
                            data_c78834 = esi_1[1]
                        case 0x19
                            result = *esi_1
                            data_c78838 = result
                            data_c7883c = esi_1[1]
                        case 0x1a
                            if ((*esi_1 & 1) == 0)
                                result = sub_465480(".\emu.cpp", 0x2d7)
                        case 0x3b
                            data_c78888 = *esi_1
                            result = esi_1[1]
                            data_c7888c = result
                        case 0x3d
                            data_c78880 = *esi_1
                            result = esi_1[1]
                            data_c78884 = result
                        case 0x40
                            data_c78840 = *esi_1
                            data_c78844 = esi_1[1]
                        case 0x41
                            result = *esi_1
                            data_c78848 = result
                            data_c7884c = esi_1[1]
                        case 0x42
                            data_c787a0 = *esi_1
                            result = esi_1[1]
                            data_c787a4 = result
                        case 0x43
                            data_c787a8 = *esi_1
                            data_c787ac = esi_1[1]
                        case 0x47
                            result = *esi_1
                            data_c78810 = result
                            data_c78814 = esi_1[1]
                        case 0x48
                            data_c78818 = *esi_1
                            result = esi_1[1]
                            data_c7881c = result
                        case 0x4a
                            result = *esi_1
                            data_c78850 = result
                            data_c78854 = esi_1[1]
                        case 0x4b
                            data_c78858 = *esi_1
                            result = esi_1[1]
                            data_c7885c = result
                        case 0x4c
                            data_c78820 = *esi_1
                            data_c78824 = esi_1[1]
                        case 0x4d
                            result = *esi_1
                            data_c78828 = result
                            data_c7882c = esi_1[1]
                        case 0x4e
                            data_c78800 = *esi_1
                            result = esi_1[1]
                            data_c78804 = result
                        case 0x4f
                            data_c78808 = *esi_1
                            data_c7880c = esi_1[1]
                        case 0x50
                            result = *esi_1
                            data_c78860 = result
                            data_c78864 = esi_1[1]
                        case 0x51
                            data_c78868 = *esi_1
                            result = esi_1[1]
                            data_c7886c = result
                        case 0x52
                            data_c78870 = *esi_1
                            data_c78874 = esi_1[1]
                        case 0x53
                            result = *esi_1
                            data_c78878 = result
                            data_c7887c = esi_1[1]
                        case 0x63
                            result = (*(*data_c78664 + 0x30))(*esi_1, esi_1[1])
                        case 0x64
                            result = (*(*data_c78664 + 0x34))()
                        case 0x66
                            int32_t* var_14_11 = esi_1
                            result = sub_447380()
                        case 0x67
                            result = (*(*data_c78664 + 0x40))(*esi_1)
                        case 0x68
                            result = (*(*data_c78664 + 0x48))(*esi_1, esi_1[1])
                
                esi_1 = &esi_1[4]
                j = j_1
                j_1 -= 1
            while (j != 1)
        
        i = arg2
        arg2 -= 1
    while (i != 1)

return result
