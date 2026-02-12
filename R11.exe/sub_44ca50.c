// 函数: sub_44ca50
// 地址: 0x44ca50
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (arg2 == 0)
    *arg1 = arg2
    return 

uint32_t edi_1 = lstrlenA(arg2) + 1
sub_44c930(arg1, edi_1, &arg1[1], 0x80)
int32_t eax_3 = MultiByteToWideChar(arg3, 0, arg2, edi_1, *arg1, edi_1)
int32_t esi_1 = neg.d(eax_3)
int32_t esi_2 = sbb.d(esi_1, esi_1, eax_3 != 0)
int32_t esi_3 = esi_2 + 1

if (esi_2 == 0xffffffff)
    return 

if (GetLastError() == 0x7a)
    int32_t cchWideChar = MultiByteToWideChar(arg3, 0, arg2, edi_1, nullptr, 0)
    sub_44c930(arg1, cchWideChar, &arg1[1], 0x80)
    eax_3 = MultiByteToWideChar(arg3, 0, arg2, edi_1, *arg1, cchWideChar)
    int32_t esi_6 = neg.d(eax_3)
    esi_3 = sbb.d(esi_6, esi_6, eax_3 != 0) + 1

if (esi_3 != 0)
    sub_44c910()
    noreturn
