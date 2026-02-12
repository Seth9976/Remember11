// 函数: sub_45e500
// 地址: 0x45e500
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* var_4_1 = arg1
int32_t ebp = 0
void* const ebx = &data_4a34e0

for (void* i = &data_c784d8; i s< &data_c7858c; )
    int32_t j_1 = 3
    int32_t j
    
    do
        if (GetKeyState(*i) s< 0)
            ebp |= 1 << (*ebx).b
        
        i += 4
        j = j_1
        j_1 -= 1
    while (j != 1)
    ebx += 4

int32_t eax_3 = *(arg1 + 0x1c)

if (eax_3 != 0)
    ebp = 0
    *(arg1 + 0x1c) = eax_3 - 1

data_c785a4 = 0
data_c785a8 = 0
data_c785ac = 0
data_c785b0 = 0
void* esi_1 = GetActiveWindow() - sub_46f1f0()
int32_t esi_2 = neg.d(esi_1)
data_c785a4.w = (not.d(sbb.d(esi_2, esi_2, esi_1 != 0))).w & ebp.w
data_c785a4:2.b = 0x80
data_c785a4:3.b = 0x80
data_c785a8.b = 0x80
data_c785a8:1.b = 0x80
return 0
