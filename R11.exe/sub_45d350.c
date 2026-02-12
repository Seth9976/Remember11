// 函数: sub_45d350
// 地址: 0x45d350
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD** result_1 = arg1
struct _EXCEPTION_REGISTRATION_RECORD** result = arg1[2]

if (result != 0)
    struct _EXCEPTION_REGISTRATION_RECORD** result_2
    
    if (&result_1 == 0 || &result_1 == 0)
        result = result_1
        result_2 = result_1
    else
        result_2 = result[3]
        result = result[5]
    
    if (result u> 0)
        struct _EXCEPTION_REGISTRATION_RECORD*** esi_1 = &result_2[1]
        struct _EXCEPTION_REGISTRATION_RECORD** edi_1 = result
        struct _EXCEPTION_REGISTRATION_RECORD** i
        
        do
            result = *esi_1
            
            if (result != 0)
                result = j_sub_4813df(result)
            
            *esi_1 = nullptr
            esi_1 = &esi_1[3]
            i = edi_1
            edi_1 -= 1
        while (i != 1)
    
    void* esi_2 = arg1[2]
    
    if (esi_2 != 0)
        sub_45c9e0(esi_2)
        result = j_sub_4813df(esi_2)
        arg1[2] = 0

return result
