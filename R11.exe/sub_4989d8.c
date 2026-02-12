// 函数: sub_4989d8
// 地址: 0x4989d8
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

char* edi = arg1
uint32_t esi = 0
uint32_t var_c = 0
char* var_8 = arg2
void* var_1c
sub_481612(&var_1c, arg4)
void* var_14
char var_10

if ((edi == 0 && arg3 != 0) || (arg2 == 0 && arg3 != 0))
    *__errno() = 0x16
    sub_481d1b(0, 0, 0, 0, 0)
    
    if (var_10 != 0)
        *(var_14 + 0x70) &= 0xfffffffd
    
    return 0x7fffffff

if (*(var_1c + 0x14) == 0)
    uint32_t result = ___ascii_memicmp(edi, arg2, arg3)
    
    if (var_10 != 0)
        *(var_14 + 0x70) &= 0xfffffffd
    
    return result

while (arg3 != 0)
    arg3 -= 1
    
    if (esi != var_c)
        break
    
    esi = sub_481694(zx.d(*edi), &var_1c)
    edi = &edi[1]
    uint32_t eax_8 = sub_481694(zx.d(*var_8), &var_1c)
    var_8 = &var_8[1]
    var_c = eax_8

if (var_10 != 0)
    *(var_14 + 0x70) &= 0xfffffffd

return esi - var_c
