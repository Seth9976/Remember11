// 函数: sub_45f630
// 地址: 0x45f630
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (arg1[1].b != 0)
    BOOL eax_4 = ShowWindow(*arg1, SW_HIDE)
    arg1[1].b = 0
    
    if (data_c78676 == 1)
        eax_4 = sub_4709d0(0, 0)
    
    data_c78676 = 0
    return eax_4

if (data_c78676 == 0)
    sub_4709d0(1, 1)

data_c78676 = 1
RECT rect
GetClientRect(sub_46f1f0(), &rect)
POINT point
__builtin_memset(&point, 0, 8)
ClientToScreen(sub_46f1f0(), &point)
AdjustWindowRect(&rect, WS_OVERLAPPED, 1)
int32_t y = point.y
int32_t x = point.x
MoveWindow(*arg1, x, y, rect.right - rect.left + x, rect.bottom - rect.top + y, 0)
BOOL eax_3 = ShowWindow(*arg1, SW_SHOW)
arg1[1].b = 1
return eax_3
