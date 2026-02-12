// 函数: sub_404db0
// 地址: 0x404db0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_28 = *(arg2 + 0x15)
int32_t eax
eax.b = 0x80
eax.b = 0x80 - arg1.b

if (eax.b u<= 0x40)
    var_28:3.b = 0
else
    int32_t eax_4
    int32_t edx_1
    edx_1:eax_4 = sx.q((zx.d(eax.b) - 0x40) << 7)
    var_28:3.b = ((eax_4 + (edx_1 & 0x3f)) s>> 6).b

sub_4437c0(&data_4cd170, &var_28, *(arg2 + 4))
sub_442e20()
int32_t eax_8 = (0x80 - arg1) * 2
data_c7bbf0 = 1
data_c7bbe0 = 3
data_c7bbe4 = eax_8

if (eax_8 u> 0x80)
    data_c7bbe4 = 0x80

int32_t eax_9 = data_4cd178
int32_t i = 0
bool cond:1 = data_4cd17c s<= 0
int32_t var_20 = 0
int32_t var_1c = 0
int32_t var_18 = eax_9
int32_t var_14 = 1
int32_t var_10 = 0
int32_t var_c = 0
int32_t var_8 = eax_9
int32_t var_4 = 1

if (not(cond:1))
    do
        int32_t eax_10 = sub_448760()
        int32_t ecx_1 = data_4cd178
        int32_t eax_12
        int32_t edx_3
        edx_3:eax_12 = sx.q(ecx_1)
        int32_t var_8_1 = ecx_1
        int32_t ecx_2 = *(arg2 + 4)
        int32_t i_1 = i
        int32_t var_14_1 = 1
        int32_t var_10_1 = 0
        int32_t i_2 = i
        int32_t var_4_1 = 1
        int32_t edx_6 = neg.d(mods.dp.d(sx.q(eax_10), (eax_12 - edx_3) s>> 1))
        int32_t var_18_1 = ecx_1 - edx_6
        void** eax_19 = data_c7bbc0
        var_20 = edx_6
        sub_445790(*eax_19 + 0x58, &var_20, 0, ecx_2)
        i += 1
    while (i s< data_4cd17c)

sub_442d00(*data_c7bbc0 + 0x58, *(arg2 + 4))
int32_t eax_21 = data_2b603b0
int32_t eax_22 = neg.d(eax_21)
int32_t var_40_2 = *(arg2 + 4)
sub_409b40(sbb.d(eax_22, eax_22, eax_21 != 0) + 1, 0x900)
return sub_442f40()
