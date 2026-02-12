// 函数: sub_45f580
// 地址: 0x45f580
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

WNDCLASSW wndClass
wndClass.style = 8
wndClass.lpfnWndProc = sub_45f100
wndClass.cbClsExtra = 0
wndClass.cbWndExtra = 0
wndClass.hInstance = arg2
wndClass.hIcon = 0
wndClass.hCursor = 0
wndClass.hbrBackground = 0
wndClass.lpszMenuName = 0
wndClass.lpszClassName = u"MENUWindowClass"

if (RegisterClassW(&wndClass) == 0)
    enum WIN32_ERROR result = GetLastError()
    
    if (result != ERROR_CLASS_ALREADY_EXISTS)
        if (result s<= NO_ERROR)
            return result
        
        return (result & 0xffff) | 0x80070000

*arg1 = CreateWindowExW(0x8000088, MENUWindowClass", &data_4a359c, WS_POPUP, 0, 0, 0, 0, 
    sub_46f1f0(), arg3, arg2, nullptr)
return NO_ERROR
