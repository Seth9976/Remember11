// 函数: sub_403f50
// 地址: 0x403f50
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

uint32_t ecx
uint32_t var_4 = ecx
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
    arg1:3.b = eax_1.b
    int32_t ecx_2 = *(esi + 4)
    int32_t var_10_1 = ecx_2
    sub_43e6f0(nullptr, fconvert.s(float.t(zx.d(eax_1.b)) * fconvert.t(0.0234375f)), ecx_2)
    sub_4437c0(&data_4cd170, &arg1, *(esi + 4))

return 0
