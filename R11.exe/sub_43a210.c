// 函数: sub_43a210
// 地址: 0x43a210
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

sub_4417a0(&arg1[4])
sub_4417a0(&arg1[9])
sub_4417a0(&arg1[0xe])
sub_4417a0(&arg1[0x13])
sub_4417a0(&arg1[0x18])
sub_4417a0(&arg1[0x1d])

if (*arg1 != 0)
    int32_t edx_2 = arg1[2]
    arg1[3] += 1
    
    if (edx_2 != arg2[1])
        sub_441760(&arg1[4], *arg2, 0)
        sub_441760(&arg1[9], arg2[1], 0)
        sub_441760(&arg1[0xe], arg2[2], 0)
        sub_441760(&arg1[0x13], *arg2, 0)
        sub_441760(&arg1[0x18], arg2[1], 0)
        sub_441760(&arg1[0x1d], arg2[2], 0)
        arg1[1] = *arg2
        bool cond:0_1 = arg1[3] s<= 0x3c
        arg1[2] = arg2[1]
        
        if (not(cond:0_1))
            arg1[3] = 0
else
    *arg1 = 1
    arg1[1] = *arg2
    arg1[2] = arg2[1]
    sub_441740(&arg1[4], *arg2, 3)
    sub_441740(&arg1[9], arg2[1], 3)
    sub_441740(&arg1[0xe], arg2[2], 3)
    sub_441740(&arg1[0x13], *arg2, 0x10)
    sub_441740(&arg1[0x18], arg2[1], 0x10)
    sub_441740(&arg1[0x1d], arg2[2], 0x10)

int32_t var_20 = sub_441790(&arg1[0x13])
int32_t var_1c = sub_441790(&arg1[0x18])
int32_t var_18 = sub_441790(&arg1[0x1d])
int32_t var_14 = arg2[3]
int32_t var_10 = sub_441790(&arg1[4])
int32_t var_c = sub_441790(&arg1[9])
int32_t var_8 = sub_441790(&arg1[0xe])
int32_t var_4 = arg2[3]
return sub_439fd0(arg1[3], &var_20, 0, arg3)
