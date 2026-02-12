// 函数: sub_459700
// 地址: 0x459700
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_49a0c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_40 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_40
void* var_18 = arg1
int32_t* eax_3 = arg4
int32_t var_30 = *eax_3
void var_2c
sub_457d80(&var_2c, &eax_3[1])
int32_t ecx_2 = *(arg1 + 4)
int32_t edi = 0
int32_t var_8_1 = 0

if (ecx_2 != 0)
    int32_t eax_5
    int32_t edx_3
    edx_3:eax_5 = muls.dp.d(0x66666667, *(arg1 + 0xc) - ecx_2)
    int32_t edx_4 = edx_3 s>> 3
    edi = (edx_4 u>> 0x1f) + edx_4

int32_t* ebx = arg3

if (ebx != 0)
    int32_t eax_6
    
    if (ecx_2 != 0)
        int32_t eax_7
        int32_t edx_7
        edx_7:eax_7 = muls.dp.d(0x66666667, *(arg1 + 8) - ecx_2)
        int32_t edx_8 = edx_7 s>> 3
        eax_6 = (edx_8 u>> 0x1f) + edx_8
    else
        eax_6 = 0
    
    if (0xccccccc - eax_6 u< ebx)
        sub_44d6e0()
        noreturn
    
    int32_t eax_10
    
    if (ecx_2 != 0)
        int32_t eax_11
        int32_t edx_12
        edx_12:eax_11 = muls.dp.d(0x66666667, *(arg1 + 8) - ecx_2)
        int32_t edx_13 = edx_12 s>> 3
        eax_10 = (edx_13 u>> 0x1f) + edx_13
    else
        eax_10 = 0
    
    if (edi u>= eax_10 + ebx)
        void* ecx_11 = *(arg1 + 8)
        int32_t* i = arg2
        
        if ((ecx_11 - i) s/ 0x14 u>= ebx)
            void* ebx_5 = ebx * 0x14
            void* eax_48 = ecx_11 - ebx_5
            *(arg1 + 8) = sub_4593b0(eax_48, ecx_11, ecx_11)
            sub_4593e0(i, eax_48, ecx_11)
            
            for (void* ebx_6 = ebx_5 + i; i != ebx_6; i = &i[5])
                *i = var_30
                sub_456bf0(&i[1], &var_2c)
        else
            void* eax_40 = ebx * 0x14
            sub_4593b0(i, ecx_11, eax_40 + i)
            int32_t* ecx_13 = *(arg1 + 8)
            var_8_1.b = 3
            sub_459370(ecx_13, ebx - (ecx_13 - i) s/ 0x14, &var_30)
            *(arg1 + 8) += eax_40
            void* esi_2 = *(arg1 + 8) - eax_40
            int32_t var_8_2 = 0
            
            if (i != esi_2)
                int32_t* i_1 = i
                
                do
                    *i_1 = var_30
                    sub_456bf0(&i_1[1], &var_2c)
                    i_1 = &i_1[5]
                while (i_1 != esi_2)
    else
        uint32_t eax_16 = edi u>> 1
        int32_t edi_3
        
        if (0xccccccc - eax_16 u>= edi)
            edi_3 = edi + eax_16
        else
            edi_3 = 0
        
        int32_t eax_17
        
        if (ecx_2 != 0)
            int32_t eax_18
            int32_t edx_17
            edx_17:eax_18 = muls.dp.d(0x66666667, *(arg1 + 8) - ecx_2)
            int32_t edx_18 = edx_17 s>> 3
            eax_17 = (edx_18 u>> 0x1f) + edx_18
        else
            eax_17 = 0
        
        if (edi_3 u< eax_17 + ebx)
            edi_3 = sub_45c530(arg1) + ebx
        
        int32_t var_44_1 = 0
        void* eax_23 = sub_45d680(edi_3)
        int32_t var_4c_1 = 0.d
        void* var_50_1 = eax_23
        void* var_54_1 = arg1
        var_8_1.b = 1
        int32_t* eax_25 = GSI1::QueryMiniPDBForTiDefnUDT2(*(arg1 + 4), arg2, eax_23)
        arg3 = eax_25
        void* eax_26 = sub_459370(eax_25, ebx, &var_30)
        int32_t var_44_3 = 0.d
        void* var_48_3 = eax_26
        void* var_4c_3 = arg1
        GSI1::QueryMiniPDBForTiDefnUDT2(arg2, *(arg1 + 8), eax_26)
        int32_t* ecx_7 = *(arg1 + 4)
        int32_t eax_28
        
        if (ecx_7 != 0)
            int32_t eax_29
            int32_t edx_25
            edx_25:eax_29 = muls.dp.d(0x66666667, *(arg1 + 8) - ecx_7)
            int32_t edx_26 = edx_25 s>> 3
            eax_28 = (edx_26 u>> 0x1f) + edx_26
        else
            eax_28 = 0
        
        if (ecx_7 != 0)
            void* var_44_4 = eax_26
            void* var_48_4 = arg1
            sub_4538e0(ecx_7, *(arg1 + 8))
            j_sub_4813df(*(arg1 + 4))
        
        *(arg1 + 0xc) = eax_23 + edi_3 * 0x14
        *(arg1 + 8) = eax_23 + (ebx + eax_28) * 0x14
        *(arg1 + 4) = eax_23

struct _EXCEPTION_REGISTRATION_RECORD** result_1
struct _EXCEPTION_REGISTRATION_RECORD** result = result_1
var_30 = 0

if (result != 0)
    result = j_sub_4813df(result)

fsbase->NtTib.ExceptionList = ExceptionList
return result
