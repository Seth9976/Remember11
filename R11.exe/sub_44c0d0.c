// 函数: sub_44c0d0
// 地址: 0x44c0d0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

char* edi = *arg1
void* var_8 = &edi[0x10]
uint32_t var_4 = (((((zx.d(*edi) << 8) + zx.d(edi[1])) << 8) + zx.d(edi[2])) << 8) + zx.d(edi[3])
int32_t edx_2 = 4
char const* const eax_8 = "SCEI"
uint32_t* ecx_2 = &var_4
int32_t eax_13

while (true)
    if (*ecx_2 != *eax_8)
    label_44c12e:
        uint32_t esi_2 = zx.d(*ecx_2)
        uint32_t ebx_1 = zx.d(*eax_8)
        uint32_t esi_3 = esi_2 - ebx_1
        
        if (esi_2 != ebx_1)
        label_44c17f:
            eax_13 = 1
            
            if (esi_3 s<= 0)
                eax_13 = 0xffffffff
            
            break
        
        if (edx_2 != 1)
            uint32_t esi_4 = zx.d(*(ecx_2 + 1))
            uint32_t ebx_2 = zx.d(eax_8[1])
            esi_3 = esi_4 - ebx_2
            
            if (esi_4 != ebx_2)
                goto label_44c17f
            
            if (edx_2 != 2)
                uint32_t esi_5 = zx.d(*(ecx_2 + 2))
                uint32_t ebx_3 = zx.d(eax_8[2])
                esi_3 = esi_5 - ebx_3
                
                if (esi_5 != ebx_3)
                    goto label_44c17f
                
                if (edx_2 != 3)
                    uint32_t esi_6 = zx.d(*(ecx_2 + 3))
                    uint32_t eax_12 = zx.d(eax_8[3])
                    esi_3 = esi_6 - eax_12
                    
                    if (esi_6 != eax_12)
                        goto label_44c17f
    else
        edx_2 -= 4
        eax_8 = &eax_8[4]
        ecx_2 = &ecx_2[1]
        
        if (edx_2 u>= 4)
            continue
        else if (edx_2 != 0)
            goto label_44c12e
    
    eax_13 = 0
    break

if (eax_13 != 0)
    sub_465480(".\emu.cpp", 0xee5)

var_4 = (((((zx.d(edi[4]) << 8) + zx.d(edi[5])) << 8) + zx.d(edi[6])) << 8) + zx.d(edi[7])
int32_t eax_15 = 4
char const* const ecx_13 = "Vers"
uint32_t* edx_8 = &var_4
int32_t eax_20

while (true)
    if (*edx_8 != *ecx_13)
    label_44c1ec:
        uint32_t esi_8 = zx.d(*edx_8)
        uint32_t ebx_4 = zx.d(*ecx_13)
        uint32_t esi_9 = esi_8 - ebx_4
        
        if (esi_8 != ebx_4)
        label_44c23d:
            eax_20 = 1
            
            if (esi_9 s<= 0)
                eax_20 = 0xffffffff
            
            break
        
        if (eax_15 != 1)
            uint32_t esi_10 = zx.d(*(edx_8 + 1))
            uint32_t ebx_5 = zx.d(ecx_13[1])
            esi_9 = esi_10 - ebx_5
            
            if (esi_10 != ebx_5)
                goto label_44c23d
            
            if (eax_15 != 2)
                uint32_t esi_11 = zx.d(*(edx_8 + 2))
                uint32_t ebx_6 = zx.d(ecx_13[2])
                esi_9 = esi_11 - ebx_6
                
                if (esi_11 != ebx_6)
                    goto label_44c23d
                
                if (eax_15 != 3)
                    uint32_t esi_12 = zx.d(*(edx_8 + 3))
                    uint32_t eax_19 = zx.d(ecx_13[3])
                    esi_9 = esi_12 - eax_19
                    
                    if (esi_12 != eax_19)
                        goto label_44c23d
    else
        eax_15 -= 4
        ecx_13 = &ecx_13[4]
        edx_8 = &edx_8[1]
        
        if (eax_15 u>= 4)
            continue
        else if (eax_15 != 0)
            goto label_44c1ec
    
    eax_20 = 0
    break

