// 函数: sub_482304
// 地址: 0x482304
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ecx
int32_t var_8 = ecx
void* edi = arg1
int32_t eax = *(edi + 0x10)
void* esi = *(edi + 0xc)
void* ebx = esi

while (true)
    arg1 = esi
    
    while (true)
        if (arg2 s< 0)
            *arg4 = esi + 1
            *arg5 = ebx
            
            if (ebx u<= *(edi + 0xc) && esi + 1 u<= ebx)
                return (esi + 1) * 0x14 + eax
            
            sub_48b1de()
            noreturn
        
        if (esi == 0xffffffff)
            sub_48b1de()
            noreturn
        
        esi -= 1
        void* eax_3 = esi * 0x14 + eax
        
        if ((*(eax_3 + 4) s>= arg3 || arg3 s> *(eax_3 + 8)) && esi != 0xffffffff)
            continue
        
        arg2 -= 1
        ebx = arg1
        break
