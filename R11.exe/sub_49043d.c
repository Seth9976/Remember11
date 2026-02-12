// 函数: sub_49043d
// 地址: 0x49043d
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

char* var_4 = *arg1
void* eax = _strlen(var_4)
char* var_8 = arg1[1]
int32_t eax_2 = neg.d(eax - 3)
arg1[4] = sbb.d(eax_2, eax_2, eax != 3) + 1
void* eax_6 = _strlen(var_8) - 3
int32_t eax_7 = neg.d(eax_6)
arg1[6] = 0
bool cond:0 = arg1[4] == 0
arg1[5] = sbb.d(eax_7, eax_7, eax_6 != 0) + 1
int32_t eax_10

if (cond:0)
    eax_10 = sub_49008b(var_4.b, *arg1)
else
    eax_10 = 2

arg1[3] = eax_10
EnumSystemLocalesA(sub_4901ae, 1)
int16_t result = (arg1[2]).w

if ((result & 0x100) == 0 || (result & 0x200) == 0 || (result.b & 7) == 0)
    arg1[2] = 0

return result
