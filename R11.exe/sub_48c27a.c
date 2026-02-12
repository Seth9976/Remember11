// 函数: sub_48c27a
// 地址: 0x48c27a
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t esp_2 = arg1[-6]

if (arg1[-9] == 0xc0000017)
    *(esp_2 - 4) = 8
    SetLastError()

arg1[-8] = 0
arg1[-1] = 0xfffffffe
int32_t result = arg1[-8]
*(esp_2 - 4) = &data_48c2a1
TEB* fsbase
fsbase->NtTib.ExceptionList = arg1[-4]
*(esp_2 + 4)
*(esp_2 + 8)
*(esp_2 + 0xc)
*arg1
*arg1 = *(esp_2 - 4)
*arg1
return result