if (eax_20 != 0)
    sub_465480(".\emu.cpp", 0xee9)

var_4 = sub_4482d0(&var_8)
int32_t eax_22 = 4
char const* const ecx_17 = "SCEI"
uint32_t* edx_12 = &var_4
int32_t eax_26

while (true)
    if (*edx_12 != *ecx_17)
    label_44c298:
        uint32_t esi_14 = zx.d(*edx_12)
        uint32_t ebx_7 = zx.d(*ecx_17)
        uint32_t esi_15 = esi_14 - ebx_7
        
        if (esi_14 != ebx_7)
        label_44c2e9:
            eax_26 = 1
            
            if (esi_15 s<= 0)
                eax_26 = 0xffffffff
            
            break
        
        if (eax_22 != 1)
            uint32_t esi_16 = zx.d(*(edx_12 + 1))
            uint32_t ebx_8 = zx.d(ecx_17[1])
            esi_15 = esi_16 - ebx_8
            
            if (esi_16 != ebx_8)
                goto label_44c2e9
            
            if (eax_22 != 2)
                uint32_t esi_17 = zx.d(*(edx_12 + 2))
                uint32_t ebx_9 = zx.d(ecx_17[2])
                esi_15 = esi_17 - ebx_9
                
                if (esi_17 != ebx_9)
                    goto label_44c2e9
                
                if (eax_22 != 3)
                    uint32_t esi_18 = zx.d(*(edx_12 + 3))
                    uint32_t edx_16 = zx.d(ecx_17[3])
                    esi_15 = esi_18 - edx_16
                    
                    if (esi_18 != edx_16)
                        goto label_44c2e9
    else
        eax_22 -= 4
        ecx_17 = &ecx_17[4]
        edx_12 = &edx_12[1]
        
        if (eax_22 u>= 4)
            continue
        else if (eax_22 != 0)
            goto label_44c298
    
    eax_26 = 0
    break

if (eax_26 != 0)
    sub_465480(".\emu.cpp", 0xeef)

var_4 = sub_4482d0(&var_8)
int32_t eax_28 = 4
char const* const ecx_21 = "Head"
uint32_t* edx_17 = &var_4
int32_t eax_32

while (true)
    if (*edx_17 != *ecx_21)
    label_44c348:
        uint32_t esi_20 = zx.d(*edx_17)
        uint32_t ebx_10 = zx.d(*ecx_21)
        uint32_t esi_21 = esi_20 - ebx_10
        
        if (esi_20 != ebx_10)
        label_44c399:
            eax_32 = 1
            
            if (esi_21 s<= 0)
                eax_32 = 0xffffffff
            
            break
        
        if (eax_28 != 1)
            uint32_t esi_22 = zx.d(*(edx_17 + 1))
            uint32_t ebx_11 = zx.d(ecx_21[1])
            esi_21 = esi_22 - ebx_11
            
            if (esi_22 != ebx_11)
                goto label_44c399
            
            if (eax_28 != 2)
                uint32_t esi_23 = zx.d(*(edx_17 + 2))
                uint32_t ebx_12 = zx.d(ecx_21[2])
                esi_21 = esi_23 - ebx_12
                
                if (esi_23 != ebx_12)
                    goto label_44c399
                
                if (eax_28 != 3)
                    uint32_t esi_24 = zx.d(*(edx_17 + 3))
                    uint32_t ecx_25 = zx.d(ecx_21[3])
                    esi_21 = esi_24 - ecx_25
                    
                    if (esi_24 != ecx_25)
                        goto label_44c399
    else
        eax_28 -= 4
        ecx_21 = &ecx_21[4]
        edx_17 = &edx_17[1]
        
        if (eax_28 u>= 4)
            continue
        else if (eax_28 != 0)
            goto label_44c348
    
    eax_32 = 0
    break

if (eax_32 != 0)
    sub_465480(".\emu.cpp", 0xef3)

