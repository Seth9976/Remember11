// 函数: sub_46f290
// 地址: 0x46f290
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void var_408
int32_t eax_1 = __security_cookie ^ &var_408
char var_405 = 1
void var_404
int32_t esi

if (arg1 + 0x7ffbf6ff u> 8)
    var_405 = 0
    esi = 1
else
    switch (arg1)
        case 0x80040901
            esi = 2
            sub_46aa90(&var_404, 0x200, 
                Could not initialize Direct3D. You may want to check that the latest version of DirectX "
            "is correctly installed on your system.  Also make sure that this pr")
        case 0x80040902
            esi = 3
            int32_t eax_5
            
            if (sub_46cd00() == 0)
                eax_5 = GetSystemMetrics(SM_REMOTESESSION)
            else
                eax_5 = data_c79d6c(0x1000)
            
            if (eax_5 == 0)
                sub_46aa90(&var_404, 0x200, u"Could not find any compatible Direct3D devices.")
            else
                sub_46aa90(&var_404, 0x200, u"Direct3D does not work over a remote session.")
        case 0x80040903
            esi = 4
            sub_46aa90(&var_404, 0x200, 
                Could not find required media. Ensure that the DirectX SDK is correctly installed.")
        case 0x80040904
            esi = 5
            sub_46aa90(&var_404, 0x200, 
                The D3D device has a non-zero reference count, meaning some objects were not released.")
        case 0x80040905
            esi = 6
            sub_46aa90(&var_404, 0x200, u"Failed creating the Direct3D device.")
        case 0x80040906
            esi = 7
            sub_46aa90(&var_404, 0x200, u"Failed resetting the Direct3D device.")
        case 0x80040907
            esi = 8
            sub_46aa90(&var_404, 0x200, u"Failed creating Direct3D device objects.")
        case 0x80040908
            esi = 9
            sub_46aa90(&var_404, 0x200, u"Failed resetting Direct3D device objects.")
        case 0x80040909
            esi = 0xa
            sub_46aa90(&var_404, 0x200, u"Incorrect version of Direct3D and/or D3DX.")

sub_46ff00()

if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
    EnterCriticalSection(&data_c79d54)

data_c79fac = esi

if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
    LeaveCriticalSection(&data_c79d54)

enum MESSAGEBOX_RESULT result = sub_46ff00()

if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
    result = EnterCriticalSection(&data_c79d54)

char ebx = data_c79f9d

if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
    result = LeaveCriticalSection(&data_c79d54)

if (var_405 != 0 && ebx != 0)
    sub_46ebf0()
    PWSTR lpText
    wchar16 const* const lpCaption
    
    if (data_c7a75c != 0)
        sub_46ebf0()
        lpCaption = &data_c7a75c
        lpText = &var_404
    else
        lpCaption = u"DirectX Application"
        lpText = &var_404
    
    result = MessageBoxW(sub_46f1f0(), lpText, lpCaption, MB_ICONHAND)

sub_480cd2(eax_1 ^ &var_408)
return result
