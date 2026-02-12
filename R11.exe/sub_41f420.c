// 函数: sub_41f420
// 地址: 0x41f420
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ecx_2 = data_2b5a740
int32_t ebp = 0
void* eax_17

if (ecx_2 u<= 0)
    eax_17 = data_4b19c0
else
    int32_t var_4_1 = 0
    int32_t var_8_1 = 0
    
    do
        uint32_t eax_1 = sub_402210(ebp)
        void* edi_1 = data_4b19c0 + ebp
        char eax_3 = sub_415320(eax_1)
        void* ecx = data_4b19c0
        *(edi_1 + 0x10) = eax_3
        *(edi_1 + 0x212) = 0
        char* eax_4 = sub_402220(eax_1, 0)
        void* esi_2
        
        if (*(data_4b19c0 + ebp + 0x10) == 0)
            *(var_8_1 + ecx + 0x101424) = 0x4881
            void* eax_8 = eax_4
            *(var_8_1 + ecx + 0x101426) = 0
            int32_t i_1 = 1
            void* edx_4 = eax_8 + 1
            char i
            
            do
                i = *eax_8
                eax_8 += 1
            while (i != 0)
            
            if (((eax_8 - edx_4) & 0xfffffffe) u> 2)
                char* eax_13
                
                do
                    void* eax_12 = var_8_1 + ecx + 0x101423
                    
                    do
                        i = *(eax_12 + 1)
                        eax_12 += 1
                    while (i != 0)
                    
                    *eax_12 = 0x4881
                    *(eax_12 + 2) = 0
                    eax_13 = eax_4
                    i_1 += 1
                    
                    do
                        i = *eax_13
                        eax_13 = &eax_13[1]
                    while (i != 0)
                while (i_1 u< (eax_13 - &eax_13[1]) u>> 1)
            
            esi_2 = data_4b19c0
        else
            char eax_6 = sub_4153c0(eax_1)
            esi_2 = data_4b19c0
            *(esi_2 + ebp + 0x212) = eax_6
            char* eax_7 = eax_4
            char i_2
            
            do
                i_2 = *eax_7
                *(var_8_1 + ecx + 0x101424 - eax_4 + eax_7) = i_2
                eax_7 = &eax_7[1]
            while (i_2 != 0)
        
        *(var_4_1 + esi_2 + 0x181c24) = var_8_1 + esi_2 + 0x101424
        ebp += 1
        sub_4414c0(ebp, var_8_1 + esi_2 + 0x141824, "%3d")
        void* esi_4 = var_8_1 + esi_2 + 0x141823
        char i_3
        
        do
            i_3 = *(esi_4 + 1)
            esi_4 += 1
        while (i_3 != 0)
        eax_17 = data_4b19c0
        *esi_4 = 0x4481
        *(esi_4 + 2) = 0
        *(var_4_1 + eax_17 + 0x182c34) = var_8_1 + eax_17 + 0x141824
        ecx_2 = data_2b5a740
        var_8_1 += 0x400
        var_4_1 += 0x10
    while (ebp u< ecx_2)

int32_t eax_19 = sub_43c320(eax_17 + 0x181c24, ecx_2, 1, 0, 2)
void* eax_20 = data_4b19c0
sub_43be40(eax_20 + 0x183c44, eax_20 + 0x181c24, data_2b5a740, 0x1000)
sub_43c320(data_4b19c0 + 0x182c34, data_2b5a740, 1, eax_19, 0x18)
void* eax_24 = data_4b19c0
return sub_43be40(eax_24 + 0x1a5a60, eax_24 + 0x182c34, data_2b5a740, 0x1000)
