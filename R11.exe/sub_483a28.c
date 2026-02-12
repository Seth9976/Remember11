// 函数: sub_483a28
// 地址: 0x483a28
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t result = 0xffffffff

if (arg1 == 0)
    *__errno() = 0x16
    sub_481d1b(0, 0, 0, 0, 0)
    return 0xffffffff

if ((arg1[3].b & 0x83) != 0)
    result = sub_4836ad(arg1)
    sub_48db55(arg1)
    
    if (sub_48da88(sub_48d847(arg1)) s>= 0)
        void* eax_6 = arg1[7]
        
        if (eax_6 != 0)
            sub_4813df(eax_6)
            arg1[7] = 0
    else
        result = 0xffffffff

arg1[3] = 0
return result
