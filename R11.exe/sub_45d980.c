// 函数: sub_45d980
// 地址: 0x45d980
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t* ebx = *(arg1 + 8)

if (*(arg1 + 4) u> ebx)
    __invalid_parameter_noinfo()

int32_t* edi = *(arg1 + 4)

if (edi u> *(arg1 + 8))
    __invalid_parameter_noinfo()

if (edi != ebx)
    *(arg1 + 8) = sub_45d800(ebx, *(arg1 + 8), edi)

*(arg1 + 0x10) = 0xffffffff
data_c7859c = 0
POINT point

if (GetCursorPos(&point) == 1)
    ScreenToClient(arg2, &point)
    int32_t x = point.x
    int32_t y = point.y
    int32_t eax_7
    int32_t edx_1
    edx_1:eax_7 = sx.q(x - *(arg1 + 0x20))
    int32_t eax_12
    int32_t edx_2
    
    if ((eax_7 ^ edx_1) - edx_1 s< 2)
        edx_2:eax_12 = sx.q(y - *(arg1 + 0x24))
    
    if ((eax_7 ^ edx_1) - edx_1 s>= 2 || (eax_12 ^ edx_2) - edx_2 s>= 2)
        data_c7859c = 1
    
    *(arg1 + 0x20) = x
    *(arg1 + 0x24) = y
    int32_t* eax_16 = (*(*data_c78668 + 0x38))()
    *(arg1 + 0x10) = divs.dp.d(sx.q((point.x - *eax_16) * 0x280), eax_16[2])
    eax_16[3]
    *(arg1 + 0x14) = divs.dp.d(sx.q((point.y - eax_16[1]) * 0x1c0), eax_16[3])

bool cond:0 = *(arg1 + 0x28) != 1
data_c785a0 = 0

if (cond:0)
    return 0

if (data_c785d8 == 0)
    *(arg1 + 0x28) = 0
    return 0

data_c785cc = 0
data_c785c5 = 0
data_c785c6 = 0
data_c785d8 = 0
data_c785d1 = 0
data_c785d2 = 0
data_c785e4 = 0
data_c785dd = 0
data_c785de = 0
data_c78598 = 0
data_c78594 = 0
data_c78590 = 0
data_c7858d = 0
data_c784d5 = 0
return 0
