// 函数: sub_468a20
// 地址: 0x468a20
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t* var_4 = arg1
void* i = arg3
void* result = nullptr
void* result_1 = nullptr

if (i s<= 0)
    return 0

void* ebx = arg2

do
    void* i_2 = sub_468550(arg1)
    
    if (i_2 s<= 0)
        if ((*(*arg1 + 4))(zx.d(*ebx)) == 0xffffffff)
            break
        
        result += 1
        ebx += 1
        result_1 = result
        i -= 1
    else
        void* i_1 = i_2
        
        if (i s< i_2)
            i_1 = i
        
        sub_481d4f(*arg1[9], i_2, ebx, i_1)
        int32_t* eax_2 = arg1[0xd]
        *eax_2 -= i_1
        result_1 += i_1
        int32_t* eax_3 = arg1[9]
        ebx += i_1
        i -= i_1
        *eax_3 += i_1
        result = result_1
while (i s> 0)

return result
