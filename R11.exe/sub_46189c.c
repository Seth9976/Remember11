// 函数: sub_46189c
// 地址: 0x46189c
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

*arg3 += arg1
*arg3 += arg1
*arg3 += arg1
*arg3 += arg1
*arg3 += arg1
*arg3 += arg1
*arg3 += arg1
*arg3 += arg1
*arg3 += arg1
*arg3 += arg1
*arg3 += arg1
*arg3 += arg1
*arg3 += arg1
*arg3 += arg1
*arg3 += arg1
*arg3 += arg1
*arg3 += arg1.b
*(arg1 + 0x461383) += arg2.b
arg1.b |= 0x13
char temp1 = arg1:1.b
char entry_ebx
arg1:1.b += entry_ebx
bool c = temp1 + entry_ebx u< temp1
char temp2 = arg1.b
char temp3 = *(arg4 + 1)
arg1.b = adc.b(temp2, temp3, c)
bool c_1 = adc.b(temp2, temp3, c) u< temp2 || (c && adc.b(temp2, temp3, c) == temp2)
char temp4 = arg5.b
char temp5 = *(arg4 + 1)
int32_t eax
eax.b = adc.b(temp4, temp5, c_1)
bool c_2 = adc.b(temp4, temp5, c_1) u< temp4 || (c_1 && adc.b(temp4, temp5, c_1) == temp4)
char* var_4 = arg4 + 1
char temp6 = eax.b
char temp7 = *(arg4 + 1)
eax.b = adc.b(temp6, temp7, c_2)
bool c_3 = adc.b(temp6, temp7, c_2) u< temp6 || (c_2 && adc.b(temp6, temp7, c_2) == temp6)
int32_t eflags
int32_t eflags_1
char temp0_1
char temp1_1
temp0_1, temp1_1, eflags_1 = __aas(eax.b, eax:1.b, eflags)
eax.b = temp0_1
eax:1.b = temp1_1
int32_t temp9 = *(arg4 + 1)
char* eax_1 = adc.d(eax, temp9, c_3)
*arg1 = rlc.d(*arg1, 1, adc.d(eax, temp9, c_3) u< eax || (c_3 && adc.d(eax, temp9, c_3) == eax))
eax_1.b += eax_1:1.b
arg2:1.b *= 2
char temp10 = *arg2
*arg2 += entry_ebx
*(arg4 + 4) = sbb.b(*(arg4 + 4), eax_1.b, temp10 + entry_ebx u< temp10)
*eax_1 |= entry_ebx
char temp11 = *eax_1
*eax_1 += arg3.b
*(arg4 + 5) = sbb.b(*(arg4 + 5), eax_1.b, temp11 + arg3.b u< temp11)
bool c_7 = unimplemented  {sbb byte [esi], al}
int32_t eflags_2
char temp0_2
char temp1_2
temp0_2, temp1_2, eflags_2 = __aaa(eax_1.b, eax_1:1.b, eflags_1)
eax_1.b = temp0_2
eax_1:1.b = temp1_2
*(arg4 + 5) = sbb.b(*(arg4 + 5), eax_1.b, c_7)
breakpoint
