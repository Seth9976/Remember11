// 函数: sub_44e3f0
// 地址: 0x44e3f0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* result_1
int32_t eax_1 = __security_cookie ^ &result_1
void var_20c
sub_44d1f0(&var_20c, arg1)
void* result = sub_481fef(0x48)
sub_480cf0(result, 0, 0x48)
*(result + 1) = 1
void* eax_3 = sub_481fef(0x30)
void* edi

if (eax_3 == 0)
    edi = nullptr
else
    *eax_3 = &CFile::`vftable'
    *(eax_3 + 0x2c) = 0
    *(eax_3 + 4) = 0
    *(eax_3 + 8) = 0
    edi = eax_3

int32_t var_230_1 = 1
sub_465b80(edi, &var_20c, 0, 1)
*(result + 1) = 2
*(result + 4) = edi
int32_t eax_5 = (*(*edi + 0x34))()
*(result + 0x10) = eax_5
*(result + 0x14) = 0
*(result + 0xc) = __alldiv(eax_5 + 0x7ff, adc.d(0, 0, eax_5 u>= 0xfffff801), 0x800, 0)
*(result + 0x1c) = 0
result_1 = result
int32_t var_21c = 1
void var_218
sub_44dd20(0xc7781c, &var_218, &result_1)
sub_480cd2(eax_1 ^ &result_1)
return result
