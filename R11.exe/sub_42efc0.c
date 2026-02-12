// 函数: sub_42efc0
// 地址: 0x42efc0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t i = 0
int32_t var_8 = 0
int32_t var_c = 0
int32_t var_10 = 0
sub_45e350(0xb0, 0x58, 0x180, 0xc0, 0)
int32_t eax = sub_45c4b0()

do
    void* ecx_1 = data_4bf344
    int32_t edx_3 = *((modu.dp.d(0:(*(ecx_1 + 0xb218) + i + 9), 0xd) << 2) + &data_4bf2e0)
    int32_t eax_5
    char edx_4
    edx_4:eax_5 = sx.q(*(ecx_1 + 0xb220) << 0xc)
    int32_t eax_9
    int32_t edx_6
    edx_6:eax_9 = sx.q((i - 4) << 0x10)
    int32_t esi_3 = ((eax_5 + zx.d(edx_4)) s>> 8) + ((eax_9 + (edx_6 & 0xf)) s>> 4)
    int32_t eax_14
    int16_t edx_8
    edx_8:eax_14 = sx.q(sub_441380(esi_3) << 4)
    data_4bf354 = 0x70 - ((eax_14 + zx.d(edx_8)) s>> 0x10)
    int32_t eax_20
    int16_t edx_10
    edx_10:eax_20 = sx.q(sub_441360(esi_3) * 0x60)
    int32_t eax_22 = (&data_4bf018)[edx_3 * 6]
    int32_t edx_13 = *(edx_3 * 0x18 + &data_4bf010) << 4
    data_4bf358 = ((eax_20 + zx.d(edx_10)) s>> 0x10) + 0xb8
    int32_t eax_23 = *(edx_13 + eax_22 + 0xc)
    int32_t edx_15 = eax_23 & 0x8000000f
    
    if (edx_15 s< 0)
        edx_15 = ((edx_15 - 1) | 0xfffffff0) + 1
    
    data_4bf364 = edx_15 << 5
    int32_t eax_24
    int32_t edx_19
    edx_19:eax_24 = sx.q(eax_23)
    data_4bf368 = (eax_24 + (edx_19 & 0xf)) s>> 4 << 5
    
    if (i != 4 || *(data_4bf344 + 0xb220) != 0)
        data_4bf354 -= 0x10
        data_4bf358 = ((eax_20 + zx.d(edx_10)) s>> 0x10) + 0xa8
        data_4bf35c = 0x20
        data_4bf360 = 0x20
        sub_441380(esi_3)
        
        if (eax == 0 && sub_45e350(data_4bf354, data_4bf358, 0x20, 0x20, 0) != 0
                && sub_45c4d0() != 0)
            if (i s>= 4)
                var_c = 1
            else
                var_8 = 1
    else
        int32_t eax_30 = data_4bf354 - 0x20
        data_4bf354 = eax_30
        data_4bf358 = ((eax_20 + zx.d(edx_10)) s>> 0x10) + 0x98
        data_4bf35c = 0x40
        data_4bf360 = 0x40
        
        if (sub_45e350(eax_30, ((eax_20 + zx.d(edx_10)) s>> 0x10) + 0x98, 0x40, 0x40, 0) != 0)
            var_10 = 1
    
    i += 1
while (i s< 9)

int32_t ebx
int32_t edi_3

if (var_10 == 0)
    ebx = var_c
    edi_3 = var_8
else
    edi_3 = 0
    ebx = 0

