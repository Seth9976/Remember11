// 函数: sub_408cd0
// 地址: 0x408cd0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ecx = data_8969e0
int32_t edx_2 = (*(arg1 + 8) + 1) << 4
void* var_20 = ((*(arg1 + 4) + 1) << 4) + arg1
int32_t var_2c = 0
int32_t var_1c = ecx
int32_t var_18 = 0xe000
int32_t var_14 = 0
void* var_10 = edx_2 + arg1
int32_t var_c = data_8969dc
int32_t var_8 = 0x2000
int32_t var_4 = 0
sub_448170(&var_20, 2)
int32_t var_2c_1 = 1
int32_t eax_5 = data_8969d0
var_20 = ((*(arg1 + 0xc) + 1) << 4) + arg1
int32_t var_1c_1 = eax_5
int32_t var_18_1 = 0x1000
int32_t var_14_1 = 0
data_896934 = eax_5
data_89693c = 0x86000
data_896938 = 0x1000
int32_t eax_7

do
    int32_t var_2c_2 = 0
    sub_448170(&var_20, 1)
    int32_t var_2c_3 = 1
    
    if (sub_4072c0(0x90e0, &data_896930) s< 0)
        int32_t i
        
        do
            data_8969a4 += 1
            int32_t j
            
            do
                j = sub_4072c0(0x80f0, &data_896930)
            while (j != 1)
            int32_t ecx_1
            i, ecx_1 = sub_4072c0(0x90e0, &data_896930)
        while (i s< 0)
    
    int32_t i_1
    
    do
        i_1 = sub_4072c0(0x80f0, &data_896930)
    while (i_1 != 1)
    eax_7 = data_89693c
    var_20 += 0x1000
    data_89693c = eax_7 + 0x1000
while (eax_7 + 0x1000 u<= 0x196000)
int32_t edx_8 = data_8969d0
int32_t var_2c_4 = 0
data_896930 = data_8969dc
data_896934 = edx_8
data_89693c = 0x86000
data_896938 = 0x110000
data_896990 = sub_4072c0(0x90b1, &data_896930)
sub_4072c0(0xc1, 0x3010)
sub_4072c0(0xd1, 0x100)
int32_t result = sub_4072c0(0x80a0, data_8969e0)
data_896994 = result
return result
