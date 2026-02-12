// 函数: sub_422230
// 地址: 0x422230
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t result = data_a5d910

if (*(result + 0x7ac8) == 0)
    data_4b1c38 = 0x80
    data_4b1c3c = 0x80
    data_4b1c40 = 0x80
    data_4b1c44 = 0x80
    data_a5d918 = 0
    data_a5d914 = 0
    return result

char eax = (*(data_c7cc70 + 8)).b

if ((eax & 2) != 0)
    int32_t edx_1
    edx_1.b = data_a5d914 == 0
    data_a5d914 = edx_1

if ((eax & 4) != 0)
    int32_t eax_1
    eax_1.b = data_a5d918 == 0
    data_a5d918 = eax_1

if (data_a5d914 == 0)
    int32_t edx_2 = data_2b53628
    data_4b1c40 = data_2b53624
    data_4b1c44 = edx_2

if (data_a5d918 == 0)
    int32_t ecx_2 = data_2b53620
    data_4b1c38 = data_2b5361c
    data_4b1c3c = ecx_2

int32_t eax_4
int32_t edx_3
edx_3:eax_4 = sx.q(0x80 - data_4b1c3c)
int32_t eax_6 = (eax_4 ^ edx_3) - edx_3

if (eax_6 s< 0x18)
    eax_6 = 0x18
else if (eax_6 s> 0x68)
    eax_6 = 0x68

int32_t esi_2 = (0x50 - (eax_6 - 0x18) * 5 s/ 6) * 0x280 s/ 0x50
int32_t ecx_8 = (0x50 - (eax_6 - 0x18) * 5 s/ 6) * 0x1c0 s/ 0x50
int32_t eax_15
int32_t edx_11
edx_11:eax_15 = sx.q(0x280 - esi_2)
int32_t edi = 0x80 - data_4b1c40
data_4b1c30 = esi_2
int32_t eax_18
int32_t edx_12
edx_12:eax_18 = sx.q(edi)
int32_t eax_20 = (eax_18 ^ edx_12) - edx_12
int32_t esi_4 = (eax_15 - edx_11) s>> 1
data_4b1c34 = ecx_8

if (eax_20 s< 0x18)
    eax_20 = 0x18
else if (eax_20 s> 0x68)
    eax_20 = 0x68

int32_t eax_21 = eax_20 - 0x18

if (edi s< 0)
    eax_21 = neg.d(eax_21)

int32_t eax_22
int32_t edx_15
edx_15:eax_22 = muls.dp.d(0x99999999, esi_4 * eax_21)
int32_t edx_16 = edx_15 s>> 5
int32_t eax_27
int32_t edx_17
edx_17:eax_27 = sx.q(0x1c0 - ecx_8)
int32_t ecx_9 = 0x80 - data_4b1c44
data_4b1c28 = esi_4 + (edx_16 u>> 0x1f) + edx_16
int32_t eax_30
int32_t edx_18
edx_18:eax_30 = sx.q(ecx_9)
int32_t eax_32 = (eax_30 ^ edx_18) - edx_18
int32_t esi_7 = (eax_27 - edx_17) s>> 1

if (eax_32 s< 0x18)
    eax_32 = 0x18
else if (eax_32 s> 0x68)
    eax_32 = 0x68

int32_t eax_33 = eax_32 - 0x18

if (ecx_9 s< 0)
    eax_33 = neg.d(eax_33)

int32_t eax_34
int32_t edx_19
edx_19:eax_34 = muls.dp.d(0x99999999, esi_7 * eax_33)
int32_t edx_20 = edx_19 s>> 5
data_4b1c2c = esi_7 + (edx_20 u>> 0x1f) + edx_20
sub_442e20()
int32_t* edx_21 = data_c7bbc0
data_c7bbf0 = 1
data_c7bbe0 = 3
data_c7bbe4 = 0x80
sub_445790(*edx_21 + 0x58, 0x4b1c18, 0, 1)
sub_442d00(*data_c7bbc0 + 0x58, 1)
int32_t eax_37 = data_2b603b0
int32_t eax_38 = neg.d(eax_37)
int32_t var_28 = 1
sub_409b40(sbb.d(eax_38, eax_38, eax_37 != 0) + 1, 0x900)
return sub_442f40() __tailcall
