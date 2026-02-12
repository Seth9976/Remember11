// 函数: sub_4904a2
// 地址: 0x4904a2
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

char* var_4 = *arg1
void* eax_1 = _strlen(var_4) - 3
int32_t eax_2 = neg.d(eax_1)
int32_t eax_3 = sbb.d(eax_2, eax_2, eax_1 != 0)
arg1[4] = eax_3 + 1
int32_t eax_5

if (eax_3 == 0xffffffff)
    eax_5 = sub_49008b(var_4.b, *arg1)
else
    eax_5 = 2

arg1[3] = eax_5
BOOL result = EnumSystemLocalesA(sub_49037e, 1)

if ((arg1[2].b & 4) == 0)
    arg1[2] = 0

return result
