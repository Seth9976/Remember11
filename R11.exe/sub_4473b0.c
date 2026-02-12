// 函数: sub_4473b0
// 地址: 0x4473b0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

*(arg1 + 0x18010) = 0
*(arg1 + 0x18014) = arg1
*(arg1 + 0xc) = data_c78890
*(arg1 + 0x18000) = arg2
*(arg1 + 0x18004) = arg3
data_c78798 = arg2
data_c7879c = arg3
int32_t result = *(arg1 + 0x18000) & 7

if (result u<= 6 && result u<= 6)
    switch (result)
        case 0
            *(arg1 + 0x1800c) = 1
            return result
        case 1, 2, 6
            *(arg1 + 0x1800c) = 2
            return result
        case 3, 4, 5
            *(arg1 + 0x1800c) = 3
            return result

return sub_465480(".\emu.cpp", 0x3b1)