void* eax_34 = *(var_8 + 0x18) + edi
var_8 = eax_34
var_4 = sub_4482d0(&var_8)
int32_t eax_36 = 4
char const* const ecx_26 = "SCEI"
uint32_t* edx_22 = &var_4
int32_t eax_40

while (true)
    if (*edx_22 != *ecx_26)
    label_44c408:
        uint32_t esi_26 = zx.d(*edx_22)
        uint32_t edi_1 = zx.d(*ecx_26)
        uint32_t esi_27 = esi_26 - edi_1
        
        if (esi_26 != edi_1)
        label_44c459:
            eax_40 = 1
            
            if (esi_27 s<= 0)
                eax_40 = 0xffffffff
            
            break
        
        if (eax_36 != 1)
            uint32_t esi_28 = zx.d(*(edx_22 + 1))
            uint32_t edi_2 = zx.d(ecx_26[1])
            esi_27 = esi_28 - edi_2
            
            if (esi_28 != edi_2)
                goto label_44c459
            
            if (eax_36 != 2)
                uint32_t esi_29 = zx.d(*(edx_22 + 2))
                uint32_t edi_3 = zx.d(ecx_26[2])
                esi_27 = esi_29 - edi_3
                
                if (esi_29 != edi_3)
                    goto label_44c459
                
                if (eax_36 != 3)
                    uint32_t esi_30 = zx.d(*(edx_22 + 3))
                    uint32_t ecx_30 = zx.d(ecx_26[3])
                    esi_27 = esi_30 - ecx_30
                    
                    if (esi_30 != ecx_30)
                        goto label_44c459
    else
        eax_36 -= 4
        ecx_26 = &ecx_26[4]
        edx_22 = &edx_22[1]
        
        if (eax_36 u>= 4)
            continue
        else if (eax_36 != 0)
            goto label_44c408
    
    eax_40 = 0
    break

if (eax_40 != 0)
    sub_465480(".\emu.cpp", 0xefe)

var_4 = sub_4482d0(&var_8)
int32_t eax_42 = 4
char const* const ecx_31 = "Vagi"
uint32_t* edx_26 = &var_4
int32_t eax_47

while (true)
    if (*edx_26 != *ecx_31)
    label_44c4b8:
        uint32_t esi_32 = zx.d(*edx_26)
        uint32_t edi_4 = zx.d(*ecx_31)
        uint32_t esi_33 = esi_32 - edi_4
        
        if (esi_32 != edi_4)
        label_44c509:
            eax_47 = 1
            
            if (esi_33 s<= 0)
                eax_47 = 0xffffffff
            
            break
        
        if (eax_42 != 1)
            uint32_t esi_34 = zx.d(*(edx_26 + 1))
            uint32_t edi_5 = zx.d(ecx_31[1])
            esi_33 = esi_34 - edi_5
            
            if (esi_34 != edi_5)
                goto label_44c509
            
            if (eax_42 != 2)
                uint32_t esi_35 = zx.d(*(edx_26 + 2))
                uint32_t edi_6 = zx.d(ecx_31[2])
                esi_33 = esi_35 - edi_6
                
                if (esi_35 != edi_6)
                    goto label_44c509
                
                if (eax_42 != 3)
                    uint32_t esi_36 = zx.d(*(edx_26 + 3))
                    uint32_t eax_46 = zx.d(ecx_31[3])
                    esi_33 = esi_36 - eax_46
                    
                    if (esi_36 != eax_46)
                        goto label_44c509
    else
        eax_42 -= 4
        ecx_31 = &ecx_31[4]
        edx_26 = &edx_26[1]
        
        if (eax_42 u>= 4)
            continue
        else if (eax_42 != 0)
            goto label_44c4b8
    
    eax_47 = 0
    break

if (eax_47 != 0)
    sub_465480(".\emu.cpp", 0xf02)

void* esi_37 = var_8
void** result = *(esi_37 + 4) + 1
void* esi_39 = esi_37 + 8

if (result u> 0)
    void** edi_7 = result
    void** i
    
    do
        void* eax_50 = *esi_39 + eax_34
        esi_39 += 4
        result = sub_44c090(eax_50, arg1)
        i = edi_7
        edi_7 -= 1
    while (i != 1)

return result
