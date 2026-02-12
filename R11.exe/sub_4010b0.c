// 函数: sub_4010b0
// 地址: 0x4010b0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void var_104
int32_t eax_1 = __security_cookie ^ &var_104
int32_t var_10c = arg1
sub_480c0d("%d\n")
int32_t esi_1 = arg1 << 5
char* eax_2 = (&data_4af368)[arg1 * 8]
char const* const var_114

if (data_2243af7 != 1)
    sub_498765(eax_2)
    int32_t var_110_1 = (&data_4af368)[arg1 * 8]
    var_114 = "pfs0:/movie/%s"
else
    sub_498976(eax_2)
    int32_t var_110 = (&data_4af368)[arg1 * 8]
    var_114 = "cdrom0:\MOVIE\%s;1"

sub_480b92(&var_104, var_114)

if (*(esi_1 + 0x4af36c) == 1)
    sub_402240(sx.d(*(esi_1 + 0x4af384)))

void* var_10c_3 = &var_104
sub_480c0d("%s\n")
int32_t var_114_1 = 0
int32_t var_118_1 = 0
sub_4085a0()
sub_447f30(sub_406710)
sub_4088d0()
int32_t var_120 = (&data_4af368)[arg1 * 8]
sub_480b92(&var_104, "movie\%s")
void* var_12c = &var_104
int32_t result = sub_44cbd0(nullptr)
sub_480cd2(eax_1 ^ &var_104)
return result
