// 函数: sub_454930
// 地址: 0x454930
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4 = arg3
EnterCriticalSection(&data_c781dc)

if (data_c78208 u> 0x40)
    sub_4653f0("s_TexPre Clear\n")
    sub_4537c0(*(data_c78204 + 4))
    void* eax_1 = data_c78204
    *(eax_1 + 4) = eax_1
    int32_t* eax_2 = data_c78204
    data_c78208 = 0
    *eax_2 = eax_2
    void* eax_3 = data_c78204
    *(eax_3 + 8) = eax_3

LeaveCriticalSection(&data_c781dc)
HANDLE hHandle = data_c781d8

if (hHandle != 0)
    WaitForSingleObject(hHandle, 0xffffffff)
    sub_465480(".\texture.cpp", 0x8a4)

void* eax_4 = sub_481fef(8)
*eax_4 = arg4
*(eax_4 + 4) = arg5
data_c781d8 = sub_482e8a(nullptr, 0, sub_454460, eax_4, THREAD_CREATE_RUN_IMMEDIATELY, &var_4)
return 0
