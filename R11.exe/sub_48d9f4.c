// 函数: sub_48d9f4
// 地址: 0x48d9f4
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

enum WIN32_ERROR edi_2

if (sub_49350a(arg1) == 0xffffffff)
    edi_2 = NO_ERROR
else
    void* eax_1 = data_2b6a8a0
    
    if ((arg1 != 1 || (*(eax_1 + 0x74) & 1) == 0) && (arg1 != 2 || (*(eax_1 + 0x3c) & 1) == 0))
    label_48da3f:
        
        if (CloseHandle(sub_49350a(arg1)) != 0)
            edi_2 = NO_ERROR
        else
            edi_2 = GetLastError()
    else
        int32_t eax_2 = sub_49350a(2)
        
        if (sub_49350a(1) != eax_2)
            goto label_48da3f
        
        edi_2 = NO_ERROR

sub_493489(arg1)
*((&data_2b6a8a0)[arg1 s>> 5] + (arg1 & 0x1f) * 0x38 + 4) = 0

if (edi_2 == NO_ERROR)
    return 0

sub_48508b(edi_2)
return 0xffffffff
