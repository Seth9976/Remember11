// 函数: sub_437090
// 地址: 0x437090
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t result_1
int32_t eax_1 = __security_cookie ^ &result_1
void* edi = data_a5dd0c
*(edi + 0xefbc) = zx.d(*(data_2b55e80 + 4))

switch (data_2b55e68 - 0xc)
    case 0
        *(edi + 0xefbc) = zx.d(*(data_2b55e80 + 4))
    case 1
        *(edi + 0xefbc) = zx.d(*(data_2b55e80 + 6))
    case 2
        *(edi + 0xefbc) = zx.d(*(data_2b55e80 + 8))
    case 3
        *(edi + 0xefbc) = zx.d(*(data_2b55e80 + 0xa))

uint32_t eax_7 = zx.d(data_2243af0)

if (eax_7 u<= 6)
    switch (eax_7)
        case 0, 2, 4, 6
            int32_t var_120_1 = *(data_2b55eb8 + (*(edi + 0xefbc) << 2))
            void var_104
            sub_480b92(&var_104, "%s.BIP")
            int32_t eax_9 = data_a5dd0c
            sub_405ea0(0, &var_104, eax_9 + 0x24186c, eax_9 + 0x25186c)
        case 1, 3, 5
            sub_405e30(0, *(edi + 0xefbc), edi + 0x24186c, edi + 0x25186c)
    
    edi = data_a5dd0c

__builtin_memcpy(edi, &data_2b5a860, 0x1bc)
sub_4016c0()
void* edx_6 = data_a5dd0c
int32_t ebp = 0
bool cond:0 = *(edx_6 + 0x24186c) u<= 0
int16_t* ebx = edx_6 + 0x24186c
result_1 = 0

if (not(cond:0))
    int32_t var_108_1 = 0
    bool cond:2_1
    
    do
        __builtin_memcpy(edx_6 + ebp + 0x1bc, &data_2b5a860, 0x1bc)
        *(var_108_1 + edx_6 + 0xdfc8) = edx_6 + ebp + 0x1bc
        int32_t eax_13 = sub_401e00(zx.d(ebx[0x12]))
        edx_6 = data_a5dd0c
        *(var_108_1 + edx_6 + 0xdfc4) = 0
        void* ecx_25
        
        if (eax_13 != 1)
            *(var_108_1 + edx_6 + 0xdfc1) = 1
            *(var_108_1 + edx_6 + 0xdfcc) = data_4bf744
            *(var_108_1 + edx_6 + 0xdfd0) = data_4bf748
            *(var_108_1 + edx_6 + 0xdfd4) = data_4bf740
            ecx_25 = data_4bf740
        else
            int32_t eax_15 = sub_401e00(zx.d(ebx[0x14]))
            int32_t eax_16 = sub_401e00(zx.d(ebx[0x13]))
            edx_6 = data_a5dd0c
            
            if (eax_16 s< eax_15)
                *(var_108_1 + edx_6 + 0xdfc4) = 1
            
            uint32_t ecx_9 = zx.d(ebx[3])
            char eax_19 = *((ecx_9 & 0xfff) + 0x2b55f0c)
            *(edx_6 + ebp + 0x2c0) = ecx_9.w
            *(edx_6 + ebp + 0x2c6) = ebx[4]
            *(edx_6 + ebp + 0x2c8) = ebx[5]
            *(edx_6 + ebp + 0x2ca) = ebx[6]
            *(edx_6 + ebp + 0x2cc) = ebx[7]
            *(edx_6 + ebp + 0x2d2) = ebx[8]
            *(edx_6 + ebp + 0x2d4) = ebx[9]
            *(edx_6 + ebp + 0x2e0) = eax_19
            *(edx_6 + ebp + 0x2e4) = ebx[0xb]
            *(edx_6 + ebp + 0x2e6) = ebx[0xc]
            *(edx_6 + ebp + 0x2f2) = eax_19
            *(edx_6 + ebp + 0x2f6) = ebx[0xe]
            *(edx_6 + ebp + 0x2f8) = ebx[0xf]
            *(edx_6 + ebp + 0x304) = eax_19
            *(edx_6 + ebp + 0x28a) = *(edx_6 + 0xefbc)
            *(edx_6 + ebp + 0x28c) = ebx[2]
            *(edx_6 + ebp + 0x28e) = *(edx_6 + 0xefbc)
            int32_t result_2 = result_1
            *(edx_6 + ebp + 0x290) = ebx[2]
            *(var_108_1 + edx_6 + 0xdfbc) = result_2
            *(var_108_1 + edx_6 + 0xdfc1) = 0
            *(var_108_1 + edx_6 + 0xdfcc) = zx.d(ebx[1]) + edx_6 + 0x24186c
            *(var_108_1 + edx_6 + 0xdfd0) = data_4bf748
            *(var_108_1 + edx_6 + 0xdfd4) = zx.d(*ebx) + edx_6 + 0x24186c
            ecx_25 = zx.d(*ebx) + edx_6 + 0x24186c
        
        int32_t result_3 = result_1
        ebx = &ebx[0x18]
        *(var_108_1 + edx_6 + 0xdfd8) = ecx_25
        ebp += 0x1bc
        cond:2_1 = result_3 + 1 s< zx.d(*ebx)
        result_1 = result_3 + 1
        var_108_1 += 0x20
    while (cond:2_1)

int32_t result = result_1
__builtin_memcpy(&data_2b5a860, edx_6, 0x1bc)
*(edx_6 + 0xefc4) = result
sub_480cd2(eax_1 ^ &result_1)
return result
