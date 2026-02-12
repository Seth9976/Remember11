// 函数: sub_415b80
// 地址: 0x415b80
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_10 = 0
int32_t var_14 = 2
bool cond:0 = data_e7e644 != 0
data_e7e648 = &data_e7e660

if (cond:0)
    sub_480ea0(0x108eab0, 0xe9effc, 0x8aac4)
    sub_480cf0(data_e7e648, 0, 0x210450)
    void* eax_2 = data_e7e648
    sub_480ea0(eax_2 + 0x2099c, eax_2 + 0x210450, 0x8aac4)
    sub_480cf0(data_e7e648 + 0x210450, 0, 0xef0000)
else
    sub_480cf0(&data_e7e660, 0, 0x1100450)

void* eax_4 = data_e7e648
*(eax_4 + 0x20824) = eax_4 + 0x220450
void* eax_5 = data_e7e648
*(eax_5 + 0xbf0c0) = eax_5 + 0xb20450
void* eax_6 = data_e7e648
*(eax_6 + 0xbf0c4) = eax_6 + 0xe10450
void* eax_7 = data_e7e648
*(eax_7 + 0x20834) = eax_7 + 0x210450
void* eax_8 = data_e7e648
*(eax_8 + 0x20884) = eax_8 + 0x214450
void* eax_9 = data_e7e648
*(eax_9 + 0x208d4) = eax_9 + 0x218450
void* eax_10 = data_e7e648
*(eax_10 + 0x20924) = eax_10 + 0x21c450
int32_t edi = 0xb

for (void* i = &data_4b1178; i s< 0x4b12f8; )
    sub_43a9a0(edi, i)
    i += 0x20
    edi += 1

sub_414b70()
*(data_e7e648 + 0x2898) = 0
*(data_e7e648 + 0x2899) = 0
*(data_e7e648 + 0x289a) = 0
*(data_e7e648 + 0x289b) = 0
*(data_e7e648 + 0x289c) = 0
*(data_e7e648 + 0x28a1) = 0
*(data_e7e648 + 0x28a2) = 0
*(data_e7e648 + 0x28a4) = 0
*(data_e7e648 + 0x28a6) = 0
*(data_e7e648 + 0x28a8) = 0
*(data_e7e648 + 0x28b8) = 0
*(data_e7e648 + 0x28bc) = 0
*(data_e7e648 + 0x28b0) = 0
*(data_e7e648 + 0x289b) = 0
*(data_e7e648 + 0x289c) = 0
*(data_e7e648 + 0x289e) = 0
*(data_e7e648 + 0x289f) = 0
*(data_e7e648 + 0x28a0) = 0
uint32_t eax_17

if (data_2b55e60 != 0xb)
    eax_17 = zx.d(data_2b5cf13)

if (data_2b55e60 == 0xb || eax_17 == 0)
    *(data_e7e648 + 0x289b) = 0
    *(data_e7e648 + 0x289c) = 0
    *(data_e7e648 + 0x289e) = 0
else if (eax_17 == 1)
    *(data_e7e648 + 0x289b) = 1
    *(data_e7e648 + 0x289c) = 0
    *(data_e7e648 + 0x289e) = 0
else if (eax_17 == 2)
    *(data_e7e648 + 0x289b) = 0
    *(data_e7e648 + 0x289c) = 1
    *(data_e7e648 + 0x289e) = 1

*(data_e7e648 + 0x28c0) = 0
*(data_e7e648 + 0x28c1) = 0
*(data_e7e648 + 0x28c2) = 0
*(data_e7e648 + 0x28c3) = 0
*(data_e7e648 + 0x28c4) = 0
*(data_e7e648 + 0x28c5) = 0
sub_480cf0(data_e7e648 + 0x28c8, 0, 0x718)
*(data_e7e648 + 0x28cc) = 0xffff
sub_480cf0(data_e7e648 + 0x2fe0, 0, 0xd0)
sub_405010(data_e7e648 + 0x3048)
sub_402480(data_e7e648 + 0x3048, 5)
sub_402490(data_e7e648 + 0x3048, 1)
sub_40a650()

if (data_e7e644 != 0)
    data_e7e644 = 0
else
    sub_41e0f0()

*(data_e7e648 + 0x285c) = sub_446d10(&data_4b10d0, data_e7e648 + 0x30b0, 0, 2)
sub_420540()
sub_40a3f0()
sub_40f960()
__builtin_memcpy(data_e7e648, &data_2b5aa20, 0x40)
int32_t* eax_32 = data_e7e648 + 0x200
*eax_32 = data_2b5aa60
eax_32[1] = data_2b5aa64
eax_32[2] = data_2b5aa68
eax_32[3] = data_2b5aa6c
sub_480cf0(data_e7e648 + 0x220, 0, 0x2000)
sub_480cf0(data_e7e648 + 0x2220, 0, 0x200)
sub_480cf0(data_e7e648 + 0x2420, 0, 0x100)
sub_480ea0(data_e7e648 + 0x220, 0x2b5ab71, 0x2000)
__builtin_memcpy(data_e7e648 + 0x2220, 0x2b5cb71, 0x200)
__builtin_memcpy(data_e7e648 + 0x2420, 0x2b5cd71, 0x100)
__builtin_memcpy(data_e7e648 + 0x2520, 0x2b5aa71, 0x80)
__builtin_memcpy(data_e7e648 + 0x25a0, 0x2b5ce71, 0x40)
void* eax_37 = data_e7e648
*(eax_37 + 0x25e0) = data_2b5ceb1
*(eax_37 + 0x25e4) = data_2b5ceb5
*(eax_37 + 0x25e8) = data_2b5ceb9
*(eax_37 + 0x25ec) = data_2b5cebd
__builtin_memcpy(data_e7e648 + 0x25f0, 0x2b5cec1, 0x20)
__builtin_memcpy(data_e7e648 + 0x2610, 0x2b5cee1, 0x20)
__builtin_memcpy(data_e7e648 + 0x2636, &data_2b5a860, 0xc0)
void* eax_39 = data_e7e648
*(eax_39 + 0x2836) = data_2b5a920
*(eax_39 + 0x283a) = data_2b5a924
*(eax_39 + 0x283e) = data_2b5a928
void* result
result.w = data_2b5a92c
*(data_e7e648 + 0x2856) = result.w
void* edx_29
edx_29.b = data_2b5a936.b
*(data_e7e648 + 0x2858) = edx_29.b
return result
