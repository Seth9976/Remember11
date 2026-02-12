// 函数: sub_430570
// 地址: 0x430570
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t edx = data_a5dd08
void* ecx_2 = (arg1 << 4) + edx
int32_t eax_4
int32_t edx_3
edx_3:eax_4 = sx.q(0x280 - zx.d(*(((arg1 + 0x6d38a) << 4) + edx)) * zx.d(*(ecx_2 + 0x6d389d)))
int32_t var_20 = (eax_4 - edx_3) s>> 1
int32_t var_1c = 0x4a
char var_28 = 0x80
char var_27 = 0x80
char var_26 = 0x80
char var_25 = 0x80
sub_43c3e0(ecx_2 + 0x6d3898, &var_20, nullptr, 2)
int32_t ebp_1 = (arg3 + arg6) << 4
int32_t var_24 = 0
int32_t i = 0x6a
int32_t edi_1 = (arg2 + arg6) << 4

do
    void* edx_5 = edi_1 + data_a5dd08 + 0x6d3898
    var_28 = 0x80
    char var_27_1 = 0x80
    char var_26_1 = 0x80
    char var_25_1 = 0x80
    var_20 = 0x40
    int32_t i_1 = i
    sub_43c3e0(edx_5, &var_20, nullptr, 2)
    void* edx_6 = data_a5dd08 + ebp_1 + 0x6d3898
    var_20 = 0x94
    int32_t i_2 = i
    sub_43c220(edx_6, &var_20, nullptr, 2)
    
    if (arg4 != 0xffffffff)
        void* ecx_7 = ((var_24 + arg4 + arg6) << 4) + data_a5dd08 + 0x6d3898
        var_20 = 0x1e8
        int32_t i_3 = i
        sub_43c3e0(ecx_7, &var_20, nullptr, 2)
    
    if (arg5 != 0xffffffff)
        int32_t edx_13 = var_24 + arg5 + arg6
        int32_t eax_11 = data_a5dd08
        
        if (*(eax_11 + (edx_13 << 2) + 0x3c) != 0xffffffff)
            int32_t var_1c_1 = i + 0x13
            var_20 = 0x134
            int32_t edx_14 = *(eax_11 + (edx_13 << 2) + 0x3c)
            sub_430300(&var_20, edx_14, 0x80, edx_14)
    
    var_24 += 1
    i += 0x1c
    edi_1 += 0x10
    ebp_1 += 0x10
while (i s< 0x182)

if (arg7 s> 0xa)
    void* eax_14 = data_a5dd08
    var_20 = 0x28
    int32_t eax_16
    int32_t edx_15
    edx_15:eax_16 = sx.q(sub_480df0(fconvert.t(*(eax_14 + 0x14)) * fconvert.t(8f)))
    char edx_17 = (neg.d(arg6)).b
    int32_t var_1c_2 = 0x6a - ((eax_16 ^ edx_15) - edx_15)
    int32_t var_18_1 = 0
    int32_t var_14_1 = 0x20
    int32_t var_10_1 = 0x18
    int32_t var_c_1 = 0x18
    var_28 = 0x80
    char var_27_2 = 0x80
    char var_26_2 = 0x80
    char var_25_2 = (sbb.b(edx_17, edx_17, arg6 != 0) & 0x60) + 0x20
    sub_445470(eax_14 + 0x80f6e8, &var_20, &var_28, 1)
    void* edx_18 = data_a5dd08
    var_20 = 0x28
    int32_t eax_20
    int32_t edx_19
    edx_19:eax_20 = sx.q(sub_480df0(fconvert.t(*(edx_18 + 0x14)) * fconvert.t(8f)))
    int32_t var_1c_3 = (eax_20 ^ edx_19) - edx_19 + 0x166
    int32_t var_18_2 = 0x20
    int32_t var_14_2 = 0x20
    int32_t var_10_2 = 0x18
    int32_t var_c_2 = 0x18
    var_28 = 0x80
    char var_27_3 = 0x80
    char var_26_3 = 0x80
    bool var_25_3 = (((arg6 == arg7 - 0xa) - 1) & 0x60) + 0x20
    sub_445470(eax_14 + 0x80f6e8, &var_20, &var_28, 1)
    sub_442c30(eax_14 + 0x80f6e8, 1)

__builtin_memcpy(&var_20, 
    "\x40\x00\x00\x00\x50\x00\x00\x00\x00\x02\x00\x00\x30\x01\x00\x00\x20\x00\x00\x00\x20\x00\x00\x00", 
    0x18)
return sub_43d1f0(&var_20, 1)
