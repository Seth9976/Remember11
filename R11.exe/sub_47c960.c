// 函数: sub_47c960
// 地址: 0x47c960
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t hLibModule = InterlockedDecrement(0xc7a9f0)

if (hLibModule == 0)
    hLibModule = data_c7a9ec
    
    if (hLibModule != 0)
        hLibModule = FreeLibrary(hLibModule)
        data_c7a9ec = 0

return hLibModule
