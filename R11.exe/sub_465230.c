// 函数: sub_465230
// 地址: 0x465230
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_49a4b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct ISoundM::CSoundM::VTable** var_10 = arg1
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &CSoundM::`vftable'{for `ISoundM'}
int32_t var_4 = 0

if (data_c78bc0 != 0)
    void* esi_1 = &arg1[8]
    arg1[0x49] = CreateEventW(nullptr, 0, 0, nullptr)
    void* edi_1 = esi_1
    int32_t i_3 = 0x20
    int32_t i
    
    do
        if (*edi_1 != 0)
            (*(**edi_1 + 0x20))(eax_2)
        
        edi_1 += 4
        i = i_3
        i_3 -= 1
    while (i != 1)
    SetEvent(arg1[0x48])
    MsgWaitForMultipleObjects(1, &arg1[0x49], 0, 0xffffffff, QS_ALLEVENTS)
    int32_t i_4 = 0x20
    int32_t i_1
    
    do
        int32_t* ecx_1 = *esi_1
        
        if (ecx_1 != 0)
            (**ecx_1)(1)
            *esi_1 = 0
        
        esi_1 += 4
        i_1 = i_4
        i_4 -= 1
    while (i_1 != 1)
    int32_t* ecx_2 = data_c78bc0
    
    if (ecx_2 != 0)
        (**ecx_2)(1)
        data_c78bc0 = i_4
    
    void* esi_2 = &arg1[0x28]
    int32_t i_5 = 0x21
    int32_t i_2
    
    do
        HANDLE hObject = *esi_2
        
        if (hObject != 0)
            CloseHandle(hObject)
            *esi_2 = 0
        
        esi_2 += 4
        i_2 = i_5
        i_5 -= 1
    while (i_2 != 1)

int32_t result = DeleteCriticalSection(&arg1[1])
*arg1 = &ISoundM::`vftable'
fsbase->NtTib.ExceptionList = ExceptionList
return result
