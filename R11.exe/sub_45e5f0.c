// 函数: sub_45e5f0
// 地址: 0x45e5f0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

HWND hDlg
int32_t eax_1 = __security_cookie ^ &hDlg
hDlg = arg2
int32_t result

if (arg3 u> 0x110)
    if (arg3 == 0x111)
        goto label_45e794
    
    result = 0
else
    void var_204
    
    if (arg3 == 0x110)
        data_c78618 = arg5
        *(arg5 + 4) = arg2
        enum SHOW_WINDOW_CMD nCmdShow
        
        do
            MSG msg
            nCmdShow = PeekMessageW(&msg, *(data_c78618 + 4), 0x100, 0x101, PM_REMOVE)
        while (nCmdShow != SW_HIDE)
        
        ShowWindow(GetDlgItem(arg2, 0x3ec), nCmdShow)
        *(arg1 + 0x14) = 0xffffffff
        *(arg1 + 0x18) = 0xffffffff
        int32_t var_254_3 = 0x47
        *(arg1 + 0x1c) = GetDlgItem(arg2, 0x3ec)
        sub_4653f0("NumKeys = %d\n")
        
        for (int32_t i = 0; i s< 0x47; i += 1)
            uint32_t eax_6
            
            if (i == 0)
                eax_6 = 0
            else if (i - 1 s< 0xa)
                eax_6 = i + 0x2f
            else if (i - 0xb s>= 0x1a)
                eax_6 = *(((i - 0xb) << 3) + u"SELECT")
            else
                eax_6 = i + 0x36
            
            sub_45e440(&var_204, eax_6)
            SendMessageW(*(arg1 + 0x1c), 0x143, 0, &var_204)
        
        for (int32_t i_1 = 0; i_1 s< 0xb4; )
            int32_t j_3 = 3
            int32_t j
            
            do
                if (sub_45e440(&var_204, *(i_1 + &data_c784d8)) == 1)
                    SetWindowTextW(GetDlgItem(arg2, *(i_1 + &data_4a3330)), &var_204)
                
                i_1 += 4
                j = j_3
                j_3 -= 1
            while (j != 1)
        
        result = 0
    else if (arg3 == 0x10)
        EndDialog(arg2, zx.d(arg4))
        result = 1
    else if (arg3 != 0x4e)
        result = 0
    else
        sub_465480(".\input.cpp", 0x79d)
    label_45e794:
        uint32_t i_2 = zx.d(arg4)
        int32_t var_23c_1 = 0
        void* const ecx_4 = &data_4a3330
    label_45e7b0:
        int32_t edi_1 = 0
        void* const eax_12 = ecx_4
        
        while (i_2 != *eax_12)
            edi_1 += 1
            eax_12 += 4
            
            if (edi_1 s>= 3)
                var_23c_1 += 1
                ecx_4 += 0xc
                
                if (ecx_4 s< &data_4a33e4)
                    goto label_45e7b0
                
                goto label_45e914
        
        int32_t ecx_5 = *(arg1 + 0x14)
        
        if (ecx_5 s>= 0)
            ShowWindow(GetDlgItem(hDlg, *(((*(arg1 + 0x18) * 3 + ecx_5) << 2) + &data_4a3330)), 
                SW_SHOW)
        
        int32_t var_254_8 = edi_1
        int32_t var_258_10 = var_23c_1
        sub_4653f0("%d %d\n")
        *(arg1 + 0x14) = edi_1
        HWND hDlg_3 = hDlg
        *(arg1 + 0x18) = var_23c_1
        RECT rect
        GetWindowRect(GetDlgItem(hDlg_3, i_2), &rect)
        POINT point
        point.x = rect.left
        point.y = rect.top
        ScreenToClient(hDlg_3, &point)
        int32_t y = point.y
        int32_t x = point.x
        sub_4653f0("%d %d\n")
        int32_t i_3 = *(((*(arg1 + 0x18) * 3 + *(arg1 + 0x14)) << 2) + &data_c784d8)
        WPARAM wParam
        
        if (i_3 == 0)
        label_45e8b5:
            wParam = 0
        else if (i_3 - 0x30 u<= 9)
            wParam = i_3 - 0x2f
        else if (i_3 - 0x41 u> 0x19)
            int32_t ecx_10 = 0
            
            while (i_3 != *((ecx_10 << 3) + &data_4a3220))
                ecx_10 += 1
                
                if (ecx_10 u>= 0x22)
                    goto label_45e8b5
            
            wParam = ecx_10 + 0x25
        else
            wParam = i_3 - 0x36
        
        SendMessageW(*(arg1 + 0x1c), 0x14e, wParam, 0)
        MoveWindow(GetDlgItem(hDlg_3, 0x3ec), point.x, point.y, rect.right - rect.left, 
            rect.bottom - rect.top, 1)
        ShowWindow(GetDlgItem(hDlg_3, 0x3ec), SW_SHOW)
        ShowWindow(GetDlgItem(hDlg_3, i_2), SW_HIDE)
    label_45e914:
        
        if (i_2 s> 0x3ec)
            if (i_2 == 0x3fa)
                int32_t ecx_22 = *(arg1 + 0x14)
                HWND hDlg_1 = hDlg
                
                if (ecx_22 s>= 0)
                    ShowWindow(
                        GetDlgItem(hDlg_1, *(((*(arg1 + 0x18) * 3 + ecx_22) << 2) + &data_4a3330)), 
                        SW_SHOW)
                    ShowWindow(*(arg1 + 0x1c), SW_HIDE)
                    *(arg1 + 0x14) = 0xffffffff
                
                sub_45d440()
                
                for (int32_t i_4 = 0; i_4 s< 0xb4; )
                    int32_t j_4 = 3
                    int32_t j_1
                    
                    do
                        if (sub_45e440(&var_204, *(i_4 + &data_c784d8)) == 1)
                            SetWindowTextW(GetDlgItem(hDlg_1, *(i_4 + &data_4a3330)), &var_204)
                        
                        i_4 += 4
                        j_1 = j_4
                        j_4 -= 1
                    while (j_1 != 1)
            
            result = 0
        else if (i_2 == 0x3ec)
            if (arg4.d u>> 0x10 == 1)
                LRESULT eax_33 = SendMessageW(*(arg1 + 0x1c), 0x147, 0, 0)
                
                if (eax_33 != 0)
                    if (eax_33 - 1 s< 0xa)
                        eax_33 += 0x2f
                    else if (eax_33 - 0xb s>= 0x1a)
                        eax_33 = *(((eax_33 - 0xb) << 3) + u"SELECT")
                    else
                        eax_33 += 0x36
                
                *(((*(arg1 + 0x18) * 3 + *(arg1 + 0x14)) << 2) + &data_c784d8) = eax_33
                int32_t eax_38 = sub_45e440(&var_204, 
                    *(((*(arg1 + 0x18) * 3 + *(arg1 + 0x14)) << 2) + &data_c784d8))
                HWND hDlg_2 = hDlg
                
                if (eax_38 == 1)
                    SetWindowTextW(
                        GetDlgItem(hDlg_2, 
                            *(((*(arg1 + 0x18) * 3 + *(arg1 + 0x14)) << 2) + &data_4a3330)), 
                        &var_204)
                
                ShowWindow(GetDlgItem(hDlg_2, 0x3ec), SW_HIDE)
                ShowWindow(
                    GetDlgItem(hDlg_2, 
                        *(((*(arg1 + 0x18) * 3 + *(arg1 + 0x14)) << 2) + &data_4a3330)), 
                    SW_SHOW)
                int32_t i_5 = 0
                
                if (*(((*(arg1 + 0x18) * 3 + *(arg1 + 0x14)) << 2) + &data_c784d8) != 0)
                    int32_t var_23c_2 = 0
                    
                    do
                        for (int32_t j_2 = 0; j_2 s< 3; j_2 += 1)
                            int32_t ecx_20 = *(arg1 + 0x18)
                            
                            if (var_23c_2 != ecx_20 || j_2 != *(arg1 + 0x14))
                                int32_t eax_50 = (i_5 + j_2) * 4
                                
                                if (*(((ecx_20 * 3 + *(arg1 + 0x14)) << 2) + &data_c784d8)
                                        == *(eax_50 + &data_c784d8))
                                    SetWindowTextW(GetDlgItem(hDlg, *(eax_50 + &data_4a3330)), 
                                        &data_49ea48)
                        
                        var_23c_2 += 1
                        i_5 += 3
                    while (i_5 s< 0x2d)
                
                *(arg1 + 0x14) = 0xffffffff
            
            result = 0
        else if (i_2 == 1)
            sub_45d5b0()
            EndDialog(hDlg, i_2)
            result = 1
        else if (i_2 != 2)
            result = 0
        else
            __builtin_memcpy(&data_c784d8, 0xc78420, 0xb4)
            EndDialog(hDlg, i_2)
            result = 1

sub_480cd2(eax_1 ^ &hDlg)
return result
