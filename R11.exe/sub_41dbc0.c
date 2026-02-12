// 函数: sub_41dbc0
// 地址: 0x41dbc0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t edi = 0
uint32_t result

for (int32_t i = 0; i s< 0xc; )
    result = zx.d(*(i + &data_2b5a958))
    
    if (result.w != 0xffff)
        result = zx.d(result.w)
        
        if ((result & 0xfff)[data_2b55f00] != 0)
            sub_414960(0, result.w | 0x5000)
            *(edi + data_e7e648 + 0x20974) = *(i + &data_2b5a958)
            sub_4090d0(*(i + &data_4b17e0))
            *(edi + data_e7e648 + 0x20976) = *(i + &data_2b5a95a)
            *(edi + data_e7e648 + 0x20979) = 2
            result = data_e7e648
            *(edi + result + 0x2097a) = 0
    
    i += 4
    edi += 0xa

return result
