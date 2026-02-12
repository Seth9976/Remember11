// 函数: sub_474000
// 地址: 0x474000
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t* var_4 = arg3
bool cond:0 = (data_c7a960 & 1) != 0
var_4 = nullptr

if (not(cond:0))
    data_c7a960.d |= 1
    sub_46d000(&data_c79d90)
    sub_48258e(sub_49cb00)

if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
    EnterCriticalSection(&data_c79d54)

int32_t* edi = data_c79d9c

if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
    LeaveCriticalSection(&data_c79d54)

int32_t* ecx_2

if (arg4 != 0)
    ecx_2 = (*(*arg4 + 4))(arg4)
    var_4 = arg4
else
    int32_t* eax = sub_471040()
    int32_t edx = edi[3]
    void* ebx_1 = *eax
    int32_t eax_1 = sub_471100()
    int32_t eax_3
    eax_3, ecx_2 = (*(ebx_1 + 0x40))(eax, *edi, edi[1], eax_1, edx, &edi[4], &var_4)
    
    if (eax_3 s< 0)
        return 0x80040905

if ((data_c7a960 & 1) == 0)
    data_c7a960.d |= 1
    sub_46d000(&data_c79d90)
    ecx_2 = sub_48258e(sub_49cb00)

int32_t* esi_2 = var_4

if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
    ecx_2 = EnterCriticalSection(&data_c79d54)

bool cond:4 = class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b == 0
data_c79d94 = esi_2

if (not(cond:4))
    ecx_2 = LeaveCriticalSection(&data_c79d54)

int32_t esi_3

if (edi[1] == 2)
    if ((data_c7a960 & 1) == 0)
        data_c7a960.d |= 1
        sub_46d000(&data_c79d90)
        ecx_2 = sub_48258e(sub_49cb00)
    
    if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
        ecx_2 = EnterCriticalSection(&data_c79d54)
    
    esi_3 = data_c79fac
    
    if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
        ecx_2 = LeaveCriticalSection(&data_c79d54)

if (edi[1] == 2 && esi_3 == 0)
    sub_46ff00()
    ecx_2 = sub_46dc00(&data_c79d90, 0xb)
else if (edi[1] == 1)
    if ((data_c7a960 & 1) == 0)
        data_c7a960.d |= 1
        sub_46d000(&data_c79d90)
        ecx_2 = sub_48258e(sub_49cb00)
    
    if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
        ecx_2 = EnterCriticalSection(&data_c79d54)
    
    int32_t esi_4 = data_c79fac
    
    if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
        ecx_2 = LeaveCriticalSection(&data_c79d54)
    
    if (esi_4 == 0xb)
        sub_46ff00()
        ecx_2 = sub_46dc00(&data_c79d90, nullptr)

sub_470f30(ecx_2)
int32_t* eax_7 = sub_477d80(sub_472200(0), *edi)
sub_4732e0(edi[1], edi[3], &eax_7[1])
sub_4710a0()

if ((data_c7a960 & 1) == 0)
    data_c7a960.d |= 1
    sub_46d000(&data_c79d90)
    sub_48258e(sub_49cb00)

if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
    EnterCriticalSection(&data_c79d54)

bool cond:7 = class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b == 0
data_c79fb8 = 1

if (not(cond:7))
    LeaveCriticalSection(&data_c79d54)

if ((data_c7a960 & 1) == 0)
    data_c7a960.d |= 1
    sub_46d000(&data_c79d90)
    sub_48258e(sub_49cb00)

if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
    EnterCriticalSection(&data_c79d54)

int32_t ebp = data_c79ffc

if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
    LeaveCriticalSection(&data_c79d54)

int32_t edi_1 = 0

if (ebp != 0)
    if ((data_c7a960 & 1) == 0)
        data_c7a960.d |= 1
        sub_46d000(&data_c79d90)
        sub_48258e(sub_49cb00)
    
    if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
        EnterCriticalSection(&data_c79d54)
    
    int32_t edi_2 = data_c7a02c
    
    if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
        LeaveCriticalSection(&data_c79d54)
    
    if ((data_c7a960 & 1) == 0)
        data_c7a960.d |= 1
        sub_46d000(&data_c79d90)
        sub_48258e(sub_49cb00)
    
    if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
        EnterCriticalSection(&data_c79d54)
    
    int32_t esi_5 = data_c79d94
    
    if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
        LeaveCriticalSection(&data_c79d54)
    
    edi_1 = ebp(esi_5, &data_c79da0, edi_2)

if ((data_c7a960 & 1) == 0)
    data_c7a960.d |= 1
    sub_46d000(&data_c79d90)
    sub_48258e(sub_49cb00)

if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
    EnterCriticalSection(&data_c79d54)

bool cond:10 = class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b == 0
data_c79fb8 = 0

if (not(cond:10))
    LeaveCriticalSection(&data_c79d54)

if ((data_c7a960 & 1) == 0)
    data_c7a960.d |= 1
    sub_46d000(&data_c79d90)
    sub_48258e(sub_49cb00)

if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
    EnterCriticalSection(&data_c79d54)

int32_t esi_6 = data_c79d94

if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
    LeaveCriticalSection(&data_c79d54)

if (esi_6 != 0)
    if (edi_1 s< 0)
        int32_t eax_12
        eax_12.b = edi_1 != 0x80040903
        return (eax_12 << 2) + 0x80040903
    
    sub_46ff00()
    sub_46de80(&data_c79d90, 1)
    sub_46ff00()
    sub_46de00(&data_c79d90, 1)
    sub_46ff00()
    int32_t eax_14 = sub_46e5c0(&data_c79d90)
    int32_t edi_3 = 0
    
    if (eax_14 != 0)
        sub_46ff00()
        int32_t eax_15 = sub_46e680(&data_c79d90)
        edi_3 = eax_14(sub_46ebb0(), &data_c79da0, eax_15)
    
    sub_46ff00()
    sub_46de00(&data_c79d90, 0)
    
    if (sub_46ebb0() != 0)
        if (edi_3 s< 0)
            int32_t eax_21 = neg.d(edi_3 + 0x7ffbf6fd)
            return (sbb.d(eax_21, eax_21, edi_3 != 0x80040903) & 5) - 0x7ffbf6fd
        
        sub_46ff00()
        sub_46df00(&data_c79d90, 1)
        return 0

return 0x80004005
