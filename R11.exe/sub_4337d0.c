// 函数: sub_4337d0
// 地址: 0x4337d0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

sub_4013b0()

switch (sx.d(*(arg1 + 0x10)))
    case 0
        sub_431820()
        void* eax_1 = data_4bf67c
        sub_426080(eax_1 + 0x1ba8, eax_1 + 0x23ba60, eax_1 + 0x28, 0x1e, 0, 4)
        sub_431b00()
        char ecx_2 = data_2b5cf1b
        void* eax_4 = data_4bf67c + 0x1bb0
        
        if (ecx_2 == 0)
            *eax_4 = 0
        else
            *eax_4 = zx.d(ecx_2) - 1
        
        sub_426700(*eax_4)
        sub_4050d0(2, 0xa)
        *(arg1 + 0x10) = 1
        goto label_43385d
    case 1
    label_43385d:
        
        if (sub_405130() == 1)
            data_2b60388 = 0
            data_2b60384 = 0
            data_2b60380 = 0
            *(arg1 + 0x10) = 2
    case 2
        int32_t eax_7 = data_2b53608
        
        if ((eax_7 & 0x2100) == 0 && data_e7e638 == 0)
            if ((eax_7 & 0x4400) == 0 && sub_45c4f0() == 0)
                sub_4263d0()
                sub_425330()
                return 0
            
            sub_4095a0(1)
            sub_4050d0(3, 0xa)
            *(data_4bf67c + 0x20) = 1
            *(arg1 + 0x10) = 4
            sub_425330()
            return 0
        
        void* eax_12 = data_4bf67c
        data_e7e638 = 0
        
        if (*((*(eax_12 + 0x1bb0) << 5) + eax_12 + 0x2d) != 0)
            sub_4095a0(7)
            sub_425330()
            return 0
        
        sub_4095a0(0)
        void* esi = data_4bf67c
        char* ecx_7 = data_4bf554
        void* edx_3 = esi + 0x227460
        char i
        
        do
            i = *ecx_7
            *edx_3 = i
            ecx_7 = &ecx_7[1]
            edx_3 += 1
        while (i != 0)
        *(esi + 0x22744c) = esi + 0x227460
        sub_43d220(esi + 0x222f98, esi + 0x22744c, 1, 0, 0xffffffff, 0x1000)
        *(data_4bf67c + 0x10) = 1
        *(arg1 + 0x10) = 3
        sub_425330()
        return 0
    case 3
        data_e7e634 = 0xffffffff
        data_e7e630 = 0
        *(arg1 + 0x10) = 5
    label_4339a0:
        int32_t eax_16 = data_e7e634
        
        if (eax_16 s< 2)
            data_e7e630 = 0
        else
            if (eax_16 - 2 != *(data_4bf67c + 0x10))
                sub_4095a0(3)
                *(data_4bf67c + 0x10) = data_e7e634 - 2
                eax_16 = data_e7e634
            
            if (eax_16 s< 2)
                data_e7e630 = 0
        
        if ((data_2b53610 & 0xf00af0) != 0)
            sub_4095a0(3)
            void* eax_24 = data_4bf67c
            int32_t ecx_10
            ecx_10.b = *(eax_24 + 0x10) == 0
            *(eax_24 + 0x10) = ecx_10
        else
            int32_t eax_19 = data_2b53608
            
            if ((eax_19 & 0x2100) != 0 || data_e7e630 != 0)
                if (*(data_4bf67c + 0x10) != 0)
                label_433a13:
                    sub_4095a0(1)
                    *(arg1 + 0x10) = 2
                    sub_4322d0()
                    sub_425330()
                    return 0
                
                sub_4095a0(0)
                sub_4050d0(3, 0xa)
                *(data_4bf67c + 0x20) = 2
                *(arg1 + 0x10) = 4
                sub_4322d0()
                sub_425330()
                return 0
            
            if ((eax_19 & 0x4400) != 0)
                goto label_433a13
            
            if (sub_45c4f0() != 0)
                goto label_433a13
        
        sub_4322d0()
        sub_425330()
        return 0
    case 4
        if (sub_405130() == 1)
            sub_405e20()
            void* eax_27 = data_4bf67c
            
            if (*(eax_27 + 0x20) == 2)
                *(eax_27 + 0x1bb0)
                sub_432250()
                void* __saved_edi_2 = data_4bf67c + 0x23ba60
                sub_401350()
                eax_27 = data_4bf67c
            
            return *(eax_27 + 0x20)
    case 5
        goto label_4339a0

sub_425330()
return 0
