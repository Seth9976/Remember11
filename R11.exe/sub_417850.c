// 函数: sub_417850
// 地址: 0x417850
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* ebp = arg1
uint32_t eax = zx.d(*(ebp + 6))

if (eax == 6)
    arg1 = *(data_2b5670c + (zx.d(*(ebp + 0x12)) << 2))
    sub_417680(ebp, &arg1)
    sub_43f580(2)
    int32_t ecx_6 = data_2b603b0
    int32_t ecx_7 = neg.d(ecx_6)
    int32_t var_18_3 = 2
    return sub_409b40(sbb.d(ecx_7, ecx_7, ecx_6 != 0) + 1, 0x900)

if (eax == 7)
    sub_43f580(2)
    sub_417620(2, zx.d(*(ebp + 0x11)))
    sub_409c70(0xffffffff, 2)
    arg1 = *(data_2b5670c + (zx.d(*(ebp + 0x12)) << 2))
    sub_417680(ebp, &arg1)
    sub_43f580(2)
    return sub_409c70(0x90000, 2)

if (*(data_2b5670c + (zx.d(*(ebp + 0x12)) << 2) + 3) != 0x80)
    sub_43f580(2)
    sub_417620(2, 0x80 - zx.d(*(data_2b5670c + (zx.d(*(ebp + 0x12)) << 2) + 3)))

uint32_t eax_5
eax_5.b = *(ebp + 0x11)
int32_t ebx
ebx.b = eax_5.b != 0x80
arg1 = *(data_2b5670c + (zx.d(*(ebp + 0x12)) << 2))
arg1:3.b = eax_5.b
sub_417680(ebp, &arg1)
uint32_t result = zx.d(*(ebp + 0x12))

if (*(data_2b5670c + (result << 2) + 3) == 0x80)
    return result

int32_t edx_4 = data_2b603b0
int32_t edx_5 = neg.d(edx_4)
int32_t var_14 = 2
return sub_409b40(sbb.d(edx_5, edx_5, edx_4 != 0) + 1, 0x900)
