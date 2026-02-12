// 函数: sub_481e9c
// 地址: 0x481e9c
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

*arg1 = &std::exception::`vftable'
int32_t eax = *(arg2 + 8)
arg1[2] = eax
char* eax_1 = *(arg2 + 4)

if (eax == 0)
    arg1[1] = eax_1
else if (eax_1 == 0)
    arg1[1] = 0
else
    void* edi_2 = _strlen(eax_1) + 1
    void* eax_3 = sub_4814bc(edi_2)
    arg1[1] = eax_3
    
    if (eax_3 != 0)
        sub_48a315(eax_3, edi_2, *(arg2 + 4))

return arg1
