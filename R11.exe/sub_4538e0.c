// 函数: sub_4538e0
// 地址: 0x4538e0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t* edi = arg1

if (edi == arg2)
    return 

int32_t* esi_1 = &edi[2]

do
    *edi = 0
    struct _EXCEPTION_REGISTRATION_RECORD** eax = *esi_1
    
    if (eax != 0)
        j_sub_4813df(eax)
    
    *esi_1 = 0
    esi_1[1] = 0
    esi_1[2] = 0
    edi = &edi[5]
    esi_1 = &esi_1[5]
while (edi != arg2)
