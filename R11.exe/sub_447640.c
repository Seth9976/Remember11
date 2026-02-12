// 函数: sub_447640
// 地址: 0x447640
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* i = arg2
*arg1 = 0

for (; i != 0; i = sub_447580(arg1, i))
    int32_t var_c_1 = *(i + 4)
    void* i_1 = i
    uint32_t var_14_1 = zx.d(*(i + 3)) u>> 4
    uint32_t var_18_1 = zx.d(*i)
    sub_4653f0("Dma Chan qwc:%d id:%x (%p) next:%p\n")
    
    if (*i != 0)
        int32_t var_c_2
        
        switch ((zx.d(*(i + 3)) u>> 4 & 7) - 1)
            case 0, 1, 4, 6
                var_c_2 = 0x703
            case 2
                var_c_2 = 0x70a
            case 3
                var_c_2 = 0x6f9
            default
                var_c_2 = 0x70e
        
        sub_465480(".\emu.cpp", var_c_2)
