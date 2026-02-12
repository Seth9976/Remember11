// 函数: sub_4149f0
// 地址: 0x4149f0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int16_t* eax
eax.w = *data_2b55e80
data_2b5a92e = eax.w
data_2b5a932 = eax.w
data_2b5a930 = 0
data_2b5a934 = 0
data_2b5a92c = 0
data_2b5a936 = 2
data_2b5a943 = 0
data_2b5a944 = 0
data_2b5a93b = 0xff
data_2b5a93c = 0x80
data_2b5a93d = 0
data_2b5a93e = 0
data_2b5a93f = 0
data_2b5a940 = 0
data_2b5a941 = 0
data_2b5a942 = 0
data_2b5a94c = 0
data_2b5a950 = 0

for (int16_t* i = &data_2b5a95a; i s< &data_2b5a966; i = &i[2])
    i[-1] = 0xffff
    *i = 0x80

__builtin_memcpy(&data_2b5a964, 
    "\x00\x10\x00\x00\x00\x00\x00\x00\x00\x00\x80\x02\xe0\x01\x00\x00\x00\x00", 0x12)
int32_t edx = 1

for (void* i_1 = &data_2b5a978; i_1 s< &data_2b5a9ae; )
    *(i_1 + 0xd) = edx.b
    *(i_1 - 2) = 0xffff
    *i_1 = 0
    *(i_1 + 2) = 0
    *(i_1 + 4) = 0
    *(i_1 + 6) = 0
    *(i_1 + 8) = 0x280
    *(i_1 + 0xa) = 0x1e0
    *(i_1 + 0xc) = 0
    *(i_1 + 0xe) = 0
    *(i_1 + 0xf) = 0
    i_1 += 0x12
    edx += 1

void* i_2

for (i_2 = &data_2b5a9ac; i_2 s< &data_2b5aa18; i_2 += 0x24)
    *i_2 = 0

data_2b5aa18 = 0
data_2b5aa1a = 0
data_2b5a938 = 0
data_2b5a939 = 0
data_2b5a93a = 0
data_e7e644 = 0
return i_2
