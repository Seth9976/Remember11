// 函数: sub_437f30
// 地址: 0x437f30
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t result = data_a5dd14
__builtin_memcpy(result + 0x1c, 
    "\x01\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00\x"
"01\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00\x01"
"00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00", 
    0x44)
int32_t i = 0

if (data_2b55ef8 u<= 0)
    goto label_437fa8

int32_t edi_1 = 0

do
    result = sub_401e00(zx.d(*(data_2b55ef4 + (i << 1))))
    i += 1
    edi_1 += result
while (i u< data_2b55ef8)

if (edi_1 == 0)
    result = data_a5dd14
label_437fa8:
    *(result + 0x30) = 0
    *(result + 0x34) = 0
    *(result + 0x3c) = 0
    *(result + 0x38) = 0

return result
