// 函数: sub_414720
// 地址: 0x414720
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void var_104
int32_t eax_1 = __security_cookie ^ &var_104
uint32_t edi = zx.d(arg1)
int32_t edi_1 = edi & 0xfff
int32_t ebp = edi_1
int32_t ebx_1
int32_t esi_1

switch (edi u>> 0xc)
    case 0
        ebx_1 = data_2b55eb8
        esi_1 = 0
    label_4147ab:
        
        if (ebx_1 != 0)
            switch (zx.d((&data_2243af0)[esi_1]))
                case 0, 2, 4, 6
                    int32_t var_118_2 = *(ebx_1 + (edi_1 << 2))
                    sub_480b92(&var_104, "%s.BIP")
                    void* var_124_1 = &var_104
                    int32_t var_128_1 = edi_1
                    char const* const var_12c_1 = "%d:%s\n"
                    void* eax_6 = data_e7e648
                    sub_405d00(esi_1, &var_104, *(eax_6 + 0xbf0c0), *(eax_6 + 0xbf0c4))
                case 1, 3, 5
                    int32_t var_118_3 = ebp
                    int32_t var_11c_1 = edi_1
                    int32_t var_120_2 = esi_1
                    char const* const var_124_2 = "%2d,%d(%d)\n"
                    void* eax_7 = data_e7e648
                    sub_405c80(esi_1, ebp, *(eax_7 + 0xbf0c0), *(eax_7 + 0xbf0c4))
    case 1
        ebx_1 = data_2b55ec0
        esi_1 = 1
        ebp = edi_1 * 2
        goto label_4147ab
    case 2
        ebx_1 = data_2b55ec8
        esi_1 = 2
        ebp = edi_1 * 2
        goto label_4147ab
    case 3
        ebx_1 = data_2b55ed0
        esi_1 = 3
        ebp = edi_1 * 2
        goto label_4147ab
    case 4
        ebx_1 = data_2b55ed8
        esi_1 = 4
        sub_448310(edi_1)
        goto label_4147ab

sub_480cd2(eax_1 ^ &var_104)
return 0
