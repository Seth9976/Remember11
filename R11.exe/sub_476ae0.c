// 函数: sub_476ae0
// 地址: 0x476ae0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

HICON var_254
int32_t eax_1 = __security_cookie ^ &var_254
bool cond:0 = (data_c7a960 & 1) != 0
HMODULE hInst = arg2
HMODULE hInstance = hInst
var_254 = arg3

if (not(cond:0))
    data_c7a960.d |= 1
    sub_46d000(&data_c79d90)
    sub_48258e(sub_49cb00)

if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
    EnterCriticalSection(&data_c79d54)

int32_t ebx
ebx.b = data_c79fb8

if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
    LeaveCriticalSection(&data_c79d54)

enum WIN32_ERROR result

if (ebx.b == 0)
    if ((data_c7a960 & 1) == 0)
        data_c7a960.d |= 1
        sub_46d000(&data_c79d90)
        sub_48258e(sub_49cb00)
    
    if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
        EnterCriticalSection(&data_c79d54)
    
    bool cond:3_1 = class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b == 0
    data_c79fb4 = 1
    
    if (not(cond:3_1))
        LeaveCriticalSection(&data_c79d54)
    
    if ((data_c7a960 & 1) == 0)
        data_c7a960.d |= 1
        sub_46d000(&data_c79d90)
        sub_48258e(sub_49cb00)
    
    if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
        EnterCriticalSection(&data_c79d54)
    
    ebx.b = data_c79fb0
    
    if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
        LeaveCriticalSection(&data_c79d54)
    
    if (ebx.b != 0)
    label_476c9a:
        
        if (sub_471100() != 0)
            result = NO_ERROR
        else
            if (hInst == 0)
                HMODULE eax_4 = GetModuleHandleW(nullptr)
                hInstance = eax_4
                hInst = eax_4
            
            sub_46ff00()
            sub_46d7a0(&data_c79d90, hInst)
            wchar16 var_20c[0x104]
            GetModuleFileNameW(nullptr, &var_20c, 0x104)
            
            if (var_254 == 0)
                var_254 = ExtractIconW(hInst, &var_20c, 0)
            
            WNDCLASSW wndClass
            wndClass.style = 8
            wndClass.lpfnWndProc = sub_475e60
            wndClass.cbClsExtra = 0
            wndClass.cbWndExtra = 0
            wndClass.hInstance = hInst
            wndClass.hIcon = var_254
            wndClass.hCursor = LoadCursorW(nullptr, 0x7f00)
            wndClass.hbrBackground = GetStockObject(BLACK_BRUSH)
            wndClass.lpszMenuName = 0
            wndClass.lpszClassName = u"Direct3DWindowClass"
            uint16_t eax_8 = RegisterClassW(&wndClass)
            
            if (eax_8 == 0)
                result = GetLastError()
            
            bool cond:6_1
            
            if (eax_8 != 0 || result == ERROR_CLASS_ALREADY_EXISTS)
                sub_46ff00()
                int32_t X
                
                if (sub_46e1c0(&data_c79d90) == 0xffffffff)
                    X = arg5
                else
                    sub_46ff00()
                    X = sub_46e1c0(&data_c79d90)
                
                sub_46ff00()
                int32_t Y
                
                if (sub_46e240(&data_c79d90) == 0xffffffff)
                    Y = arg6
                else
                    sub_46ff00()
                    Y = sub_46e240(&data_c79d90)
                
                sub_46ff00()
                sub_46dbc0(&data_c79d90, 0)
                
                if (X == 0x80000000 && Y == X)
                    sub_46ff00()
                    sub_46dbc0(&data_c79d90, 1)
                
                int32_t xRight = 0x280
                int32_t yBottom = 0x1e0
                sub_46ff00()
                
                if (sub_46e2c0(&data_c79d90) != 0)
                    sub_46ff00()
                    xRight = sub_46e2c0(&data_c79d90)
                
                sub_46ff00()
                
                if (sub_46e340(&data_c79d90) != 0)
                    sub_46ff00()
                    yBottom = sub_46e340(&data_c79d90)
                
                RECT var_244
                SetRect(&var_244, 0, 0, xRight, yBottom)
                BOOL bMenu
                bMenu.b = arg4 != 0
                AdjustWindowRect(&var_244, 0xca0000, bMenu)
                sub_46ff00()
                sub_46aa90(sub_46e7c0(&data_c79d90), 0x100, arg1)
                HWND eax_21 = CreateWindowExW(WS_EX_LEFT, Direct3DWindowClass", arg1, 0xca0000, X, 
                    Y, var_244.right - var_244.left, var_244.bottom - var_244.top, nullptr, arg4, 
                    hInstance, nullptr)
                
                if (eax_21 == 0)
                    result = GetLastError()
                    cond:6_1 = result s<= NO_ERROR
                    goto label_476d58
                
                sub_46ff00()
                sub_46dcc0(&data_c79d90, 1)
                sub_46ff00()
                sub_46d160(&data_c79d90, eax_21)
                sub_46ff00()
                sub_46d1a0(&data_c79d90, eax_21)
                sub_46ff00()
                sub_46d1e0(&data_c79d90, eax_21)
                sub_46ff00()
                sub_46d2a0(&data_c79d90, arg4)
                result = NO_ERROR
            else
                cond:6_1 = result s<= NO_ERROR
            label_476d58:
                
                if (not(cond:6_1))
                    result = (result & 0xffff) | 0x80070000
    else
        if ((data_c7a960 & 1) == 0)
            data_c7a960.d |= 1
            sub_46d000(&data_c79d90)
            sub_48258e(sub_49cb00)
        
        if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
            EnterCriticalSection(&data_c79d54)
        
        ebx.b = data_c79fb3
        
        if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
            LeaveCriticalSection(&data_c79d54)
        
        if (ebx.b != 0)
            result = 0x80004005
        else
            result = sub_4739f0(1, 1, 1)
            
            if (result s>= NO_ERROR)
                goto label_476c9a
else
    result = 0x80004005

sub_480cd2(eax_1 ^ &var_254)
return result
