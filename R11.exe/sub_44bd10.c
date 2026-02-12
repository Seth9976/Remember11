// 函数: sub_44bd10
// 地址: 0x44bd10
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$___std_fs_get_file_id@8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_30
int32_t edx = arg4[1]
int32_t* eax_4 = *(arg1 + 4)
int32_t var_20 = *arg4
int32_t var_1c = edx
int32_t edi

if (eax_4 != 0)
    edi = (*(arg1 + 0xc) - eax_4) s>> 3
else
    edi = 0

if (arg3 != 0)
    int32_t ecx_1
    
    if (eax_4 != 0)
        ecx_1 = (*(arg1 + 8) - eax_4) s>> 3
    else
        ecx_1 = 0
    
    if (0x1fffffff - ecx_1 u< arg3)
        sub_44d6e0()
        noreturn
    
    int32_t ecx_4
    
    if (eax_4 != 0)
        ecx_4 = (*(arg1 + 8) - eax_4) s>> 3
    else
        ecx_4 = 0
    
    if (edi u< ecx_4 + arg3)
        uint32_t ecx_9 = edi u>> 1
        void* edi_3
        
        if (0x1fffffff - ecx_9 u>= edi)
            edi_3 = edi + ecx_9
        else
            edi_3 = nullptr
        
        int32_t ecx_10
        
        if (eax_4 != 0)
            ecx_10 = (*(arg1 + 8) - eax_4) s>> 3
        else
            ecx_10 = 0
        
        if (edi_3 u< ecx_10 + arg3)
            int32_t ecx_14
            
            if (eax_4 != 0)
                ecx_14 = (*(arg1 + 8) - eax_4) s>> 3
            else
                ecx_14 = 0
            
            edi_3 = ecx_14 + arg3
        
        int32_t var_34_1 = 0
        void* eax_5 = sub_44a100(edi_3)
        int32_t var_3c_1 = 0
        void* var_40_1 = arg3
        void* var_44_1 = arg1
        void* var_18 = eax_5
        int32_t var_8_1 = 0
        void* eax_8 = sub_44ba90(sub_44aa50(*(arg1 + 4), arg2, eax_5), arg3, &var_20)
        int32_t var_34_3 = 0
        void* var_38_3 = arg3
        void* var_3c_3 = arg1
        sub_44aa50(arg2, *(arg1 + 8), eax_8)
        void* ecx_21 = *(arg1 + 4)
        int32_t eax_10
        
        if (ecx_21 != 0)
            eax_10 = (*(arg1 + 8) - ecx_21) s>> 3
        else
            eax_10 = 0
        
        if (ecx_21 != 0)
            j_sub_4813df(ecx_21)
        
        void* eax_13 = eax_5 + ((arg3 + eax_10) << 3)
        *(arg1 + 0xc) = eax_5 + (edi_3 << 3)
        *(arg1 + 8) = eax_13
        *(arg1 + 4) = eax_5
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_13
    
    int32_t* ebx_4 = *(arg1 + 8)
    
    if ((ebx_4 - arg2) s>> 3 u< arg3)
        int32_t* eax_17 = arg3 << 3
        sub_44bb00(arg2, ebx_4, eax_17 + arg2)
        int32_t* eax_19 = *(arg1 + 8)
        int32_t var_8_2 = 2
        sub_44ba90(eax_19, arg3 - ((eax_19 - arg2) s>> 3), &var_20)
        *(arg1 + 8) += eax_17
        int32_t* eax_21 = sub_44aa20(arg2, *(arg1 + 8) - eax_17, &var_20)
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_21
    
    int32_t ecx_31 = arg3 << 3
    void* eax_23 = ebx_4 - ecx_31
    *(arg1 + 8) = sub_44bb00(eax_23, ebx_4, ebx_4)
    sub_44b740(arg2, eax_23, ebx_4)
    eax_4 = sub_44aa20(arg2, ecx_31 + arg2, &var_20)

fsbase->NtTib.ExceptionList = ExceptionList
return eax_4
