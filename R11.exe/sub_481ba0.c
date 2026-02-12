// 函数: sub_481ba0
// 地址: 0x481ba0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t esp_1 = arg1[-6]
int32_t eax = arg1[-0xb]
arg1[-7] = eax

if (arg1[-8] == 0)
    *(esp_1 - 4) = eax
    esp_1 -= 4
    sub_482ce0()

__c_exit()
arg1[-1] = 0xfffffffe
int32_t result = arg1[-7]
*(esp_1 - 4) = &data_481bde
TEB* fsbase
fsbase->NtTib.ExceptionList = arg1[-4]
*(esp_1 + 4)
*(esp_1 + 8)
*(esp_1 + 0xc)
*arg1
*arg1 = *(esp_1 - 4)
*arg1
return result
