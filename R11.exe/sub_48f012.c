// 函数: sub_48f012
// 地址: 0x48f012
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

uint32_t ecx = zx.d(*(arg1 + 0x42))
uint32_t edx = zx.d(*(arg1 + 0x44))

if (arg2 == 0)
    return 0xffffffff

int32_t var_10 = 0
void* var_14 = arg1
int32_t edi_3 = sub_48c05f(&var_14, 1, ecx, 0x31, &arg2[1])
    | sub_48c05f(&var_14, 1, ecx, 0x32, &arg2[2]) | sub_48c05f(&var_14, 1, ecx, 0x33, &arg2[3])
    | sub_48c05f(&var_14, 1, ecx, 0x34, &arg2[4])
int32_t edi_7 = edi_3 | sub_48c05f(&var_14, 1, ecx, 0x35, &arg2[5])
    | sub_48c05f(&var_14, 1, ecx, 0x36, &arg2[6]) | sub_48c05f(&var_14, 1, ecx, 0x37, arg2)
    | sub_48c05f(&var_14, 1, ecx, 0x2a, &arg2[8])
int32_t edi_10 = edi_7 | sub_48c05f(&var_14, 1, ecx, 0x2b, &arg2[9])
    | sub_48c05f(&var_14, 1, ecx, 0x2c, &arg2[0xa]) | sub_48c05f(&var_14, 1, ecx, 0x2d, &arg2[0xb])
int32_t edi_13 = edi_10 | sub_48c05f(&var_14, 1, ecx, 0x2e, &arg2[0xc])
    | sub_48c05f(&var_14, 1, ecx, 0x2f, &arg2[0xd]) | sub_48c05f(&var_14, 1, ecx, 0x30, &arg2[7])
int32_t edi_16 = edi_13 | sub_48c05f(&var_14, 1, ecx, 0x44, &arg2[0xe])
    | sub_48c05f(&var_14, 1, ecx, 0x45, &arg2[0xf])
    | sub_48c05f(&var_14, 1, ecx, 0x46, &arg2[0x10])
int32_t edi_19 = edi_16 | sub_48c05f(&var_14, 1, ecx, 0x47, &arg2[0x11])
    | sub_48c05f(&var_14, 1, ecx, 0x48, &arg2[0x12])
    | sub_48c05f(&var_14, 1, ecx, 0x49, &arg2[0x13])
int32_t edi_22 = edi_19 | sub_48c05f(&var_14, 1, ecx, 0x4a, &arg2[0x14])
    | sub_48c05f(&var_14, 1, ecx, 0x4b, &arg2[0x15])
    | sub_48c05f(&var_14, 1, ecx, 0x4c, &arg2[0x16])
int32_t edi_25 = edi_22 | sub_48c05f(&var_14, 1, ecx, 0x4d, &arg2[0x17])
    | sub_48c05f(&var_14, 1, ecx, 0x4e, &arg2[0x18])
    | sub_48c05f(&var_14, 1, ecx, 0x4f, &arg2[0x19])
int32_t edi_28 = edi_25 | sub_48c05f(&var_14, 1, ecx, 0x38, &arg2[0x1a])
    | sub_48c05f(&var_14, 1, ecx, 0x39, &arg2[0x1b])
    | sub_48c05f(&var_14, 1, ecx, 0x3a, &arg2[0x1c])
int32_t edi_31 = edi_28 | sub_48c05f(&var_14, 1, ecx, 0x3b, &arg2[0x1d])
    | sub_48c05f(&var_14, 1, ecx, 0x3c, &arg2[0x1e])
    | sub_48c05f(&var_14, 1, ecx, 0x3d, &arg2[0x1f])
int32_t edi_34 = edi_31 | sub_48c05f(&var_14, 1, ecx, 0x3e, &arg2[0x20])
    | sub_48c05f(&var_14, 1, ecx, 0x3f, &arg2[0x21])
    | sub_48c05f(&var_14, 1, ecx, 0x40, &arg2[0x22])
int32_t edi_37 = edi_34 | sub_48c05f(&var_14, 1, ecx, 0x41, &arg2[0x23])
    | sub_48c05f(&var_14, 1, ecx, 0x42, &arg2[0x24])
    | sub_48c05f(&var_14, 1, ecx, 0x43, &arg2[0x25])
int32_t edi_40 = edi_37 | sub_48c05f(&var_14, 1, ecx, 0x28, &arg2[0x26])
    | sub_48c05f(&var_14, 1, ecx, 0x29, &arg2[0x27])
    | sub_48c05f(&var_14, 1, edx, 0x1f, &arg2[0x28])
int32_t result = edi_40 | sub_48c05f(&var_14, 1, edx, 0x20, &arg2[0x29])
    | sub_48c05f(&var_14, 1, edx, 0x1003, &arg2[0x2a])
    | sub_48c05f(&var_14, 0, edx, 0x1009, &arg2[0x2c])
arg2[0x2b] = edx
return result
