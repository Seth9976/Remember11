// 函数: sub_44b9c0
// 地址: 0x44b9c0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ecx = *(arg1 + 0x18)
void* ebx = arg1 + 4
void* eax

if (ecx u< 0x10)
    eax = ebx
else
    eax = *ebx

if (arg2 u>= eax)
    void* eax_1
    
    if (ecx u< 0x10)
        eax_1 = ebx
    else
        eax_1 = *ebx
    
    if (*(arg1 + 0x14) + eax_1 u> arg2)
        if (ecx u>= 0x10)
            ebx = *ebx
        
        return sub_44b8e0(arg1, arg1, arg2 - ebx, arg3)

if (arg3 u> 0xfffffffe)
    sub_4971b8()
    noreturn

int32_t eax_4 = *(arg1 + 0x18)
bool cond:1

if (eax_4 u>= arg3)
    cond:1 = arg3 u<= 0
    
    if (arg3 == 0)
        *(arg1 + 0x14) = arg3
        
        if (eax_4 u>= 0x10)
            ebx = *ebx
        
        *ebx = 0
        return arg1
else
    sub_44ab60(arg1, arg3, *(arg1 + 0x14))
    cond:1 = arg3 u<= 0

if (not(cond:1))
    int32_t ecx_4 = *(arg1 + 0x18)
    void* eax_5
    
    if (ecx_4 u< 0x10)
        eax_5 = ebx
    else
        eax_5 = *ebx
    
    sub_481d4f(eax_5, ecx_4, arg2, arg3)
    bool cond:3_1 = *(arg1 + 0x18) u< 0x10
    *(arg1 + 0x14) = arg3
    
    if (not(cond:3_1))
        ebx = *ebx
    
    *(ebx + arg3) = 0

return arg1
