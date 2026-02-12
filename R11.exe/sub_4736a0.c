// 函数: sub_4736a0
// 地址: 0x4736a0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void var_25c
void* result = __security_cookie ^ &var_25c
void* result_1 = result

if ((data_c7a960 & 1) == 0)
    data_c7a960.d |= 1
    sub_46d000(&data_c79d90)
    result = sub_48258e(sub_49cb00)

if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
    result = EnterCriticalSection(&data_c79d54)

int32_t* esi = data_c79d9c

if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
    result = LeaveCriticalSection(&data_c79d54)

if (esi != 0)
    result = sub_472200(0)
    
    if (result != 0)
        result = sub_477e10(*esi, esi[1], esi[2], esi[6], esi[0xc])
        
        if (result != 0)
            int32_t eax_1 = *(result + 8)
            void var_cc
            
            if (eax_1 != *(result + 0xc))
                wchar16* var_268_3 = sub_46a6b0(eax_1, 0)
                wchar16* var_26c_3 = sub_46a6b0(*(result + 0xc), 0)
                sub_46ab80(&var_cc, 0x64, u"backbuf %s, adapter %s")
            else
                sub_46aa90(&var_cc, 0x64, sub_46a6b0(eax_1, 0))
            
            int16_t var_194
            
            if (esi[0xd] == 0)
                var_194 = 0
            else
                wchar16* var_270_4 = sub_46a6b0(esi[0xe], 0)
                sub_46ab80(&var_194, 0x64, u" (%s)")
            
            int32_t ecx_5 = esi[8]
            
            if (ecx_5 == 0)
                int32_t var_26c_6 = 0x64
                sub_46aa90(&var_25c, 0x64, &data_49ea48)
            else if (ecx_5 == 1)
                int32_t var_26c_5 = 0x64
                sub_46aa90(&var_25c, 0x64, u" (Nonmaskable Multisample)")
            else
                int32_t var_268_4 = ecx_5
                sub_46ab80(&var_25c, 0x64, u" (%dx Multisample)")
            
            sub_46ff00()
            char* eax_10 = sub_46e780(&data_c79d90)
            void* var_268_6 = &var_25c
            int16_t* var_26c_7 = &var_194
            void* var_270_6 = &var_cc
            int32_t var_274_3 = esi[5]
            int32_t var_278_3 = esi[4]
            result = sub_46ab80(eax_10, 0x100, u"%%.02f fps (%dx%d), %s%s%s")

sub_480cd2(result_1 ^ &var_25c)
return result
