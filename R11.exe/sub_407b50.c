// 函数: sub_407b50
// 地址: 0x407b50
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void var_104
int32_t eax_1 = __security_cookie ^ &var_104
char const* const var_110 = "----setup run start----\n"
sub_405150()
char const* const var_114 = "dvd file cache use\n"
data_886480 = 0
data_886484 = 0
data_886488 = 0
data_88648c = 0
int32_t* var_118 = &data_886480
data_886480 = "file.dir"
data_886484 = 0x20
data_88648c = 0x802
data_886488 = 0x886490
char const* const var_11c = "file part init\n"
int32_t i = 0
char const (** esi)[0xa] = &data_4af878

do
    int32_t ecx_3
    
    switch (zx.d((&data_2243af0)[i]))
        case 0
            int32_t var_110_1 = esi[-1]
            int32_t var_114_1 = esi[-4]
            char const* const var_118_1 = "dvd file %d:%s\n"
            sub_4059f0(esi[-4], esi[-1])
        case 1
            int32_t var_110_2 = esi[2]
            int32_t var_114_2 = esi[-1]
            char const* const var_118_2 = "dvd bind %s:%s\n"
            ecx_3 = esi[-1]
        label_407c36:
            int32_t var_11c_2 = esi[2]
            int32_t var_120_2 = ecx_3
            sub_480b92(&var_104, "%s%s")
            sub_405a30(esi[-4], &var_104, esi[3])
        case 2
            char const (* var_110_4)[0xa] = *esi
            int32_t var_114_4 = esi[-4]
            char const* const var_118_4 = "hdd file %d:%s\n"
            sub_4059f0(esi[-4], *esi)
        case 3
            int32_t var_110_3 = esi[2]
            char const (* var_114_3)[0xa] = *esi
            char const* const var_118_3 = "hdd bind %s:%s\n"
            int32_t var_11c_3 = esi[2]
            char const (* var_120_3)[0xa] = *esi
            sub_480b92(&var_104, "%s%s")
            sub_405a30(esi[-4], &var_104, esi[3])
        case 4
            int32_t var_110_5 = esi[-3]
            int32_t var_114_5 = esi[-4]
            char const* const var_118_5 = "host file %d:%s\n"
            sub_4059f0(esi[-4], esi[-3])
        case 5
            int32_t var_110_6 = esi[2]
            int32_t var_114_6 = esi[-2]
            char const* const var_118_6 = "host bind %s:%s\n"
            ecx_3 = esi[-2]
            goto label_407c36
        case 6
            int32_t var_110_7 = esi[1]
            uint32_t var_114_7 = zx.d(*((i << 2) + &data_2243ac3))
            uint32_t var_118_7 = zx.d(*((i << 2) + &data_2243ac2))
            uint32_t var_11c_6 = zx.d(*((i << 2) + &data_2243ac1))
            uint32_t var_120_6 = zx.d(*((i << 2) + &data_2243ac0))
            int32_t var_124_1 = esi[-4]
            char const* const var_128_3 = "net flie %d:%d.%d.%d.%d:%s\n"
            uint32_t var_12c_3 = zx.d(*((i << 2) + &data_2243ac3))
            uint32_t var_130_3 = zx.d(*((i << 2) + &data_2243ac2))
            uint32_t var_134_3 = zx.d(*((i << 2) + &data_2243ac1))
            uint32_t var_138_1 = zx.d(*((i << 2) + &data_2243ac0))
            sub_480b92(&var_104, "%d.%d.%d.%d")
            sub_405aa0(esi[-4], &var_104, esi[1])
        case 7
            int32_t var_110_8 = esi[-4]
            char const* const var_114_8 = "none %d\n"
            sub_4059d0(esi[-4])
    
    i += 1
    esi = &esi[8]
while (i s< 0xa)

char const* const var_110_9 = "data file init\n"
sub_405ea0(8, "init.bin", 0x22166a0, &data_e7e660)
sub_401990(0x22166a0)
char const* const var_128_4 = "game data init\n"
sub_401680()
sub_4016c0()
char const* const var_12c_4 = "font load\n"
sub_405e30(7, 0, 0x2245b60, &data_e7e660)
sub_43aa50(0x2245b20, 0x2245b60, sub_441c90)
char const* const var_14c_2 = "sse load\n"
sub_408bc0()
char const* const var_110_10 = "tex init\n"
sub_402290()
char const* const var_114_9 = "option set\n"
int32_t* var_118_9 = &data_e7e660
int32_t result = sub_401350()
char const* const var_11c_7 = "----setup run end----\n"
sub_480cd2(eax_1 ^ &var_104)
return result
