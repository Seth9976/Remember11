// 函数: sub_46b0a0
// 地址: 0x46b0a0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (arg2 == 0)
    ov_pcm_seek(arg1 + 0x38, 0, 0)
    *(arg1 + 0x1c) = 0
    return 0

int32_t eax_2 = *(arg1 + 0x20)
*(arg1 + 0x1c) = eax_2
ov_pcm_seek(arg1 + 0x38, eax_2, 0)
return 0
