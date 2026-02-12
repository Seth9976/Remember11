// 函数: sub_439ef0
// 地址: 0x439ef0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t eax_4
int16_t edx
edx:eax_4 = sx.q(sub_441360(data_2b603ac << 8) * 4)
data_4bf9a0 = *arg2 - 0x1b
int32_t esi_1 = (eax_4 + zx.d(edx)) s>> 0x10
int32_t eax_7
int32_t edx_2
edx_2:eax_7 = sx.q(0x20 - arg2[3])
int32_t* eax_11 = data_c7bbc0
data_4bf9a4 = ((eax_7 - edx_2) s>> 1) + arg2[1] + esi_1 - 4
sub_445470(*eax_11 + 0x134, &data_4bf9a0, 0x4bfa18, arg4)
int32_t edx_5 = data_4bf9a4
data_4bf9a0 = data_4bf9a0 + arg2[2] + 0x14
int32_t* ecx_5 = data_c7bbc0
data_4bf9a4 = edx_5 + (neg.d(esi_1) << 1)
sub_445470(*ecx_5 + 0x134, &data_4bf9a0, 0x4bfa18, arg4)
sub_442c30(*data_c7bbc0 + 0x134, arg4)
int32_t var_3c = arg4
return sub_439d90(arg1, arg2, arg3)
