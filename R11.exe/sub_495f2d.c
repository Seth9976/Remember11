// 函数: sub_495f2d
// 地址: 0x495f2d
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int16_t x87status
int16_t temp0
temp0, x87status = __fnstcw_memmem16(arg2)
int32_t edx = 0

if ((temp0.b & 1) != 0)
    edx = 0x10

if ((temp0.b & 4) != 0)
    edx |= 8

if ((temp0.b & 8) != 0)
    edx |= 4

if ((temp0.b & 0x10) != 0)
    edx |= 2

if ((temp0.b & 0x20) != 0)
    edx |= 1

if ((temp0.b & 2) != 0)
    edx |= 0x80000

uint32_t ecx = zx.d(temp0)
int32_t eax_1 = ecx & 0xc00

if (eax_1 != 0)
    if (eax_1 == 0x400)
        edx |= 0x100
    else if (eax_1 == 0x800)
        edx |= 0x200
    else if (eax_1 == 0xc00)
        edx |= 0x300

int32_t ecx_1 = ecx & 0x300

if (ecx_1 == 0)
    edx |= 0x20000
else if (ecx_1 == 0x200)
    edx |= 0x10000

if ((temp0 & 0x1000) != 0)
    edx |= 0x40000

int32_t result = (not.d(arg4) & edx) | (arg3 & arg4)
int32_t result_1 = result

if (result != edx)
    int16_t x87control
    int16_t x87status_1
    x87control, x87status_1 = __fldcw_memmem16(sub_495dff())
    int16_t x87status_2
    int16_t temp0_1
    temp0_1, x87status_2 = __fnstcw_memmem16(x87control)
    int32_t result_2 = 0
    
    if ((temp0_1.b & 1) != 0)
        result_2 = 0x10
    
    if ((temp0_1.b & 4) != 0)
        result_2 |= 8
    
    if ((temp0_1.b & 8) != 0)
        result_2 |= 4
    
    if ((temp0_1.b & 0x10) != 0)
        result_2 |= 2
    
    if ((temp0_1.b & 0x20) != 0)
        result_2 |= 1
    
    if ((temp0_1.b & 2) != 0)
        result_2 |= 0x80000
    
    uint32_t ecx_4 = zx.d(temp0_1)
    int32_t eax_8 = ecx_4 & 0xc00
    
    if (eax_8 != 0)
        if (eax_8 == 0x400)
            result_2 |= 0x100
        else if (eax_8 == 0x800)
            result_2 |= 0x200
        else if (eax_8 == 0xc00)
            result_2 |= 0x300
    
    int32_t ecx_5 = ecx_4 & 0x300
    
    if (ecx_5 == 0)
        result_2 |= 0x20000
    else if (ecx_5 == 0x200)
        result_2 |= 0x10000
    
    if ((temp0_1 & 0x1000) != 0)
        result_2 |= 0x40000
    
    result = result_2
    result_1 = result_2

if (data_2b6a9c0 != 0)
    int32_t esi_1 = arg4 & 0x308031f
    int32_t esi_2 = 0
    
    if (arg1.b s< 0)
        esi_2 = 0x10
    
    if ((arg1.w & 0x200) != 0)
        esi_2 |= 8
    
    if ((arg1.w & 0x400) != 0)
        esi_2 |= 4
    
    if ((arg1.w & 0x800) != 0)
        esi_2 |= 2
    
    if ((arg1.w & 0x1000) != 0)
        esi_2 |= 1
    
    if ((arg1.w & 0x100) != 0)
        esi_2 |= 0x80000
    
    int32_t ecx_7 = arg1 & 0x6000
    
    if (ecx_7 != 0)
        if (ecx_7 == 0x2000)
            esi_2 |= 0x100
        else if (ecx_7 == 0x4000)
            esi_2 |= 0x200
        else if (ecx_7 == 0x6000)
            esi_2 |= 0x300
    
    int32_t eax_10 = arg1 & 0x8040
    
    if (eax_10 == 0x40)
        esi_2 |= 0x2000000
    else if (eax_10 == 0x8000)
        esi_2 |= 0x3000000
    else if (eax_10 == 0x8040)
        esi_2 |= 0x1000000
    
    int32_t edx_4 = (not.d(esi_1) & esi_2) | (esi_1 & arg3)
    int32_t eax_14
    
    if (edx_4 != esi_2)
        int32_t eax_15 = sub_495e8d(ecx_7, edx_4)
        arg4 = eax_15
        int32_t mxcsr = sub_493355(eax_15.b)
        int32_t edx_5 = 0
        
        if (mxcsr.b s< 0)
            edx_5 = 0x10
        
        if ((0x200 & mxcsr) != 0)
            edx_5 |= 8
        
        if ((mxcsr.w & 0x400) != 0)
            edx_5 |= 4
        
        if ((mxcsr.w & 0x800) != 0)
            edx_5 |= 2
        
        if ((mxcsr.w & 0x1000) != 0)
            edx_5 |= 1
        
        if ((0x100 & mxcsr) != 0)
            edx_5 |= 0x80000
        
        int32_t ecx_10 = mxcsr & 0x6000
        
        if (ecx_10 != 0)
            if (ecx_10 == 0x2000)
                edx_5 |= 0x100
            else if (ecx_10 == 0x4000)
                edx_5 |= 0x200
            else if (ecx_10 == 0x6000)
                edx_5 |= 0x300
        
        int32_t eax_17 = mxcsr & 0x8040
        
        if (eax_17 == 0x40)
            edx_5 |= 0x2000000
        else if (eax_17 == 0x8000)
            edx_5 |= 0x3000000
        else if (eax_17 == 0x8040)
            edx_5 |= 0x1000000
        
        eax_14 = edx_5
    else
        eax_14 = esi_2
    
    result = eax_14 | result_1
    
    if (((eax_14 ^ result_1) & 0x8031f) != 0)
        return result | 0x80000000

return result
