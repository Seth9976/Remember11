// 函数: sub_45cab0
// 地址: 0x45cab0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

sub_480cf0(arg1 + 0x258, 0, 0x2c)
long double x87_r7 = float.t(0)
*(arg1 + 0x258) = fconvert.s(x87_r7)
*(arg1 + 0x25c) = fconvert.s(x87_r7)
*(arg1 + 0x260) = fconvert.s(x87_r7)
*(arg1 + 0x264) = fconvert.s(x87_r7)
*(arg1 + 0x280) = 0xffffffff
void* esi_1 = *(arg1 + 8)
int32_t* i_3
int32_t* i_4
int32_t* i_2

if (&i_3 == 0 || &i_3 == 0)
    i_2 = i_3
    i_4 = i_3
else
    i_4 = *(esi_1 + 0xc)
    i_2 = *(esi_1 + 0x14)

if (i_2 u> 0)
    int32_t* i_1 = i_2
    int32_t* i_5 = i_4
    int32_t* i
    
    do
        int32_t* esi_2 = *i_5
        i_3 = 0xa
        void var_c8
        
        if ((*(*esi_2 + 0x64))(esi_2) s>= 0)
            (*(*esi_2 + 0x28))(esi_2, 0x14, &var_c8, &i_3, 0)
        else if ((*(*esi_2 + 0x1c))(esi_2) == 0x8007001e)
            int32_t j
            
            do
                j = (*(*esi_2 + 0x1c))(esi_2)
                sub_4653f0("DIERR_INPUTLOST\n")
            while (j == 0x8007001e)
        i_5 = &i_5[3]
        i = i_1
        i_1 -= 1
    while (i != 1)

return 0
