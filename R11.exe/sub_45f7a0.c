// 函数: sub_45f7a0
// 地址: 0x45f7a0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

(*(*data_c78668 + 0x3c))()
(*(*data_c78664 + 0x18))()
bool cond:0 = data_4cad55 != 1
data_c78638 = 0
data_c7862c = 0

if (not(cond:0))
    sub_406fd0()

sub_407020()
bool cond:1 = data_c78674 != 1
data_4cad55 = 0

if (not(cond:1))
    data_c78674 = 0
    SendMessageW(sub_46f1f0(), 0x10, 0, 0)

(*(*data_c78668 + 0x40))()
(*(*data_c78658 + 8))()
int32_t* eax_6 = (*(*data_c78668 + 0x38))()
sub_4710a0()
int32_t eax_7 = *eax_6
int32_t var_10

if (eax_7 != 0)
    int32_t var_4_1 = data_c79dbc
    int32_t* ecx_5 = data_c78668
    var_10 = 0
    int32_t var_8_1 = eax_7
    int32_t var_c_1 = 0
    (*(*ecx_5 + 0x64))(&var_10, 0xff000000)

int32_t ecx_6 = *eax_6
int32_t eax_10 = data_c79db8
int32_t ebp = eax_6[2] + ecx_6

if (ebp != eax_10)
    int32_t var_4_2 = data_c79dbc
    int32_t* ecx_8 = data_c78668
    int32_t var_c_2 = 0
    int32_t var_8_2 = eax_10 - ecx_6
    var_10 = ebp
    (*(*ecx_8 + 0x64))(&var_10, 0xff000000)

int32_t ebp_1 = eax_6[1]

if (ebp_1 != 0)
    int32_t eax_14 = data_c79db8
    var_10 = 0
    int32_t var_c_3 = 0
    int32_t var_8_3 = eax_14
    int32_t var_4_3 = ebp_1
    (*(*data_c78668 + 0x64))(&var_10, 0xff000000)

int32_t ebp_2 = eax_6[3]
int32_t eax_15 = data_c79dbc

if (eax_6[1] + ebp_2 != eax_15)
    int32_t ecx_12 = eax_6[1]
    int32_t esi_1 = data_c79db8
    int32_t var_c_4 = ecx_12 + ebp_2
    int32_t* ecx_14 = data_c78668
    var_10 = 0
    int32_t var_4_4 = eax_15 - ecx_12
    int32_t var_8_4 = esi_1
    (*(*ecx_14 + 0x64))(&var_10, 0xff000000)

(*(*data_c78668 + 0x4c))()
(*(*data_c78668 + 0x54))()
int32_t* ecx_17 = data_c78660

if (ecx_17 != 0 && (*(*ecx_17 + 0x24))() == 0)
    int32_t eax_22 = (*(*data_c78660 + 0x20))()
    
    if (eax_22 != 0)
        (*(*data_c78668 + 0x5c))(eax_6, eax_22)

(*(*data_c78668 + 0x50))()
(*(*arg1 + 0xa8))(arg1)
data_c78675 = 0
return 0
