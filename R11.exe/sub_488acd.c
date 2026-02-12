// 函数: sub_488acd
// 地址: 0x488acd
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_8 = arg1
int32_t var_c = arg1
int32_t i = 0
var_8 = 0
sub_482b1f(&var_8)

if (var_8 s> 5)
    return 1

void* esi_2 = GetModuleHandleA(nullptr) * 2
void* edi_1 = zx.d(*(esi_2 + 0x14)) + esi_2 + 0x18

if (*(esi_2 + 6) u> 0)
    do
        if (sub_48a480(".mixcrt", edi_1) == 0)
            return 0
        
        i += 1
        edi_1 += 0x28
    while (i u< zx.d(*(esi_2 + 6)))

return 1
