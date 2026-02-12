// 函数: sub_438860
// 地址: 0x438860
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* result = data_a5dd14
int32_t ecx = *(result + 0xc)
char var_a = 0x80
char var_b = 0x80
char var_c = 0x80
int32_t var_8 = 0x1b8
int32_t var_4 = 0x20
void* esi_1

if (ecx == 0)
    esi_1 = result + 0x18aec
label_4388a6:
    
    if (esi_1 != 0)
        int32_t eax_2
        int32_t edx_1
        edx_1:eax_2 = sx.q(*(result + 0x10) << 0xe)
        int32_t eax_7
        int16_t edx_3
        edx_3:eax_7 = sx.q(sub_441360((eax_2 + (edx_1 & 0x7f)) s>> 7) << 7)
        char eax_9 = ((eax_7 + zx.d(edx_3)) s>> 0x10).b
        char var_9_1 = eax_9
        int32_t eax_13
        int32_t edx_5
        edx_5:eax_13 = sx.q(zx.d(eax_9) * 0xa0)
        var_8 = 0x258 - ((eax_13 + (edx_5 & 0x7f)) s>> 7)
        sub_444110(esi_1, &var_8, &var_c, 1)
        sub_442c30(esi_1, 1)
        result = data_a5dd14
else if (ecx == 1)
    esi_1 = result + 0x18b18
    goto label_4388a6
*(result + 0x10) += 4

if (*(result + 0x10) s> 0x80)
    *(result + 0x10) = 0x80

return result
