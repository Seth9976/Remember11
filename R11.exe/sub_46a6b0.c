// 函数: sub_46a6b0
// 地址: 0x46a6b0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

wchar16 const* const result

if (arg1 s> 0x3154454d)
    if (arg1 s> 0x33545844)
        if (arg1 == 0x34545844)
            result = u"D3DFMT_DXT4"
        else if (arg1 == 0x35545844)
            result = u"D3DFMT_DXT5"
        else if (arg1 == 0x59565955)
            result = u"D3DFMT_UYVY"
        else
            result = u"Unknown format"
    else if (arg1 == 0x33545844)
        result = u"D3DFMT_DXT3"
    else if (arg1 == 0x31545844)
        result = u"D3DFMT_DXT1"
    else if (arg1 == 0x32545844)
        result = u"D3DFMT_DXT2"
    else if (arg1 != 0x32595559)
        result = u"Unknown format"
    else
        result = u"D3DFMT_YUY2"
else if (arg1 == 0x3154454d)
    result = u"D3DFMT_MULTI2_ARGB8"
else if (arg1 u> 0x75)
    result = u"Unknown format"
else
    switch (arg1)
        case 0
            result = u"D3DFMT_UNKNOWN"
        case 1, 2, 3, 4, 5, 6, 7, 8, 9, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 0x13, 0x25, 
                0x26, 0x27, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f, 0x30, 0x31, 0x35, 0x36, 0x37, 0x38, 
                0x39, 0x3a, 0x3b, 0x41, 0x42, 0x44, 0x45, 0x48, 0x4a, 0x4c, 0x4e, 0x52, 0x53, 0x54, 
                0x55, 0x56, 0x57, 0x58, 0x59, 0x5a, 0x5b, 0x5c, 0x5d, 0x5e, 0x5f, 0x60, 0x61, 0x62, 
                0x63, 0x67, 0x68, 0x69, 0x6a, 0x6b, 0x6c, 0x6d
            result = u"Unknown format"
        case 0x14
            result = u"D3DFMT_R8G8B8"
        case 0x15
            result = u"D3DFMT_A8R8G8B8"
        case 0x16
            result = u"D3DFMT_X8R8G8B8"
        case 0x17
            result = u"D3DFMT_R5G6B5"
        case 0x18
            result = u"D3DFMT_X1R5G5B5"
        case 0x19
            result = u"D3DFMT_A1R5G5B5"
        case 0x1a
            result = u"D3DFMT_A4R4G4B4"
        case 0x1b
            result = u"D3DFMT_R3G3B2"
        case 0x1c
            result = u"D3DFMT_A8"
        case 0x1d
            result = u"D3DFMT_A8R3G3B2"
        case 0x1e
            result = u"D3DFMT_X4R4G4B4"
        case 0x1f
            result = u"D3DFMT_A2B10G10R10"
        case 0x20
            result = u"D3DFMT_A8B8G8R8"
        case 0x21
            result = u"D3DFMT_X8B8G8R8"
        case 0x22
            result = u"D3DFMT_G16R16"
        case 0x23
            result = u"D3DFMT_A2R10G10B10"
        case 0x24
            result = u"D3DFMT_A16B16G16R16"
        case 0x28
            result = u"D3DFMT_A8P8"
        case 0x29
            result = u"D3DFMT_P8"
        case 0x32
            result = u"D3DFMT_L8"
        case 0x33
            result = u"D3DFMT_A8L8"
        case 0x34
            result = u"D3DFMT_A4L4"
        case 0x3c
            result = u"D3DFMT_V8U8"
        case 0x3d
            result = u"D3DFMT_L6V5U5"
        case 0x3e
            result = u"D3DFMT_X8L8V8U8"
        case 0x3f
            result = u"D3DFMT_Q8W8V8U8"
        case 0x40
            result = u"D3DFMT_V16U16"
        case 0x43
            result = u"D3DFMT_A2W10V10U10"
        case 0x46
            result = u"D3DFMT_D16_LOCKABLE"
        case 0x47
            result = u"D3DFMT_D32"
        case 0x49
            result = u"D3DFMT_D15S1"
        case 0x4b
            result = u"D3DFMT_D24S8"
        case 0x4d
            result = u"D3DFMT_D24X8"
        case 0x4f
            result = u"D3DFMT_D24X4S4"
        case 0x50
            result = u"D3DFMT_D16"
        case 0x51
            result = u"D3DFMT_L16"
        case 0x64
            result = u"D3DFMT_VERTEXDATA"
        case 0x65
            result = u"D3DFMT_INDEX16"
        case 0x66
            result = u"D3DFMT_INDEX32"
        case 0x6e
            result = u"D3DFMT_Q16W16V16U16"
        case 0x6f
            result = u"D3DFMT_R16F"
        case 0x70
            result = u"D3DFMT_G16R16F"
        case 0x71
            result = u"D3DFMT_A16B16G16R16F"
        case 0x72
            result = u"D3DFMT_R32F"
        case 0x73
            result = u"D3DFMT_G32R32F"
        case 0x74
            result = u"D3DFMT_A32B32G32R32F"
        case 0x75
            result = u"D3DFMT_CxV8U8"

if (arg2 == 0 && sub_483c16(result, u"D3DFMT_") != 0)
    return &result[lstrlenW(u"D3DFMT_")]

return result
