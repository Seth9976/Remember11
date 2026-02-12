// 函数: sub_47a030
// 地址: 0x47a030
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

while (*(arg1 + 0xb4) != 0)
    MSG msg
    PeekMessageW(&msg, nullptr, 0, 0, PM_NOREMOVE)
    Sleep(1)

uint8_t result = (GetQueueStatus(QS_POSTMESSAGE) u>> 0x10).b

if ((result & 8) == 0)
    return result

return PostThreadMessageW(GetCurrentThreadId(), 0, 0, 0)
