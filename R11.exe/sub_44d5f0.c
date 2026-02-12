// 函数: sub_44d5f0
// 地址: 0x44d5f0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

EnterCriticalSection(&data_c777f4)
void* var_8
void arg_4
sub_44d550(&data_c77810, &var_8, &arg_4)
void* esi = var_8
int32_t edi = data_c77814

if (esi == 0 || esi != &data_c77810)
    __invalid_parameter_noinfo()

void* var_4

if (var_4 == edi)
    sub_465480(".\libadxf.cpp", 0x176)

if (esi == 0)
    __invalid_parameter_noinfo()

if (var_4 == *(esi + 4))
    __invalid_parameter_noinfo()

int32_t* esi_1 = *(var_4 + 0x10)

if (arg1 s>= *(*esi_1 + 8))
    sub_465480(".\libadxf.cpp", 0xda)

int32_t ecx = esi_1[2]

if (ecx == 0 || arg1 u>= (esi_1[3] - ecx) s>> 2)
    __invalid_parameter_noinfo()

int32_t result = *(esi_1[2] + (arg1 << 2))
LeaveCriticalSection(&data_c777f4)
return result
