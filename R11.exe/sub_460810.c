// 函数: sub_460810
// 地址: 0x460810
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (*(arg2 + 0x70) != 0 && *(arg2 + 0xac) == 0)
    (*(*arg1 + 0x14))(*(arg2 + 0xa0))
    
    if (*(arg2 + 0x90) != 1)
        if (class RenderSpace::CGraphicManager `RTTI Type Descriptor'.__offset(0x2a).b == 1)
            sub_464790(".\render.cpp", 0x41a)
            class RenderSpace::CGraphicManager `RTTI Type Descriptor'.__offset(0x2a).b = 0
        
        return 0x80004005
    
    int32_t eax_3 = *(arg2 + 0x10) & 7
    
    if (eax_3 == 0)
        int32_t* eax_4 = arg1[1]
        (*(*eax_4 + 0x14c))(eax_4, 1, *(arg2 + 0x70), *(arg2 + 0x80), *(arg2 + 0x68))
        arg1[0x733] += 1
        return 0
    
    if (eax_3 u> 6 || eax_3 u> 6)
        if (class RenderSpace::CGraphicManager `RTTI Type Descriptor'.__offset(0x2b).b == 1)
            sub_464790(".\render.cpp", 0x40c)
            class RenderSpace::CGraphicManager `RTTI Type Descriptor'.__offset(0x2b).b = 0
        
        return 0x80004005
    
    int32_t ecx_4
    
    switch (eax_3)
        case 0, 1, 2
            ecx_4 = 2
        case 3, 4, 5, 6
            ecx_4 = 4
    
    int32_t* eax_7 = arg1[1]
    (*(*eax_7 + 0x150))(eax_7, ecx_4, 0, *(arg2 + 0x74), *(arg2 + 0x70), *(arg2 + 0x84), 0x65, 
        *(arg2 + 0x80), *(arg2 + 0x68))
    arg1[0x733] += 1

return 0
