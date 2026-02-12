// 函数: sub_439420
// 地址: 0x439420
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t edi = 0
int32_t var_28

for (int32_t i = 0x58; i s< 0x170; )
    int32_t var_24_1 = i + 2
    void* eax_2 = edi + data_a5dd18 + 0x31a28
    var_28 = 0x40
    sub_43c3e0(eax_2, &var_28, nullptr, 1)
    void* eax_3 = edi + data_a5dd18 + 0x31818
    var_28 = 0x94
    int32_t i_1 = i
    sub_43c220(eax_3, &var_28, nullptr, 1)
    i += 0x1c
    edi += 0x10

void* ecx = data_a5dd18
var_28 = 0x40
int32_t var_3c = 1
void* var_24_2 = *(ecx + 8) * 0x1c + 0x57
int32_t var_20 = 0x200
int32_t var_1c = 0x1c
sub_439d90(nullptr, &var_28, 0)
__builtin_memcpy(&var_28, 
    "\x40\x00\x00\x00\x5a\x00\x00\x00\x00\x02\x00\x00\x14\x01\x00\x00\x20\x00\x00\x00\x20\x00\x00\x00", 
    0x18)
return sub_43d1f0(&var_28, 1)
