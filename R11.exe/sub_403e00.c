// 函数: sub_403e00
// 地址: 0x403e00
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ecx
int32_t var_4 = ecx
void* eax = arg1
void* edi = *(eax + 0x44)
int32_t eax_1

if (*(edi + 2) != 0)
    eax_1 = sub_4025e0(eax)
else
    eax_1 = sub_4024c0(eax)

if (eax_1 == 0)
    arg1 = *(edi + 0x15)
    void* eax_2
    eax_2.b = 0x80
    eax_2.b = 0x80 - *(edi + 0xc)
    var_4 = zx.d(eax_2.b) + 1
    arg1:3.b = eax_2.b
    int32_t ecx_1 = *(edi + 4)
    long double x87_r6_1 = float.t(1)
    int32_t var_10_1 = ecx_1
    sub_43e7c0(nullptr, fconvert.s(x87_r6_1 / x87_r6_1), ecx_1)
    sub_4437c0(&data_4cd170, &arg1, *(edi + 4))

return 0
