// 函数: sub_487b6f
// 地址: 0x487b6f
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t eax = *(arg1 + 0xbc)

if (eax != 0 && eax != &data_4cbd74)
    int32_t* eax_1 = *(arg1 + 0xb0)
    
    if (eax_1 != 0 && *eax_1 == 0)
        int32_t* eax_2 = *(arg1 + 0xb8)
        
        if (eax_2 != 0 && *eax_2 == 0)
            sub_4813df(eax_2)
            sub_48f836(*(arg1 + 0xbc))
        
        int32_t* eax_3 = *(arg1 + 0xb4)
        
        if (eax_3 != 0 && *eax_3 == 0)
            sub_4813df(eax_3)
            sub_48f62e(*(arg1 + 0xbc))
        
        sub_4813df(*(arg1 + 0xb0))
        sub_4813df(*(arg1 + 0xbc))

int32_t* eax_4 = *(arg1 + 0xc0)

if (eax_4 != 0 && *eax_4 == 0)
    sub_4813df(*(arg1 + 0xc4) - 0xfe)
    sub_4813df(*(arg1 + 0xcc) - 0x80)
    sub_4813df(*(arg1 + 0xd0) - 0x80)
    sub_4813df(*(arg1 + 0xc0))

int32_t* eax_11 = *(arg1 + 0xd4)

if (eax_11 != &data_4cc878 && eax_11[0x2d] == 0)
    sub_48f42b(eax_11)
    sub_4813df(*(arg1 + 0xd4))

void* edi_1 = arg1 + 0x50
int32_t i_1 = 6
int32_t i

do
    if (*(edi_1 - 8) != &data_4cc658)
        int32_t* eax_12 = *edi_1
        
        if (eax_12 != 0 && *eax_12 == 0)
            sub_4813df(eax_12)
    
    if (*(edi_1 - 4) != 0)
        int32_t* eax_13 = *(edi_1 + 4)
        
        if (eax_13 != 0 && *eax_13 == 0)
            sub_4813df(eax_13)
    
    edi_1 += 0x10
    i = i_1
    i_1 -= 1
while (i != 1)
return sub_4813df(arg1)
