// 函数: sub_441380
// 地址: 0x441380
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t eax
int32_t edx
edx:eax = sx.q(arg1)
int32_t eax_3 = ((eax + (edx & 0x1f)) s>> 5) + 0x200
int32_t eax_7

do
    eax_3 = (eax_3 + 0x800) & 0x800007ff
    
    if (eax_3 s>= 0)
        break
    
    eax_7 = (eax_3 - 1) | 0xfffff800
    eax_3 = eax_7 + 1
while (eax_7 + 1 s< 0)

if (eax_3 != 0)
    if (eax_3 s< 0x200)
        return zx.d(*((eax_3 << 1) + &data_4c9bd0))
    
    if (eax_3 == 0x200)
        return 0x10000
    
    if (eax_3 s< 0x400)
        return zx.d(*(
            &class boost::detail::sp_counted_impl_p<struct Tex> `RTTI Type Descriptor'.spare
            - eax_3 * 2))
    
    if (eax_3 != 0x400)
        if (eax_3 s< 0x600)
            return neg.d(zx.d(*((eax_3 << 1) + &data_4c93d0)))
        
        if (eax_3 != 0x600)
            return neg.d(zx.d(*(0x4cabd0 - eax_3 * 2)))
        
        return 0xffff0000

return 0
