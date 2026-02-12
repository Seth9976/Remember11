// 函数: sub_41e5b0
// 地址: 0x41e5b0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (*(data_4b187c + 0x20) != 0)
    if (sub_409160(0) != 0)
        return 1
    
    void* ecx_1 = data_4b187c
    void* eax_4 = mods.dp.d(sx.q(*(ecx_1 + 0x1c) + *(ecx_1 + 8)), 0xc) * 0x238 + ecx_1
    int32_t ecx_2 = *(ecx_1 + 0x20)
    
    if (ecx_2 s< zx.d(*(eax_4 + 0x450a)))
        int32_t __saved_esi_1 = 1
        sub_409100(0, zx.d(*(eax_4 + 0x4508)) + ecx_2)
        sub_409010(0, 0x80)
        void* eax_7 = data_4b187c
        *(eax_7 + 0x20) += 1
        return 1

return 0
