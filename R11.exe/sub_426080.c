// 函数: sub_426080
// 地址: 0x426080
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

data_4b1de0 = arg1
sub_480cf0(arg1, 0, 0x2213f0)
*arg1 = arg5
*(arg1 + 0x10) = arg6
*(arg1 + 4) = 1
*(arg1 + 8) = 0
*(arg1 + 0xc) = 0
*(arg1 + 0x14) = 0
*(arg1 + 0x24) = 0xffffffff
*(arg1 + 0x28) = 0
*(arg1 + 0x2213ec) = arg2
*(arg1 + 0x54) = arg3
*(arg1 + 0x58) = arg4
int32_t eax_3 = sub_43c320(data_4b1cc0, data_4b1cc4, 2, 0, 0x18)
void* eax_4 = data_4b1de0
__builtin_memcpy(eax_4 + 0xc5b8, 0x4b1c48, 0x50)
void* ecx_2 = eax_4 + 0xc658
int32_t i_4 = 0x12
int32_t ebx = 0
int32_t i

do
    *ecx_2 = data_4b1c98
    ecx_2 += 0x10
    i = i_4
    i_4 -= 1
while (i != 1)
int32_t eax_6 = sub_43c320(eax_4 + 0xc658, 0x12, 2, eax_3, 0x18)
void* eax_7 = data_4b1de0
*(eax_7 + 0x11368) = data_4b1ca0
*(eax_7 + 0x11378) = data_4b1ca0
*(eax_7 + 0x11388) = data_4b1ca0
*(eax_7 + 0x11398) = data_4b1ca0
*(eax_7 + 0x113a8) = data_4b1ca0
*(eax_7 + 0x113b8) = data_4b1ca0
*(eax_7 + 0x113c8) = data_4b1ca0
*(eax_7 + 0x113d8) = data_4b1ca0
sub_43c320(eax_7 + 0x11368, 8, 2, eax_3 + eax_6, 0x13)
void* eax_8 = data_4b1de0
int32_t i_1 = 0

if (*(eax_8 + 0x58) s> 0)
    int32_t* ecx_4 = nullptr
    
    do
        *(ecx_4 + *(eax_8 + 0x54)) = i_1
        *(ecx_4 + *(eax_8 + 0x54) + 4) = 0xff
        *(ecx_4 + *(eax_8 + 0x54) + 5) = 0
        *(ecx_4 + *(eax_8 + 0x54) + 6) = 0
        *(ecx_4 + *(eax_8 + 0x54) + 7) = 0
        *(ecx_4 + *(eax_8 + 0x54) + 0xc) = 0
        *(ecx_4 + *(eax_8 + 0x54) + 8) = 0
        i_1 += 1
        ecx_4 = &ecx_4[8]
    while (i_1 s< *(eax_8 + 0x58))

int32_t ebp_2 = 0

for (int32_t i_2 = 0; i_2 s< 0x100; )
    *(eax_8 + ebp_2 + 0xc658) = data_4b1c9c
    *(eax_8 + ebp_2 + 0xc668) = data_4b1c9c
    sub_43c280(i_2 + eax_8 + 0xc658, 2, zx.d(*(i_2 + eax_8 + 0xc65e)), 0x18)
    sub_43bdf0(ebx + data_4b1de0 + 0xc778, i_2 + eax_8 + 0xc658, 0x1000)
    void* eax_10 = data_4b1de0
    sub_43c280(i_2 + eax_10 + 0xc668, 2, zx.d(*(i_2 + eax_10 + 0xc66e)), 0x18)
    sub_43bdf0(ebx + data_4b1de0 + 0xc994, i_2 + eax_10 + 0xc668, 0x1000)
    eax_8 = data_4b1de0
    i_2 += 0x20
    ebp_2 += 0x20
    ebx += 0x438

*(eax_8 + 0xc758) = data_4b1c9c
*(eax_8 + 0xc768) = data_4b1c9c
sub_425410(1, 0)
void* eax_12 = data_4b1de0
int32_t ecx_9 = *(eax_12 + 0x2213ec)
*(eax_12 + 0x5c) = 0
*(eax_12 + 0x5d) = 0
sub_405e30(7, 8, eax_12 + 0x213ec, ecx_9)

for (void* i_3 = nullptr; i_3 u< 0x30; i_3 += 8)
    void* eax_14 = data_4b1de0
    sub_4427e0(*(i_3 + 0x4b1cc8) * 0x2c + eax_14 + 0xc400, 0x900, 0, 
        ((*(eax_14 + (*(i_3 + 0x4b1ccc) << 2) + 0x213f0)
            + (((*(eax_14 + 0x213ec) << 2) + 0x13) u>> 4)) << 4) + eax_14 + 0x213ec)

void* eax_16 = data_4b1de0
sub_423a30(eax_16 + 0x113e8, eax_16 + 0xc458)
void* result = data_4b1de0
*(result + 0x50) = 0
*(result + 0x51) = 0
*(result + 0x52) = 0
return result
