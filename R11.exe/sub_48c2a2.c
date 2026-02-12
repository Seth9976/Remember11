// 函数: sub_48c2a2
// 地址: 0x48c2a2
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void var_2ac
int32_t var_8 = __security_cookie ^ &var_2ac
int32_t esi
int32_t var_330 = esi

if ((data_4cc850 & 1) != 0)
    sub_4872ad(0xa)

int32_t eax_2
int32_t ecx_2
int32_t edx
eax_2, ecx_2, edx = sub_48be98()

if (eax_2 != 0)
    eax_2, edx = sub_48bea5(0x16)
    ecx_2 = 0x16

char temp0 = data_4cc850
bool p = unimplemented  {test byte [0x4cc850], 0x2}
bool a = undefined
bool z = (temp0 & 2) == 0

if (not(z))
    int32_t var_224_1 = eax_2
    int32_t var_228_1 = ecx_2
    int32_t var_22c_1 = edx
    int32_t ebx
    int32_t var_230_1 = ebx
    int32_t var_234_1 = esi
    int32_t edi
    int32_t var_238_1 = edi
    int16_t ss
    int16_t var_20c_1 = ss
    int16_t cs
    int16_t var_218_1 = cs
    int16_t ds
    int16_t var_23c_1 = ds
    int16_t es
    int16_t var_240_1 = es
    int16_t fs
    int16_t var_244_1 = fs
    int16_t gs
    int16_t var_248_1 = gs
    bool d
    int32_t var_214_1 = (d ? 1 : 0) << 0xa | ((temp0 & 2) s< 0 ? 1 : 0) << 7 | (z ? 1 : 0) << 6
        | (a ? 1 : 0) << 4 | (p ? 1 : 0) << 2
    int32_t var_2d4 = 0x10001
    void* const __return_addr_2 = __return_addr
    int32_t ebp
    int32_t var_220_1 = ebp
    int32_t var_32c
    sub_480cf0(&var_32c, 0, 0x50)
    EXCEPTION_POINTERS ExceptionInfo
    ExceptionInfo.ExceptionRecord = &var_32c
    var_32c = 0x40000015
    void* const __return_addr_1 = __return_addr
    ExceptionInfo.ContextRecord = &var_2d4
    SetUnhandledExceptionFilter(nullptr)
    UnhandledExceptionFilter(&ExceptionInfo)

sub_482ce0(3)
breakpoint
