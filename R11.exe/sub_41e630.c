// 函数: sub_41e630
// 地址: 0x41e630
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ecx = data_4b187c
int32_t ebx = 0
int32_t ebp_1 = 0xffffffff
int32_t var_28 = 0xa
int32_t var_24 = 0
uint32_t var_2c = 0xffffffff

for (int32_t i = 0x44; i s< 0x184; )
    ecx[2]
    int32_t eax_4 = ecx[mods.dp.d(sx.q(ecx[2] + ebx), 0xc) * 0x8e + 0x1141]
    
    if (data_2b5cf12 == 0)
        int32_t eax_5
        int32_t edx_3
        edx_3:eax_5 = sx.q(eax_4)
        eax_4 = ((eax_5 - edx_3) s>> 1) * 2
    
    int32_t var_20 = 0x27
    int32_t i_2 = i
    sub_43c040(&ecx[mods.dp.d(sx.q(ecx[2] + ebx), 0xc) * 0x8e + 0x1147], &var_20, 
        ((eax_4 + *ecx * 6) << 3) + &data_4b17f0, 1)
    ecx = data_4b187c
    
    if (*ecx == 1)
        int16_t eax_9 = ecx[mods.dp.d(sx.q(ecx[2] + ebx), 0xc) * 0x8e + 0x1142].w
        
        if (eax_9 == 0xffff)
            ebp_1 = 0xffffffff
            var_2c = 0xffffffff
        else
            uint32_t eax_10 = zx.d(eax_9)
            
            if (eax_10 != var_2c
                    || ebp_1 != ecx[mods.dp.d(sx.q(ecx[2] + ebx), 0xc) * 0x8e + 0x1140])
                ebp_1 = ecx[mods.dp.d(sx.q(ecx[2] + ebx), 0xc) * 0x8e + 0x1140]
                var_2c = eax_10
                var_20 = 0xe
                int32_t i_3 = i
                sub_444110(&ecx[0x180a], &var_20, 0x4b18f4, 1)
                sub_442c30(data_4b187c + 0x6028, 1)
                ecx = data_4b187c
    
    if (zx.d(ecx[mods.dp.d(sx.q(ecx[2] + ebx), 0xc) * 0x8e + 0x1142].w) == ecx[9]
            && ecx[mods.dp.d(sx.q(ecx[2] + ebx), 0xc) * 0x8e + 0x1140] == ecx[0xa])
        if (var_28 s> ebx)
            var_28 = ebx
        
        if (var_24 s< ebx)
            var_24 = ebx
    
    i += 0x20
    ebx += 1

if (ecx[0xc] == 1)
    int32_t eax_17
    int16_t edx_8
    edx_8:eax_17 = sx.q(sub_441360(data_2b603ac << 0xa) * 6)
    int32_t eax_20
    int32_t edx_10
    edx_10:eax_20 = sx.q((eax_17 + zx.d(edx_8)) s>> 0x10)
    void* eax_24 = data_4b187c + 0x5fd0
    data_4b1884 = 0x20 - ((eax_20 ^ edx_10) - edx_10)
    sub_445470(eax_24, 0x4b1880, 0x4b18b0, 1)
    sub_442c30(data_4b187c + 0x5fd0, 1)
    ecx = data_4b187c

if (ecx[0xd] == 1)
    int32_t eax_28
    int16_t edx_14
    edx_14:eax_28 = sx.q(sub_441360(data_2b603ac << 0xa) * 6)
    int32_t eax_31
    int32_t edx_16
    edx_16:eax_31 = sx.q((eax_28 + zx.d(edx_14)) s>> 0x10)
    data_4b189c = (eax_31 ^ edx_16) - edx_16 + 0x188
    sub_445470(data_4b187c + 0x5fd0, 0x4b1898, 0x4b18b0, 1)
    sub_442c30(data_4b187c + 0x5fd0, 1)
    ecx = data_4b187c

ecx[0xb] += 1

if (*ecx == 1)
    int32_t* var_4c_3
    
    if (ecx[5] == 0 || ecx[8] == 0)
        int32_t var_44_4 = 1
        int32_t var_48_3 = 0
        data_4b18e4 = (ecx[7] << 5) + 0x42
        var_4c_3 = "("
    else
        int32_t var_14_1 = data_4b18e4
        int32_t var_10_1 = data_4b18e8
        int32_t var_14_2 = (var_28 << 5) + 0x42
        int32_t var_44_3 = 1
        int32_t var_18 = (*"(")[0].d
        int32_t var_48_2 = 0
        int32_t var_c_1 = data_4b18ec
        int32_t var_c_2 = (var_24 - var_28 + 1) << 5
        var_4c_3 = &var_18
    
    sub_439d90(nullptr, var_4c_3, 0)

for (int32_t i_1 = 0x42; i_1 s< 0x1a2; i_1 += 0x20)
    data_4b18d0 = i_1
    sub_4437c0(0x4b18cc, "   @(", 1)

int32_t result = sub_43d1f0(0x4b18b4, 1)
var_4
return result
