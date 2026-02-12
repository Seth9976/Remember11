// 函数: sub_481e36
// 地址: 0x481e36
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

*arg1 = &std::exception::`vftable'
char* eax = *arg2

if (eax == 0)
    arg1[1] = 0
else
    void* esi_2 = _strlen(eax) + 1
    void* eax_2 = sub_4814bc(esi_2)
    arg1[1] = eax_2
    
    if (eax_2 != 0)
        sub_48a315(eax_2, esi_2, *arg2)

arg1[2] = 1
return arg1
