// 函数: sub_47ff70
// 地址: 0x47ff70
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_c = arg3
sub_47c9e0(&arg1[2], arg2)
arg1[5] = 0
*arg1 = &CPosPassThru::`vftable'{for `IMediaSeeking'}
arg1[1] = &CPosPassThru::`vftable'{for `CMediaPosition'}
arg1[2] = &CPosPassThru::`vftable'{for `CUnknown'}
arg1[6] = arg5

if (arg5 == 0)
    *arg4 = 0x80004003

*arg1 = &CRendererPosPassThru::`vftable'{for `CPosPassThru'}
arg1[1] = &CRendererPosPassThru::`vftable'{for `CMediaPosition'}
arg1[2] = &CRendererPosPassThru::`vftable'{for `CUnknown'}
InitializeCriticalSection(&arg1[7])
arg1[0xe] = 0
arg1[0xf] = 0
arg1[0x10] = 0
arg1[0x11] = 0
arg1[0x12] = 1
return arg1
