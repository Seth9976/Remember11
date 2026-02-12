// 函数: sub_46ec80
// 地址: 0x46ec80
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void var_b4
int32_t eax_1 = __security_cookie ^ &var_b4
int32_t result = 0x80004005
int32_t* var_ac = nullptr
HDC hdc_1 = nullptr
HDC hdc = nullptr
HDC hdc_5 = nullptr
void* lpvBits = nullptr
void* lpvBits_1 = nullptr
ICONINFO piconinfo
__builtin_memset(&piconinfo, 0, 0x14)
void pv

if (GetIconInfo(arg2, &piconinfo) != 0 && GetObjectW(piconinfo.hbmMask, 0x18, &pv) != 0)
    uint32_t cLines_3
    uint32_t cLines = cLines_3
    int32_t var_24
    int32_t ebp_1 = var_24
    int32_t var_90_1 = ebp_1
    uint32_t cLines_1 = cLines
    char var_b1_1
    
    if (piconinfo.hbmColor != 0)
        var_b1_1 = 0
    else
        var_b1_1 = 1
        cLines u>>= 1
    
    result = (*(*arg1 + 0x90))(arg1, ebp_1, cLines, 0x15, 3, &var_ac, 0)
    
    if (result s>= 0)
        int32_t eax_8 = cLines_1 * ebp_1
        int32_t ecx_3
        ecx_3.b = mulu.dp.d(eax_8, 4) u>> 0x20 != 0
        lpvBits_1 = sub_481fef(neg.d(ecx_3) | (eax_8 * 4))
        void* lpvBits_2 = lpvBits_1
        int32_t lpbmi
        sub_480cf0(&lpbmi, 0, 0x2c)
        lpbmi = 0x28
        int32_t var_50_1 = ebp_1
        uint32_t cLines_2 = cLines_1
        int16_t var_48_1 = 1
        int16_t var_46_1 = 0x20
        int32_t var_44_1 = 0
        HDC hdc_2 = GetDC(nullptr)
        hdc_5 = hdc_2
        HDC hdc_3 = CreateCompatibleDC(hdc_2)
        hdc = hdc_3
        
        if (hdc_3 != 0)
            HGDIOBJ h = SelectObject(hdc_3, piconinfo.hbmMask)
            GetDIBits(hdc, piconinfo.hbmMask, 0, cLines_1, lpvBits_1, &lpbmi, DIB_RGB_COLORS)
            SelectObject(hdc, h)
            
            if (var_b1_1 != 0)
                goto label_46ee95
            
            int32_t eax_14 = cLines * ebp_1
            int32_t ecx_8
            ecx_8.b = mulu.dp.d(eax_14, 4) u>> 0x20 != 0
            lpvBits = sub_481fef(neg.d(ecx_8) | (eax_14 * 4))
            HDC hdc_4 = CreateCompatibleDC(hdc_5)
            hdc_1 = hdc_4
            
            if (hdc_4 != 0)
                SelectObject(hdc_4, piconinfo.hbmColor)
                GetDIBits(hdc_4, piconinfo.hbmColor, 0, cLines, lpvBits, &lpbmi, DIB_RGB_COLORS)
                ebp_1 = var_90_1
            label_46ee95:
                int32_t* eax_19 = var_ac
                void var_5c
                (*(*eax_19 + 0x34))(eax_19, &var_5c, 0, 0)
                int32_t var_9c_1 = 0
                
                if (cLines u> 0)
                    int32_t* var_58
                    int32_t* var_98_1 = var_58
                    int32_t ecx_15 = neg.d(ebp_1)
                    int32_t eax_25 = neg.d(ebp_1) * 4
                    void* edx_8 = ((cLines << 2) + 0xfffffffc) * ebp_1 + lpvBits_1
                    int32_t var_64_1 = ecx_15
                    int32_t var_68_1 = eax_25
                    int32_t var_8c_1 = (cLines_1 - 1) * ebp_1
                    void* var_a0_2 = edx_8
                    
                    do
                        int32_t edi = 0
                        
                        if (ebp_1 u> 0)
                            int32_t* ebp_3 = var_98_1
                            int32_t* eax_27 = lpvBits - lpvBits_1
                            int32_t ecx_16 = 0xf
                            
                            do
                                int32_t eax_28
                                int32_t esi_5
                                
                                if (var_b1_1 == 0)
                                    eax_28 = *(eax_27 + edx_8)
                                    esi_5 = *edx_8
                                else
                                    eax_28 = *edx_8
                                    esi_5 = *(lpvBits_1 + ((var_8c_1 + edi) << 2))
                                
                                if (esi_5 != 0)
                                    *ebp_3 = 0
                                else
                                    *ebp_3 = eax_28 | 0xff000000
                                
                                if (arg3 != 0 && edi u< 0xc && var_9c_1 u< 5)
                                    int16_t var_e_1 = 0xa2a0
                                    int16_t var_a_1 = 0xa2a0
                                    int16_t var_10 = 0xccc0
                                    int16_t var_8_1 = 0xccc0
                                    lpvBits_1 = lpvBits_2
                                    int16_t var_c_1 = 0xa4a0
                                    
                                    if ((1 << ecx_16.b & zx.d((&var_10)[var_9c_1])) != 0)
                                        *ebp_3 |= 0xff808080
                                
                                edi += 1
                                edx_8 += 4
                                ebp_3 = &ebp_3[1]
                                ecx_16 -= 1
                            while (edi u< var_90_1)
                            
                            ebp_1 = var_90_1
                            eax_25 = var_68_1
                            ecx_15 = var_64_1
                            edx_8 = var_a0_2
                        
                        var_9c_1 += 1
                        var_8c_1 += ecx_15
                        var_98_1 = &var_98_1[ebp_1]
                        edx_8 += eax_25
                        var_a0_2 = edx_8
                    while (var_9c_1 u< cLines)
                
                int32_t* eax_33 = var_ac
                (*(*eax_33 + 0x38))(eax_33)
                result = (*(*arg1 + 0x28))(arg1, piconinfo.xHotspot, piconinfo.yHotspot, var_ac)
                
                if (result s>= 0)
                    result = 0
            else
                result = 0x80004005
        else
            result = 0x80004005

struct HBITMAP__* hbmMask = piconinfo.hbmMask

if (hbmMask != 0)
    DeleteObject(hbmMask)

struct HBITMAP__* hbmColor = piconinfo.hbmColor

if (hbmColor != 0)
    DeleteObject(hbmColor)

if (hdc_5 != 0)
    ReleaseDC(nullptr, hdc_5)

if (hdc_1 != 0)
    DeleteDC(hdc_1)

if (hdc != 0)
    DeleteDC(hdc)

if (lpvBits != 0)
    j_sub_4813df(lpvBits)

if (lpvBits_1 != 0)
    j_sub_4813df(lpvBits_1)

int32_t* eax_41 = var_ac

if (eax_41 != 0)
    (*(*eax_41 + 8))(eax_41)

sub_480cd2(eax_1 ^ &var_b4)
return result
