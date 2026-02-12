// 函数: sub_479d90
// 地址: 0x479d90
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4_4 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_49ac7b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_30 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result_2 = 0
int32_t* var_14 = nullptr
int32_t var_4 = 0
int32_t* var_18 = nullptr
var_4.b = 1

if (CoCreateInstance(&data_4a5dd4, 0, 0x3, &data_4a5410, arg1 + 4) s< 0)
    int32_t* eax_4 = var_18
    var_4.b = 0
    
    if (eax_4 != 0)
        (*(*eax_4 + 8))(eax_4)
    
    goto label_479ff3

void* eax_5 = sub_481fef(0x168)
void* var_10_1 = eax_5
var_4.b = 2
struct CBaseRenderer::CBaseVideoRenderer::VTable** eax_6

if (eax_5 == 0)
    eax_6 = nullptr
else
    eax_6 = sub_479230(eax_5, 0, &result_2, arg1)

var_4.b = 1

if (result_2 s< 0)
    if (eax_6 != 0)
        (*eax_6)->__offset(0xc).d(1)
    
    goto label_479fcd

int32_t result

if (eax_6 == 0)
label_479fcd:
    int32_t result_8 = result_2
    int32_t result_14 = result_8
    wchar16 const* const var_38_9 = u"Could not create texture renderer object!  hr=0x%x"
    sub_479490(result_8)
    int32_t* eax_23 = var_18
    var_4.b = 0
    
    if (eax_23 != 0)
        (*(*eax_23 + 8))(eax_23)
    
label_479ff3:
    int32_t* eax_25 = var_14
    int32_t var_4_3 = 0xffffffff
    
    if (eax_25 != 0)
        (*(*eax_25 + 8))(eax_25)
    
    result = 0x80004005
else
    sub_479cc0(arg1 + 0x18, &eax_6[3])
    int32_t* eax_8 = *(arg1 + 4)
    int32_t result_3
    int32_t ecx_3
    result_3, ecx_3 = (*(*eax_8 + 0xc))(eax_8, *(arg1 + 0x18), u"TEXTURERENDERER")
    result_2 = result_3
    
    if (result_3 s< 0)
        int32_t result_9 = result_3
        wchar16 const* const var_38_3 = u"Could not add renderer filter to graph!  hr=0x%x"
    label_479e7a:
        sub_479490(ecx_3)
        goto label_479e82
    
    int32_t* eax_12 = *(arg1 + 4)
    int32_t result_4
    result_4, ecx_3 = (*(*eax_12 + 0x38))(eax_12, arg2, u"SOURCE", &var_14)
    result_2 = result_4
    
    if (result_4 != 0x80040216)
        if (result_4 s< 0)
            int32_t result_10 = result_4
            wchar16 const* const var_38_4 = u"Could not add source filter to graph!  hr=0x%x"
            goto label_479e7a
        
        int32_t* eax_14 = var_14
        int32_t result_5
        result_5, ecx_3 = (*(*eax_14 + 0x2c))(eax_14, u"Output", &var_18)
        result_2 = result_5
        
        if (result_5 s< 0)
            int32_t result_11 = result_5
            wchar16 const* const var_38_5 = u"Could not find output pin!  hr=0x%x"
            goto label_479e7a
        
        int32_t* eax_16 = *(arg1 + 4)
        int32_t result_6
        result_6, ecx_3 = (*(*eax_16 + 0x30))(eax_16, var_18)
        result_2 = result_6
        
        if (result_6 s< 0)
            int32_t result_12 = result_6
            wchar16 const* const var_38_7 = u"Could not render source output pin!  hr=0x%x"
            goto label_479e7a
        
        sub_4795e0(arg1 + 4, arg1 + 8)
        sub_479600(arg1 + 4, arg1 + 0xc)
        sub_479620(arg1 + 4, arg1 + 0x10)
        sub_479640(arg1 + 4, arg1 + 0x14)
        int32_t* ebp_4 = *(arg1 + 8)
        int32_t result_7
        result_7, ecx_3 = (*(*ebp_4 + 0x1c))(ebp_4)
        result_2 = result_7
        
        if (result_7 s< 0)
            int32_t result_13 = result_7
            wchar16 const* const var_38_8 = u"Could not run the DirectShow graph!  hr=0x%x"
            goto label_479e7a
        
        int32_t* eax_20 = var_18
        var_4.b = 0
        
        if (eax_20 != 0)
            (*(*eax_20 + 8))(eax_20)
        
        int32_t* eax_21 = var_14
        int32_t var_4_2 = 0xffffffff
        
        if (eax_21 != 0)
            (*(*eax_21 + 8))(eax_21)
        
        result = 0
    else
        wchar16 const* const var_34_7 = Could not add source filter to graph!  (hr==VFW_E_NOT_FOUND)"
        "\n\r\nThis sample reads a media file from your windows directory.\r\nThis file is missing "
        "from this machine."
        sub_479490(ecx_3)
    label_479e82:
        int32_t* eax_10 = var_18
        int32_t result_1 = result_2
        var_4.b = 0
        
        if (eax_10 != 0)
            (*(*eax_10 + 8))(eax_10)
        
        int32_t* eax_11 = var_14
        int32_t var_4_1 = 0xffffffff
        
        if (eax_11 != 0)
            (*(*eax_11 + 8))(eax_11)
        
        result = result_1

fsbase->NtTib.ExceptionList = ExceptionList
return result
