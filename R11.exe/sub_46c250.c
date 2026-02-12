// 函数: sub_46c250
// 地址: 0x46c250
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_49a9bb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct CSound::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_24 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct CSound::VTable** var_10_1 = arg1
*arg1 = &CSound::`vftable'
arg1[0xe] = 0
int32_t var_4 = 0
arg1[9] = 0
arg1[0xa] = 0
arg1[0xd].b = 0
*(arg1 + 0x35) = 0
arg1[8] = arg7

if (arg4 u> 0)
    arg1[3] = arg5
    int32_t ecx_1
    ecx_1.b = mulu.dp.d(arg4, 4) u>> 0x20 != 0
    arg1[1] = j_sub_481fef(neg.d(ecx_1) | (arg4 * 4))
    void* eax_9 = j_sub_481fef(arg3 * arg4)
    void* eax_10 = arg1[0xe]
    
    if (eax_9 != eax_10)
        j_sub_4813df(eax_10)
    
    arg1[0xe] = eax_9
    j_sub_4813df(nullptr)
    
    if (arg1[1] != 0)
        int32_t eax_11 = 0
        
        if (arg4 u> 0)
            do
                *(arg1[1] + (eax_11 << 2)) = *(arg2 + (eax_11 << 2))
                eax_11 += 1
            while (eax_11 u< arg4)
        
        bool cond:2_1 = arg1[8] != 0
        arg1[2] = arg3
        arg1[4] = arg4
        arg1[5] = arg6
        
        if (not(cond:2_1))
            int32_t* vFunc_0 = arg1[1]->vFunc_0
            (*(arg1[3]->vFunc_0 + 0x10))(0)
            sub_46bc00(arg1, vFunc_0, 0, 0, arg1[2])
    
    arg1[6] = 0
    arg1[7] = 0

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
