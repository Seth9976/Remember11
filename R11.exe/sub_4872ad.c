// 函数: sub_4872ad
// 地址: 0x4872ad
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t edi = 0

while (arg1 != *((edi << 3) + &data_4cc078))
    edi += 1
    
    if (edi u>= 0x17)
        break

if (edi u>= 0x17)
    return 

bool cond:0_1 = sub_48edab(3) == 1
bool cond:1_1

if (not(cond:0_1))
    cond:1_1 = sub_48edab(3) != 0

if (cond:0_1 || (not(cond:1_1) && data_4cbab0 == 1))
    HANDLE hFile = GetStdHandle(STD_ERROR_HANDLE)
    
    if (hFile != 0 && hFile != 0xffffffff)
        uint32_t nNumberOfBytesToWrite = _strlen((&data_4cc07c)[edi * 2])
        uint32_t __saved_ecx
        WriteFile(hFile, (&data_4cc07c)[edi * 2], nNumberOfBytesToWrite, &__saved_ecx, nullptr)
else if (arg1 != 0xfc)
    if (sub_48a315(0xc7af00, 0x314, "Runtime Error!\n\nProgram: ") != 0)
        int32_t var_28_1
        __builtin_memset(&var_28_1, 0, 0x14)
        sub_481c1f()
        noreturn
    
    data_c7b01d = 0
    
    if (GetModuleFileNameA(nullptr, &data_c7af19, 0x104) == 0
            && sub_48a315(&data_c7af19, 0x2fb, "<program name unknown>") != 0)
        int32_t var_28_2
        __builtin_memset(&var_28_2, 0, 0x14)
        sub_481c1f()
        noreturn
    
    if (_strlen(&data_c7af19) + 1 u> 0x3c)
        void* eax_7 = _strlen(&data_c7af19) + 0xc7aede
        
        if (sub_48ecf8(eax_7, &data_c7b214 - eax_7, "...", 3) != 0)
            int32_t var_28_4
            __builtin_memset(&var_28_4, 0, 0x14)
            sub_481c1f()
            noreturn
    
    if (sub_48ec87(0xc7af00, 0x314, "\n\n") != 0)
        int32_t var_28_5
        __builtin_memset(&var_28_5, 0, 0x14)
        sub_481c1f()
        noreturn
    
    if (sub_48ec87(0xc7af00, 0x314, (&data_4cc07c)[edi * 2]) != 0)
        int32_t var_28_6
        __builtin_memset(&var_28_6, 0, 0x14)
        sub_481c1f()
        noreturn
    
    sub_48eaca(0xc7af00, "Microsoft Visual C++ Runtime Library", 0x12010)
