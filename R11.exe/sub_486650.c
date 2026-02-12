// 函数: sub_486650
// 地址: 0x486650
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

for (void* i = &data_4cbf58; i s< &data_4cc078; i += 8)
    CRITICAL_SECTION* lpCriticalSection_1 = *i
    
    if (lpCriticalSection_1 != 0 && *(i + 4) != 1)
        DeleteCriticalSection(lpCriticalSection_1)
        sub_4813df(lpCriticalSection_1)
        *i = 0

CRITICAL_SECTION* lpCriticalSection

for (void* i_1 = &data_4cbf58; i_1 s< &data_4cc078; i_1 += 8)
    lpCriticalSection = *i_1
    
    if (lpCriticalSection != 0 && *(i_1 + 4) == 1)
        lpCriticalSection = DeleteCriticalSection(lpCriticalSection)

return lpCriticalSection
