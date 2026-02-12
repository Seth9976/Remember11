// 函数: sub_403e70
// 地址: 0x403e70
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ecx
int32_t var_4 = ecx
void* ecx_1 = arg1
void* esi = *(ecx_1 + 0x44)
int32_t eax

if (*(esi + 2) != 0)
    eax = sub_402650(ecx_1)
else
    eax = sub_402530(ecx_1, ecx_1)

if (eax == 0)
    arg1 = *(esi + 0x15)
    void* eax_1
    eax_1.b = *(esi + 0xc)
    var_4 = zx.d(eax_1.b) + 1
    arg1:3.b = eax_1.b
    int32_t ecx_2 = *(esi + 4)
    long double x87_r6_1 = float.t(1)
    int32_t var_10_1 = ecx_2
    sub_43e7c0(nullptr, fconvert.s(x87_r6_1 / x87_r6_1), ecx_2)
    sub_4437c0(&data_4cd170, &arg1, *(esi + 4))

return 0
