// 函数: sub_4161f0
// 地址: 0x4161f0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t eax_15

switch (sx.d(*(arg1 + 0x10)))
    case 0
        sub_415b80()
        *(arg1 + 0x10) = 1
    label_416218:
        void* eax_1 = data_e7e648
        
        switch (zx.d(*(eax_1 + 0x2899)) - 1)
            case 0
                *(eax_1 + 0x28a2) = 1
                sub_4050d0(3, 0xa)
                *(arg1 + 0x10) = 3
            case 1
                sub_414c40(0xd, 0, 2)
                *(data_e7e648 + 0x28a2) = 1
                *(data_e7e648 + 0x28a1) = 1
                *(arg1 + 0x10) = 6
            case 2
                *(eax_1 + 0x28a2) = 1
                sub_415550()
                sub_4050d0(3, 0xa)
                *(arg1 + 0x10) = 7
            case 3
                *(eax_1 + 0x28a2) = 1
                *(data_e7e648 + 0x2898) = 2
                sub_415550()
                sub_4050d0(3, 0xa)
                *(arg1 + 0x10) = 0xa
    case 1
        goto label_416218
    case 2
        if (sub_405130() == 1)
            *(data_e7e648 + 0x2899) = 0
            *(data_e7e648 + 0x28a2) = 0
            *(arg1 + 0x10) = 1
    case 3
        if (sub_405130() == 1)
            sub_414cc0(0)
            *(arg1 + 0x10) = 4
    case 4
        sub_41de40()
        sub_406780(0, 0)
        sub_414c40(0xc, data_e7e648 + 0x2099c, 2)
        *(arg1 + 0x10) = 5
    case 5
        int32_t eax_14 = sub_446f90(*(data_e7e648 + 0x288c))
        eax_15 = eax_14 - 1
        
        if (eax_14 == 1)
            sub_414c80(0)
            sub_4050d0(2, 0xa)
            *(arg1 + 0x10) = 2
            return 0
        
    label_416369:
        
        if (eax_15 == 1)
            data_2b55e64 = 1
            sub_414c10()
            return 1
    case 6
        int32_t eax_20 = sub_446f90(*(data_e7e648 + 0x2890))
        
        if (eax_20 == 1)
            *(data_e7e648 + 0x2899) = 0
            *(data_e7e648 + 0x28a2) = 0
            *(data_e7e648 + 0x28a1) = 0
            *(arg1 + 0x10) = 1
            return 0
        
        eax_15 = eax_20 - 2
        
        if (eax_20 != 2)
            goto label_416369
        
        *(data_e7e648 + 0x2898) = 1
        
        if (data_2b5cf11 != eax_15.b)
            sub_415a50()
        
        sub_415550()
        *(arg1 + 0x10) = 7
    case 7
        if (sub_405130() == 1)
            sub_414cc0(0)
            *(arg1 + 0x10) = 8
    case 8
        sub_41de40()
        sub_406780(0, 0)
        *(data_e7e648 + 0x2894) = sub_436fa0(data_e7e648 + 0xb20450, 0x5e0000)
        *(arg1 + 0x10) = 9
    case 9
        if (sub_446f90(*(data_e7e648 + 0x2894)) != 0)
            *(data_e7e648 + 0x2898) = 1
            *(arg1 + 0x10) = 0xb
    case 0xa
        if (sub_405130() == 1)
            *(arg1 + 0x10) = 0xb
    case 0xb
        uint32_t eax_32 = zx.d(*(data_e7e648 + 0x2898))
        
        if (eax_32 == 1)
            sub_414c10()
            data_2b55e64 = 3
        else
            if (eax_32 == 2)
                data_2b55e64 = 0xb
                return 1
            
            if (eax_32 == 3)
                data_2b55e64 = 4
        
        return 1

return 0
