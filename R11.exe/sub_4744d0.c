// 函数: sub_4744d0
// 地址: 0x4744d0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if ((data_c7a960 & 1) == 0)
    data_c7a960.d |= 1
    sub_46d000(&data_c79d90)
    sub_48258e(sub_49cb00)

if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
    EnterCriticalSection(&data_c79d54)

void* ebx = data_c79d9c

if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
    LeaveCriticalSection(&data_c79d54)

if (sub_471040() == 0)
    return 1

void* lpwndpl_6 = sub_481fef(0x48)

if (lpwndpl_6 == 0)
    return 0x8007000e

bool cond:1 = (data_c7a960 & 1) != 0
__builtin_memcpy(lpwndpl_6, arg1, 0x48)

if (not(cond:1))
    data_c7a960.d |= 1
    sub_46d000(&data_c79d90)
    sub_48258e(sub_49cb00)

if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
    EnterCriticalSection(&data_c79d54)

int32_t esi_1 = data_c79ff8

if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
    LeaveCriticalSection(&data_c79d54)

void* lpwndpl_5

if (esi_1 != 0)
    int32_t* eax_3 = sub_471040()
    void* ecx_1 = *eax_3
    void var_130
    void* var_210_4 = &var_130
    int32_t edx_1 = *(lpwndpl_6 + 4)
    lpwndpl_5 = *lpwndpl_6
    (*(ecx_1 + 0x38))(eax_3, lpwndpl_5, edx_1, var_210_4)
    sub_46ff00()
    int32_t eax_5 = sub_46e640(&data_c79d90)
    void* var_214_2 = &var_130
    lpwndpl_5 = lpwndpl_6
    
    if (esi_1(lpwndpl_5, var_214_2, eax_5) == 0)
        if (ebx == 0)
            sub_46f290(0x80040902)
        
        j_sub_4813df(lpwndpl_6)
        return 0x80004004
    
    sub_46ff00()
    
    if (sub_46d060(&data_c79d90) == 0)
        j_sub_4813df(lpwndpl_6)
        return 1

sub_46ff00()
sub_46d0a0(&data_c79d90, lpwndpl_6)
sub_4709d0(1, 1)
char var_210_11 = 1
sub_46ff00()
sub_46d760(&data_c79d90, var_210_11)
class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b = (*(lpwndpl_6 + 0xc) u>> 2).b & 1

if (arg2 == 0 && ebx == 0)
    sub_470530(lpwndpl_6)

char var_1ea = 0

if (*(lpwndpl_6 + 0x10) == 0 && *(lpwndpl_6 + 0x14) == 0)
    var_1ea = 1

int32_t lpwndpl_2
int32_t var_1cc
int32_t var_1c8
int32_t* ecx_3
int32_t edx_5

if (*(lpwndpl_6 + 0x30) == 0)
    if (ebx == 0 || *(ebx + 0x30) != 0)
        sub_46ff00()
        void* lpwndpl_3 = sub_46d520(&data_c79d90)
        int32_t var_210_18 = 0x2c
        char var_214_6 = 0
        lpwndpl_5 = lpwndpl_3
        sub_480cf0(lpwndpl_5, var_214_6, var_210_18)
        *lpwndpl_3 = 0x2c
        GetWindowPlacement(sub_4711c0(), lpwndpl_3)
        void* eax_22 = GetWindowLongW(sub_4711c0(), 0xfffffff0) & 0xdeffffff
        sub_46ff00()
        sub_46d560(&data_c79d90, eax_22)
        
        if (ebx != 0)
            void* edx_6 = *(ebx + 0x10)
            sub_46ff00()
            sub_46d420(&data_c79d90, edx_6)
            void* eax_23 = *(ebx + 0x14)
            sub_46ff00()
            sub_46d4a0(&data_c79d90, eax_23)
    
    ShowWindow(sub_471160(), SW_HIDE)
    int32_t dwNewLong = 0x80080000
    enum WINDOW_LONG_PTR_INDEX nIndex_1 = 0xfffffff0
    lpwndpl_5 = sub_471160()
    SetWindowLongW(lpwndpl_5, nIndex_1, dwNewLong)
    
    if (sub_471160() == sub_4711c0())
        HMENU eax_29 = GetMenu(sub_471160())
        sub_46ff00()
        sub_46d2a0(&data_c79d90, eax_29)
        SetMenu(sub_471160(), nullptr)
    
    int32_t var_210_28 = 0x2c
    char var_214_11 = 0
    lpwndpl_5 = &lpwndpl_2
    sub_480cf0(lpwndpl_5, var_214_11, var_210_28)
    int32_t* lpwndpl = &lpwndpl_2
    lpwndpl_2 = 0x2c
    GetWindowPlacement(sub_471160(), lpwndpl)
    var_1cc &= 0xfffffffd
    var_1c8 = 9
    ecx_3, edx_5 = SetWindowPlacement(sub_471160(), &lpwndpl_2)
