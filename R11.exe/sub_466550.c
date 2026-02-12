// 函数: sub_466550
// 地址: 0x466550
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t __saved_ebp_1
int32_t __saved_ebp = __saved_ebp_1
int32_t __saved_ebx_1
int32_t __saved_ebx = __saved_ebx_1
int32_t __saved_esi_1
int32_t __saved_esi = __saved_esi_1
int32_t __saved_edi_1
int32_t __saved_edi = __saved_edi_1
struct CResampling::ResamplingFunction::CResampling::Lanczos3Filter::VTable** esi = nullptr
struct CResampling::ResamplingFunction::CResampling::Lanczos3Filter::VTable** eax_3

if (arg7 == 0)
    int32_t var_c4_3 = 4
    eax_3 = sub_481fef()
    
    if (eax_3 == 0)
        esi = nullptr
    else
        *eax_3 = &CResampling::TriangleFilter::`vftable'{for `CResampling::ResamplingFunction'}
        esi = eax_3
else if (arg7 == 1)
    int32_t var_c4_2 = 0x40
    struct CResampling::ResamplingFunction::CResampling::MitchellNetravaliFilter::VTable** eax_4 =
        sub_481fef()
    
    if (eax_4 == 0)
        esi = nullptr
    else
        long double x87_r7_1 = fconvert.t(0.33333333333333331)
        esi = sub_4663c0(eax_4, fconvert.d(x87_r7_1), fconvert.d(x87_r7_1))
else if (arg7 == 2)
    int32_t var_c4_1 = 4
    eax_3 = sub_481fef()
    
    if (eax_3 == 0)
        esi = nullptr
    else
        *eax_3 = &CResampling::Lanczos3Filter::`vftable'{for `CResampling::ResamplingFunction'}
        esi = eax_3

long double x87_r7_2 = float.t(arg6)
long double x87_r7_3 = x87_r7_2 / fconvert.t(arg5)
long double x87_r6 = float.t(1)
x87_r6 - x87_r7_3
eax_3.w = (x87_r6 < x87_r7_3 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7_3) ? 1 : 0) << 0xa
    | (x87_r6 == x87_r7_3 ? 1 : 0) << 0xe | 0x3000

if ((eax_3:1.b & 0x41) != 0)
    arg2 = x87_r6
else
    x87_r7_3 = x87_r6

(*esi)->vFunc_1()
long double x87_r0 = arg2 / fconvert.t(fconvert.d(x87_r7_3))
double var_58 = fconvert.d(x87_r0)
int32_t mxcsr
int16_t x87control
long double st0 = sub_483590(mxcsr, x87control, fconvert.d(x87_r0 + x87_r0))
int32_t ebx = sub_480df0(st0)
int32_t eax_7 = *arg1
int32_t var_74 = ebx
arg1[1] = ebx

if (eax_7 != 0)
    int32_t var_c4_4 = eax_7
    j_sub_4813df()
    *arg1 = 0

int32_t eax_9 = (ebx + 1) * arg6
int32_t ecx_2
ecx_2.b = mulu.dp.d(eax_9, 4) u>> 0x20 != 0
int32_t var_c4_5 = neg.d(ecx_2) | (eax_9 * 4)
void* eax_11 = j_sub_481fef()
long double x87_r0_3 = fconvert.t(arg5)
long double x87_r6_1 = fconvert.t(fconvert.d(x87_r7_2))
*arg1 = eax_11
void* var_84 = eax_11
double var_48 = fconvert.d(x87_r0_3 / x87_r6_1)
int16_t top = 0
double var_68 = fconvert.d((x87_r0_3 - x87_r6_1) / float.t(arg6 * 2) + fconvert.t(arg4))

