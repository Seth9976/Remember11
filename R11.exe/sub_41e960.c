// 函数: sub_41e960
// 地址: 0x41e960
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void var_74
int32_t eax_1 = __security_cookie ^ &var_74
int32_t* eax_2 = data_4b187c
*eax_2 = 0
eax_2[1] = 0
eax_2[5] = 0
eax_2[7] = 0
eax_2[6] = 0
eax_2[8] = 0
void* ecx = &var_74
int32_t i_2 = 0x36
int32_t i

do
    *ecx = 0x81
    *(ecx + 1) = 0x40
    ecx += 2
    i = i_2
    i_2 -= 1
while (i != 1)
*ecx = 0
*(ecx + 1) = 0
int32_t edi = 0

while (true)
    *(i_2 + eax_2 + 0x4508) = 0xffff
    *(i_2 + eax_2 + 0x450a) = 0
    *(i_2 + eax_2 + 0x4504) = 0
    *(i_2 + eax_2 + 0x450c) = &var_74
    edi += sub_43c280(i_2 + eax_2 + 0x450c, 0x13, edi, 0x1a)
    void* eax_5 = data_4b187c
    sub_43bdf0(i_2 + eax_5 + 0x451c, i_2 + eax_5 + 0x450c, 0x1000)
    i_2 += 0x238
    
    if (i_2 s>= 0x1aa0)
        break
    
    eax_2 = data_4b187c

void* ecx_1 = data_4b187c
*(ecx_1 + 0x44f0) = data_4b1878
sub_43d220(ecx_1 + 0x3c, ecx_1 + 0x44f0, 0x13, edi, 0xffffffff, 0x1000)
void* eax_8 = data_e7e648
void* eax_9

if (*(eax_8 + 0x2099e) != 0)
    eax_9 = data_4b187c
    *(eax_9 + 0x10) = zx.d(*(eax_8 + 0x2099c)) + 1
    *(eax_9 + 0xc) = 0x3e7
else
    eax_9 = data_4b187c
    *(eax_9 + 0x10) = 0
    *(eax_9 + 0xc) = zx.d(*(data_e7e648 + 0x2099c))

*(eax_9 + 4) = *(eax_9 + 0xc) - 1
*(eax_9 + 8) = 0
int32_t esi = 0
sub_41e2f0(0)
void* ecx_6

while (true)
    ecx_6 = data_4b187c
    int32_t eax_10 = *(ecx_6 + 4)
    
    if (eax_10 == 0)
        break
    
    *(ecx_6 + 4) = eax_10 - 1
    int32_t eax_14
    int32_t edx_6
    edx_6:eax_14 = sx.q(*(ecx_6 + 8) + 0xb)
    *(ecx_6 + 0x1c) += 1
    esi += 1
    *(ecx_6 + 8) = mods.dp.d(edx_6:eax_14, 0xc)
    sub_41e2f0(0)
    
    if (esi == 9)
        ecx_6 = data_4b187c
        break

int32_t eax_16
eax_16.b = *(ecx_6 + 4) != 0
*(ecx_6 + 0x34) = 0
*(ecx_6 + 0x30) = eax_16
sub_405e30(7, 0x10, ecx_6 + 0x6080, ecx_6 + 0x106080)

for (void* i_1 = nullptr; i_1 u< 0x28; i_1 += 8)
    void* eax_17 = data_4b187c
    sub_4427e0(*(i_1 + 0x4b1850) * 0x2c + eax_17 + 0x5fa4, 0x900, 0, 
        ((*(eax_17 + (*(i_1 + 0x4b1854) << 2) + 0x6084) + (((*(eax_17 + 0x6080) << 2) + 0x13) u>> 4)
            + 0x608) << 4) + eax_17)

void* eax_18 = data_4b187c
int32_t result = sub_423a30(eax_18 + 0x5fa0, eax_18 + 0x5fa4)
sub_480cd2(eax_1 ^ &var_74)
return result
