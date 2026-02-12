// 函数: sub_430ed0
// 地址: 0x430ed0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* eax = data_a5dd08
int32_t var_24 = sx.d(*(eax + 0x10))
long double st0
bool c2
st0, c2 = __fsin(float.t(var_24) * fconvert.t(9.58737801e-05f))
int32_t var_20 = 0xc0
int32_t var_1c = 0x10
int32_t var_18 = 0
int32_t var_10 = 0x100
var_24.b = 0x80
var_24:1.b = 0x80
var_24:2.b = 0x80
var_24:3.b = 0x80
*(eax + 0x14) = fconvert.s(st0)
int32_t var_14 = 0x20
int32_t var_c = 0x20
sub_445470(eax + 0x80f6bc, &var_20, &var_24, 1)
sub_442c30(eax + 0x80f6bc, 1)
void* eax_1 = data_a5dd08
var_20 = 0x1f0
int32_t var_1c_1 = 0x24
var_24.b = 0x80
var_24:1.b = 0x80
var_24:2.b = 0x80
var_24:3.b = 0x80
sub_43c3e0((*(eax_1 + 4) << 4) + eax_1 + 0x6d38d8, &var_20, nullptr, 1)
void* ecx_1 = data_a5dd08
int32_t eax_3 = *(ecx_1 + 8)

if (eax_3 == 0)
    int32_t eax_11
    int32_t edx_4
    edx_4:eax_11 = sx.q(sub_480df0(fconvert.t(*(ecx_1 + 0x14)) * fconvert.t(8f)))
    var_20 = 0x28 - ((eax_11 ^ edx_4) - edx_4)
    int32_t var_1c_3 = 0x40
    int32_t var_18_2 = 0
    int32_t var_14_2 = 0
    int32_t var_10_2 = 0x18
    int32_t var_c_2 = 0x18
    var_24.b = 0x80
    var_24:1.b = 0x80
    var_24:2.b = 0x80
    var_24:3.b = 0x80
    sub_445470(ecx_1 + 0x80f6e8, &var_20, &var_24, 1)
    int32_t eax_15
    int32_t edx_5
    edx_5:eax_15 = sx.q(sub_480df0(fconvert.t(*(data_a5dd08 + 0x14)) * fconvert.t(8f)))
    var_20 = (eax_15 ^ edx_5) - edx_5 + 0x238
    int32_t var_1c_4 = 0x40
    int32_t var_18_3 = 0x20
    int32_t var_14_3 = 0
    int32_t var_10_3 = 0x18
    int32_t var_c_3 = 0x18
    var_24.b = 0x80
    var_24:1.b = 0x80
    var_24:2.b = 0x80
    var_24:3.b = 0x80
    sub_445470(ecx_1 + 0x80f6e8, &var_20, &var_24, 1)
    sub_442c30(ecx_1 + 0x80f6e8, 1)
    void* ecx_8 = data_a5dd08
    var_20 = 0
    int32_t var_1c_5 = 0
    
    switch (*(ecx_8 + 4))
        case 0
            sub_42f670()
        case 1
            sub_430850()
        case 2
            sub_4309f0()
        case 3
            sub_430d00()
else if (eax_3 == 1)
    int32_t eax_6 = sub_441790(ecx_1 + 0x18)
    int32_t var_1c_2 = 0
    int32_t var_14_1 = 0
    int32_t ecx_4
    
    if (*(data_a5dd08 + 0xc) != 0)
        ecx_4 = eax_6 - 0x280
    else
        ecx_4 = 0x280 - eax_6
        eax_6 = neg.d(eax_6)
    
    var_20 = ecx_4
    int32_t var_10_1 = 0
    int32_t var_c_1 = 0
    sub_442e50(ecx_4, 0)
    
    switch (*(data_a5dd08 + 4))
        case 0
            sub_42f670()
        case 1
            sub_430850()
        case 2
            sub_4309f0()
        case 3
            sub_430d00()
    
    sub_442f40()
    sub_442e50(eax_6, var_14_1)
    int32_t eax_9 = *data_a5dd08
    
    if (eax_9 u> 3)
        sub_442f40()
    else
        switch (eax_9)
            case 0
                sub_42f670()
                sub_442f40()
            case 1
                sub_430850()
                sub_442f40()
            case 2
                sub_4309f0()
                sub_442f40()
            case 3
                sub_430d00()
                sub_442f40()

sub_423a40(data_a5dd08 + 0x80f68c, 1)
void* result = data_a5dd08
*(result + 0x10) += 0x400
return result