if (arg6 s> 0)
    int32_t i_1 = arg6
    int32_t i
    
    do
        unimplemented  {fadd qword [esp+0x68]}
        int32_t eax_14 = sub_480df0(st0)
        
        if (eax_14 s> arg3 - 1)
            eax_14 = arg3 - 1
        
        int32_t eax_15 = eax_14 - ebx
        int32_t var_88_1 = eax_15 + 1
        
        if (eax_15 + 1 s< 0)
            var_88_1 = 0
        
        int32_t* eax_17 = var_84
        int16_t top_2 = top
        unimplemented  {fldz }
        double var_60_1 = fconvert.d(unimplemented  {fst qword [esp+0x60], st0})
        *eax_17 = var_88_1
        int32_t edi_2 = 0
        var_84 = &eax_17[1]
        
        if (ebx s> 0)
            do
                unimplemented  {fstp st0, st0}
                unimplemented  {fstp st0, st0}
                int32_t var_78_1 = edi_2 + var_88_1
                unimplemented  {fild st0, dword [esp+0x48]}
                unimplemented  {fsub st0, qword [esp+0x60]}
                unimplemented  {fmul st0, qword [esp+0x58]}
                double var_c8_3 = fconvert.d(unimplemented  {fstp qword [esp], st0})
                unimplemented  {fstp qword [esp], st0}
                top_2 += 1
                (*esi)->vFunc_0(var_c8_3)
                unimplemented  {fadd qword [esp+0x60]}
                edi_2 += 1
                double var_60_2 = fconvert.d(unimplemented  {fst qword [esp+0x60], st0})
            while (edi_2 s< ebx)
        
        unimplemented  {fldz }
        int32_t edi_3 = 0
        double var_60_3 = fconvert.d(unimplemented  {fstp qword [esp+0x60], st0})
        unimplemented  {fstp qword [esp+0x60], st0}
        int16_t top_9
        
        if (ebx s<= 0)
            unimplemented  {fstp st0, st0}
            unimplemented  {fstp st0, st0}
            top_9 = top_2 + 1
        else
            unimplemented  {fld1 }
            unimplemented  {fdivrp st1, st0}
            unimplemented  {fdivrp st1, st0}
            double var_50_1 = fconvert.d(unimplemented  {fstp qword [esp+0x70], st0})
            unimplemented  {fstp qword [esp+0x70], st0}
            top_9 = top_2 + 1
            
            do
                int32_t var_78_2 = edi_3 + var_88_1
                unimplemented  {fild st0, dword [esp+0x48]}
                unimplemented  {fsub st0, qword [esp+0x60]}
                unimplemented  {fmul st0, qword [esp+0x58]}
                double var_c8_4 = fconvert.d(unimplemented  {fstp qword [esp], st0})
                unimplemented  {fstp qword [esp], st0}
                (*esi)->vFunc_0(var_c8_4)
                unimplemented  {fmul st0, qword [esp+0x70]}
                unimplemented  {fld st0, qword [esp+0x60]}
                unimplemented  {fadd st1, st0}
                unimplemented  {fld st0, st1}
                unimplemented  {fld st0, qword [0x4a3c18]}
                unimplemented  {fmul st1, st0}
                unimplemented  {fld st0, qword [0x4a3c10]}
                unimplemented  {fadd st2, st0}
                unimplemented  {fxch st0, st2}
                unimplemented  {fxch st0, st2}
                int32_t eax_22 = sub_480df0(st0)
                unimplemented  {fmulp st2, st0}
                unimplemented  {fmulp st2, st0}
                unimplemented  {faddp st1, st0}
                unimplemented  {faddp st1, st0}
                int32_t eax_23 = sub_480df0(st0)
                double var_60_4 = fconvert.d(unimplemented  {fstp qword [esp+0x60], st0})
                unimplemented  {fstp qword [esp+0x60], st0}
                top_9 += 1
                int32_t* eax_24 = var_84
                *eax_24 = eax_22 - eax_23
                ebx = var_74
                edi_3 += 1
                var_84 = &eax_24[1]
            while (edi_3 s< ebx)
        
        i = i_1
        i_1 -= 1
        top = top_9 - 1
        unimplemented  {fld st0, qword [esp+0x58]}
        unimplemented  {fadd qword [esp+0x78]}
        double var_68_1 = fconvert.d(unimplemented  {fst qword [esp+0x58], st0})
    while (i != 1)

struct CResampling::ResamplingFunction::CResampling::Lanczos3Filter::VTable** var_c4_6 = esi
unimplemented  {fstp st0, st0}
unimplemented  {fstp st0, st0}
return j_sub_4813df()
