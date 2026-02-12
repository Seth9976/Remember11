// 函数: sub_44c570
// 地址: 0x44c570
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t eax = arg1 & 0xfff0
int32_t edi_1 = arg1 & 0xf

if (eax u> 0x8100)
    if (eax u> 0x8160)
        if (eax == 0x90b0 || eax == 0x90e0)
            return 0
        
        if (eax == 0x9150)
            sub_44c0d0(arg2)
            return 0
        
        sub_465480(".\emu.cpp", 0xfc6)
        return 0
    
    if (eax == 0x8160)
        return 0
    
    if (eax - 0x8110 u> 0x30)
        sub_465480(".\emu.cpp", 0xfc6)
        return 0
    
    switch (eax)
        case 0x8110
            sub_449bd0(0xc777d8, *arg2)
        case 0x8120
            int32_t __saved_esi_5 = *arg2
            sub_448250()
    
    return 0

if (eax == 0x8100)
    *arg3 = 0xc5e168
    return 0

if (eax u<= 0x8020)
    if (eax == 0x8020)
        sub_44fac0(data_c5f718)
        return 0
    
    if (eax u> 0x8000)
        if (eax == 0x8010)
            sub_44f930(data_c5f718, data_a5e15c, data_a5e158)
            return 0
        
        sub_465480(".\emu.cpp", 0xfc6)
        return 0
    
    if (eax == 0x8000)
        if (data_c5f718 != 0)
            return 0
        
        int32_t __saved_esi_1 = 0
        int32_t var_c_3 = 0
        data_c5f718 = sub_44fcd0(2)
        return 0
    
    if (eax == 0xc0)
        return 0
    
    if (eax != 0xd0)
        sub_465480(".\emu.cpp", 0xfc6)
        return 0
    
    int32_t eax_4 = sub_449c70(*arg2)
    int32_t eax_5
    int32_t edx
    edx:eax_5 = muls.dp.d(0xef9db22d, eax_4 * 0xffffd8f0)
    int32_t edx_1 = edx s>> 6
    int32_t eax_8 = (edx_1 u>> 0x1f) + edx_1
    
    if (eax_8 s< 0xffffd8f0)
        eax_8 = 0xffffd8f0
    else if (eax_8 s> 0)
        eax_8 = 0
    else if (eax_8 s< 0xffffd8f0)
        eax_8 = 0xffffd8f0
    
    if (edi_1 == 0)
        sub_448280(0xc777d8, eax_8)
        return 0
    
    if (edi_1 != 1)
        sub_465480(".\emu.cpp", 0xf80)
        return 0
    
    sub_44f8b0(data_c5f718, eax_4)
    return 0

if (eax - 0x8030 u> 0xc0)
    sub_465480(".\emu.cpp", 0xfc6)
    return 0

switch (eax)
    case 0x8030, 0x8040, 0x80a0
        return 0
    case 0x8050, 0x8060, 0x8070, 0x8080, 0x8090, 0x80b0, 0x80c0, 0x80d0, 0x80e0
        sub_465480(".\emu.cpp", 0xfc6)
        return 0
    case 0x80f0
        *arg3 = 1
        return 0
