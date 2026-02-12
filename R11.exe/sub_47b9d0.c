// 函数: sub_47b9d0
// 地址: 0x47b9d0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ecx = arg1[0x15]
void* edx = *arg1
HANDLE handles = arg1[0x16]
int32_t var_4 = ecx
(*(edx + 0x48))()
enum WAIT_EVENT i

do
    i = WaitForMultipleObjects(2, &handles, 0, 0x2710)
while (i == WAIT_TIMEOUT)

(*(*arg1 + 0x4c))()

if (i == WAIT_OBJECT_0)
    return 0x80040223

arg1[0x1a] = 0
return 0
