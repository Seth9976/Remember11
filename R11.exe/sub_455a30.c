// 函数: sub_455a30
// 地址: 0x455a30
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

*arg1 = *arg2
arg1[1] = arg2[1]
arg1[2] = arg2[2]
arg1[3] = arg2[3]
arg1[4] = arg2[4]
arg1[5] = arg2[5]
arg1[6] = arg2[6]
arg1[7] = arg2[7]
arg1[8] = arg2[8]
arg1[9] = arg2[9]
arg1[0xa] = fconvert.s(fconvert.t(arg2[0xa]))
arg1[0xb] = fconvert.s(fconvert.t(arg2[0xb]))
arg1[0xc] = arg2[0xc]
arg1[0xd] = arg2[0xd]
arg1[0xe] = arg2[0xe]
arg1[0xf] = arg2[0xf]
int32_t* ebx = arg2[0x10]

if (arg1[0x10] != ebx)
    if (ebx != 0)
        (*(*ebx + 4))(ebx)
    
    int32_t* eax_6 = arg1[0x10]
    
    if (eax_6 != 0)
        (*(*eax_6 + 8))(eax_6)
    
    arg1[0x10] = ebx

arg1[0x11] = arg2[0x11]
arg1[0x12].b = arg2[0x12].b
arg1[0x13] = arg2[0x13]
arg1[0x14] = arg2[0x14]
arg1[0x15] = arg2[0x15]
int32_t edx_6
edx_6.b = arg2[0x16].b
arg1[0x16].b = edx_6.b
arg1[0x17] = arg2[0x17]
arg1[0x18] = arg2[0x18]
arg1[0x19] = arg2[0x19]
arg1[0x1a] = arg2[0x1a]
arg1[0x1b] = arg2[0x1b]
arg1[0x1c] = arg2[0x1c]
arg1[0x1d] = arg2[0x1d]
arg1[0x1e].b = arg2[0x1e].b
return arg1
