// 函数: sub_41ccb0
// 地址: 0x41ccb0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ecx = sx.d(*(arg1 + 0x10))
int32_t* eax_1 = data_e7e648 + 0x13238
data_a5d8f8 = eax_1

if (ecx == 0)
    *eax_1 = 0
    int32_t ecx_1
    ecx_1.b = data_2b5a943
    *(eax_1 + 0x21) = ecx_1.b
    eax_1[*eax_1 * 0x1704 + 0xb] = zx.d(data_2b5a944)
    *(arg1 + 0x10) = 1
else if (ecx != 1)
    return 0

int32_t esi_3 = 0

if (eax_1[0x2933] != 0)
    esi_3 = sub_41a660()
    eax_1 = data_a5d8f8

if (eax_1[0x2933] - 2 u<= 1)
    sub_420160(9)

if (*(data_e7e648 + 0x28a1) == 0 && esi_3 == 0)
    sub_41ca70()

sub_41a940()
sub_41a9b0(zx.d(*(data_e7e648 + 0x289c)))
void* eax_7 = data_e7e648

if (*(eax_7 + 0x28a1) == 0)
    if (*(eax_7 + 0x289c) != 1 && *(data_a5d8f8 + 0x18) == 0)
        sub_41aa60(0)
        sub_41b510()
        return 0
    
    sub_41aa60(1)
    sub_41b510()

return 0
