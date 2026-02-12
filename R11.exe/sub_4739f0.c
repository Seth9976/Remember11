// 函数: sub_4739f0
// 地址: 0x4739f0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_238
int32_t eax_1 = __security_cookie ^ &var_238

if ((data_c7a960 & 1) == 0)
    data_c7a960.d |= 1
    sub_46d000(&data_c79d90)
    sub_48258e(sub_49cb00)

if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
    EnterCriticalSection(&data_c79d54)

bool cond:1 = class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b == 0
data_c79fb3 = 1

if (not(cond:1))
    LeaveCriticalSection(&data_c79d54)

InitCommonControls()
enum SYSTEM_PARAMETERS_INFO_UPDATE_FLAGS fWinIni = 0
int32_t var_230
int32_t* hLibModule_1 = &var_230
var_230 = 8
int32_t var_22c = 0
SystemParametersInfoW(SPI_GETSTICKYKEYS, 8, hLibModule_1, fWinIni)

if ((data_c7a960 & 1) == 0)
    data_c7a960.d |= 1
    sub_46d000(&data_c79d90)
    sub_48258e(sub_49cb00)

int32_t esi = var_230

if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
    EnterCriticalSection(&data_c79d54)

bool cond:3 = class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b == 0
data_c79f74 = esi
data_c79f78 = var_22c

if (not(cond:3))
    LeaveCriticalSection(&data_c79d54)

enum SYSTEM_PARAMETERS_INFO_UPDATE_FLAGS fWinIni_1 = 0
hLibModule_1 = &var_238
var_238 = 8
int32_t var_234 = 0
SystemParametersInfoW(SPI_GETTOGGLEKEYS, 8, hLibModule_1, fWinIni_1)

if ((data_c7a960 & 1) == 0)
    data_c7a960.d |= 1
    sub_46d000(&data_c79d90)
    sub_48258e(sub_49cb00)

int32_t esi_1 = var_238

if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
    EnterCriticalSection(&data_c79d54)

bool cond:5 = class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b == 0
data_c79f80 = var_234
data_c79f7c = esi_1

if (not(cond:5))
    LeaveCriticalSection(&data_c79d54)

enum SYSTEM_PARAMETERS_INFO_UPDATE_FLAGS fWinIni_2 = 0
int32_t var_228
hLibModule_1 = &var_228
var_228 = 0x18
int32_t var_224
__builtin_memset(&var_224, 0, 0x14)
SystemParametersInfoW(SPI_GETFILTERKEYS, 0x18, hLibModule_1, fWinIni_2)

if ((data_c7a960 & 1) == 0)
    data_c7a960.d |= 1
    sub_46d000(&data_c79d90)
    sub_48258e(sub_49cb00)

int32_t ecx = var_228
int32_t edx = var_224
int32_t* hLibModule_2
hLibModule_1 = hLibModule_2
int32_t var_220
int32_t var_21c
int32_t var_214
sub_46d960(&data_c79d90, ecx, edx, var_220, var_21c, hLibModule_1, var_214)
uint32_t uSize = 0x105
void libFileName
hLibModule_1 = &libFileName

if (GetSystemDirectoryW(hLibModule_1, uSize) != 0)
    int32_t i_1 = 0x104
    void* eax_3 = &libFileName
    int32_t i
    
    do
        if (*eax_3 == 0)
            if (i_1 != 0)
                int16_t* var_24c_12 = u"\winmm.dll"
                hLibModule_1 = 0x104 * 0 + i_1
                sub_46aa90(&hLibModule_1 + ((0x104 - i_1) << 1) + 0x40, hLibModule_1, var_24c_12)
            
            break
        
        eax_3 += 2
        i = i_1
        i_1 -= 1
    while (i != 1)
    int32_t* hLibModule = LoadLibraryW(&libFileName)
    
    if (hLibModule != 0)
        PSTR lpProcName = "timeBeginPeriod"
        hLibModule_1 = hLibModule
        int32_t eax_5 = GetProcAddress(hLibModule_1, lpProcName)
        
        if (eax_5 != 0)
            eax_5(1)
        
        FreeLibrary(hLibModule)

if ((data_c7a960 & 1) == 0)
    data_c7a960.d |= 1
    sub_46d000(&data_c79d90)
    sub_48258e(sub_49cb00)

if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
    EnterCriticalSection(&data_c79d54)

bool cond:7 = class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b == 0
data_c79f9d = arg3

if (not(cond:7))
    LeaveCriticalSection(&data_c79d54)

if ((data_c7a960 & 1) == 0)
    data_c7a960.d |= 1
    sub_46d000(&data_c79d90)
    sub_48258e(sub_49cb00)

if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
    EnterCriticalSection(&data_c79d54)

bool cond:8 = class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b == 0
data_c79f9c = arg2

if (not(cond:8))
    LeaveCriticalSection(&data_c79d54)

if (arg1 != 0)
    sub_471860()

int32_t eax_6 = sub_471040()
int32_t eax_7

if (eax_6 == 0)
    int32_t var_24c_22 = 0x20
    eax_7 = sub_46ad00()
    
    if ((data_c7a960 & 1) == 0)
        data_c7a960.d |= 1
        sub_46d000(&data_c79d90)
        sub_48258e(sub_49cb00)
    
    if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
        EnterCriticalSection(&data_c79d54)
    
    bool cond:11_1 = class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b == 0
    data_c79d90 = eax_7
    
    if (not(cond:11_1))
        LeaveCriticalSection(&data_c79d54)

int32_t result

if (eax_6 != 0 || eax_7 != 0)
    sub_46ab50()
    sub_46a490(0xc79d28)
    
    if ((data_c7a960 & 1) == 0)
        data_c7a960.d |= 1
        sub_46d000(&data_c79d90)
        sub_48258e(sub_49cb00)
    
    if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
        EnterCriticalSection(&data_c79d54)
    
    bool cond:10_1 = class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b == 0
    data_c79fb0 = 1
    
    if (not(cond:10_1))
        LeaveCriticalSection(&data_c79d54)
    
    result = 0
else
    sub_46f290(0x80040901)
    result = 0x80040901

sub_480cd2(eax_1 ^ &var_238)
return result
