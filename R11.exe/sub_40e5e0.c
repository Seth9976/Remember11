// 函数: sub_40e5e0
// 地址: 0x40e5e0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* ebp = *(arg1[0x11] + 8)
int32_t eax_1 = sx.d(arg1[4].w)

if (eax_1 == 0)
    int32_t eax_8 = *(((zx.d(*(ebp + 1)) & 0xfff) << 5) + &data_4af374)
    
    if (eax_8 != 0)
        sub_4152c0(eax_8, 1)
    
    for (int32_t i = 0; i s< 0x12; i += 1)
        sub_416b50(i)
    
    int32_t var_10_3 = sx.d(*(ebp + 2))
    int32_t var_14_1 = data_e7e648 + 0x210450
    sub_4011a0(zx.d(*(ebp + 1)))
    arg1[4].w = 1
    goto label_40e685

if (eax_1 == 1)
label_40e685:
    int32_t __saved_esi_2 = 0
    int32_t eax_11 = sub_44c8d0()
    
    if (eax_11 == 3 || eax_11 == 4)
        int32_t __saved_esi_3 = 0
        sub_44c890()
        void* eax_13 = arg1[0x11]
        *(eax_13 + 8) += 4
        sub_40a8a0(arg1)
        return 0
else if (eax_1 == 2 && sub_401260() == 2)
    void* eax_6 = arg1[0x11]
    *(eax_6 + 8) += 4
    sub_40a8a0(arg1)
    return 0

*(arg1 + 0xe) = 0
*(arg1 + 0xd) = 0
return 0
