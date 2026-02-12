// 函数: sub_40f550
// 地址: 0x40f550
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t eax = sx.d(arg1[4].w)
void* ecx = arg1[0x11]
void* edx = *(ecx + 8)

if (eax == 0)
    *(data_e7e648 + 0x1923c) = 0
    *(data_e7e648 + 0x19240) = zx.d(*(edx + 2)) + *(arg1[0x11] + 0xc)
    void* eax_8 = data_e7e648
    sub_43d220(eax_8 + 0x19250, eax_8 + 0x19240, 0xb, 0, 0x1a, 0x1000)
    arg1[4].w = 1
label_40f604:
    
    if ((data_2b53608 & 0x2100) != 0)
        arg1[4].w = 2
    
    void* eax_10 = data_e7e648
    
    if (*(eax_10 + 0x1923c) + 6 s>= 0x20)
        *(eax_10 + 0x1923c) = 0x20
    else
        *(eax_10 + 0x1923c) += 6
else
    if (eax == 1)
        goto label_40f604
    
    if (eax == 2)
        void* eax_4 = data_e7e648
        
        if (*(eax_4 + 0x1923c) - 6 s<= 0)
            *(ecx + 8) += 4
            sub_40a8a0(arg1)
            return 0
        
        *(eax_4 + 0x1923c) -= 6

void* eax_11 = data_e7e648
int32_t var_10 = 0x140
int32_t var_c = 0xe0
int32_t var_8 = *(eax_11 + 0x1923c)
int32_t var_4 = *(eax_11 + 0x1923c)
sub_43d500(eax_11 + 0x19250, &var_10, nullptr, 0x100, 1, 9)
*(arg1 + 0xe) = 0
*(arg1 + 0xd) = 0
return 0
