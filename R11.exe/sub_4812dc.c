// 函数: sub_4812dc
// 地址: 0x4812dc
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ecx
int32_t var_8 = ecx
int32_t var_8_1 = 0

if (arg3 == 0)
    return 0

char* eax_1
char* ecx_1
char edx

if (arg3 u< 4 || arg3 - 4 u<= 0)
    ecx_1 = arg2
    eax_1 = arg1
else
    ecx_1 = arg2
    eax_1 = arg1
    
    while (true)
        edx = *eax_1
        eax_1 = &eax_1[4]
        ecx_1 = &ecx_1[4]
        
        if (edx == 0 || edx != ecx_1[0xfffffffc])
            return zx.d(eax_1[0xfffffffc]) - zx.d(ecx_1[0xfffffffc])
        
        edx = eax_1[0xfffffffd]
        
        if (edx == 0 || edx != ecx_1[0xfffffffd])
            return zx.d(eax_1[0xfffffffd]) - zx.d(ecx_1[0xfffffffd])
        
        edx = eax_1[0xfffffffe]
        
        if (edx == 0 || edx != ecx_1[0xfffffffe])
            return zx.d(eax_1[0xfffffffe]) - zx.d(ecx_1[0xfffffffe])
        
        edx = eax_1[0xffffffff]
        
        if (edx == 0 || edx != ecx_1[0xffffffff])
            return zx.d(eax_1[0xffffffff]) - zx.d(ecx_1[0xffffffff])
        
        var_8_1 += 4
        
        if (var_8_1 u>= arg3 - 4)
            break
        
        continue

while (true)
    if (var_8_1 u>= arg3)
        return 0
    
    edx = *eax_1
    
    if (edx == 0)
        break
    
    if (edx != *ecx_1)
        break
    
    eax_1 = &eax_1[1]
    ecx_1 = &ecx_1[1]
    var_8_1 += 1

return zx.d(*eax_1) - zx.d(*ecx_1)
