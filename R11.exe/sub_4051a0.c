// 函数: sub_4051a0
// 地址: 0x4051a0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

char var_104[0x100]
int32_t eax_1 = __security_cookie ^ &var_104
int32_t* esi = *(arg1 + 0x44)
int32_t ecx = *esi
int32_t eax_2 = 0

if (esi[1].b == 1)
    eax_2 = sx.d(*(arg1 + 0x10))
    *(arg1 + 0x10) = 0x64

int32_t edx = sx.d(*(arg1 + 0x10))
int32_t result

if (edx u> 0x64)
labelid_a:
    result = 0
else
    switch (edx)
        case 0
            if (data_2b68260 != 0)
            labelid_a:
                result = 0
            else
                void* var_118_1 = esi + 6
                int32_t var_11c_1 = ecx + 8
                data_2b68260 = 1
                sub_480b92(&var_104, "%s%s")
                int32_t var_128_1 = 0
                void* eax_4 = sub_44e3f0(&var_104)
                esi[0x56] = eax_4
                int32_t eax_5 = sub_44cd70(eax_4)
                int32_t ecx_2 = esi[0x58]
                void* edx_2 = esi[0x56]
                esi[0x5a] = eax_5
                sub_44cda0(edx_2, eax_5, ecx_2)
                esi[0x5a] <<= 0xb
                *(arg1 + 0x10) = 1
            label_40526e:
                int32_t eax_8 = sub_44ce00(esi[0x56])
                
                if (eax_8 == 3)
                    sub_44dce0(esi[0x56])
                    data_2b68260 = 0
                    
                    if (*(esi + 5) == 0)
                        result = 1
                    else
                        *(arg1 + 0x10) = 2
                    labelid_a:
                        result = 0
                else
                    if (eax_8 == 4)
                        sub_44dce0(esi[0x56])
                        data_2b68260 = 0
                        *(arg1 + 0x10) = 0
                    
                label_4052c4:
                    result = 0
        case 1
            goto label_40526e
        case 2
            if (data_2b68264 != 0)
            label_4052c4_1:
                result = 0
            else
                data_2b68264 = 1
                sub_405170(esi)
                sub_4423a0(esi[0x58], esi[0x57])
                *(arg1 + 0x10) = 3
            label_40531b:
                
                for (void* i = sub_442400(data_c7bc20, 0x800); i != 0xffffffff; 
                        i = sub_442400(data_c7bc20, 0x800))
                    int32_t* edx_5 = data_4ca040
                    data_c7bc20 += 0x800 - i
                    
                    if (sub_448340(edx_5) u>= 0xdc)
                        goto label_4052c4_2
                
                esi[0x5a] = data_c7bc28
                data_2b68264 = 0
                result = 1
        case 3
            goto label_40531b
        case 4, 5, 6, 7, 8, 9, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 
            0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x20, 0x21, 0x22, 0x23, 
            0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f, 0x30, 0x31, 
            0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x3a, 0x3b, 0x3c, 0x3d, 0x3e, 0x3f, 
            0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49, 0x4a, 0x4b, 0x4c, 0x4d, 
            0x4e, 0x4f, 0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57, 0x58, 0x59, 0x5a, 0x5b, 
            0x5c, 0x5d, 0x5e, 0x5f, 0x60, 0x61, 0x62, 0x63
        label_4052c4_2:
            result = 0
        case 0x64
            if (eax_2 == 1)
                int32_t var_118_7 = esi[0x56]
                sub_44ce50()
                sub_44dce0(esi[0x56])
            
            data_2b68260 = 0
            data_2b68264 = 0
            esi[1].b = 0
            result = 1

sub_480cd2(eax_1 ^ &var_104)
return result
