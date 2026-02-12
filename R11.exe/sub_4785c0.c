// 函数: sub_4785c0
// 地址: 0x4785c0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* eax = *(arg1 + 0x44)

if (eax != 0)
    sub_4813df(eax)
    *(arg1 + 0x44) = 0

*(arg1 + 0x4c) = 0
*(arg1 + 0x48) = 0
void* eax_1 = *(arg1 + 0x38)

if (eax_1 != 0)
    sub_4813df(eax_1)
    *(arg1 + 0x38) = 0

*(arg1 + 0x40) = 0
*(arg1 + 0x3c) = 0
void* eax_2 = *(arg1 + 0x2c)

if (eax_2 != 0)
    sub_4813df(eax_2)
    *(arg1 + 0x2c) = 0

*(arg1 + 0x34) = 0
*(arg1 + 0x30) = 0
void* eax_3 = *(arg1 + 0x20)

if (eax_3 != 0)
    sub_4813df(eax_3)
    *(arg1 + 0x20) = 0

*(arg1 + 0x28) = 0
*(arg1 + 0x24) = 0
struct _EXCEPTION_REGISTRATION_RECORD** result = *(arg1 + 0x14)

if (result != 0)
    result = sub_4813df(result)
    *(arg1 + 0x14) = 0

*(arg1 + 0x18) = 0
*(arg1 + 0x1c) = 0
return result
