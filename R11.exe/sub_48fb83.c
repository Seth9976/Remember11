// 函数: sub_48fb83
// 地址: 0x48fb83
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t result_1 = 0
bool cond:0 = *(arg1 + 0x14) == 0
void* var_30_1
__builtin_memset(&var_30_1, 0, 0x14)
void* var_4c = arg1
int32_t var_48 = 0
int32_t result

if (cond:0)
    int32_t eax_43 = *(arg1 + 0xc0)
    
    if (eax_43 != 0)
        InterlockedDecrement(eax_43)
    
    *(arg1 + 0xc0) = 0
    *(arg1 + 0xc4) = 0
    *(arg1 + 0xc8) = u"         (((((                  H"
    *(arg1 + 0xcc) = 0x4a7048
    *(arg1 + 0xd0) = 0x4a71c8
    *(arg1 + 0xac) = 1
    result = 0
else
    void* var_24_1
    void* var_2c_1
    void* var_28_1
    void* var_20_1
    
    if (*(arg1 + 4) != 0)
    label_48fbef:
        var_30_1 = sub_48b27c(4)
        var_28_1 = sub_48b2bc(0x180, 2)
        var_20_1 = sub_48b2bc(0x180, 1)
        var_2c_1 = sub_48b2bc(0x180, 1)
        void* eax_9 = sub_48b2bc(0x101, 1)
        var_24_1 = eax_9
        
        if (var_30_1 == 0 || var_28_1 == 0 || eax_9 == 0 || var_20_1 == 0 || var_2c_1 == 0)
            goto label_48fe9f
        
        *var_30_1 = 0
        
        for (char* i = nullptr; i s< 0x100; i = &i[1])
            *(i + var_24_1) = i.b
        
        CPINFO cPInfo
        BOOL eax_11
        uint32_t ecx_2
        eax_11, ecx_2 = GetCPInfo(*(arg1 + 4), &cPInfo)
        
        if (eax_11 == 0 || cPInfo.MaxCharSize u> 5)
            goto label_48fe9f
        
        uint32_t eax_12 = zx.d(cPInfo.MaxCharSize.w)
        var_15
        
        if (eax_12 s> 1 && cPInfo.LeadByte[0] != 0)
            void* eax_13 = &var_15
            
            do
                ecx_2.b = *eax_13
                
                if (ecx_2.b == 0)
                    break
                
                char* i_1 = zx.d(*(eax_13 - 1))
                
                for (ecx_2 = zx.d(ecx_2.b); i_1 s<= ecx_2; i_1 = &i_1[1])
                    *(i_1 + var_24_1) = 0x20
                    ecx_2 = zx.d(*eax_13)
                
                eax_13 += 2
            while (*(eax_13 - 1) != 0)
        
        if (sub_48efa9(nullptr, 1, var_24_1, 0x100, var_28_1 + 0x100, *(arg1 + 4), 0, 0) == 0)
            goto label_48fe9f
        
        if (sub_4894e3(nullptr, *(arg1 + 0x14), 0x100, var_24_1 + 1, 0xff, var_20_1 + 0x81, 0xff, 
                *(arg1 + 4), 0) == 0)
            goto label_48fe9f
        
        if (sub_4894e3(nullptr, *(arg1 + 0x14), 0x200, var_24_1 + 1, 0xff, var_2c_1 + 0x81, 0xff, 
                *(arg1 + 4), 0) == 0)
            goto label_48fe9f
        
        *(var_28_1 + 0xfe) = 0
        *(var_20_1 + 0x7f) = 0
        *(var_2c_1 + 0x7f) = 0
        *(var_20_1 + 0x80) = 0
        *(var_2c_1 + 0x80) = 0
        
        if (eax_12 s> 1 && cPInfo.LeadByte[0] != 0)
            void* ecx_9 = &var_15
            void* var_20_2 = &var_15
            
            do
                void* edx_1
                edx_1.b = *ecx_9
                
                if (edx_1.b == 0)
                    break
                
                uint32_t ecx_10 = zx.d(*(ecx_9 - 1))
                
                if (ecx_10 s<= zx.d(edx_1.b))
                    void* edx_2 = var_28_1 + (ecx_10 << 1) + 0x100
                    
                    while (true)
                        *edx_2 = 0x8000
                        ecx_10 += 1
                        
                        if (ecx_10 s> zx.d(*var_20_2))
                            break
                        
                        edx_2 += 2
                
                ecx_9 = var_20_2 + 2
                var_20_2 = ecx_9
            while (*(ecx_9 - 1) != 0)
        
        sub_480ea0(var_28_1, var_28_1 + 0x200, 0xfe)
        sub_480ea0(var_20_1, var_20_1 + 0x100, 0x7f)
        sub_480ea0(var_2c_1, var_2c_1 + 0x100, 0x7f)
        int32_t eax_29 = *(arg1 + 0xc0)
        
        if (eax_29 != 0 && InterlockedDecrement(eax_29) == 0)
            sub_4813df(*(arg1 + 0xc4) - 0xfe)
            sub_4813df(*(arg1 + 0xcc) - 0x80)
            sub_4813df(*(arg1 + 0xd0) - 0x80)
            sub_4813df(*(arg1 + 0xc0))
        
        void* eax_37 = var_30_1
        *eax_37 = 1
        *(arg1 + 0xc0) = eax_37
        *(arg1 + 0xc8) = var_28_1 + 0x100
        *(arg1 + 0xc4) = var_28_1 + 0xfe
        *(arg1 + 0xcc) = var_20_1 + 0x80
        *(arg1 + 0xd0) = var_2c_1 + 0x80
        *(arg1 + 0xac) = eax_12
    else
        if (sub_48c05f(&var_4c, 0, zx.d(*(arg1 + 0x30)), 0x1004, arg1 + 4) == 0)
            goto label_48fbef
        
    label_48fe9f:
        sub_4813df(var_30_1)
        sub_4813df(var_28_1)
        sub_4813df(var_20_1)
        sub_4813df(var_2c_1)
        result_1 = 1
    sub_4813df(var_24_1)
    result = result_1

sub_480cd2(eax_1 ^ &__saved_ebp)
return result
