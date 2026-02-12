// 函数: sub_441360
// 地址: 0x441360
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t eax
int32_t edx
edx:eax = sx.q(arg1)
int32_t eax_2 = (eax + (edx & 0x1f)) s>> 5
int32_t eax_6

do
    eax_2 = (eax_2 + 0x800) & 0x800007ff
    
    if (eax_2 s>= 0)
        break
    
    eax_6 = (eax_2 - 1) | 0xfffff800
    eax_2 = eax_6 + 1
while (eax_6 + 1 s< 0)

if (eax_2 != 0)
    if (eax_2 s< 0x200)
        return zx.d(*((eax_2 << 1) + &data_4c9bd0))
    
    if (eax_2 == 0x200)
        return 0x10000
    
    if (eax_2 s< 0x400)
        return zx.d(*(
            &class boost::detail::sp_counted_impl_p<struct Tex> `RTTI Type Descriptor'.spare
            - eax_2 * 2))
    
    if (eax_2 != 0x400)
        if (eax_2 s< 0x600)
            return neg.d(zx.d(*((eax_2 << 1) + &data_4c93d0)))
        
        if (eax_2 != 0x600)
            return neg.d(zx.d(*(0x4cabd0 - eax_2 * 2)))
        
        return 0xffff0000

return 0