else
    if (ebx != 0 && *(ebx + 0x30) == 0)
        void* eax_10 = *(ebx + 0x10)
        sub_46ff00()
        sub_46d320(&data_c79d90, eax_10)
        void* ecx_2 = *(ebx + 0x14)
        sub_46ff00()
        sub_46d3a0(&data_c79d90, ecx_2)
        sub_46ff00()
        int32_t dwNewLong_1 = sub_46d5a0(&data_c79d90)
        enum WINDOW_LONG_PTR_INDEX nIndex = 0xfffffff0
        lpwndpl_5 = sub_4711c0()
        SetWindowLongW(lpwndpl_5, nIndex, dwNewLong_1)
    
    if (sub_471160() != sub_4711c0())
        ShowWindow(sub_471160(), SW_HIDE)
    
    int32_t eax_15 = sub_471160()
    int32_t eax_16
    eax_16, ecx_3, edx_5 = sub_4711c0()
    
    if (eax_15 == eax_16)
        sub_46ff00()
        int32_t eax_17
        eax_17, ecx_3, edx_5 = sub_46d2e0(&data_c79d90)
        
        if (eax_17 != 0)
            sub_46ff00()
            HMENU hMenu = sub_46d2e0(&data_c79d90)
            ecx_3, edx_5 = SetMenu(sub_4711c0(), hMenu)

if (arg3 != 0)
label_4749b1:
    
    if (ebx == 0)
        goto label_4749c7
    
    ecx_3, edx_5 = sub_46f570(0)
label_4749c7:
    void* eax_42 = sub_474000(arg2, edx_5, ecx_3, arg2)
    
    if (eax_42 s< 0)
        if (ebx != 0)
            j_sub_4813df(ebx)
        
        sub_46f570(1)
        sub_46f290(eax_42)
        lpwndpl_5 = nullptr
        sub_4709d0(0, lpwndpl_5)
        char var_210_39 = 0
        sub_46ff00()
        sub_46d760(&data_c79d90, var_210_39)
        return eax_42
else
    if (arg2 != 0)
        int32_t eax_33
        eax_33, ecx_3, edx_5 = sub_46ebb0()
        
        if (arg2 != eax_33)
            goto label_4749b1
    
    if (ebx == 0)
        goto label_4749c7
    
    ecx_3 = *ebx
    
    if (ecx_3 != *lpwndpl_6)
        goto label_4749b1
    
    edx_5 = *(ebx + 4)
    
    if (edx_5 != *(lpwndpl_6 + 4) || *(ebx + 0xc) != *(lpwndpl_6 + 0xc))
        goto label_4749b1
    
    int32_t eax_35 = sub_472d20()
    
    if (eax_35 s< 0)
        if (eax_35 != 0x88760868)
            if (eax_35 == 0x80040908 || eax_35 == 0x80040903)
                j_sub_4813df(ebx)
                sub_46f290(eax_35)
                lpwndpl_5 = nullptr
                sub_46fe20(lpwndpl_5)
                return eax_35
            
            sub_46ff00()
            sub_46d0a0(&data_c79d90, ebx)
            int32_t var_214_14 = 1
            lpwndpl_5 = arg2
            
            if (sub_4744d0(lpwndpl_6, lpwndpl_5, var_214_14, arg4) s>= 0)
                j_sub_4813df(ebx)
                return 0
            
            j_sub_4813df(ebx)
            sub_46fe20(0)
            return 0x80040905
        
        char var_210_30 = 1
        sub_46ff00()
        sub_46e000(&data_c79d90, var_210_30)

