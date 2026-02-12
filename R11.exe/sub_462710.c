// 函数: sub_462710
// 地址: 0x462710
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

*arg1 = &RenderSpace::CGraphicManager::`vftable'{for `IGraphicManager'}
void* eax = arg1[0x741]

if (eax != 0)
    j_sub_4813df(eax)

arg1[0x741] = 0
arg1[0x742] = 0
arg1[0x743] = 0
struct _EXCEPTION_REGISTRATION_RECORD** result = arg1[0x73a]

if (result != 0)
    result = j_sub_4813df(result)

arg1[0x73a] = 0
arg1[0x73b] = 0
arg1[0x73c] = 0
*arg1 = &CD3DResource::`vftable'
return result
