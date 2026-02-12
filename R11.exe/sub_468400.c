// 函数: sub_468400
// 地址: 0x468400
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t* var_4 = arg1
void* edi = *arg1

if (edi == 0)
    return 

sub_4973f8(&var_4, 0)
int32_t eax_1 = *(edi + 4)

if (eax_1 u> 0 && eax_1 u< 0xffffffff)
    *(edi + 4) = eax_1 - 1

int32_t esi_1 = *(edi + 4)
int32_t esi_2 = neg.d(esi_1)
void* esi_5 = not.d(sbb.d(esi_2, esi_2, esi_1 != 0)) & edi
sub_497419(&var_4)

if (esi_5 != 0)
    (**esi_5)(1)
