// 函数: sub_45f700
// 地址: 0x45f700
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t* esi

if ((*(arg2 + 0x1c) & 0x10000) == 0 || *(arg2 + 0xc4) u< 0xfffe0101)
    esi = arg1
    esi[3] = 0x20
else
    esi = arg1
    esi[3] = 0x40

if ((*(arg2 + 0x1c) & 0x100000) != 0)
    int32_t eax = esi[3]
    
    if ((eax.b & 0x40) != 0)
        esi[3] = eax | 0x10

esi[0xf] = 1
sub_479130()
sub_477e10(*esi, esi[1], esi[2], esi[6], esi[0xc])
esi[8] = 0
esi[9] = 0
esi[0x11] = 1

if (data_4cad34 == 0)
    esi[0x11] = 0x80000000

esi[3] |= 4
esi[7] = 2
int32_t eax_2
eax_2.b = 1
return 1
