// 函数: sub_471860
// 地址: 0x471860
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

PWSTR var_20c
int32_t eax_1 = __security_cookie ^ &var_20c
PWSTR eax_2
int32_t ecx
eax_2, ecx = GetCommandLineW()
PWSTR edi = eax_2
int16_t eax_3 = *edi
var_20c = edi

if (eax_3 == 0x22)
    int16_t i = edi[1]
    edi = &edi[1]
    var_20c = edi
    
    if (i != 0)
        do
            if (i == 0x22)
                var_20c = edi
                edi = &edi[1]
                var_20c = edi
                goto label_471914
            
            i = edi[1]
            edi = &edi[1]
        while (i != 0)
        
        var_20c = edi
    
    if (*edi == 0x22)
        edi = &edi[1]
        var_20c = edi
else if (eax_3 u> 0x20)
    do
        edi = &edi[1]
    while (*edi u> 0x20)
    
    var_20c = edi

label_471914:

while (true)
    int16_t i_1 = *edi
    
    if (i_1 == 0)
    label_471943:
        sub_480cd2(eax_1 ^ &var_20c)
        return i_1
    
    while (i_1 u<= 0x20)
        i_1 = edi[1]
        edi = &edi[1]
        var_20c = edi
        
        if (i_1 == 0)
            goto label_471943
    
    i_1 = *edi
    
    if (i_1 == 0)
        goto label_471943
    
    if (i_1 == 0x2f || i_1 == 0x2d)
        edi = &edi[1]
        var_20c = edi
    
    int16_t var_204
    int16_t* eax_4 = &var_204
    int32_t edx_1 = 0x100
    int16_t i_2
    
    while (true)
        i_2 = *(u"adapter" - &var_204 + eax_4)
        
        if (i_2 != 0)
            *eax_4 = i_2
            eax_4 = &eax_4[1]
            int32_t temp0_1 = edx_1
            edx_1 -= 1
            
            if (temp0_1 != 1)
                continue
        else if (edx_1 != 0)
            break
        
        eax_4 -= 2
        break
    
    *eax_4 = 0
    int16_t* eax_5 = &var_204
    
    do
        i_2 = *eax_5
        eax_5 = &eax_5[1]
    while (i_2 != 0)
    
    void var_202
    int32_t eax_7 = (eax_5 - &var_202) s>> 1
    int16_t* eax_9 = &var_204
    
    if (sub_483e88(edi, &var_204, eax_7) != 0)
        int32_t edx_2 = 0x100
        int16_t i_3
        
        while (true)
            i_3 = *(u"windowed" - &var_204 + eax_9)
            
            if (i_3 != 0)
                *eax_9 = i_3
                eax_9 = &eax_9[1]
                int32_t temp1_1 = edx_2
                edx_2 -= 1
                
                if (temp1_1 != 1)
                    continue
            else if (edx_2 != 0)
                break
            
            eax_9 -= 2
            break
        
        *eax_9 = 0
        int16_t* eax_12 = &var_204
        
        do
            i_3 = *eax_12
            eax_12 = &eax_12[1]
        while (i_3 != 0)
        
        int32_t esi_5 = (eax_12 - &var_202) s>> 1
        
        if (sub_483e88(edi, &var_204, esi_5) == 0)
            if ((data_c7a960 & 1) == 0)
                data_c7a960.d |= 1
                sub_46d000(&data_c79d90)
                sub_48258e(sub_49cb00)
            
            if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
                EnterCriticalSection(&data_c79d54)
            
            data_c79fd0 = 1
            goto label_471c96
        
        int16_t* eax_16 = &var_204
        int32_t edx_3 = 0x100
        int16_t i_4
        
        while (true)
            i_4 = *(u"fullscreen" - &var_204 + eax_16)
            
            if (i_4 != 0)
                *eax_16 = i_4
                eax_16 = &eax_16[1]
                int32_t temp2_1 = edx_3
                edx_3 -= 1
                
                if (temp2_1 != 1)
                    continue
            else if (edx_3 != 0)
                break
            
            eax_16 -= 2
            break
        
        *eax_16 = 0
        int16_t* eax_17 = &var_204
        
        do
            i_4 = *eax_17
            eax_17 = &eax_17[1]
        while (i_4 != 0)
        
        esi_5 = (eax_17 - &var_202) s>> 1
        
        if (sub_483e88(edi, &var_204, esi_5) == 0)
            if ((data_c7a960 & 1) == 0)
                data_c7a960.d |= 1
                sub_46d000(&data_c79d90)
                sub_48258e(sub_49cb00)
            
            if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
                EnterCriticalSection(&data_c79d54)
            
            data_c79fd1 = 1
            goto label_471c96
        
        sub_46aa90(&var_204, 0x100, u"forcehal")
        int16_t* eax_21 = &var_204
        int16_t i_5
        
        do
            i_5 = *eax_21
            eax_21 = &eax_21[1]
        while (i_5 != 0)
        esi_5 = (eax_21 - &var_202) s>> 1
        
        if (sub_483e88(edi, &var_204, esi_5) == 0)
            if ((data_c7a960 & 1) == 0)
                data_c7a960.d |= 1
                sub_46d000(&data_c79d90)
                sub_48258e(sub_49cb00)
            
            if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
                EnterCriticalSection(&data_c79d54)
            
            data_c79fe4 = 1
            goto label_471c96
        
        sub_46aa90(&var_204, 0x100, u"forceref")
        int16_t* eax_25 = &var_204
        int16_t i_6
        
        do
            i_6 = *eax_25
            eax_25 = &eax_25[1]
        while (i_6 != 0)
        esi_5 = (eax_25 - &var_202) s>> 1
        
        if (sub_483e88(edi, &var_204, esi_5) != 0)
            sub_46aa90(&var_204, 0x100, u"forcepurehwvp")
            int16_t* eax_29 = &var_204
            int16_t i_7
            
            do
                i_7 = *eax_29
                eax_29 = &eax_29[1]
            while (i_7 != 0)
            int32_t eax_31 = (eax_29 - &var_202) s>> 1
            
            if (sub_483e88(edi, &var_204, eax_31) != 0)
                sub_46aa90(&var_204, 0x100, u"forcehwvp")
                int16_t* eax_33 = &var_204
                int16_t i_8
                
                do
                    i_8 = *eax_33
                    eax_33 = &eax_33[1]
                while (i_8 != 0)
                int32_t eax_35 = (eax_33 - &var_202) s>> 1
                
                if (sub_483e88(edi, &var_204, eax_35) != 0)
                    sub_46aa90(&var_204, 0x100, u"forceswvp")
                    int16_t* eax_37 = &var_204
                    int16_t i_9
                    
                    do
                        i_9 = *eax_37
                        eax_37 = &eax_37[1]
                    while (i_9 != 0)
                    int32_t eax_39 = (eax_37 - &var_202) s>> 1
                    
                    if (sub_483e88(edi, &var_204, eax_39) != 0)
                        sub_46aa90(&var_204, 0x100, u"width")
                        int16_t* eax_41 = &var_204
                        int16_t i_10
                        
                        do
                            i_10 = *eax_41
                            eax_41 = &eax_41[1]
                        while (i_10 != 0)
                        int32_t eax_43 = (eax_41 - &var_202) s>> 1
                        
                        if (sub_483e88(edi, &var_204, eax_43) != 0)
                            sub_46aa90(&var_204, 0x100, u"height")
                            int16_t* eax_47 = &var_204
                            int16_t i_11
                            
                            do
                                i_11 = *eax_47
                                eax_47 = &eax_47[1]
                            while (i_11 != 0)
                            int32_t eax_49 = (eax_47 - &var_202) s>> 1
                            
                            if (sub_483e88(edi, &var_204, eax_49) != 0)
                                sub_46aa90(&var_204, 0x100, u"startx")
                                int16_t* eax_53 = &var_204
                                int16_t i_12
                                
                                do
                                    i_12 = *eax_53
                                    eax_53 = &eax_53[1]
                                while (i_12 != 0)
                                int32_t eax_55 = (eax_53 - &var_202) s>> 1
                                
                                if (sub_483e88(edi, &var_204, eax_55) != 0)
                                    sub_46aa90(&var_204, 0x100, u"starty")
                                    int16_t* eax_59 = &var_204
                                    int16_t i_13
                                    
                                    do
                                        i_13 = *eax_59
                                        eax_59 = &eax_59[1]
                                    while (i_13 != 0)
                                    int32_t eax_61 = (eax_59 - &var_202) s>> 1
                                    
                                    if (sub_483e88(edi, &var_204, eax_61) != 0)
                                        sub_46aa90(&var_204, 0x100, u"constantframetime")
                                        int16_t* eax_65 = &var_204
                                        int16_t i_14
                                        
                                        do
                                            i_14 = *eax_65
                                            eax_65 = &eax_65[1]
                                        while (i_14 != 0)
                                        int32_t eax_67 = (eax_65 - &var_202) s>> 1
                                        
                                        if (sub_483e88(edi, &var_204, eax_67) != 0)
                                            sub_46aa90(&var_204, 0x100, u"quitafterframe")
                                            int16_t* eax_70 = &var_204
                                            int16_t i_15
                                            
                                            do
                                                i_15 = *eax_70
                                                eax_70 = &eax_70[1]
                                            while (i_15 != 0)
                                            int32_t eax_72 = (eax_70 - &var_202) s>> 1
                                            
                                            if (sub_483e88(edi, &var_204, eax_72) != 0)
                                                sub_46aa90(&var_204, 0x100, u"noerrormsgboxes")
                                                int16_t* eax_76 = &var_204
                                                int16_t i_16
                                                
                                                do
                                                    i_16 = *eax_76
                                                    eax_76 = &eax_76[1]
                                                while (i_16 != 0)
                                                int32_t eax_78 = (eax_76 - &var_202) s>> 1
                                                uint32_t eax_79 = sub_483e88(edi, &var_204, eax_78)
                                                
                                                if (eax_79 != 0)
                                                    sub_46aa90(&var_204, 0x100, u"automation")
                                                    int16_t* eax_80 = &var_204
                                                    int16_t i_17
                                                    
                                                    do
                                                        i_17 = *eax_80
                                                        eax_80 = &eax_80[1]
                                                    while (i_17 != 0)
                                                    int32_t eax_82 = (eax_80 - &var_202) s>> 1
                                                    
                                                    if (sub_483e88(edi, &var_204, eax_82) != 0)
                                                        sub_46aa90(&var_204, 0x100, edi)
                                                        int16_t* eax_84 = &var_204
                                                        
                                                        if (var_204 != 0)
                                                            while (*eax_84 u> 0x20)
                                                                eax_84 = &eax_84[1]
                                                                
                                                                if (*eax_84 == 0)
                                                                    break
                                                        
                                                        *eax_84 = 0
                                                        int16_t* var_220_41 = &var_204
                                                        void* const var_224_25 =
                                                            Unrecognized flag: %s"
                                                        int16_t* eax_85 = &var_204
                                                        int16_t i_18
                                                        
                                                        do
                                                            i_18 = *eax_85
                                                            eax_85 = &eax_85[1]
                                                        while (i_18 != 0)
                                                        edi = &edi[(eax_85 - &var_202) s>> 1]
                                                        var_20c = edi
                                                        continue
                                                    else
                                                        sub_46ff00()
                                                        sub_46e080(&data_c79d90, 1)
                                                        edi = &edi[eax_82]
                                                        var_20c = edi
                                                        continue
                                                else
                                                    sub_46ff00()
                                                    sub_46da80(&data_c79d90, eax_79.b)
                                                    edi = &edi[eax_78]
                                                    var_20c = edi
                                                    continue
                                            else if (sub_46f4f0(&var_20c, &var_204, eax_72) != 0)
                                                int32_t eax_75 = j_sub_483d8a(&var_204)
                                                sub_46ff00()
                                                sub_46e540(&data_c79d90, eax_75)
                                        else
                                            float var_208_1
                                            
                                            if (sub_46f4f0(&var_20c, &var_204, eax_67) == 0)
                                                var_208_1 = fconvert.s(fconvert.t(0.0333000012f))
                                            else
                                                var_208_1 =
                                                    fconvert.s(sub_483d77(&var_204, nullptr))
                                            
                                            sub_46ff00()
                                            int32_t var_220_29 = sub_46e4c0(&data_c79d90, 1)
                                            sub_46ff00()
                                            int32_t var_220_31 = sub_46e500(&data_c79d90, 
                                                fconvert.s(fconvert.t(var_208_1)))
                                            sub_4714a0(1, fconvert.s(fconvert.t(var_208_1)))
                                    else if (sub_46f4f0(&var_20c, &var_204, eax_61) != 0)
                                        int32_t eax_64 = j_sub_483d8a(&var_204)
                                        sub_46ff00()
                                        sub_46e200(&data_c79d90, eax_64)
                                else if (sub_46f4f0(&var_20c, &var_204, eax_55) != 0)
                                    int32_t eax_58 = j_sub_483d8a(&var_204)
                                    sub_46ff00()
                                    sub_46e180(&data_c79d90, eax_58)
                            else if (sub_46f4f0(&var_20c, &var_204, eax_49) != 0)
                                int32_t eax_52 = j_sub_483d8a(&var_204)
                                sub_46ff00()
                                sub_46e300(&data_c79d90, eax_52)
                        else if (sub_46f4f0(&var_20c, &var_204, eax_43) != 0)
                            int32_t eax_46 = j_sub_483d8a(&var_204)
                            sub_46ff00()
                            sub_46e280(&data_c79d90, eax_46)
                    else
                        sub_46ff00()
                        sub_46e440(&data_c79d90, 1)
                        edi = &edi[eax_39]
                        var_20c = edi
                        continue
                else
                    sub_46ff00()
                    sub_46e3c0(&data_c79d90, 1)
                    edi = &edi[eax_35]
                    var_20c = edi
                    continue
            else
                sub_46ff00()
                sub_46e380(&data_c79d90, 1)
                edi = &edi[eax_31]
                var_20c = edi
                continue
        else
            if ((data_c7a960 & 1) == 0)
                data_c7a960.d |= 1
                sub_46d000(&data_c79d90)
                sub_48258e(sub_49cb00)
            
            if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
                EnterCriticalSection(&data_c79d54)
            
            data_c79fe5 = 1
        label_471c96:
            
            if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
                LeaveCriticalSection(&data_c79d54)
            
            edi = &edi[esi_5]
            var_20c = edi
            continue
    else if (sub_46f4f0(&var_20c, &var_204, eax_7) != 0)
        int32_t eax_11 = j_sub_483d8a(&var_204)
        
        if ((data_c7a960 & 1) == 0)
            data_c7a960.d |= 1
            sub_46d000(&data_c79d90)
            sub_48258e(sub_49cb00)
        
        if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
            EnterCriticalSection(&data_c79d54)
        
        bool cond:5_1 = class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b == 0
        data_c79fcc = eax_11
        
        if (not(cond:5_1))
            LeaveCriticalSection(&data_c79d54)
    
    edi = var_20c
