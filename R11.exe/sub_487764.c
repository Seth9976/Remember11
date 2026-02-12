// 函数: sub_487764
// 地址: 0x487764
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* var_14
sub_481612(&var_14, nullptr)
data_c7b21c = 0
void* var_c
char var_8
uint32_t eax_1

if (arg1 == 0xfffffffe)
    data_c7b21c = 1
    eax_1 = GetOEMCP()
else if (arg1 != 0xfffffffd)
    if (arg1 != 0xfffffffc)
        if (var_8 != 0)
            *(var_c + 0x70) &= 0xfffffffd
        
        return arg1
    
    eax_1 = *(var_14 + 4)
    data_c7b21c = 1
else
    data_c7b21c = 1
    eax_1 = GetACP()

if (var_8 != 0)
    *(var_c + 0x70) &= 0xfffffffd

return eax_1
