// 函数: sub_41e110
// 地址: 0x41e110
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* eax_8 = data_e7e648
__builtin_memcpy(zx.d(*(eax_8 + 0x2099c)) * 0x238 + eax_8 + 0x209aa, arg1, 0x6c)
void* eax = data_e7e648
*(eax + ((zx.d(*(eax + 0x2099c)) * 0x11c + arg2) << 1) + 0x209aa) = 0
void* eax_1 = data_e7e648
*(eax_1 + ((zx.d(*(eax_1 + 0x2099c)) * 0x11c + arg2) << 1) + 0x209ab) = 0
void* eax_2 = data_e7e648
int32_t ebx
ebx.b = arg3
*(zx.d(*(eax_2 + 0x2099c)) * 0x238 + eax_2 + 0x209a4) = ebx.b
void* eax_3 = data_e7e648
int32_t esi_6
esi_6.w = arg4
*(zx.d(*(eax_3 + 0x2099c)) * 0x238 + eax_3 + 0x209a6) = esi_6.w
void* eax_4 = data_e7e648
esi_6.w = arg5
*(zx.d(*(eax_4 + 0x2099c)) * 0x238 + eax_4 + 0x209a8) = esi_6.w
void* eax_5 = data_e7e648
*(zx.d(*(eax_5 + 0x2099c)) * 0x238 + eax_5 + 0x209a0) = arg6
void* eax_6 = data_e7e648
__builtin_memcpy(zx.d(*(eax_6 + 0x2099c)) * 0x238 + eax_6 + 0x20a1c, &data_2b5a860, 0x1bc)
void* eax_7 = data_e7e648
*(eax_7 + 0x2099c) += 1
void* result = data_e7e648

if (*(result + 0x2099c) u>= 0x3e8)
    *(result + 0x2099c) = 0
    *(data_e7e648 + 0x2099e) = 1

return result
