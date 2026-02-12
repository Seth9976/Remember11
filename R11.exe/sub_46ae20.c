// 函数: sub_46ae20
// 地址: 0x46ae20
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

*(arg1 + 0xc) = 1
*(arg1 + 0x30) = arg2
void* ebx = arg1 + 0x38

if (ov_open_callbacks(arg2, ebx, 0, 0, sub_46adb0, sub_46ade0, sub_46ae00, sub_46ae10) s< 0)
    ov_clear(ebx)
    (*(**(arg1 + 0x30) + 4))()
    return 0x80004005

int32_t* eax_3 = ov_comment(ebx, 0xffffffff)
int32_t* ebp = *eax_3

if (eax_3[2] != 0)
    char* edi_1 = *ebp
    
    if (edi_1 != 0)
        while (true)
            eax_3.b = *edi_1
            edi_1 = &edi_1[1]
            
            if (eax_3.b == 0x3d)
                if (sub_498aab(edi_1, "-lps", 4) != 0)
                    if (sub_498aab(edi_1, "-lpe", 4) == 0)
                        *(arg1 + 0x24) = j_sub_4812c6(&edi_1[4])
                        *(arg1 + 0x28) = 1
                else
                    *(arg1 + 0x20) = j_sub_4812c6(&edi_1[4])
                
                edi_1 = ebp[1]
                ebp = &ebp[1]
                
                if (edi_1 == 0)
                    break

if (ov_seekable(ebx) == 0)
    ov_clear(ebx)
    return 0x80004005

*(arg1 + 0x308) = 1
void* eax_7 = ov_info(ebx, 0xffffffff)
int32_t ebp_2 = *(eax_7 + 4) * 2
void* eax_8 = j_sub_481fef(0x12)
*(arg1 + 4) = eax_8
*eax_8 = 1
*(*(arg1 + 4) + 2) = *(eax_7 + 4)
*(*(arg1 + 4) + 4) = *(eax_7 + 8)
*(*(arg1 + 4) + 8) = *(eax_7 + 8) * ebp_2
*(*(arg1 + 4) + 0xc) = ebp_2.w
*(*(arg1 + 4) + 0xe) = 0x10
*(*(arg1 + 4) + 0x10) = 0
int32_t eax_12 = ov_pcm_total(ebx, 0xffffffff)
*(arg1 + 0x2c) = eax_12
bool cond:0 = *(arg1 + 0x24) != 0
*(arg1 + 8) = (*(eax_7 + 4) * eax_12) << 4 u>> 3

if (not(cond:0))
    *(arg1 + 0x24) = eax_12

return 0
