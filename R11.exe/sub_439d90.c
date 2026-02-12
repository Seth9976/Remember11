// 函数: sub_439d90
// 地址: 0x439d90
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t edi = arg2

if (edi == 0)
    edi = 0x4bfa10
    int32_t eax_5
    int16_t edx_1
    edx_1:eax_5 = sx.q(sub_441360(data_2b603ac << 8) << 4)
    char eax_8
    char edx_3
    edx_3:eax_8 = sx.q((eax_5 + zx.d(edx_1)) s>> 0x10)
    data_4bfa13 = (eax_8 ^ edx_3) - edx_3 + 0x10

sub_442e20()
data_c7bbe0 = 0xa
int32_t ecx = *arg1
data_4bf9d0 = ecx
data_4bf9d4 = arg1[1]
int32_t edx_5 = arg1[2]
data_4bf9d8 = edx_5
int32_t eax_12 = arg1[3]
data_4bf9d0 = ecx - 0x10
int32_t* ecx_2 = data_c7bbc0
data_4bf9d8 = edx_5 + 0x20
data_4bf9dc = eax_12
sub_445790(*ecx_2 + 0x160, &data_4bf9d0, edi, arg3)
sub_442c30(*data_c7bbc0 + 0x160, arg3)
return sub_442f40() __tailcall
