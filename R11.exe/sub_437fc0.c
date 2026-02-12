// 函数: sub_437fc0
// 地址: 0x437fc0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t eax_16 = data_a5dd14
sub_405e30(7, 0xc, eax_16 + 0x18b70, eax_16 + 0x718b70)

for (void* i = nullptr; i u< 0x30; i += 8)
    void* eax_1 = data_a5dd14
    sub_4427e0(*(i + 0x4bf760) * 0x2c + eax_1 + 0x18a10, 0x900, 0, 
        ((*(eax_1 + (*(i + 0x4bf764) << 2) + 0x18b74) + (((*(eax_1 + 0x18b70) << 2) + 0x13) u>> 4)
            + 0x18b7) << 4) + eax_1)

int32_t eax_4

if (sub_401e00(0xffff8020) != 0)
    if (sub_401e00(0xffff8034) != 0)
        int32_t eax_7 = sub_448760() & 0x80000001
        
        if (eax_7 s< 0)
            eax_7 = ((eax_7 - 1) | 0xfffffffe) + 1
        
        int32_t eax_10 = neg.d(eax_7)
        eax_4 = neg.d(sbb.d(eax_10, eax_10, eax_7 != 0)) + 0xd
    else
        eax_4 = 0xe
else
    eax_4 = 0xd

int32_t ecx_7 = data_a5dd14
sub_405e30(7, eax_4, ecx_7 + 0x518b70, ecx_7 + 0x718b70)
void* eax_13 = data_a5dd14
return sub_4427e0(eax_13 + 0x18a68, 0x900, 0, eax_13 + 0x518b70)
