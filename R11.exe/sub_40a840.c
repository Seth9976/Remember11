// 函数: sub_40a840
// 地址: 0x40a840
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t eax_2 = arg1

if (eax_2 == 0xffffffff)
    eax_2 = *(*(sub_446760(eax_2) + 0x44) + 4)

int32_t esi_3 = eax_2 * 0x48
sub_446d40(*(esi_3 + data_e7e648 + 0x30b8))
int32_t result = data_e7e648
*(esi_3 + result + 0x30bc) = 0xffffffff
*(esi_3 + data_e7e648 + 0x30b8) = 0xffffffff
return result
