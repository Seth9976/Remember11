// 函数: sub_447a20
// 地址: 0x447a20
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t edi = 0

if (arg2 - 1 u> 0x12)
    sub_465480(".\emu.cpp", 0x9ed)
else
    switch (arg2 + &jump_table_447ab0[4]:3)
        case &lookup_table_447ac4
            edi = 0x44
        case &lookup_table_447ac4[1], &lookup_table_447ac4[3], &lookup_table_447ac4[4], 
                &lookup_table_447ac4[5], &lookup_table_447ac4[6], &lookup_table_447ac4[7], 
                &lookup_table_447ac4[8], &lookup_table_447ac4[0xa], &lookup_table_447ac4[0xb], 
                &lookup_table_447ac4[0xc], &lookup_table_447ac4[0xd], &lookup_table_447ac4[0xe], 
                &lookup_table_447ac4[0xf], &lookup_table_447ac4[0x10], &lookup_table_447ac4[0x11]
            sub_465480(".\emu.cpp", 0x9ed)
        case &lookup_table_447ac4[2]
            edi = 0x64
        case &lookup_table_447ac4[9]
            edi = 0x48
        case &lookup_table_447ac4[0x12]
            edi = 6

int32_t result
int32_t edx
edx:result = sx.q(zx.d(arg3))
*(arg1 + 0x30) = 0
*(arg1 + 0x34) = 0
*(arg1 + 0x40) = 0
*(arg1 + 0x44) = 0
*(arg1 + 0x50) = 0
*(arg1 + 0x54) = 0
*(arg1 + 0x20) = edi
*(arg1 + 0x24) = result
return result
