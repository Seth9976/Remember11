// 函数: sub_408820
// 地址: 0x408820
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

sub_448300(9)
sub_407270()
int32_t eax = sub_4072c0(0x8000, 0x1000)

if (eax != 0)
    int32_t var_4_1 = eax
    char const* const var_8_1 = "ezMidi INIT err:%d\n"

int32_t var_4_2 = 0
void* eax_1 = sub_448140(0, 0x12000)
data_8969e4 = eax_1

if (eax_1 == 0)
    char const* const var_4_3 = "Midi_Init Can't alloc heap sq_hd\n"

int32_t eax_2 = sub_4072c0(0x8100, &data_896930)
data_8969d0 = eax_2

if (eax_2 == 0)
    char const* const var_4_4 = "Midi_Init Can't alloc heap bd_trans\n"

int32_t eax_3 = data_8969e4
data_8969d8 = eax_3
data_8969d4 = eax_3 + 0x1000
data_8969e0 = eax_3 + 0x2000
data_8969dc = eax_3 + 0x10000
return sub_4085a0() __tailcall
