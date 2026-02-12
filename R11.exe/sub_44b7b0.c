// 函数: sub_44b7b0
// 地址: 0x44b7b0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (arg2 u> 0xfffffffe)
    sub_4971b8()
    noreturn

struct _EXCEPTION_REGISTRATION_RECORD** eax = *(arg1 + 0x18)

if (eax u< arg2)
    char* eax_2 = sub_44ab60(arg1, arg2, *(arg1 + 0x14))
    return neg.d(sbb.d(eax_2, eax_2, 0 u< arg2))

if (arg3 == 0 || arg2 u>= 0x10)
    if (arg2 == 0)
        *(arg1 + 0x14) = arg2
        
        if (eax u>= 0x10)
            **(arg1 + 4) = arg2.b
            return neg.d(sbb.d(eax, eax, 0 u< arg2))
        
        *(arg1 + 4) = 0
    
    return neg.d(sbb.d(eax, eax, 0 u< arg2))

void* edi = *(arg1 + 0x14)

if (arg2 u< edi)
    edi = arg2

if (eax u>= 0x10)
    int128_t* ebp_1 = *(arg1 + 4)
    
    if (edi u> 0)
        sub_481d4f(arg1 + 4, 0x10, ebp_1, edi)
    
    eax = j_sub_4813df(ebp_1)

*(arg1 + 0x14) = edi
*(arg1 + 0x18) = 0xf
*(arg1 + edi + 4) = 0
return neg.d(sbb.d(eax, eax, 0 u< arg2))
