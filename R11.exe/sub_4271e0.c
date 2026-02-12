// 函数: sub_4271e0
// 地址: 0x4271e0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void var_84
int32_t eax_1 = __security_cookie ^ &var_84
int32_t eax_2 = sx.d(*(arg1 + 0x10))
void* esi = *(arg1 + 0x44)

if (eax_2 == 0)
    void* eax_13 = esi + 0xc
    void* edx_3 = esi + 0x10c - eax_13
    char i
    
    do
        i = *eax_13
        *(edx_3 + eax_13) = i
        eax_13 += 1
    while (i != 0)
    *(arg1 + 0x10) = 1
else if (eax_2 == 1)
    int32_t* var_90_1 = esi + 0x210
    int32_t eax_6 = sub_4502a0(1, esi + 0x20c)
    
    if (eax_6 == 0xffffffff)
        void* var_90_3 = esi + 0x10c
        sub_480b92(&var_84, "/%s/*")
        sub_450770(*(esi + 4), *(esi + 8), &var_84, 0, 5, esi + 0x23c)
    else if (eax_6 == 1)
        int32_t eax_7 = *(esi + 0x210)
        
        if (eax_7 s>= 0)
            if (eax_7 == 5 && sub_4270f0(esi) == 0)
                sub_480cd2(eax_1 ^ &var_84)
                return 1
            
            *(esi + 0x210) = 0xfffffffa
        
        sub_480cd2(eax_1 ^ &var_84)
        return 2

sub_480cd2(eax_1 ^ &var_84)
return 0
