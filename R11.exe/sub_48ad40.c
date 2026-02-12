// 函数: sub_48ad40
// 地址: 0x48ad40
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t* ebx = arg5
void* eax = ebx[1]
char var_5 = 0
int32_t ecx_1

if (eax s> 0x80)
    ecx_1 = arg2[2]
else
    ecx_1 = sx.d(arg2[2].b)

int32_t var_c = ecx_1

if (ecx_1 s< 0xffffffff || ecx_1 s>= eax)
    sub_48b1de()
    noreturn

int32_t* esi = arg1

if (*esi != 0xe06d7363)
    goto label_48b052

if (esi[4] != 3)
    goto label_48aecb

eax = esi[5]

if (eax == 0x19930520 || eax == 0x19930521)
    if (esi[7] != 0)
        goto label_48aecb
else if (eax != 0x19930522 || esi[7] != 0)
    goto label_48aecb

void* result = __getptd()

if (*(result + 0x88) == 0)
    return result

esi = *(__getptd() + 0x88)
arg1 = esi
arg3 = *(__getptd() + 0x8c)

if (sub_4920e2(esi) == 0)
    sub_48b1de()
    noreturn

if (*esi == 0xe06d7363 && esi[4] == 3)
    int32_t eax_5 = esi[5]
    
    if ((eax_5 == 0x19930520 || eax_5 == 0x19930521 || eax_5 == 0x19930522) && esi[7] == 0)
        sub_48b1de()
        noreturn

int32_t edx
eax, ecx_1, edx = __getptd()

if (*(eax + 0x94) == 0)
    goto label_48aecb

int32_t* edi_1 = *(__getptd() + 0x94)
void* eax_7 = __getptd()
int32_t* var_40_1 = arg1
int32_t i_1 = 0
*(eax_7 + 0x94) = 0
eax, edx = sub_48a774(edi_1, var_40_1)
ecx_1 = var_40_1

if (eax.b != 0)
    esi = arg1
label_48aecb:
    
    if (*esi == 0xe06d7363 && esi[4] == 3)
        eax = esi[5]
    
    if (*esi == 0xe06d7363 && esi[4] == 3
            && (eax == 0x19930520 || eax == 0x19930521 || eax == 0x19930522))
        int32_t* edi_2 = arg5
        
        if (edi_2[3] u> 0)
            int32_t var_20
            int32_t var_14
            int32_t* edi_3 = sub_482304(edi_2, arg7, var_c, &var_14, &var_20)
            
            while (var_14 u< var_20)
                if (*edi_3 s<= var_c && var_c s<= edi_3[1])
                    char* var_10_1 = edi_3[4]
                    int32_t i_2 = edi_3[3]
                    int32_t i = i_2
                    
                    if (i_2 s> 0)
                        do
                            int32_t* eax_15 = *(esi[7] + 0xc)
                            void* ebx_2 = &eax_15[1]
                            int32_t eax_16 = *eax_15
                            int32_t var_18_1 = eax_16
                            
                            if (eax_16 s> 0)
                                while (true)
                                    char* eax_17 = *ebx_2
                                    int32_t eax_18 = sub_48a535(var_10_1, eax_17, esi[7])
                                    
                                    if (eax_18 != 0)
                                        var_5 = 1
                                        sub_48abe2(arg2, edi_3, esi, arg3, arg4, arg5, eax_17, 
                                            arg7, arg8)
                                        esi = arg1
                                        break
                                    
                                    var_18_1 -= 1
                                    ebx_2 += 4
                                    
                                    if (var_18_1 s<= eax_18)
                                        goto label_48af71
                                
                                break
                            
                        label_48af71:
                            i -= 1
                            var_10_1 = &var_10_1[0x10]
                        while (i s> 0)
                
                var_14 += 1
                edi_3 = &edi_3[5]
            
            edi_2 = arg5
        
        if (arg6 != 0)
            sub_48a6fb(esi)
        
        if (var_5 == 0 && (*edi_2 & 0x1fffffff) u>= 0x19930521)
            int32_t* edi_4 = edi_2[7]
            
            if (edi_4 != 0 && sub_48a774(edi_4, esi) == 0)
                __getptd()
                __getptd()
                *(__getptd() + 0x88) = esi
                *(__getptd() + 0x8c) = arg3
                int32_t* var_44_8
                
                var_44_8 = arg8 != 0 ? arg8 : arg2
                
                sub_4820da(var_44_8, esi)
                int32_t var_40_9 = 0xffffffff
                sub_48a5d5(arg2, arg4, arg5)
                int32_t var_40_10 = arg5[7]
                CallUnexpected()
                noreturn
        
        goto label_48b07e
    
    ebx = arg5
label_48b052:
    
    if (ebx[3] u<= 0)
        goto label_48b07e
    
    if (arg6 == 0)
        sub_48ac4e(eax, edx, ecx_1, esi, arg2, arg3, arg4, ebx, var_c, arg7, arg8)
    label_48b07e:
        result = __getptd()
        
        if (*(result + 0x94) == 0)
            return result
        
        sub_48b1de()
        noreturn
else
    int32_t ebx_1 = 0
    
    if (*edi_1 s> 0)
        do
            if (sub_481fbb(*(ebx_1 + edi_1[1] + 4), 
                    &class std::bad_exception `RTTI Type Descriptor') != 0)
                int32_t var_40_2 = 1
                sub_48a6fb(arg1)
                arg1 = "bad exception"
                struct std::exception::VTable* var_30
                sub_481e36(&var_30, &arg1)
                var_30 = &std::bad_exception::`vftable'{for `std::exception'}
                sub_482059(&var_30, &data_4ac9a4)
                noreturn
            
            i_1 += 1
            ebx_1 += 0x10
        while (i_1 s< *edi_1)

noreturn terminate() __tailcall
