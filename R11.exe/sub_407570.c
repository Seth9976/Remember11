// 函数: sub_407570
// 地址: 0x407570
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_14 = 0xffffffff
void* var_18 = arg1 + 0x7e40
int32_t var_1c = 0x7d78
void* var_20 = arg1 + 0xc0
int32_t var_24 = *(arg1 + 0x7e38)
int32_t var_28 = 0x87a518
int32_t var_2c = 0x87a4d8
*(arg1 + 0x7e40) = 0
sub_4509d0()

if (*(arg1 + 0x7e3c) != 0)
    *(arg1 + 0x7e44) = 0
    *(arg1 + 0x7e6c) = 0
    *(arg1 + 0x7e70) = 0xffffffff
    *(arg1 + 0x7e74) = arg1 + 0xc0
    *(arg1 + 0x7e78) = 0
label_407638:
    *(arg1 + 0x7e3c) = *(arg1 + 0x7e3c)
    bool cond:0_1 = (*(arg1 + 0x7e40) & 4) == 0
    *(arg1 + 0x7e48) = 0
    
    if (cond:0_1)
        return 0
else
    sub_407320(arg1)
    
    if (*(arg1 + 0x7e70) != 0xffffffff)
        sub_4073a0(arg1)
        sub_4073e0(arg1)
        int32_t eax_2 = *(arg1 + 0x7e70)
        *(arg1 + 0x7e44) = 0
        *(arg1 + 0x7e74) = eax_2 + arg1 + 0xc0
        *(arg1 + 0x7e78) = 0 - eax_2
        goto label_407638

return 1
