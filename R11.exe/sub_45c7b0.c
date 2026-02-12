// 函数: sub_45c7b0
// 地址: 0x45c7b0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

data_c78599 = 0
data_c78595 = 0
data_c78591 = 0
data_c7858d = 0
data_c784d5 = 0
data_c7841d = 0
data_c7841c = 0
sub_480cf0(arg1 + 0xc, 0, 0x24c)
wchar16 const* const eax = u"CYBERFRONT Gal"
__builtin_memcpy(arg1 + 0xc, 
    "\x4c\x02\x00\x00\x28\x00\x00\x00\xd8\x00\x00\x00\x36\x00\x00\x00\x38\xa4\x4c\x00\x33\xc2\x2a\x45\x"
"58\x04\x8f\x4f\x97\xa2\x7e\x4c\x96\x34\x0f\xb6\x00\x00\x00\x0a\x10\x00\x00\x00\x9c\xff\xff\xff\x64"
"00\x00\x00", 
    0x34)
wchar16 const i

do
    i = *eax
    *(arg1 - &data_4a33ec + eax) = i
    eax = &eax[1]
while (i != 0)
int32_t edi
int32_t var_10 = edi
void* eax_1 = sub_481fef(0x26c)
int32_t* ecx_4

if (eax_1 == 0)
    ecx_4 = nullptr
else
    *(eax_1 + 0x14) = 0
    *(eax_1 + 0x10) = 0xa
    *(eax_1 + 8) = 0
    void* eax_2 = sub_4814bc(0x78)
    *(eax_1 + 0xc) = eax_2
    
    if (eax_2 != 0)
        sub_480cf0(eax_2, 0, *(eax_1 + 0x10) * 0xc)
    
    ecx_4 = eax_1

*(arg1 + 8) = ecx_4

if (ecx_4 == 0)
    return 0x8007000e

HRESULT result = sub_45c750(ecx_4, arg2, 0, arg1 + 0xc, sub_45c490, arg1)

if (result s< 0)
    return result

*(arg1 + 0x28c) = 1
return 0