switch (sx.d(*(arg1 + 0x10)))
    case 0
        sub_42ae40()
        *(data_4bf344 + 0xb228) = sub_446d10(
            &(&data_4bf01c)[*((*(data_4bf344 + 0xb218) << 2) + &data_4bf2e0) * 6], 0, 0, 2)
        sub_4050d0(2, 0xa)
        *(arg1 + 0x10) = 1
        sub_42b010()
        return 0
    case 1
        if (sub_405130() == 1)
            *(arg1 + 0x10) = 2
    case 2
        int32_t eax_41 = data_2b53608
        
        if ((eax_41 & 0x2100) != 0)
            sub_4095a0(0)
            void* eax_42 = data_4bf344
            *(eax_42 + 0xb21c) =
                *(*((*(eax_42 + 0xb218) << 2) + &data_4bf2e0) * 0x18 + &data_4bf010)
            *(eax_42 + 0xb224) = 1
            *(arg1 + 0x10) = 4
            sub_42b010()
            return 0
        
        int32_t eax_44
        
        if ((eax_41 & 0x4400) == 0)
            eax_44 = sub_45c4f0()
        
        if ((eax_41 & 0x4400) != 0 || eax_44 != 0)
            sub_4095a0(1)
            sub_4050d0(3, 0xa)
            *(arg1 + 0x10) = 5
            sub_42b010()
            return 0
        
        int32_t eax_45
        
        if ((data_2b53610 & 0x900890) == 0 && edi_3 == 0)
            eax_45 = sub_45c510()
        
        if ((data_2b53610 & 0x900890) != 0 || edi_3 != 0 || eax_45 != 0)
            sub_4095a0(3)
            sub_446d40(*(data_4bf344 + 0xb228))
            void* ecx_17 = data_4bf344
            uint32_t temp1_3 = modu.dp.d(0:(*(ecx_17 + 0xb218) + 0xc), 0xd)
            *(ecx_17 + 0xb218) = temp1_3
            int32_t eax_56 =
                sub_446d10(&(&data_4bf01c)[*((temp1_3 << 2) + &data_4bf2e0) * 6], 0, 0, 2)
            void* ecx_19 = data_4bf344
            *(ecx_19 + 0xb228) = eax_56
            *(ecx_19 + 0xb220) = 0xffffff00
            *(arg1 + 0x10) = 3
            sub_42b010()
            return 0
        
        int32_t eax_46
        
        if ((data_2b53610 & 0x600260) == 0 && ebx == 0)
            eax_46 = sub_45c520()
        
        if ((data_2b53610 & 0x600260) != 0 || ebx != 0 || eax_46 != 0)
            sub_4095a0(3)
            sub_446d40(*(data_4bf344 + 0xb228))
            void* ecx_14 = data_4bf344
            uint32_t temp1_2 = modu.dp.d(0:(*(ecx_14 + 0xb218) + 0xe), 0xd)
            *(ecx_14 + 0xb218) = temp1_2
            int32_t eax_51 =
                sub_446d10(&(&data_4bf01c)[*((temp1_2 << 2) + &data_4bf2e0) * 6], 0, 0, 2)
            void* ecx_15 = data_4bf344
            *(ecx_15 + 0xb228) = eax_51
            *(ecx_15 + 0xb220) = 0x100
            *(arg1 + 0x10) = 3
            sub_42b010()
            return 0
    case 3
        void* ecx_20 = data_4bf344
        int32_t eax_59 = *(ecx_20 + 0xb220)
        
        if (eax_59 != 0)
            if (eax_59 s<= 0)
                *(ecx_20 + 0xb220) = eax_59 + 0x10
                sub_42b010()
                return 0
            
            *(ecx_20 + 0xb220) = eax_59 - 0x10
            sub_42b010()
            return 0
        
        *(arg1 + 0x10) = 2
    case 4
        void* ecx_21 = data_4bf344
        int32_t eax_64 = *((*(ecx_21 + 0xb218) << 2) + &data_4bf2e0)
        
        if (sub_446f90(*(ecx_21 + 0xb228)) != 0)
            *(arg1 + 0x10) = 2
        else
            void* eax_67 = data_4bf344
            int32_t ecx_22 = *(eax_67 + 0xb224)
            
            if (ecx_22 == 1)
                int32_t ecx_23 = data_2b53608
                
                if ((ecx_23 & 0x2100) != 0)
                    *(eax_64 * 0x18 + &data_4bf010) = *(eax_67 + 0xb21c)
                    *(eax_67 + 0xb224) = 0
                    *(arg1 + 0x10) = 2
                else if ((ecx_23 & 0x4400) != 0)
                    *(eax_67 + 0xb224) = 0
                    *(arg1 + 0x10) = 2
                else if (sub_45c4f0() != 0)
                    *(data_4bf344 + 0xb224) = 0
                    *(arg1 + 0x10) = 2
                else
                    int32_t ecx_25 = *(eax_64 * 0x18 + 0x4bf014)
                    
                    if (ecx_25 != 0)
                        int32_t eax_70 = data_2b53610
                        
                        if ((eax_70 & 0x900890) != 0)
                            void* esi_6 = data_4bf344
                            *(esi_6 + 0xb21c) =
                                mods.dp.d(sx.q(ecx_25 + *(esi_6 + 0xb21c) - 1), ecx_25)
                            sub_42b010()
                            return 0
                        
                        if ((eax_70 & 0x600260) != 0)
                            void* esi_5 = data_4bf344
                            *(esi_5 + 0xb21c) =
                                mods.dp.d(sx.q(ecx_25 + *(esi_5 + 0xb21c) + 1), ecx_25)
                            sub_42b010()
                            return 0
            else if (ecx_22 == 0)
                *(arg1 + 0x10) = 2
            else if (ecx_22 == 4)
                sub_4050d0(3, 0xa)
                *(arg1 + 0x10) = 5
                sub_42b010()
                return 0
    case 5
        if (sub_405130() == 1)
            sub_446d40(*(data_4bf344 + 0xb228))
            *(arg1 + 0x10) = 6
            sub_42b010()
            return 0
    case 6
        sub_4090d0(0)
        int128_t* esi_7 = data_4bf344
        
        if (*(esi_7 + 0xb224) == 4)
            sub_480ea0(&data_2b5aa20, esi_7, 0x590c)
            void* var_30_4 = &esi_7[0x11f21]
            sub_401350()
        
        return 1

sub_42b010()
return 0
