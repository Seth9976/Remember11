// 函数: sub_4414c0
// 地址: 0x4414c0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

char i_1
int32_t eax_1 = __security_cookie ^ &i_1
char* esi = arg2
int32_t var_110 = arg1
char* edi = &i_1
sub_480b92(&i_1, arg3)
char i = i_1

while (i != 0)
    if (i != 0x20)
        *esi = 0x82
        esi[1] = i + 0x1f
    else
        *esi = 0x81
        esi[1] = 0x40
    
    i = edi[1]
    edi = &edi[1]
    esi = &esi[2]

*esi = 0
sub_480cd2(eax_1 ^ &i_1)
return i
