// 函数: sub_46bdf0
// 地址: 0x46bdf0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t* var_4 = arg1

if (arg1[1] == 0)
    return 0x800401f0

int32_t* eax_2 = (*(*arg1 + 0xc))()

if (eax_2 == 0)
    return 0x80004005

int32_t eax_4

if (arg1[8] == 0)
    eax_4 = sub_46b420(eax_2, &var_4)
    
    if (eax_4 s< 0)
        return eax_4
    
    if (var_4 != 0)
        eax_4 = (*(*arg1 + 8))(eax_2, 0)
        
        if (eax_4 s< 0)
            return eax_4
else
    DebugBreak()
    arg1[8]
    eax_4 = sub_46b420(eax_2, &var_4)
    
    if (eax_4 s< 0)
        return eax_4
    
    if (var_4 != 0)
        int32_t eax_6 = (*(*arg1[8] + 8))(eax_2, 0)
        
        if (eax_6 s< 0)
            return eax_6

if ((arg1[5].b & 0x80) != 0)
    (*(*eax_2 + 0x3c))(eax_2, arg4)

if (arg5 != 0xffffffff && (arg1[5].b & 0x20) != 0)
    (*(*eax_2 + 0x44))(eax_2, arg5)

if ((arg1[5].b & 0x40) != 0)
    (*(*eax_2 + 0x40))(eax_2, arg6)

arg1[0xb] = arg2
arg1[0xc] = arg3
return (*(*eax_2 + 0x30))(eax_2, 0, arg2, arg3)