char eax_36

if (*(lpwndpl_6 + 0x30) == 0)
    sub_46ff00()
    eax_36 = sub_46d8a0(&data_c79d90)
else
    sub_46ff00()
    eax_36 = sub_46d8e0(&data_c79d90)

sub_46e8b0(eax_36)
int32_t* eax_44 = sub_471040()
void* eax_46 = (*(*eax_44 + 0x3c))(eax_44, *lpwndpl_6)
sub_46ff00()
sub_46d220(&data_c79d90, eax_46)
sub_4736a0()
sub_46ff00()
int32_t eax_47 = sub_46d120(&data_c79d90)
int32_t* eax_48 = sub_46ebb0()
(*(*eax_48 + 0x1c))(eax_48, eax_47)

if (ebx != 0 && *(ebx + 0x30) == 0 && *(lpwndpl_6 + 0x30) != 0)
    sub_46ff00()
    WINDOWPLACEMENT* lpwndpl_4 = sub_46d520(&data_c79d90)
    SetWindowPlacement(sub_4711c0(), lpwndpl_4)
    enum SET_WINDOW_POS_FLAGS uFlags = 0xb
    int32_t cy = 0
    lpwndpl_5 = nullptr
    SetWindowPos(sub_4711c0(), 0xfffffffe, 0, 0, lpwndpl_5, cy, uFlags)

char var_1e9 = 0

