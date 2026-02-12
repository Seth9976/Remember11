// 函数: sub_44e4e0
// 地址: 0x44e4e0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* result_1
int32_t eax_1 = __security_cookie ^ &result_1
EnterCriticalSection(&data_c777f4)
void arg_4
sub_44d550(&data_c77810, &result_1, &arg_4)
void* result_2 = result_1
int32_t edi = data_c77814

if (result_2 == 0 || result_2 != &data_c77810)
    __invalid_parameter_noinfo()

void* var_21c

if (var_21c == edi)
    sub_465480(".\libadxf.cpp", 0x150)

if (result_2 == 0)
    __invalid_parameter_noinfo()

if (var_21c == *(result_2 + 4))
    __invalid_parameter_noinfo()

int32_t* edi_1 = *(var_21c + 0x10)

if (var_21c == *(result_2 + 4))
    __invalid_parameter_noinfo()

if (arg1 s>= *(**(var_21c + 0x10) + 8))
    if (var_21c == *(result_2 + 4))
        __invalid_parameter_noinfo()
    
    int32_t var_234_1 = *(**(var_21c + 0x10) + 8)
    int32_t var_238_1 = arg1
    sub_4653f0("%d %d\n")
    sub_465480(".\libadxf.cpp", 0x155)

void var_20c
sub_44d1f0(&var_20c, *edi_1 + 0x10)
void* result = sub_481fef(0x48)
void* result_3 = nullptr
sub_480cf0(result, 0, 0x48)
void* result_4 = sub_481fef(0x30)

if (result_4 != 0)
    *(result_4 + 0x2c) = 0
    *(result_4 + 4) = 0
    *(result_4 + 8) = 0
    *result_4 = &CFile::`vftable'
    result_3 = result_4

int32_t var_234_3 = 1
result_1 = result_3
sub_465b80(result_3, &var_20c, 0, 1)
*(result + 1) = 2
*(result + 4) = result_3

if (arg1 s>= *(*edi_1 + 8))
    sub_465480(".\libadxf.cpp", 0xc6)

*(result + 0x10) = zx.d(*(*edi_1 + (arg1 << 1) + 0x11c)) << 0xb
*(result + 0x14) = 0

if (arg1 s>= *(*edi_1 + 8))
    sub_465480(".\libadxf.cpp", 0xc6)

*(result + 0xc) = zx.d(*(*edi_1 + (arg1 << 1) + 0x11c))
*(result + 0x1c) = sub_44d160(edi_1, arg1)
(*(*result_3 + 0x2c))(sub_44d160(edi_1, arg1), 0)
result_1 = result
int32_t var_21c_1 = 1
void var_218
sub_44dd20(0xc7781c, &var_218, &result_1)
LeaveCriticalSection(&data_c777f4)
sub_480cd2(eax_1 ^ &result_1)
return result
