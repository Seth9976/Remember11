// 函数: sub_403470
// 地址: 0x403470
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* __saved_esi_2 = *(arg1 + 0x44)
int32_t eax
void* edx

if (*(__saved_esi_2 + 2) != 0)
    eax, edx = sub_4025e0(arg1)
else
    eax, edx = sub_4024c0(arg1)

if (eax == 0)
    void* __saved_esi_1 = __saved_esi_2
    sub_403240(*(__saved_esi_2 + 0xc), edx)

return 0
