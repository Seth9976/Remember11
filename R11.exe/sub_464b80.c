// 函数: sub_464b80
// 地址: 0x464b80
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void** esi = arg1
void** edi = esi

if (*(esi + 0x2d) != 0)
    return 

do
    sub_464b80(edi[2])
    edi = *edi
    
    if (esi[9] u>= 0x10)
        j_sub_4813df(esi[4])
    
    esi[9] = 0xf
    esi[8] = 0
    esi[4].b = 0
    j_sub_4813df(esi)
    esi = edi
while (*(edi + 0x2d) == 0)
