// 函数: sub_45fdf0
// 地址: 0x45fdf0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

struct INITCOMMONCONTROLSEX picce
int32_t eax_1 = __security_cookie ^ &picce

if (CoInitializeEx(nullptr, 0) s< 0 && data_4cad8c == 1)
    sub_464790(".\framework.cpp", 0x382)
    data_4cad8c = 0

picce.dwSize = 8
picce.dwICC = 0x200
InitCommonControlsEx(&picce)
timeBeginPeriod(1)
data_c78670 = 2
wchar16 var_40c[0x104]
GetModuleFileNameW(nullptr, &var_40c, 0x208)
PathRemoveFileSpecW(&var_40c)
sub_4658b0(&var_40c)
wchar16 const (* var_42c_1)[0xc] = data_4cad88
void name
sub_4831aa(&name, u"@%s@Lock")
HANDLE hObject = CreateMutexW(nullptr, 1, &name)

if (hObject != 0 && GetLastError() == ERROR_ALREADY_EXISTS)
    CloseHandle(hObject)
    hObject = nullptr

HMENU eax_5 = LoadMenuW(arg1, 0x6f)
data_c78624 = eax_5
sub_45f580(&data_c788a8, arg1, eax_5)
sub_46ff30(sub_45f350, 0)
sub_46fff0(sub_45f3b0, 0)
sub_4700b0(sub_45f500, 0)
sub_470170(sub_45f540, 0)
sub_470470(sub_45fb80, 0)
sub_4703b0(sub_45f570, 0)
sub_4702f0(sub_45fb20, 0)
sub_470230(sub_45f3f0, 0)
sub_4713e0(0, 0)
sub_4739f0(0, 1, 1)
HMENU ecx_1 = data_c78624
HICON eax_6 = LoadIconW(arg1, 0x82)
sub_476ae0(data_4cad88, nullptr, eax_6, ecx_1, 0x80000000, 0x80000000)
sub_45f1b0()
sub_464290(1)
ImmAssociateContext(sub_46f1f0(), nullptr)
int32_t eax_8
void* ecx_2
int32_t edx_1
eax_8, ecx_2, edx_1 = sub_46f1f0()
struct ISoundM::CSoundM::VTable** eax_9
void* ecx_3
eax_9, ecx_3 = sub_465380(eax_8, edx_1, ecx_2, eax_8)
data_c7865c = eax_9
struct IGraphicManager::RenderSpace::CGraphicManager::VTable** eax_10
void* ecx_4
eax_10, ecx_4 = sub_4631c0(ecx_3)
data_c78668 = eax_10
data_c78664 = sub_45b8c0(ecx_4)
int32_t eax_12
void* ecx_5
int32_t edx_2
eax_12, ecx_5, edx_2 = sub_46f1f0()
data_c78658 = sub_45d3d0(eax_12, edx_2, ecx_5, eax_12)
int32_t eax_14
void* ecx_6
int32_t edx_3
eax_14, ecx_6, edx_3 = sub_46f1f0()
data_c78654 = sub_45ee90(eax_14, edx_3, ecx_6, eax_14)
sub_44cd60()
(*(*data_c78654 + 0x18))(&data_49ea48)
sub_476f20(0, 1, data_4cad40, data_4cad44, sub_45f280, sub_45f700, 0)
sub_477640(LoadAcceleratorsW(arg1, 0x6d))
sub_46fe20(0)
sub_44d010()
int32_t* ecx_9 = data_c78660

if (ecx_9 != 0)
    (**ecx_9)(1)
    data_c78660 = 0

int32_t* ecx_10 = data_c78654

if (ecx_10 != 0)
    (**ecx_10)(1)
    data_c78654 = 0

int32_t* ecx_11 = data_c78658

if (ecx_11 != 0)
    (**ecx_11)(1)
    data_c78658 = 0

int32_t* ecx_12 = data_c78664

if (ecx_12 != 0)
    (**ecx_12)(1)
    data_c78664 = 0

int32_t* ecx_13 = data_c78668

if (ecx_13 != 0)
    (**ecx_13)(1)
    data_c78668 = 0

int32_t* ecx_14 = data_c7865c

if (ecx_14 != 0)
    (**ecx_14)(1)
    data_c7865c = 0

timeEndPeriod(1)
CoUninitialize()

if (hObject != 0)
    CloseHandle(hObject)

sub_480cd2(eax_1 ^ &picce)
return 0
