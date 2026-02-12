// 函数: sub_46e8b0
// 地址: 0x46e8b0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t pvParam
int32_t eax_1 = __security_cookie ^ &pvParam
sub_46ff00()

if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
    EnterCriticalSection(&data_c79d54)

int32_t ebx
ebx.b = arg1
data_c79f72 = ebx.b

if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
    LeaveCriticalSection(&data_c79d54)

sub_46ff00()
void* result
int32_t pvParam_1
void pvParam_2

if (ebx.b == 0)
    if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
        EnterCriticalSection(&data_c79d54)
    
    uint32_t esi_1 = data_c79f6c
    
    if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
        LeaveCriticalSection(&data_c79d54)
    
    if (esi_1 == 0)
        OSVERSIONINFOW versionInformation
        versionInformation.dwOSVersionInfoSize = 0x114
        GetVersionExW(&versionInformation)
        
        if (versionInformation.dwPlatformId == 2 && versionInformation.dwMajorVersion u> 4)
            HHOOK eax_5 =
                SetWindowsHookExW(WH_KEYBOARD_LL, sub_46e800, GetModuleHandleW(esi_1), esi_1)
            sub_46ff00()
            sub_46d820(&data_c79d90, eax_5)
    
    sub_46ff00()
    
    if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
        EnterCriticalSection(&data_c79d54)
    
    bool cond:7_1 = class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b == 0
    pvParam_1 = data_c79f74
    int32_t ecx_1 = data_c79f78
    
    if (not(cond:7_1))
        LeaveCriticalSection(&data_c79d54)
    
    if ((ecx_1.b & 1) == 0)
        int32_t var_134_2 = ecx_1 & 0xfffffff3
        SystemParametersInfoW(SPI_SETSTICKYKEYS, 8, &pvParam_1, 0)
    
    sub_46ff00()
    
    if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
        EnterCriticalSection(&data_c79d54)
    
    bool cond:12_1 = class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b == 0
    pvParam = data_c79f7c
    int32_t ecx_2 = data_c79f80
    
    if (not(cond:12_1))
        LeaveCriticalSection(&data_c79d54)
    
    if ((ecx_2.b & 1) == 0)
        int32_t var_13c_2 = ecx_2 & 0xfffffff3
        SystemParametersInfoW(SPI_SETTOGGLEKEYS, 8, &pvParam, 0)
    
    sub_46ff00()
    result = sub_46d9d0(&data_c79d90, &pvParam_2)
    char var_12c
    
    if ((var_12c & 1) == 0)
        var_12c.d &= 0xfffffff3
        result = SystemParametersInfoW(SPI_SETFILTERKEYS, 0x18, &pvParam_2, 0)
else
    if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
        EnterCriticalSection(&data_c79d54)
    
    bool cond:3_1 = class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b == 0
    pvParam = data_c79f74
    int32_t var_13c = data_c79f78
    
    if (not(cond:3_1))
        LeaveCriticalSection(&data_c79d54)
    
    sub_46ff00()
    
    if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
        EnterCriticalSection(&data_c79d54)
    
    bool cond:6_1 = class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b == 0
    pvParam_1 = data_c79f7c
    int32_t var_134 = data_c79f80
    
    if (not(cond:6_1))
        LeaveCriticalSection(&data_c79d54)
    
    sub_46ff00()
    sub_46d9d0(&data_c79d90, &pvParam_2)
    SystemParametersInfoW(SPI_SETSTICKYKEYS, 8, &pvParam, 0)
    SystemParametersInfoW(SPI_SETTOGGLEKEYS, 8, &pvParam_1, 0)
    SystemParametersInfoW(SPI_SETFILTERKEYS, 0x18, &pvParam_2, 0)
    result = sub_46ff00()
    
    if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
        result = EnterCriticalSection(&data_c79d54)
    
    int32_t esi = data_c79f6c
    
    if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
        result = LeaveCriticalSection(&data_c79d54)
    
    if (esi != 0)
        sub_46ff00()
        
        if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
            EnterCriticalSection(&data_c79d54)
        
        HHOOK hhk = data_c79f6c
        
        if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
            LeaveCriticalSection(&data_c79d54)
        
        UnhookWindowsHookEx(hhk)
        sub_46ff00()
        result = sub_46d820(&data_c79d90, nullptr)
sub_480cd2(eax_1 ^ &pvParam)
return result
