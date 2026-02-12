// 函数: sub_406910
// 地址: 0x406910
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

char const* const var_2c = "----system init start----\n"
char const* const var_30 = "iop init\n"
sub_405f10()
char const* const var_34 = "gs init\n"
int32_t var_38 = 1
int32_t var_3c = 0
int32_t var_40 = 2
int32_t var_44 = 1
int32_t var_48 = 0
sub_447f20()
sub_405f70()
sub_4063b0()
char const* const var_4c = "sysfont init\n"
sub_440f40()
int32_t* eax = sub_4410c0(0x6d00, 0x7300, 0x4b, 0x1a)
data_2b603b8 = eax
sub_440f60(eax)
char const* const var_64 = "cd init\n"
int32_t var_68 = 0
int32_t var_2c_1 = 2
char const* const var_30_1 = "spu2 init\n"
char const (** esi)[0xa] = &data_4af7a8
void* i_4 = 6
void* i

do
    sub_406650(esi)
    esi = &esi[4]
    i = i_4
    i_4 -= 1
while (i != 1)
sub_406410(esi, i_4)
char const* const var_2c_3 = "pad init\n"
char const (** esi_1)[0xc] = &data_4af818
void* i_5 = 4
void* i_1

do
    sub_406650(esi_1)
    esi_1 = &esi_1[4]
    i_1 = i_5
    i_5 -= 1
while (i_1 != 1)
sub_450200()
void* i_6 = i_5
void* esi_2 = &data_2b53780
void* ebp = &data_2b53760
int32_t i_2 = 0x878e08
void* i_7 = i_5

do
    int32_t i_3 = i_2
    int32_t var_30_2 = 0
    void* i_8 = i_7
    __builtin_memset(esi_2, 0, 0x22)
    *ebp = 0
    *(i_7 + 0x2b5375a) = 0
    *(i_7 + 0x2b53758) = 0
    *(ebp + 4) = 0
    i_2 += 0x100
    i_7 += 1
    ebp += 6
    esi_2 += 0x22
while (i_2 s< 0x879008)

char const* const var_2c_6 = "stream init\n"
sub_406650(&data_4af858)
char const* const var_34_1 = "adx init\n"
sub_406650(&data_4af808)
int32_t var_3c_1 = 0
int32_t var_40_1 = 0
int32_t var_44_1 = 0
int32_t var_48_1 = 0
char const* const var_4c_1 = "midi init\n"
sub_408820()
char const* const var_50 = "etc init\n"
sub_44b670(data_4ca03c, 0x83)
int32_t var_5c = 0
sub_447f00()
data_4cf1e0 = sbb.d(0, 0, false) + 1
__builtin_memset(&data_2b603a4, 0, 0x14)
data_2b68248 = 0
data_2b68244 = 0
data_2b68240 = 0
void var_18
void* var_60_1 = &var_18
int32_t var_10 = 0
int32_t var_14 = 1
data_2b6823c = 0
char const* const var_68_1 = "----system init end----\n"
return sub_447f30(sub_406710)
