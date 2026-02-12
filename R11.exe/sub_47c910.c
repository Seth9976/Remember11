// 函数: sub_47c910
// 地址: 0x47c910
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

struct CBaseRenderer::CBaseVideoRenderer::VTable** result = arg1
*result = &CBaseVideoRenderer::`vftable'{for `CBaseRenderer'}
result[3] = &CBaseVideoRenderer::`vftable'{for `IBaseFilter'}
result[4] = &CBaseVideoRenderer::`vftable'{for `IAMovieSetup'}
result[0x38] = &CBaseVideoRenderer::`vftable'{for `IQualProp'}
result[0x39] = &CBaseVideoRenderer::`vftable'{for `IQualityControl'}
sub_47b740(arg1)

if ((arg2 & 1) != 0)
    j_sub_4813df(result)

return result
