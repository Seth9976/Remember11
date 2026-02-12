// 函数: sub_45f000
// 地址: 0x45f000
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (arg3 == 0x100)
    if (arg4 == 0x1b)
        sub_45efd0(arg1)
else if (arg3 == 0x111)
    uint32_t eax_7 = zx.d(arg4.w)
    
    if (eax_7 s<= 0x801d)
        if (eax_7 == 0x801d || eax_7 == 0x69)
            goto label_45f091
        
        if (eax_7 s> 0x800d && eax_7 s<= 0x8011)
            goto label_45f091
    else if (eax_7 == 0x8020 || eax_7 == 0x9c81)
    label_45f091:
        SendMessageW(sub_46f1f0(), 0x111, arg4, arg5)
        ShowWindow(*arg1, SW_HIDE)
        arg1[1].b = 0
        
        if (data_c78676 == 1)
            sub_4709d0(0, 0)
        
        data_c78676 = 0
        return 1
else if (arg3 == 0x211)
    DrawMenuBar(arg2)
    RedrawWindow(sub_46f1f0(), nullptr, nullptr, RDW_FRAME)
    return 1

return DefWindowProcW(arg2, arg3, arg4, arg5)
