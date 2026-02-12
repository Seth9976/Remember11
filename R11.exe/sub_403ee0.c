// 函数: sub_403ee0
// 地址: 0x403ee0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

uint32_t ecx
uint32_t var_4 = ecx
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
    arg1:3.b = eax_2.b
    int32_t ecx_1 = *(edi + 4)
    int32_t var_10_1 = ecx_1
    sub_43e6f0(nullptr, fconvert.s(float.t(zx.d(eax_2.b)) * fconvert.t(0.0234375f)), ecx_1)
    sub_4437c0(&data_4cd170, &arg1, *(edi + 4))

return 0
