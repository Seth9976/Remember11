// 函数: sub_411e10
// 地址: 0x411e10
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* eax = *(arg1 + 0x44)
bool cond:0 = *(eax + 0xc) != 1
data_a59b24 = eax

if (not(cond:0))
    *(eax + 0xc) = 0
    *(eax + 0x10) = 1
    *(eax + 8) = 0
    *(eax + 0x14) = 0x80000
    *(arg1 + 0x10) = 0x64

int32_t edx = sx.d(*(arg1 + 0x10))

if (edx == 0)
    *(eax + 0x10) = 1
    *(eax + 8) = 0
    *(eax + 0x14) = 0
    *(arg1 + 0x10) = 1
    *(eax + 0x10) = 0
    *(eax + 0x14) = 0x80000
else if (edx == 1)
    *(eax + 0x10) = 0
    *(eax + 0x14) = 0x80000
else if (edx == 0x64)
    int32_t var_c = 0
    *(eax + 0x14) = 0
    sub_40fca0(eax, (edx - 1).b - 0x63)
    return 0

sub_442e20()
void* eax_2 = data_a59b24
void* edx_4 = data_e7e648
data_c7bbf0 = 1
data_4b0e17 = (*(eax_2 + 0x14) s>> 0xc).b
sub_444420(edx_4 + 0x10f240, 0x4b0e04, 0x4b0e14, 4)
sub_442c30(data_e7e648 + 0x10f240, 4)
int32_t eax_7
int32_t edx_6
edx_6:eax_7 = sx.q(*(data_a59b24 + 0x14) s>> 0xc)
data_4b0e1b = ((eax_7 + (edx_6 & 3)) s>> 2).b
sub_4437c0(0x4b0e04, 0x4b0e18, 4)
sub_442f40()
return 0
