// 函数: sub_439e50
// 地址: 0x439e50
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t edi = arg2

if (edi == 0)
    edi = 0x4bfa14

sub_442e20()
data_c7bbe0 = 0xa
int32_t ecx = *arg1
data_4bf9f0 = ecx
data_4bf9f4 = arg1[1]
int32_t edx_1 = arg1[2]
data_4bf9f8 = edx_1
int32_t eax_1 = arg1[3]
data_4bf9f0 = ecx - 0x10
int32_t* ecx_2 = data_c7bbc0
data_4bf9f8 = edx_1 + 0x20
data_4bf9fc = eax_1
sub_445790(*ecx_2 + 0x160, &data_4bf9f0, edi, arg3)
sub_442c30(*data_c7bbc0 + 0x160, arg3)
return sub_442f40() __tailcall
