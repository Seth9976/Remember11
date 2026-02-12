// 函数: sub_44d1f0
// 地址: 0x44d1f0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

uint32_t fileSystemFlags
int32_t var_4 = __security_cookie ^ &fileSystemFlags
int32_t ebx
int32_t var_628 = ebx
int32_t esi
int32_t var_62c = esi
int32_t edi
int32_t var_630 = edi
void var_618
void* volumeNameBuffer = &var_618
uint32_t volumeNameBuffer_2 = data_4ccfa0()
uint8_t* var_638 = arg2
sub_44ca50(&volumeNameBuffer, var_638, volumeNameBuffer_2)
void* volumeNameBuffer_1 = volumeNameBuffer
void* volumeNameBuffer_3 = volumeNameBuffer_1
int16_t i

do
    i = *volumeNameBuffer_3
    *(arg1 - volumeNameBuffer_1 + volumeNameBuffer_3) = i
    volumeNameBuffer_3 += 2
while (i != 0)

if (volumeNameBuffer_1 != &var_618)
    volumeNameBuffer_2 = volumeNameBuffer_1
    sub_4813df(volumeNameBuffer_2)

char* eax_3 = arg2
int16_t ecx_1

do
    ecx_1.b = *eax_3
    eax_3 = &eax_3[1]
while (ecx_1.b != 0)
uint8_t* edi_1 = data_4ca128
uint8_t* eax_5 = edi_1
int16_t i_1

do
    i_1 = *eax_5
    eax_5 = &eax_5[2]
while (i_1 != 0)

if (eax_3 - &eax_3[1] u>= (eax_5 - &eax_5[2]) s>> 1)
    uint8_t* eax_8 = edi_1
    
    do
        i_1 = *eax_8
        eax_8 = &eax_8[2]
    while (i_1 != 0)
    
    volumeNameBuffer_2 = (eax_8 - &eax_8[2]) s>> 1
    var_638 = edi_1
    
    if (sub_482d5b(arg1, var_638, volumeNameBuffer_2) == 0)
        wchar16* eax_12 = data_4ca128
        wchar16 const i_2
        
        do
            i_2 = *eax_12
            eax_12 = &eax_12[1]
        while (i_2 != 0)
        int16_t* eax_15 = arg1 + ((eax_12 - &eax_12[1]) s>> 1 << 1)
        int16_t* edx_7 = arg1 - eax_15
        int16_t i_3
        
        do
            i_3 = *eax_15
            *(edx_7 + eax_15) = i_3
            eax_15 = &eax_15[1]
        while (i_3 != 0)

volumeNameBuffer_2 = arg1
var_638 = u"FILE"
PathCombineW(arg1, var_638, volumeNameBuffer_2)
volumeNameBuffer_2 = arg1
BOOL result = PathFileExistsW(volumeNameBuffer_2)
void* esp = &var_630

if (result == 0)
    uint32_t eax_16 = arg1
    void var_20c
    int16_t i_4
    
    do
        i_4 = *eax_16
        *(&var_20c - arg1 + eax_16) = i_4
        eax_16 += 2
    while (i_4 != 0)
    uint32_t volumeNameBuffer_4
    volumeNameBuffer_2 = volumeNameBuffer_4