if (*(lpwndpl_6 + 0x30) != 0 && var_1ea == 0)
    RECT rect
    int32_t ebx_2
    int32_t edi_10
    
    if (IsIconic(sub_4711c0()) == 0)
        GetClientRect(sub_4711c0(), &rect)
        edi_10 = rect.right - rect.left
        ebx_2 = rect.bottom - rect.top
    else
        int32_t var_210_46 = 0x2c
        char var_214_21 = 0
        lpwndpl_5 = &lpwndpl_2
        sub_480cf0(lpwndpl_5, var_214_21, var_210_46)
        int32_t* lpwndpl_1 = &lpwndpl_2
        lpwndpl_2 = 0x2c
        GetWindowPlacement(sub_4711c0(), lpwndpl_1)
        
        if ((var_1cc.b & 2) == 0 || var_1c8 != 2)
            __builtin_memset(&rect, 0, 0x10)
            sub_46ff00()
            int32_t eax_57 = sub_46d2e0(&data_c79d90)
            int32_t eax_58 = neg.d(eax_57)
            sub_46ff00()
            enum WINDOW_STYLE dwStyle = sub_46d5a0(&data_c79d90)
            lpwndpl_5 = &rect
            AdjustWindowRect(lpwndpl_5, dwStyle, neg.d(sbb.d(eax_58, eax_58, eax_57 != 0)))
            int32_t var_1b4
            int32_t var_1ac
            edi_10 = var_1ac - var_1b4 - rect.right + rect.left
            int32_t var_1b0
            int32_t var_1a8
            ebx_2 = var_1a8 - var_1b0 - rect.bottom + rect.top
        else
            ShowWindow(sub_4711c0(), SW_RESTORE)
            GetClientRect(sub_4711c0(), &rect)
            edi_10 = rect.right - rect.left
            ebx_2 = rect.bottom - rect.top
            ShowWindow(sub_4711c0(), SW_MINIMIZE)
    
    if (edi_10 != *(lpwndpl_6 + 0x10) || ebx_2 != *(lpwndpl_6 + 0x14))
        var_1e9 = 1
    
    int32_t var_188[0x5]
    int32_t var_174
    int32_t var_170
    int32_t var_16c
    int32_t var_168
    
    if (arg4.b == 0)
    label_474c9c:
        
        if (var_1e9 != 0)
        label_474cad:
            
            if (IsIconic(sub_4711c0()) != 0)
                ShowWindow(sub_4711c0(), SW_RESTORE)
            
            if (IsZoomed(sub_4711c0()) != 0)
                ShowWindow(sub_4711c0(), SW_RESTORE)
            
            int32_t X
            int32_t Y
            int32_t cy_1
            enum SET_WINDOW_POS_FLAGS uFlags_1
            
            if (arg4.b == 0)
                int32_t ecx_12 = *(lpwndpl_6 + 0x10)
                int32_t edx_20 = *(lpwndpl_6 + 0x14)
                __builtin_memset(&rect, 0, 0x10)
                rect.right = ecx_12
                rect.bottom = edx_20
                sub_46ff00()
                int32_t eax_101 = sub_46d2e0(&data_c79d90)
                int32_t eax_102 = neg.d(eax_101)
                enum WINDOW_LONG_PTR_INDEX nIndex_3 = 0xfffffff0
                lpwndpl_5 = sub_4711c0()
                enum WINDOW_STYLE dwStyle_2 = GetWindowLongW(lpwndpl_5, nIndex_3)
                lpwndpl_5 = &rect
                AdjustWindowRect(lpwndpl_5, dwStyle_2, neg.d(sbb.d(eax_102, eax_102, eax_101 != 0)))
                uFlags_1 = 0x6
                cy_1 = rect.bottom - rect.top
                lpwndpl_5 = rect.right - rect.left
                Y = 0
                X = 0
            else
                var_188[0] = 0x28
                int32_t* lpwndpl_7 = sub_471040()
                int32_t edx_15 = *(*lpwndpl_7 + 0x3c)
                int32_t (* var_210_62)[0x5] = &var_188
                int32_t ecx_9 = *lpwndpl_6
                lpwndpl_5 = lpwndpl_7
                sub_46cf00(edx_15(lpwndpl_5, ecx_9), var_210_62)
                int32_t* var_210_63 = &lpwndpl_2
                int32_t var_214_36 = 1
                lpwndpl_2 = 0x28
                lpwndpl_5 = sub_46f1f0()
                sub_46cf00(sub_46ce70(lpwndpl_5, var_214_36), var_210_63)
                int32_t ecx_10 = *(lpwndpl_6 + 0x14)
                int32_t lpwndpl_9 = var_16c - var_174
                int32_t cy_3 = var_168 - var_170
                int32_t esi_3 = *(lpwndpl_6 + 0x10)
                RECT rect_2
                GetWindowRect(sub_4711c0(), &rect_2)
                rect.left = 0
                rect.top = 0
                rect.right = esi_3
                rect.bottom = ecx_10
                sub_46ff00()
                int32_t eax_83 = sub_46d2e0(&data_c79d90)
                int32_t eax_84 = neg.d(eax_83)
                enum WINDOW_LONG_PTR_INDEX nIndex_2 = 0xfffffff0
                lpwndpl_5 = sub_4711c0()
                enum WINDOW_STYLE dwStyle_1 = GetWindowLongW(lpwndpl_5, nIndex_2)
                lpwndpl_5 = &rect
                AdjustWindowRect(lpwndpl_5, dwStyle_1, neg.d(sbb.d(eax_84, eax_84, eax_83 != 0)))
                int32_t left = rect.left
                int32_t cy_2 = rect.bottom - rect.top
                int32_t lpwndpl_8 = rect.right - left
                
                if (lpwndpl_8 s> lpwndpl_9)
                    lpwndpl_8 = lpwndpl_9
                
                if (cy_2 s> cy_3)
                    cy_2 = cy_3
                
                int32_t top
                
                if (left s>= var_174)
                    top = rect.top
                
                if (left s< var_174 || top s< var_170 || rect.right s> var_16c
                        || rect.bottom s> var_168)
                    int32_t eax_92
                    int32_t edx_16
                    edx_16:eax_92 = sx.q(lpwndpl_9 - lpwndpl_8)
                    int32_t eax_96
                    int32_t edx_17
                    edx_17:eax_96 = sx.q(cy_3 - cy_2)
                    int32_t edi_18 = (eax_92 - edx_16) s>> 1
                    int32_t eax_98 = (eax_96 - edx_17) s>> 1
                    rect.left = edi_18 + var_174
                    top = var_170 + eax_98
                    rect.top = top
                    rect.right = edi_18 + lpwndpl_8 + var_174
                    rect.bottom = eax_98 + cy_2 + var_170
                
                int32_t left_1 = rect.left
                uFlags_1 = SWP_NOZORDER
                cy_1 = cy_2
                lpwndpl_5 = lpwndpl_8
                Y = top
                X = left_1
            
            SetWindowPos(sub_4711c0(), nullptr, X, Y, lpwndpl_5, cy_1, uFlags_1)
            RECT rect_1
            GetClientRect(sub_4711c0(), &rect_1)
            
            if (rect_1.right - rect_1.left != *(lpwndpl_6 + 0x10)
                    || rect_1.bottom - rect_1.top != *(lpwndpl_6 + 0x14))
                __builtin_memcpy(&lpwndpl_2, sub_471660(&var_188), 0x48)
                lpwndpl_5 = nullptr
                int32_t var_1c0_1 = 0
                int32_t var_1bc_1 = 0
                int32_t eax_113 = sub_4744d0(&lpwndpl_2, 0, lpwndpl_5, arg4)
                
                if (eax_113 s< 0)
                    if (ebx != 0)
                        j_sub_4813df(ebx)
                    
                    sub_46f570(1)
                    int32_t var_214_43 = 0
                    lpwndpl_5 = nullptr
                    sub_4709d0(lpwndpl_5.b, var_214_43)
                    char var_210_71 = 0
                    sub_46ff00()
                    sub_46d760(&data_c79d90, var_210_71)
                    return eax_113
    else
        if (IsIconic(sub_4711c0()) != 0)
            goto label_474c9c
        
        var_188[0] = 0x28
        int32_t* eax_64 = sub_471040()
        int32_t eax_65 = (*(*eax_64 + 0x3c))(eax_64, *lpwndpl_6)
        sub_46cf00(eax_65, &var_188)
        int32_t eax_67 = sub_46ce70(sub_46f1f0(), 1)
        GetWindowRect(sub_4711c0(), &rect)
        
        if (rect.left s>= var_174 && rect.right s<= var_16c && rect.top s>= var_170
                && rect.bottom s<= var_168)
            goto label_474c9c
        
        if (eax_67 != eax_65)
            goto label_474cad
        
        if (IsZoomed(sub_4711c0()) == 0 || var_1e9 != 0)
            goto label_474cad

if (IsWindowVisible(sub_46f1f0()) == 0)
    ShowWindow(sub_46f1f0(), SW_SHOW)

sub_46ff00()

if (sub_46db00(&data_c79d90) != 0)
    sub_4716f0()

if (ebx != 0)
    j_sub_4813df(ebx)

char var_210_75 = 0
sub_46ff00()
sub_46d760(&data_c79d90, var_210_75)
sub_4709d0(0, 0)
char var_210_77 = 1
sub_46ff00()
sub_46dd40(&data_c79d90, var_210_77)
return 0
