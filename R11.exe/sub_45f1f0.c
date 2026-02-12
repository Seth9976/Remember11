// 函数: sub_45f1f0
// 地址: 0x45f1f0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

sub_45f1b0()

if (sub_46ec30() == 0)
    sub_45f130()

int32_t* eax_3 = (data_c78670 << 4) + 0x4a3548
RECT rect
rect.left = *eax_3
rect.top = eax_3[1]
rect.right = eax_3[2]
rect.bottom = eax_3[3]
AdjustWindowRect(&rect, GetWindowLongW(sub_46f1f0(), 0xfffffff0), 1)
return SetWindowPos(sub_46f1f0(), nullptr, 0, 0, rect.right - rect.left, rect.bottom - rect.top, 
    0x202)
