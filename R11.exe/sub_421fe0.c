// 函数: sub_421fe0
// 地址: 0x421fe0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ecx
int32_t var_4_3 = ecx
void* ecx_1 = data_a5d910
int32_t eax
eax.b = *(ecx_1 + 0x7ac4) == 0
*(ecx_1 + 0x7ac4) = eax
void* eax_3 = sub_43f5c0((eax << 0x16) + ecx_1 + 0x62921c, 0)
void* esi = data_a5d910
*(esi + (*(esi + 0x7ac4) + 0xa3e) * 0xc) = eax_3
long double x87_r7 = float.t(zx.d(*(eax_3 + 8)))
long double x87_r5_1 = x87_r7 * fconvert.t(0.00156250002f)
long double x87_r2 = fconvert.t(0.00223214296f)
long double x87_r3_1 = float.t(zx.d(*(eax_3 + 0xa))) * x87_r2
x87_r5_1 - x87_r3_1
uint32_t eax_6
eax_6.w = (x87_r5_1 < x87_r3_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r5_1, x87_r3_1) ? 1 : 0) << 0xa
    | (x87_r5_1 == x87_r3_1 ? 1 : 0) << 0xe | 0x2000
bool p = unimplemented  {test ah, 0x5}

if (p)
    *(esi + *(esi + 0x7ac4) * 0xc + 0x7aec) = 0x70000
    *(esi + *(esi + 0x7ac4) * 0xc + 0x7af0) = sub_480df0(x87_r2 * fconvert.t(640f)
        / float.t(zx.d(*(eax_3 + 8))) * float.t(zx.d(*(eax_3 + 0xa))) * fconvert.t(344064f))
else
    long double x87_r4_1 = fconvert.t(448f)
    *(esi + *(esi + 0x7ac4) * 0xc + 0x7aec) =
        sub_480df0(x87_r7 * x87_r4_1 / x87_r4_1 * x87_r2 * fconvert.t(458752f))
    *(esi + *(esi + 0x7ac4) * 0xc + 0x7af0) = 0x54000

void* eax_15 = esi + (*(esi + 0x7ac4) + 0xa3e) * 0xc
*(esi + 0x7ad4) = 0
*(esi + 0x7ad0) = 0

if (*(*eax_15 + 8) != 0x280)
    *(esi + 0x7ad0) = 1

if (*(*eax_15 + 0xa) != 0x1c0)
    *(esi + 0x7ad0) = 1

if (*(esi + 0x7ad0) != 0)
    data_4b1bf0 = 5
    data_4b1bf4 = 3
    return 

data_4b1bf0 = 0xffffffff
data_4b1bf4 = 0xffffffff