label_44d330:
    uint32_t* esp_1
    uint32_t maximumComponentLength
    
    if (data_c77a30 == 0)
    label_44d3c4:
        uint32_t eax_21 = GetLogicalDrives()
        void* esi_3 = nullptr
        
        while (true)
            if ((eax_21 & 1 << esi_3.b) != 0)
                var_638 = esi_3 + 0x41
                void var_414
                sub_44cd80(&var_414, u"%c:\")
                var_638 = nullptr
                
                if (GetVolumeInformationW(&var_414, &volumeNameBuffer, 0x104, nullptr, 
                        &maximumComponentLength, &fileSystemFlags, nullptr, var_638) != 0)
                    wchar16* eax_24 = data_4ca178
                    void** ecx_5 = &volumeNameBuffer
                    int32_t eax_26
                    
                    while (true)
                        int16_t edx_10 = *ecx_5
                        wchar16 const temp3_1 = *eax_24
                        bool c_3 = edx_10 u< temp3_1
                        
                        if (edx_10 == temp3_1)
                            if (edx_10 == 0)
                                eax_26 = 0
                                break
                            
                            edx_10 = *(ecx_5 + 2)
                            wchar16 const temp7_1 = eax_24[1]
                            c_3 = edx_10 u< temp7_1
                            
                            if (edx_10 == temp7_1)
                                ecx_5 = &ecx_5[1]
                                eax_24 = &eax_24[2]
                                
                                if (edx_10 != 0)
                                    continue
                                
                                eax_26 = 0
                                break
                        
                        bool c_4 = unimplemented  {sbb eax, eax}
                        eax_26 = sbb.d(sbb.d(eax_24, eax_24, c_3), 0xffffffff, c_4)
                        break
                    
                    if (eax_26 == 0)
                        var_638 = &var_20c
                        PathCombineW(arg1, &var_414, var_638)
                        var_638 = arg1
                        esp_1 = &volumeNameBuffer_2
                        
                        if (PathFileExistsW(var_638) != 0)
                        label_44d4d5:
                            data_c77a30 = 1
                            result = 0
                            int16_t i_5
                            
                            do
                                i_5 = *(esp_1 + result + 0x220)
                                *(result + 0xc77828) = i_5
                                result += 2
                            while (i_5 != 0)
                            break
            
            esi_3 += 1
            
            if (esi_3 s>= 0x20)
                var_638 = 1
                
                if (MessageBoxW(nullptr, &data_4a2a68, &data_4a2a84, var_638) != IDCANCEL)
                    goto label_44d330
                
                var_638 = 4
                enum MESSAGEBOX_RESULT eax_29 = MessageBoxW(nullptr, 0x4a2a48, 0x4a2a60, var_638)
                
                if (eax_29 != IDOK && eax_29 != IDYES)
                    goto label_44d330
                
                var_638 = nullptr
                esp_1 = &var_638
                sub_482ce0(var_638)
                goto label_44d4d5
    else
        var_638 = nullptr
        
        if (GetVolumeInformationW(0xc77828, &volumeNameBuffer, 0x104, nullptr, 
                &maximumComponentLength, &fileSystemFlags, nullptr, var_638) == 0)
            goto label_44d3c4
        
        wchar16* eax_18 = data_4ca178
        void** ecx_2 = &volumeNameBuffer
        int32_t eax_20
        
        while (true)
            int16_t edx_9 = *ecx_2
            wchar16 const temp0_1 = *eax_18
            bool c_1 = edx_9 u< temp0_1
            
            if (edx_9 == temp0_1)
                if (edx_9 == 0)
                    eax_20 = 0
                    break
                
                edx_9 = *(ecx_2 + 2)
                int16_t temp4_1 = eax_18[1]
                c_1 = edx_9 u< temp4_1
                
                if (edx_9 == temp4_1)
                    ecx_2 = &ecx_2[1]
                    eax_18 = &eax_18[2]
                    
                    if (edx_9 != 0)
                        continue
                    
                    eax_20 = 0
                    break
            
            bool c_2 = unimplemented  {sbb eax, eax}
            eax_20 = sbb.d(sbb.d(eax_18, eax_18, c_1), 0xffffffff, c_2)
            break
        
        if (eax_20 != 0)
            goto label_44d3c4
        
        var_638 = &var_20c
        PathCombineW(arg1, 0xc77828, var_638)
        var_638 = arg1
        result = PathFileExistsW(var_638)
        esp_1 = &volumeNameBuffer_2
        
        if (result == 0)
            goto label_44d3c4
    *esp_1
    esp = &esp_1[1]

*esp
*(esp + 4)
*(esp + 8)
sub_480cd2(*(esp + 0x62c) ^ (esp + 0xc))
return result
