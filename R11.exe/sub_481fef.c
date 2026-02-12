// 函数: sub_481fef
// 地址: 0x481fef
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

bool cond:1_1

do
    void* result = sub_4814bc(arg1)
    
    if (result != 0)
        return result
    
    cond:1_1 = sub_487490(arg1) == 0
while (not(cond:1_1))

if ((data_c7aa20 & 1) == 0)
    data_c7aa20.d |= 1
    sub_481fd6(&data_c7aa14)
    sub_48258e(sub_49cb2a)

struct std::exception::VTable* var_10
sub_481e9c(&var_10, &data_c7aa14)
var_10 = &std::bad_alloc::`vftable'{for `std::exception'}
sub_482059(&var_10, 0x4aa598)
noreturn
