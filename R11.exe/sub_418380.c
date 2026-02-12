// 函数: sub_418380
// 地址: 0x418380
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ecx = 0

for (int32_t i = 0; i s< 0x1248; )
    *(i + data_e7e648 + 0x1f5dc) = 0xffff
    *(i + data_e7e648 + 0x1f5df) = 0
    *(i + data_e7e648 + 0x1f5e0) = 0
    char edx_4 = ecx.b
    
    if (ecx s>= 0xa)
        edx_4 = 9
    else if (ecx s< 0)
        edx_4 = 0
    
    *(i + data_e7e648 + 0x1f5e1) = edx_4
    *(i + data_e7e648 + 0x1f5e8) = 0x10
    i += 0x104
    ecx += 1

*(data_e7e648 + 0xb417c) = 0
*(data_e7e648 + 0xb417e) = 0
sub_405010(data_e7e648 + 0xb4180)
sub_402480(data_e7e648 + 0xb4180, 5)
sub_402490(data_e7e648 + 0xb4180, 1)
return sub_409d10() __tailcall
