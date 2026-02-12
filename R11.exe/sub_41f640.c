// 函数: sub_41f640
// 地址: 0x41f640
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebp_1 = 0

for (int32_t i = 0x4c; i s< 0x18c; )
    void* eax_1 = data_4b19c0
    int32_t esi_2 = *(eax_1 + 8) + ebp_1
    void* ebx_2 = (sx.d(*(eax_1 + esi_2 + 0x212)) << 3) + &data_4b1a40
    int32_t var_28 = 0x2e
    int32_t i_1 = i
    sub_43c3e0((esi_2 << 4) + eax_1 + 0x182c34, &var_28, ebx_2, 1)
    int32_t* var_58_1 = esi_2 * 0x21c + data_4b19c0 + 0x183c44
    var_28 = 0x82
    sub_43c040(var_58_1, &var_28, ebx_2, 1)
    i += 0x20
    ebp_1 += 1

void* ecx = data_4b19c0
int32_t var_3c = 1
int32_t var_20 = 0x40
int32_t var_1c = (*(ecx + 0xc) << 5) + 0x4c
int32_t var_18 = 0x200
int32_t var_14 = 0x1a
sub_439d90(nullptr, &var_20, 0)
void* eax_4 = data_4b19c0

if (*(eax_4 + 0x41c) == 1)
    int32_t eax_8
    int16_t edx_7
    edx_7:eax_8 = sx.q(sub_441360(data_2b603ac << 0xa) * 6)
    int32_t eax_11
    int32_t edx_9
    edx_9:eax_11 = sx.q((eax_8 + zx.d(edx_7)) s>> 0x10)
    void* eax_15 = data_4b19c0 + 0x1c78ac
    data_4b1a10 = 0x20 - ((eax_11 ^ edx_9) - edx_9)
    sub_445470(eax_15, 0x4b1a0c, 0x4b1a3c, 1)
    sub_442c30(data_4b19c0 + 0x1c78ac, 1)
    eax_4 = data_4b19c0

if (*(eax_4 + 0x420) == 1)
    int32_t eax_19
    int16_t edx_13
    edx_13:eax_19 = sx.q(sub_441360(data_2b603ac << 0xa) * 6)
    int32_t eax_22
    int32_t edx_15
    edx_15:eax_22 = sx.q((eax_19 + zx.d(edx_13)) s>> 0x10)
    data_4b1a28 = (eax_22 ^ edx_15) - edx_15 + 0x188
    sub_445470(data_4b19c0 + 0x1c78ac, 0x4b1a24, 0x4b1a3c, 1)
    sub_442c30(data_4b19c0 + 0x1c78ac, 1)
    eax_4 = data_4b19c0

*(eax_4 + 0x418) += 1
__builtin_memcpy(&var_20, 
    "\x40\x00\x00\x00\x50\x00\x00\x00\x00\x02\x00\x00\x30\x01\x00\x00\x20\x00\x00\x00\x20\x00\x00\x00", 
    0x18)
int32_t result = sub_43d1f0(&var_20, 1)
var_4
return result
