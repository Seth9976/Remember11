// 函数: sub_4906c1
// 地址: 0x4906c1
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t edi = arg3

if (edi == 0)
    return 0

uint32_t eax_8
uint32_t eax_24
uint32_t ecx_10

if (edi == 1)
    eax_24 = zx.d(*arg1)
    ecx_10 = zx.d(*arg2)
label_491c18:
    eax_8 = eax_24 - ecx_10
    
    if (eax_24 != ecx_10)
        int32_t ecx_11
        ecx_11.b = eax_8 s> 0
        return ecx_11 * 2 - 1
else if (edi == 2)
    uint32_t eax_21 = zx.d(*arg1)
    uint32_t edx_378 = zx.d(*arg2)
    
    if (eax_21 != edx_378)
        int32_t edx_379
        edx_379.b = eax_21 - edx_378 s> 0
        eax_8 = edx_379 * 2 - 1
    
    if (eax_21 == edx_378 || eax_8 == 0)
        eax_24 = zx.d(arg1[1])
        ecx_10 = zx.d(arg2[1])
        goto label_491c18
else if (edi == 3)
    uint32_t eax_17 = zx.d(*arg1)
    uint32_t edx_372 = zx.d(*arg2)
    
    if (eax_17 != edx_372)
        int32_t edx_373
        edx_373.b = eax_17 - edx_372 s> 0
        eax_8 = edx_373 * 2 - 1
    
    if (eax_17 == edx_372 || eax_8 == 0)
        uint32_t eax_19 = zx.d(arg1[1])
        uint32_t edx_375 = zx.d(arg2[1])
        
        if (eax_19 != edx_375)
            int32_t edx_376
            edx_376.b = eax_19 - edx_375 s> 0
            eax_8 = edx_376 * 2 - 1
        
        if (eax_19 == edx_375 || eax_8 == 0)
            eax_24 = zx.d(arg1[2])
            ecx_10 = zx.d(arg2[2])
            goto label_491c18
else if (edi == 4)
    uint32_t eax_11 = zx.d(*arg1)
    uint32_t edx_363 = zx.d(*arg2)
    
    if (eax_11 != edx_363)
        int32_t edx_364
        edx_364.b = eax_11 - edx_363 s> 0
        eax_8 = edx_364 * 2 - 1
    
    if (eax_11 == edx_363 || eax_8 == 0)
        uint32_t eax_13 = zx.d(arg1[1])
        uint32_t edx_366 = zx.d(arg2[1])
        
        if (eax_13 != edx_366)
            int32_t edx_367
            edx_367.b = eax_13 - edx_366 s> 0
            eax_8 = edx_367 * 2 - 1
        
        if (eax_13 == edx_366 || eax_8 == 0)
            uint32_t eax_15 = zx.d(arg1[2])
            uint32_t edx_369 = zx.d(arg2[2])
            
            if (eax_15 != edx_369)
                int32_t edx_370
                edx_370.b = eax_15 - edx_369 s> 0
                eax_8 = edx_370 * 2 - 1
            
            if (eax_15 == edx_369 || eax_8 == 0)
                eax_24 = zx.d(arg1[3])
                ecx_10 = zx.d(arg2[3])
                goto label_491c18
else
    int32_t* ecx_1 = arg2
    int32_t* eax_6 = arg1
    
    while (true)
        uint32_t esi_4
        
        if (edi u< 0x20)
            void* eax_7 = eax_6 + edi
            void* ecx_2 = ecx_1 + edi
            
            if (edi u> 0x1f)
                return 0
            
            uint32_t edx_1
            uint32_t edx_269
            
            switch (edi)
                case 0
                    return 0
                case 1
                label_491352:
                    uint32_t ecx_6 = zx.d(*(ecx_2 - 1))
                    uint32_t eax_10 = zx.d(*(eax_7 - 1))
                    eax_8 = eax_10 - ecx_6
                    
                    if (eax_10 == ecx_6)
                        break
                    
                    int32_t ecx_7
                    ecx_7.b = eax_8 s> 0
                    return ecx_7 * 2 - 1
                case 2
                label_49175e:
                    edx_1.w = *(eax_7 - 2)
                    
                    if (edx_1.w == *(ecx_2 - 2))
                        return 0
                    
                label_49176c:
                    uint32_t edx_267 = zx.d(*(ecx_2 - 2))
                    uint32_t esi_212 = zx.d(*(eax_7 - 2))
                    
                    if (esi_212 == edx_267)
                        goto label_491352
                    
                    int32_t edx_268
                    edx_268.b = esi_212 - edx_267 s> 0
                    edx_269 = edx_268 * 2 - 1
                    
                    if (edx_269 != 0)
                        return edx_269
                    
                    goto label_491352
                case 3
                label_491b7f:
                    uint32_t esi_263 = zx.d(*(eax_7 - 3))
                    uint32_t edx_361 = zx.d(*(ecx_2 - 3))
                    
                    if (esi_263 == edx_361)
                        goto label_49176c
                    
                    int32_t edx_362
                    edx_362.b = esi_263 - edx_361 s> 0
                    edx_269 = edx_362 * 2 - 1
                    
                    if (edx_269 == 0)
                        goto label_49176c
                    
                    return edx_269
                case 4
                label_490ee3:
                    int32_t edx_80 = *(eax_7 - 4)
                    
                    if (edx_80 == *(ecx_2 - 4))
                        eax_8 = 0
                    else
                        uint32_t esi_108 = zx.d(edx_80.b)
                        uint32_t edx_81 = zx.d(*(ecx_2 - 4))
                        uint32_t edx_83
                        
                        if (esi_108 != edx_81)
                            int32_t edx_82
                            edx_82.b = esi_108 - edx_81 s> 0
                            edx_83 = edx_82 * 2 - 1
                        
                        if (esi_108 != edx_81 && edx_83 != 0)
                            eax_8 = edx_83
                        else
                            uint32_t esi_110 = zx.d(*(eax_7 - 3))
                            uint32_t edx_84 = zx.d(*(ecx_2 - 3))
                            
                            if (esi_110 != edx_84)
                                int32_t edx_85
                                edx_85.b = esi_110 - edx_84 s> 0
                                edx_83 = edx_85 * 2 - 1
                            
                            if (esi_110 != edx_84 && edx_83 != 0)
                                eax_8 = edx_83
                            else
                                uint32_t esi_112 = zx.d(*(eax_7 - 2))
                                uint32_t edx_86 = zx.d(*(ecx_2 - 2))
                                
                                if (esi_112 != edx_86)
                                    int32_t edx_87
                                    edx_87.b = esi_112 - edx_86 s> 0
                                    edx_83 = edx_87 * 2 - 1
                                
                                if (esi_112 == edx_86 || edx_83 == 0)
                                    uint32_t eax_9 = zx.d(*(eax_7 - 1))
                                    uint32_t ecx_3 = zx.d(*(ecx_2 - 1))
                                    eax_8 = eax_9 - ecx_3
                                    
                                    if (eax_9 != ecx_3)
                                        int32_t ecx_4
                                        ecx_4.b = eax_8 s> 0
                                        eax_8 = ecx_4 * 2 - 1
                                else
                                    eax_8 = edx_83
                    
                    if (eax_8 != 0)
                        break
                    
                    return 0
                case 5
                label_4912c3:
                    int32_t edx_166 = *(eax_7 - 5)
                    
                    if (edx_166 == *(ecx_2 - 5))
                        esi_4 = 0
                    label_49134a:
                        
                        if (esi_4 == 0)
                            goto label_491352
                    else
                        uint32_t esi_156 = zx.d(edx_166.b)
                        uint32_t edx_167 = zx.d(*(ecx_2 - 5))
                        
                        if (esi_156 != edx_167)
                            int32_t edx_168
                            edx_168.b = esi_156 - edx_167 s> 0
                            esi_4 = edx_168 * 2 - 1
                        
                        if (esi_156 == edx_167 || esi_4 == 0)
                            uint32_t esi_158 = zx.d(*(eax_7 - 4))
                            uint32_t edx_170 = zx.d(*(ecx_2 - 4))
                            
                            if (esi_158 != edx_170)
                                int32_t edx_171
                                edx_171.b = esi_158 - edx_170 s> 0
                                esi_4 = edx_171 * 2 - 1
                            
                            if (esi_158 == edx_170 || esi_4 == 0)
                                uint32_t esi_160 = zx.d(*(eax_7 - 3))
                                uint32_t edx_173 = zx.d(*(ecx_2 - 3))
                                
                                if (esi_160 != edx_173)
                                    int32_t edx_174
                                    edx_174.b = esi_160 - edx_173 s> 0
                                    esi_4 = edx_174 * 2 - 1
                                
                                if (esi_160 == edx_173 || esi_4 == 0)
                                    uint32_t esi_162 = zx.d(*(eax_7 - 2))
                                    uint32_t edx_176 = zx.d(*(ecx_2 - 2))
                                    esi_4 = esi_162 - edx_176
                                    
                                    if (esi_162 != edx_176)
                                        int32_t edx_177
                                        edx_177.b = esi_4 s> 0
                                        esi_4 = edx_177 * 2 - 1
                                    
                                    goto label_49134a
                case 6
                label_4916cf:
                    edx_1 = *(eax_7 - 6)
                    
                    if (edx_1 == *(ecx_2 - 6))
                        esi_4 = 0
                    label_491756:
                        
                        if (esi_4 == 0)
                            goto label_49175e
                    else
                        uint32_t esi_205 = zx.d(edx_1.b)
                        uint32_t edx_257 = zx.d(*(ecx_2 - 6))
                        
                        if (esi_205 != edx_257)
                            int32_t edx_258
                            edx_258.b = esi_205 - edx_257 s> 0
                            esi_4 = edx_258 * 2 - 1
                        
                        if (esi_205 == edx_257 || esi_4 == 0)
                            uint32_t esi_207 = zx.d(*(eax_7 - 5))
                            uint32_t edx_260 = zx.d(*(ecx_2 - 5))
                            
                            if (esi_207 != edx_260)
                                int32_t edx_261
                                edx_261.b = esi_207 - edx_260 s> 0
                                esi_4 = edx_261 * 2 - 1
                            
                            if (esi_207 == edx_260 || esi_4 == 0)
                                uint32_t esi_209 = zx.d(*(eax_7 - 4))
                                uint32_t edx_263 = zx.d(*(ecx_2 - 4))
                                
                                if (esi_209 != edx_263)
                                    int32_t edx_264
                                    edx_264.b = esi_209 - edx_263 s> 0
                                    esi_4 = edx_264 * 2 - 1
                                
                                if (esi_209 == edx_263 || esi_4 == 0)
                                    uint32_t esi_211 = zx.d(*(eax_7 - 3))
                                    edx_1 = zx.d(*(ecx_2 - 3))
                                    esi_4 = esi_211 - edx_1
                                    
                                    if (esi_211 != edx_1)
                                        int32_t edx_266
                                        edx_266.b = esi_4 s> 0
                                        esi_4 = edx_266 * 2 - 1
                                    
                                    goto label_491756
                case 7
                label_491af0:
                    int32_t edx_348 = *(eax_7 - 7)
                    
                    if (edx_348 == *(ecx_2 - 7))
                        esi_4 = 0
                    label_491b77:
                        
                        if (esi_4 == 0)
                            goto label_491b7f
                    else
                        uint32_t esi_256 = zx.d(edx_348.b)
                        uint32_t edx_349 = zx.d(*(ecx_2 - 7))
                        
                        if (esi_256 != edx_349)
                            int32_t edx_350
                            edx_350.b = esi_256 - edx_349 s> 0
                            esi_4 = edx_350 * 2 - 1
                        
                        if (esi_256 == edx_349 || esi_4 == 0)
                            uint32_t esi_258 = zx.d(*(eax_7 - 6))
                            uint32_t edx_352 = zx.d(*(ecx_2 - 6))
                            
                            if (esi_258 != edx_352)
                                int32_t edx_353
                                edx_353.b = esi_258 - edx_352 s> 0
                                esi_4 = edx_353 * 2 - 1
                            
                            if (esi_258 == edx_352 || esi_4 == 0)
                                uint32_t esi_260 = zx.d(*(eax_7 - 5))
                                uint32_t edx_355 = zx.d(*(ecx_2 - 5))
                                
                                if (esi_260 != edx_355)
                                    int32_t edx_356
                                    edx_356.b = esi_260 - edx_355 s> 0
                                    esi_4 = edx_356 * 2 - 1
                                
                                if (esi_260 == edx_355 || esi_4 == 0)
                                    uint32_t esi_262 = zx.d(*(eax_7 - 4))
                                    uint32_t edx_358 = zx.d(*(ecx_2 - 4))
                                    esi_4 = esi_262 - edx_358
                                    
                                    if (esi_262 != edx_358)
                                        int32_t edx_359
                                        edx_359.b = esi_4 s> 0
                                        esi_4 = edx_359 * 2 - 1
                                    
                                    goto label_491b77
                case 8
                label_490e54:
                    int32_t edx_67 = *(eax_7 - 8)
                    
                    if (edx_67 == *(ecx_2 - 8))
                        esi_4 = 0
                    label_490edb:
                        
                        if (esi_4 == 0)
                            goto label_490ee3
                    else
                        uint32_t esi_101 = zx.d(edx_67.b)
                        uint32_t edx_68 = zx.d(*(ecx_2 - 8))
                        
                        if (esi_101 != edx_68)
                            int32_t edx_69
                            edx_69.b = esi_101 - edx_68 s> 0
                            esi_4 = edx_69 * 2 - 1
                        
                        if (esi_101 == edx_68 || esi_4 == 0)
                            uint32_t esi_103 = zx.d(*(eax_7 - 7))
                            uint32_t edx_71 = zx.d(*(ecx_2 - 7))
                            
                            if (esi_103 != edx_71)
                                int32_t edx_72
                                edx_72.b = esi_103 - edx_71 s> 0
                                esi_4 = edx_72 * 2 - 1
                            
                            if (esi_103 == edx_71 || esi_4 == 0)
                                uint32_t esi_105 = zx.d(*(eax_7 - 6))
                                uint32_t edx_74 = zx.d(*(ecx_2 - 6))
                                
                                if (esi_105 != edx_74)
                                    int32_t edx_75
                                    edx_75.b = esi_105 - edx_74 s> 0
                                    esi_4 = edx_75 * 2 - 1
                                
                                if (esi_105 == edx_74 || esi_4 == 0)
                                    uint32_t esi_107 = zx.d(*(eax_7 - 5))
                                    uint32_t edx_77 = zx.d(*(ecx_2 - 5))
                                    esi_4 = esi_107 - edx_77
                                    
                                    if (esi_107 != edx_77)
                                        int32_t edx_78
                                        edx_78.b = esi_4 s> 0
                                        esi_4 = edx_78 * 2 - 1
                                    
                                    goto label_490edb
                case 9
                label_491236:
                    
                    if (*(eax_7 - 9) == *(ecx_2 - 9))
                        esi_4 = 0
                    label_4912bb:
                        
                        if (esi_4 == 0)
                            goto label_4912c3
                    else
                        uint32_t edx_154 = zx.d(*(ecx_2 - 9))
                        uint32_t esi_149 = zx.d(*(eax_7 - 9))
                        
                        if (esi_149 != edx_154)
                            int32_t edx_155
                            edx_155.b = esi_149 - edx_154 s> 0
                            esi_4 = edx_155 * 2 - 1
                        
                        if (esi_149 == edx_154 || esi_4 == 0)
                            uint32_t esi_151 = zx.d(*(eax_7 - 8))
                            uint32_t edx_157 = zx.d(*(ecx_2 - 8))
                            
                            if (esi_151 != edx_157)
                                int32_t edx_158
                                edx_158.b = esi_151 - edx_157 s> 0
                                esi_4 = edx_158 * 2 - 1
                            
                            if (esi_151 == edx_157 || esi_4 == 0)
                                uint32_t esi_153 = zx.d(*(eax_7 - 7))
                                uint32_t edx_160 = zx.d(*(ecx_2 - 7))
                                
                                if (esi_153 != edx_160)
                                    int32_t edx_161
                                    edx_161.b = esi_153 - edx_160 s> 0
                                    esi_4 = edx_161 * 2 - 1
                                
                                if (esi_153 == edx_160 || esi_4 == 0)
                                    uint32_t esi_155 = zx.d(*(eax_7 - 6))
                                    uint32_t edx_163 = zx.d(*(ecx_2 - 6))
                                    esi_4 = esi_155 - edx_163
                                    
                                    if (esi_155 != edx_163)
                                        int32_t edx_164
                                        edx_164.b = esi_4 s> 0
                                        esi_4 = edx_164 * 2 - 1
                                    
                                    goto label_4912bb
                case 0xa
                label_491642:
                    
                    if (*(eax_7 - 0xa) == *(ecx_2 - 0xa))
                        esi_4 = 0
                    label_4916c7:
                        
                        if (esi_4 == 0)
                            goto label_4916cf
                    else
                        uint32_t edx_245 = zx.d(*(ecx_2 - 0xa))
                        uint32_t esi_198 = zx.d(*(eax_7 - 0xa))
                        
                        if (esi_198 != edx_245)
                            int32_t edx_246
                            edx_246.b = esi_198 - edx_245 s> 0
                            esi_4 = edx_246 * 2 - 1
                        
                        if (esi_198 == edx_245 || esi_4 == 0)
                            uint32_t edx_248 = zx.d(*(ecx_2 - 9))
                            uint32_t esi_200 = zx.d(*(eax_7 - 9))
                            
                            if (esi_200 != edx_248)
                                int32_t edx_249
                                edx_249.b = esi_200 - edx_248 s> 0
                                esi_4 = edx_249 * 2 - 1
                            
                            if (esi_200 == edx_248 || esi_4 == 0)
                                uint32_t edx_251 = zx.d(*(ecx_2 - 8))
                                uint32_t esi_202 = zx.d(*(eax_7 - 8))
                                
                                if (esi_202 != edx_251)
                                    int32_t edx_252
                                    edx_252.b = esi_202 - edx_251 s> 0
                                    esi_4 = edx_252 * 2 - 1
                                
                                if (esi_202 == edx_251 || esi_4 == 0)
                                    uint32_t edx_254 = zx.d(*(ecx_2 - 7))
                                    uint32_t esi_204 = zx.d(*(eax_7 - 7))
                                    esi_4 = esi_204 - edx_254
                                    
                                    if (esi_204 != edx_254)
                                        int32_t edx_255
                                        edx_255.b = esi_4 s> 0
                                        esi_4 = edx_255 * 2 - 1
                                    
                                    goto label_4916c7
                case 0xb
                label_491a61:
                    int32_t edx_335 = *(eax_7 - 0xb)
                    
                    if (edx_335 == *(ecx_2 - 0xb))
                        esi_4 = 0
                    label_491ae8:
                        
                        if (esi_4 == 0)
                            goto label_491af0
                    else
                        uint32_t esi_249 = zx.d(edx_335.b)
                        uint32_t edx_336 = zx.d(*(ecx_2 - 0xb))
                        
                        if (esi_249 != edx_336)
                            int32_t edx_337
                            edx_337.b = esi_249 - edx_336 s> 0
                            esi_4 = edx_337 * 2 - 1
                        
                        if (esi_249 == edx_336 || esi_4 == 0)
                            uint32_t esi_251 = zx.d(*(eax_7 - 0xa))
                            uint32_t edx_339 = zx.d(*(ecx_2 - 0xa))
                            
                            if (esi_251 != edx_339)
                                int32_t edx_340
                                edx_340.b = esi_251 - edx_339 s> 0
                                esi_4 = edx_340 * 2 - 1
                            
                            if (esi_251 == edx_339 || esi_4 == 0)
                                uint32_t esi_253 = zx.d(*(eax_7 - 9))
                                uint32_t edx_342 = zx.d(*(ecx_2 - 9))
                                
                                if (esi_253 != edx_342)
                                    int32_t edx_343
                                    edx_343.b = esi_253 - edx_342 s> 0
                                    esi_4 = edx_343 * 2 - 1
                                
                                if (esi_253 == edx_342 || esi_4 == 0)
                                    uint32_t esi_255 = zx.d(*(eax_7 - 8))
                                    uint32_t edx_345 = zx.d(*(ecx_2 - 8))
                                    esi_4 = esi_255 - edx_345
                                    
                                    if (esi_255 != edx_345)
                                        int32_t edx_346
                                        edx_346.b = esi_4 s> 0
                                        esi_4 = edx_346 * 2 - 1
                                    
                                    goto label_491ae8
                case 0xc
                label_490dc7:
                    
                    if (*(eax_7 - 0xc) == *(ecx_2 - 0xc))
                        esi_4 = 0
                    label_490e4c:
                        
                        if (esi_4 == 0)
                            goto label_490e54
                    else
                        uint32_t edx_55 = zx.d(*(ecx_2 - 0xc))
                        uint32_t esi_94 = zx.d(*(eax_7 - 0xc))
                        
                        if (esi_94 != edx_55)
                            int32_t edx_56
                            edx_56.b = esi_94 - edx_55 s> 0
                            esi_4 = edx_56 * 2 - 1
                        
                        if (esi_94 == edx_55 || esi_4 == 0)
                            uint32_t esi_96 = zx.d(*(eax_7 - 0xb))
                            uint32_t edx_58 = zx.d(*(ecx_2 - 0xb))
                            
                            if (esi_96 != edx_58)
                                int32_t edx_59
                                edx_59.b = esi_96 - edx_58 s> 0
                                esi_4 = edx_59 * 2 - 1
                            
                            if (esi_96 == edx_58 || esi_4 == 0)
                                uint32_t esi_98 = zx.d(*(eax_7 - 0xa))
                                uint32_t edx_61 = zx.d(*(ecx_2 - 0xa))
                                
                                if (esi_98 != edx_61)
                                    int32_t edx_62
                                    edx_62.b = esi_98 - edx_61 s> 0
                                    esi_4 = edx_62 * 2 - 1
                                
                                if (esi_98 == edx_61 || esi_4 == 0)
                                    uint32_t esi_100 = zx.d(*(eax_7 - 9))
                                    uint32_t edx_64 = zx.d(*(ecx_2 - 9))
                                    esi_4 = esi_100 - edx_64
                                    
                                    if (esi_100 != edx_64)
                                        int32_t edx_65
                                        edx_65.b = esi_4 s> 0
                                        esi_4 = edx_65 * 2 - 1
                                    
                                    goto label_490e4c
                case 0xd
                label_4911a4:
                    int32_t edx_140 = *(eax_7 - 0xd)
                    
                    if (edx_140 == *(ecx_2 - 0xd))
                        esi_4 = 0
                    label_49122b:
                        
                        if (esi_4 == 0)
                            goto label_491236
                    else
                        uint32_t esi_142 = zx.d(edx_140.b)
                        uint32_t edx_141 = zx.d(*(ecx_2 - 0xd))
                        
                        if (esi_142 != edx_141)
                            int32_t edx_142
                            edx_142.b = esi_142 - edx_141 s> 0
                            esi_4 = edx_142 * 2 - 1
                        
                        if (esi_142 == edx_141 || esi_4 == 0)
                            uint32_t esi_144 = zx.d(*(eax_7 - 0xc))
                            uint32_t edx_144 = zx.d(*(ecx_2 - 0xc))
                            
                            if (esi_144 != edx_144)
                                int32_t edx_145
                                edx_145.b = esi_144 - edx_144 s> 0
                                esi_4 = edx_145 * 2 - 1
                            
                            if (esi_144 == edx_144 || esi_4 == 0)
                                uint32_t esi_146 = zx.d(*(eax_7 - 0xb))
                                uint32_t edx_147 = zx.d(*(ecx_2 - 0xb))
                                
                                if (esi_146 != edx_147)
                                    int32_t edx_148
                                    edx_148.b = esi_146 - edx_147 s> 0
                                    esi_4 = edx_148 * 2 - 1
                                
                                if (esi_146 == edx_147 || esi_4 == 0)
                                    uint32_t esi_148 = zx.d(*(eax_7 - 0xa))
                                    uint32_t edx_150 = zx.d(*(ecx_2 - 0xa))
                                    esi_4 = esi_148 - edx_150
                                    
                                    if (esi_148 != edx_150)
                                        int32_t edx_151
                                        edx_151.b = esi_4 s> 0
                                        esi_4 = edx_151 * 2 - 1
                                    
                                    goto label_49122b
                case 0xe
                label_4915b0:
                    int32_t edx_231 = *(eax_7 - 0xe)
                    
                    if (edx_231 == *(ecx_2 - 0xe))
                        esi_4 = 0
                    label_491637:
                        
                        if (esi_4 == 0)
                            goto label_491642
                    else
                        uint32_t esi_191 = zx.d(edx_231.b)
                        uint32_t edx_232 = zx.d(*(ecx_2 - 0xe))
                        
                        if (esi_191 != edx_232)
                            int32_t edx_233
                            edx_233.b = esi_191 - edx_232 s> 0
                            esi_4 = edx_233 * 2 - 1
                        
                        if (esi_191 == edx_232 || esi_4 == 0)
                            uint32_t esi_193 = zx.d(*(eax_7 - 0xd))
                            uint32_t edx_235 = zx.d(*(ecx_2 - 0xd))
                            
                            if (esi_193 != edx_235)
                                int32_t edx_236
                                edx_236.b = esi_193 - edx_235 s> 0
                                esi_4 = edx_236 * 2 - 1
                            
                            if (esi_193 == edx_235 || esi_4 == 0)
                                uint32_t esi_195 = zx.d(*(eax_7 - 0xc))
                                uint32_t edx_238 = zx.d(*(ecx_2 - 0xc))
                                
                                if (esi_195 != edx_238)
                                    int32_t edx_239
                                    edx_239.b = esi_195 - edx_238 s> 0
                                    esi_4 = edx_239 * 2 - 1
                                
                                if (esi_195 == edx_238 || esi_4 == 0)
                                    uint32_t esi_197 = zx.d(*(eax_7 - 0xb))
                                    uint32_t edx_241 = zx.d(*(ecx_2 - 0xb))
                                    esi_4 = esi_197 - edx_241
                                    
                                    if (esi_197 != edx_241)
                                        int32_t edx_242
                                        edx_242.b = esi_4 s> 0
                                        esi_4 = edx_242 * 2 - 1
                                    
                                    goto label_491637
                case 0xf
                label_4919d4:
                    
                    if (*(eax_7 - 0xf) == *(ecx_2 - 0xf))
                        esi_4 = 0
                    label_491a59:
                        
                        if (esi_4 == 0)
                            goto label_491a61
                    else
                        uint32_t edx_323 = zx.d(*(ecx_2 - 0xf))
                        uint32_t esi_242 = zx.d(*(eax_7 - 0xf))
                        
                        if (esi_242 != edx_323)
                            int32_t edx_324
                            edx_324.b = esi_242 - edx_323 s> 0
                            esi_4 = edx_324 * 2 - 1
                        
                        if (esi_242 == edx_323 || esi_4 == 0)
                            uint32_t esi_244 = zx.d(*(eax_7 - 0xe))
                            uint32_t edx_326 = zx.d(*(ecx_2 - 0xe))
                            
                            if (esi_244 != edx_326)
                                int32_t edx_327
                                edx_327.b = esi_244 - edx_326 s> 0
                                esi_4 = edx_327 * 2 - 1
                            
                            if (esi_244 == edx_326 || esi_4 == 0)
                                uint32_t esi_246 = zx.d(*(eax_7 - 0xd))
                                uint32_t edx_329 = zx.d(*(ecx_2 - 0xd))
                                
                                if (esi_246 != edx_329)
                                    int32_t edx_330
                                    edx_330.b = esi_246 - edx_329 s> 0
                                    esi_4 = edx_330 * 2 - 1
                                
                                if (esi_246 == edx_329 || esi_4 == 0)
                                    uint32_t esi_248 = zx.d(*(eax_7 - 0xc))
                                    uint32_t edx_332 = zx.d(*(ecx_2 - 0xc))
                                    esi_4 = esi_248 - edx_332
                                    
                                    if (esi_248 != edx_332)
                                        int32_t edx_333
                                        edx_333.b = esi_4 s> 0
                                        esi_4 = edx_333 * 2 - 1
                                    
                                    goto label_491a59
                case 0x10
                label_490d35:
                    int32_t edx_41 = *(eax_7 - 0x10)
                    
                    if (edx_41 == *(ecx_2 - 0x10))
                        esi_4 = 0
                    label_490dbc:
                        
                        if (esi_4 == 0)
                            goto label_490dc7
                    else
                        uint32_t esi_87 = zx.d(edx_41.b)
                        uint32_t edx_42 = zx.d(*(ecx_2 - 0x10))
                        
                        if (esi_87 != edx_42)
                            int32_t edx_43
                            edx_43.b = esi_87 - edx_42 s> 0
                            esi_4 = edx_43 * 2 - 1
                        
                        if (esi_87 == edx_42 || esi_4 == 0)
                            uint32_t esi_89 = zx.d(*(eax_7 - 0xf))
                            uint32_t edx_45 = zx.d(*(ecx_2 - 0xf))
                            
                            if (esi_89 != edx_45)
                                int32_t edx_46
                                edx_46.b = esi_89 - edx_45 s> 0
                                esi_4 = edx_46 * 2 - 1
                            
                            if (esi_89 == edx_45 || esi_4 == 0)
                                uint32_t esi_91 = zx.d(*(eax_7 - 0xe))
                                uint32_t edx_48 = zx.d(*(ecx_2 - 0xe))
                                
                                if (esi_91 != edx_48)
                                    int32_t edx_49
                                    edx_49.b = esi_91 - edx_48 s> 0
                                    esi_4 = edx_49 * 2 - 1
                                
                                if (esi_91 == edx_48 || esi_4 == 0)
                                    uint32_t esi_93 = zx.d(*(eax_7 - 0xd))
                                    uint32_t edx_51 = zx.d(*(ecx_2 - 0xd))
                                    esi_4 = esi_93 - edx_51
                                    
                                    if (esi_93 != edx_51)
                                        int32_t edx_52
                                        edx_52.b = esi_4 s> 0
                                        esi_4 = edx_52 * 2 - 1
                                    
                                    goto label_490dbc
                case 0x11
                label_491115:
                    int32_t edx_127 = *(eax_7 - 0x11)
                    
                    if (edx_127 == *(ecx_2 - 0x11))
                        esi_4 = 0
                    label_49119c:
                        
                        if (esi_4 == 0)
                            goto label_4911a4
                    else
                        uint32_t esi_135 = zx.d(edx_127.b)
                        uint32_t edx_128 = zx.d(*(ecx_2 - 0x11))
                        
                        if (esi_135 != edx_128)
                            int32_t edx_129
                            edx_129.b = esi_135 - edx_128 s> 0
                            esi_4 = edx_129 * 2 - 1
                        
                        if (esi_135 == edx_128 || esi_4 == 0)
                            uint32_t esi_137 = zx.d(*(eax_7 - 0x10))
                            uint32_t edx_131 = zx.d(*(ecx_2 - 0x10))
                            
                            if (esi_137 != edx_131)
                                int32_t edx_132
                                edx_132.b = esi_137 - edx_131 s> 0
                                esi_4 = edx_132 * 2 - 1
                            
                            if (esi_137 == edx_131 || esi_4 == 0)
                                uint32_t esi_139 = zx.d(*(eax_7 - 0xf))
                                uint32_t edx_134 = zx.d(*(ecx_2 - 0xf))
                                
                                if (esi_139 != edx_134)
                                    int32_t edx_135
                                    edx_135.b = esi_139 - edx_134 s> 0
                                    esi_4 = edx_135 * 2 - 1
                                
                                if (esi_139 == edx_134 || esi_4 == 0)
                                    uint32_t esi_141 = zx.d(*(eax_7 - 0xe))
                                    uint32_t edx_137 = zx.d(*(ecx_2 - 0xe))
                                    esi_4 = esi_141 - edx_137
                                    
                                    if (esi_141 != edx_137)
                                        int32_t edx_138
                                        edx_138.b = esi_4 s> 0
                                        esi_4 = edx_138 * 2 - 1
                                    
                                    goto label_49119c
                case 0x12
                label_491521:
                    int32_t edx_218 = *(eax_7 - 0x12)
                    
                    if (edx_218 == *(ecx_2 - 0x12))
                        esi_4 = 0
                    label_4915a8:
                        
                        if (esi_4 == 0)
                            goto label_4915b0
                    else
                        uint32_t esi_184 = zx.d(edx_218.b)
                        uint32_t edx_219 = zx.d(*(ecx_2 - 0x12))
                        
                        if (esi_184 != edx_219)
                            int32_t edx_220
                            edx_220.b = esi_184 - edx_219 s> 0
                            esi_4 = edx_220 * 2 - 1
                        
                        if (esi_184 == edx_219 || esi_4 == 0)
                            uint32_t esi_186 = zx.d(*(eax_7 - 0x11))
                            uint32_t edx_222 = zx.d(*(ecx_2 - 0x11))
                            
                            if (esi_186 != edx_222)
                                int32_t edx_223
                                edx_223.b = esi_186 - edx_222 s> 0
                                esi_4 = edx_223 * 2 - 1
                            
                            if (esi_186 == edx_222 || esi_4 == 0)
                                uint32_t esi_188 = zx.d(*(eax_7 - 0x10))
                                uint32_t edx_225 = zx.d(*(ecx_2 - 0x10))
                                
                                if (esi_188 != edx_225)
                                    int32_t edx_226
                                    edx_226.b = esi_188 - edx_225 s> 0
                                    esi_4 = edx_226 * 2 - 1
                                
                                if (esi_188 == edx_225 || esi_4 == 0)
                                    uint32_t esi_190 = zx.d(*(eax_7 - 0xf))
                                    uint32_t edx_228 = zx.d(*(ecx_2 - 0xf))
                                    esi_4 = esi_190 - edx_228
                                    
                                    if (esi_190 != edx_228)
                                        int32_t edx_229
                                        edx_229.b = esi_4 s> 0
                                        esi_4 = edx_229 * 2 - 1
                                    
                                    goto label_4915a8
                case 0x13
                label_491942:
                    int32_t edx_309 = *(eax_7 - 0x13)
                    
                    if (edx_309 == *(ecx_2 - 0x13))
                        esi_4 = 0
                    label_4919c9:
                        
                        if (esi_4 == 0)
                            goto label_4919d4
                    else
                        uint32_t esi_235 = zx.d(edx_309.b)
                        uint32_t edx_310 = zx.d(*(ecx_2 - 0x13))
                        
                        if (esi_235 != edx_310)
                            int32_t edx_311
                            edx_311.b = esi_235 - edx_310 s> 0
                            esi_4 = edx_311 * 2 - 1
                        
                        if (esi_235 == edx_310 || esi_4 == 0)
                            uint32_t esi_237 = zx.d(*(eax_7 - 0x12))
                            uint32_t edx_313 = zx.d(*(ecx_2 - 0x12))
                            
                            if (esi_237 != edx_313)
                                int32_t edx_314
                                edx_314.b = esi_237 - edx_313 s> 0
                                esi_4 = edx_314 * 2 - 1
                            
                            if (esi_237 == edx_313 || esi_4 == 0)
                                uint32_t esi_239 = zx.d(*(eax_7 - 0x11))
                                uint32_t edx_316 = zx.d(*(ecx_2 - 0x11))
                                
                                if (esi_239 != edx_316)
                                    int32_t edx_317
                                    edx_317.b = esi_239 - edx_316 s> 0
                                    esi_4 = edx_317 * 2 - 1
                                
                                if (esi_239 == edx_316 || esi_4 == 0)
                                    uint32_t esi_241 = zx.d(*(eax_7 - 0x10))
                                    uint32_t edx_319 = zx.d(*(ecx_2 - 0x10))
                                    esi_4 = esi_241 - edx_319
                                    
                                    if (esi_241 != edx_319)
                                        int32_t edx_320
                                        edx_320.b = esi_4 s> 0
                                        esi_4 = edx_320 * 2 - 1
                                    
                                    goto label_4919c9
                case 0x14
                label_490ca6:
                    int32_t edx_28 = *(eax_7 - 0x14)
                    
                    if (edx_28 == *(ecx_2 - 0x14))
                        esi_4 = 0
                    label_490d2d:
                        
                        if (esi_4 == 0)
                            goto label_490d35
                    else
                        uint32_t esi_80 = zx.d(edx_28.b)
                        uint32_t edx_29 = zx.d(*(ecx_2 - 0x14))
                        
                        if (esi_80 != edx_29)
                            int32_t edx_30
                            edx_30.b = esi_80 - edx_29 s> 0
                            esi_4 = edx_30 * 2 - 1
                        
                        if (esi_80 == edx_29 || esi_4 == 0)
                            uint32_t esi_82 = zx.d(*(eax_7 - 0x13))
                            uint32_t edx_32 = zx.d(*(ecx_2 - 0x13))
                            
                            if (esi_82 != edx_32)
                                int32_t edx_33
                                edx_33.b = esi_82 - edx_32 s> 0
                                esi_4 = edx_33 * 2 - 1
                            
                            if (esi_82 == edx_32 || esi_4 == 0)
                                uint32_t esi_84 = zx.d(*(eax_7 - 0x12))
                                uint32_t edx_35 = zx.d(*(ecx_2 - 0x12))
                                
                                if (esi_84 != edx_35)
                                    int32_t edx_36
                                    edx_36.b = esi_84 - edx_35 s> 0
                                    esi_4 = edx_36 * 2 - 1
                                
                                if (esi_84 == edx_35 || esi_4 == 0)
                                    uint32_t esi_86 = zx.d(*(eax_7 - 0x11))
                                    uint32_t edx_38 = zx.d(*(ecx_2 - 0x11))
                                    esi_4 = esi_86 - edx_38
                                    
                                    if (esi_86 != edx_38)
                                        int32_t edx_39
                                        edx_39.b = esi_4 s> 0
                                        esi_4 = edx_39 * 2 - 1
                                    
                                    goto label_490d2d
                case 0x15
                label_491086:
                    int32_t edx_114 = *(eax_7 - 0x15)
                    
                    if (edx_114 == *(ecx_2 - 0x15))
                        esi_4 = 0
                    label_49110d:
                        
                        if (esi_4 == 0)
                            goto label_491115
                    else
                        uint32_t esi_128 = zx.d(edx_114.b)
                        uint32_t edx_115 = zx.d(*(ecx_2 - 0x15))
                        
                        if (esi_128 != edx_115)
                            int32_t edx_116
                            edx_116.b = esi_128 - edx_115 s> 0
                            esi_4 = edx_116 * 2 - 1
                        
                        if (esi_128 == edx_115 || esi_4 == 0)
                            uint32_t esi_130 = zx.d(*(eax_7 - 0x14))
                            uint32_t edx_118 = zx.d(*(ecx_2 - 0x14))
                            
                            if (esi_130 != edx_118)
                                int32_t edx_119
                                edx_119.b = esi_130 - edx_118 s> 0
                                esi_4 = edx_119 * 2 - 1
                            
                            if (esi_130 == edx_118 || esi_4 == 0)
                                uint32_t esi_132 = zx.d(*(eax_7 - 0x13))
                                uint32_t edx_121 = zx.d(*(ecx_2 - 0x13))
                                
                                if (esi_132 != edx_121)
                                    int32_t edx_122
                                    edx_122.b = esi_132 - edx_121 s> 0
                                    esi_4 = edx_122 * 2 - 1
                                
                                if (esi_132 == edx_121 || esi_4 == 0)
                                    uint32_t esi_134 = zx.d(*(eax_7 - 0x12))
                                    uint32_t edx_124 = zx.d(*(ecx_2 - 0x12))
                                    esi_4 = esi_134 - edx_124
                                    
                                    if (esi_134 != edx_124)
                                        int32_t edx_125
                                        edx_125.b = esi_4 s> 0
                                        esi_4 = edx_125 * 2 - 1
                                    
                                    goto label_49110d
                case 0x16
                label_491492:
                    int32_t edx_205 = *(eax_7 - 0x16)
                    
                    if (edx_205 == *(ecx_2 - 0x16))
                        esi_4 = 0
                    label_491519:
                        
                        if (esi_4 == 0)
                            goto label_491521
                    else
                        uint32_t esi_177 = zx.d(edx_205.b)
                        uint32_t edx_206 = zx.d(*(ecx_2 - 0x16))
                        
                        if (esi_177 != edx_206)
                            int32_t edx_207
                            edx_207.b = esi_177 - edx_206 s> 0
                            esi_4 = edx_207 * 2 - 1
                        
                        if (esi_177 == edx_206 || esi_4 == 0)
                            uint32_t esi_179 = zx.d(*(eax_7 - 0x15))
                            uint32_t edx_209 = zx.d(*(ecx_2 - 0x15))
                            
                            if (esi_179 != edx_209)
                                int32_t edx_210
                                edx_210.b = esi_179 - edx_209 s> 0
                                esi_4 = edx_210 * 2 - 1
                            
                            if (esi_179 == edx_209 || esi_4 == 0)
                                uint32_t esi_181 = zx.d(*(eax_7 - 0x14))
                                uint32_t edx_212 = zx.d(*(ecx_2 - 0x14))
                                
                                if (esi_181 != edx_212)
                                    int32_t edx_213
                                    edx_213.b = esi_181 - edx_212 s> 0
                                    esi_4 = edx_213 * 2 - 1
                                
                                if (esi_181 == edx_212 || esi_4 == 0)
                                    uint32_t esi_183 = zx.d(*(eax_7 - 0x13))
                                    uint32_t edx_215 = zx.d(*(ecx_2 - 0x13))
                                    esi_4 = esi_183 - edx_215
                                    
                                    if (esi_183 != edx_215)
                                        int32_t edx_216
                                        edx_216.b = esi_4 s> 0
                                        esi_4 = edx_216 * 2 - 1
                                    
                                    goto label_491519
                case 0x17
                label_4918b3:
                    int32_t edx_296 = *(eax_7 - 0x17)
                    
                    if (edx_296 == *(ecx_2 - 0x17))
                        esi_4 = 0
                    label_49193a:
                        
                        if (esi_4 == 0)
                            goto label_491942
                    else
                        uint32_t esi_228 = zx.d(edx_296.b)
                        uint32_t edx_297 = zx.d(*(ecx_2 - 0x17))
                        
                        if (esi_228 != edx_297)
                            int32_t edx_298
                            edx_298.b = esi_228 - edx_297 s> 0
                            esi_4 = edx_298 * 2 - 1
                        
                        if (esi_228 == edx_297 || esi_4 == 0)
                            uint32_t esi_230 = zx.d(*(eax_7 - 0x16))
                            uint32_t edx_300 = zx.d(*(ecx_2 - 0x16))
                            
                            if (esi_230 != edx_300)
                                int32_t edx_301
                                edx_301.b = esi_230 - edx_300 s> 0
                                esi_4 = edx_301 * 2 - 1
                            
                            if (esi_230 == edx_300 || esi_4 == 0)
                                uint32_t esi_232 = zx.d(*(eax_7 - 0x15))
                                uint32_t edx_303 = zx.d(*(ecx_2 - 0x15))
                                
                                if (esi_232 != edx_303)
                                    int32_t edx_304
                                    edx_304.b = esi_232 - edx_303 s> 0
                                    esi_4 = edx_304 * 2 - 1
                                
                                if (esi_232 == edx_303 || esi_4 == 0)
                                    uint32_t esi_234 = zx.d(*(eax_7 - 0x14))
                                    uint32_t edx_306 = zx.d(*(ecx_2 - 0x14))
                                    esi_4 = esi_234 - edx_306
                                    
                                    if (esi_234 != edx_306)
                                        int32_t edx_307
                                        edx_307.b = esi_4 s> 0
                                        esi_4 = edx_307 * 2 - 1
                                    
                                    goto label_49193a
                case 0x18
                label_490c17:
                    int32_t edx_15 = *(eax_7 - 0x18)
                    
                    if (edx_15 == *(ecx_2 - 0x18))
                        esi_4 = 0
                    label_490c9e:
                        
                        if (esi_4 == 0)
                            goto label_490ca6
                    else
                        uint32_t esi_73 = zx.d(edx_15.b)
                        uint32_t edx_16 = zx.d(*(ecx_2 - 0x18))
                        
                        if (esi_73 != edx_16)
                            int32_t edx_17
                            edx_17.b = esi_73 - edx_16 s> 0
                            esi_4 = edx_17 * 2 - 1
                        
                        if (esi_73 == edx_16 || esi_4 == 0)
                            uint32_t esi_75 = zx.d(*(eax_7 - 0x17))
                            uint32_t edx_19 = zx.d(*(ecx_2 - 0x17))
                            
                            if (esi_75 != edx_19)
                                int32_t edx_20
                                edx_20.b = esi_75 - edx_19 s> 0
                                esi_4 = edx_20 * 2 - 1
                            
                            if (esi_75 == edx_19 || esi_4 == 0)
                                uint32_t esi_77 = zx.d(*(eax_7 - 0x16))
                                uint32_t edx_22 = zx.d(*(ecx_2 - 0x16))
                                
                                if (esi_77 != edx_22)
                                    int32_t edx_23
                                    edx_23.b = esi_77 - edx_22 s> 0
                                    esi_4 = edx_23 * 2 - 1
                                
                                if (esi_77 == edx_22 || esi_4 == 0)
                                    uint32_t esi_79 = zx.d(*(eax_7 - 0x15))
                                    uint32_t edx_25 = zx.d(*(ecx_2 - 0x15))
                                    esi_4 = esi_79 - edx_25
                                    
                                    if (esi_79 != edx_25)
                                        int32_t edx_26
                                        edx_26.b = esi_4 s> 0
                                        esi_4 = edx_26 * 2 - 1
                                    
                                    goto label_490c9e
                case 0x19
                label_490ff7:
                    int32_t edx_101 = *(eax_7 - 0x19)
                    
                    if (edx_101 == *(ecx_2 - 0x19))
                        esi_4 = 0
                    label_49107e:
                        
                        if (esi_4 == 0)
                            goto label_491086
                    else
                        uint32_t esi_121 = zx.d(edx_101.b)
                        uint32_t edx_102 = zx.d(*(ecx_2 - 0x19))
                        
                        if (esi_121 != edx_102)
                            int32_t edx_103
                            edx_103.b = esi_121 - edx_102 s> 0
                            esi_4 = edx_103 * 2 - 1
                        
                        if (esi_121 == edx_102 || esi_4 == 0)
                            uint32_t esi_123 = zx.d(*(eax_7 - 0x18))
                            uint32_t edx_105 = zx.d(*(ecx_2 - 0x18))
                            
                            if (esi_123 != edx_105)
                                int32_t edx_106
                                edx_106.b = esi_123 - edx_105 s> 0
                                esi_4 = edx_106 * 2 - 1
                            
                            if (esi_123 == edx_105 || esi_4 == 0)
                                uint32_t esi_125 = zx.d(*(eax_7 - 0x17))
                                uint32_t edx_108 = zx.d(*(ecx_2 - 0x17))
                                
                                if (esi_125 != edx_108)
                                    int32_t edx_109
                                    edx_109.b = esi_125 - edx_108 s> 0
                                    esi_4 = edx_109 * 2 - 1
                                
                                if (esi_125 == edx_108 || esi_4 == 0)
                                    uint32_t esi_127 = zx.d(*(eax_7 - 0x16))
                                    uint32_t edx_111 = zx.d(*(ecx_2 - 0x16))
                                    esi_4 = esi_127 - edx_111
                                    
                                    if (esi_127 != edx_111)
                                        int32_t edx_112
                                        edx_112.b = esi_4 s> 0
                                        esi_4 = edx_112 * 2 - 1
                                    
                                    goto label_49107e
                case 0x1a
                label_491403:
                    int32_t edx_192 = *(eax_7 - 0x1a)
                    
                    if (edx_192 == *(ecx_2 - 0x1a))
                        esi_4 = 0
                    label_49148a:
                        
                        if (esi_4 == 0)
                            goto label_491492
                    else
                        uint32_t esi_170 = zx.d(edx_192.b)
                        uint32_t edx_193 = zx.d(*(ecx_2 - 0x1a))
                        
                        if (esi_170 != edx_193)
                            int32_t edx_194
                            edx_194.b = esi_170 - edx_193 s> 0
                            esi_4 = edx_194 * 2 - 1
                        
                        if (esi_170 == edx_193 || esi_4 == 0)
                            uint32_t esi_172 = zx.d(*(eax_7 - 0x19))
                            uint32_t edx_196 = zx.d(*(ecx_2 - 0x19))
                            
                            if (esi_172 != edx_196)
                                int32_t edx_197
                                edx_197.b = esi_172 - edx_196 s> 0
                                esi_4 = edx_197 * 2 - 1
                            
                            if (esi_172 == edx_196 || esi_4 == 0)
                                uint32_t esi_174 = zx.d(*(eax_7 - 0x18))
                                uint32_t edx_199 = zx.d(*(ecx_2 - 0x18))
                                
                                if (esi_174 != edx_199)
                                    int32_t edx_200
                                    edx_200.b = esi_174 - edx_199 s> 0
                                    esi_4 = edx_200 * 2 - 1
                                
                                if (esi_174 == edx_199 || esi_4 == 0)
                                    uint32_t esi_176 = zx.d(*(eax_7 - 0x17))
                                    uint32_t edx_202 = zx.d(*(ecx_2 - 0x17))
                                    esi_4 = esi_176 - edx_202
                                    
                                    if (esi_176 != edx_202)
                                        int32_t edx_203
                                        edx_203.b = esi_4 s> 0
                                        esi_4 = edx_203 * 2 - 1
                                    
                                    goto label_49148a
                case 0x1b
                label_491824:
                    int32_t edx_283 = *(eax_7 - 0x1b)
                    
                    if (edx_283 == *(ecx_2 - 0x1b))
                        esi_4 = 0
                    label_4918ab:
                        
                        if (esi_4 == 0)
                            goto label_4918b3
                    else
                        uint32_t esi_221 = zx.d(edx_283.b)
                        uint32_t edx_284 = zx.d(*(ecx_2 - 0x1b))
                        
                        if (esi_221 != edx_284)
                            int32_t edx_285
                            edx_285.b = esi_221 - edx_284 s> 0
                            esi_4 = edx_285 * 2 - 1
                        
                        if (esi_221 == edx_284 || esi_4 == 0)
                            uint32_t esi_223 = zx.d(*(eax_7 - 0x1a))
                            uint32_t edx_287 = zx.d(*(ecx_2 - 0x1a))
                            
                            if (esi_223 != edx_287)
                                int32_t edx_288
                                edx_288.b = esi_223 - edx_287 s> 0
                                esi_4 = edx_288 * 2 - 1
                            
                            if (esi_223 == edx_287 || esi_4 == 0)
                                uint32_t esi_225 = zx.d(*(eax_7 - 0x19))
                                uint32_t edx_290 = zx.d(*(ecx_2 - 0x19))
                                
                                if (esi_225 != edx_290)
                                    int32_t edx_291
                                    edx_291.b = esi_225 - edx_290 s> 0
                                    esi_4 = edx_291 * 2 - 1
                                
                                if (esi_225 == edx_290 || esi_4 == 0)
                                    uint32_t esi_227 = zx.d(*(eax_7 - 0x18))
                                    uint32_t edx_293 = zx.d(*(ecx_2 - 0x18))
                                    esi_4 = esi_227 - edx_293
                                    
                                    if (esi_227 != edx_293)
                                        int32_t edx_294
                                        edx_294.b = esi_4 s> 0
                                        esi_4 = edx_294 * 2 - 1
                                    
                                    goto label_4918ab
                case 0x1c
                    int32_t edx_2 = *(eax_7 - 0x1c)
                    
                    if (edx_2 == *(ecx_2 - 0x1c))
                        esi_4 = 0
                    label_490c0f:
                        
                        if (esi_4 == 0)
                            goto label_490c17
                    else
                        uint32_t esi_66 = zx.d(edx_2.b)
                        uint32_t edx_3 = zx.d(*(ecx_2 - 0x1c))
                        
                        if (esi_66 != edx_3)
                            int32_t edx_4
                            edx_4.b = esi_66 - edx_3 s> 0
                            esi_4 = edx_4 * 2 - 1
                        
                        if (esi_66 == edx_3 || esi_4 == 0)
                            uint32_t esi_68 = zx.d(*(eax_7 - 0x1b))
                            uint32_t edx_6 = zx.d(*(ecx_2 - 0x1b))
                            
                            if (esi_68 != edx_6)
                                int32_t edx_7
                                edx_7.b = esi_68 - edx_6 s> 0
                                esi_4 = edx_7 * 2 - 1
                            
                            if (esi_68 == edx_6 || esi_4 == 0)
                                uint32_t esi_70 = zx.d(*(eax_7 - 0x1a))
                                uint32_t edx_9 = zx.d(*(ecx_2 - 0x1a))
                                
                                if (esi_70 != edx_9)
                                    int32_t edx_10
                                    edx_10.b = esi_70 - edx_9 s> 0
                                    esi_4 = edx_10 * 2 - 1
                                
                                if (esi_70 == edx_9 || esi_4 == 0)
                                    uint32_t esi_72 = zx.d(*(eax_7 - 0x19))
                                    uint32_t edx_12 = zx.d(*(ecx_2 - 0x19))
                                    esi_4 = esi_72 - edx_12
                                    
                                    if (esi_72 != edx_12)
                                        int32_t edx_13
                                        edx_13.b = esi_4 s> 0
                                        esi_4 = edx_13 * 2 - 1
                                    
                                    goto label_490c0f
                case 0x1d
                    int32_t edx_88 = *(eax_7 - 0x1d)
                    
                    if (edx_88 == *(ecx_2 - 0x1d))
                        esi_4 = 0
                    label_490fef:
                        
                        if (esi_4 == 0)
                            goto label_490ff7
                    else
                        uint32_t esi_114 = zx.d(edx_88.b)
                        uint32_t edx_89 = zx.d(*(ecx_2 - 0x1d))
                        
                        if (esi_114 != edx_89)
                            int32_t edx_90
                            edx_90.b = esi_114 - edx_89 s> 0
                            esi_4 = edx_90 * 2 - 1
                        
                        if (esi_114 == edx_89 || esi_4 == 0)
                            uint32_t esi_116 = zx.d(*(eax_7 - 0x1c))
                            uint32_t edx_92 = zx.d(*(ecx_2 - 0x1c))
                            
                            if (esi_116 != edx_92)
                                int32_t edx_93
                                edx_93.b = esi_116 - edx_92 s> 0
                                esi_4 = edx_93 * 2 - 1
                            
                            if (esi_116 == edx_92 || esi_4 == 0)
                                uint32_t esi_118 = zx.d(*(eax_7 - 0x1b))
                                uint32_t edx_95 = zx.d(*(ecx_2 - 0x1b))
                                
                                if (esi_118 != edx_95)
                                    int32_t edx_96
                                    edx_96.b = esi_118 - edx_95 s> 0
                                    esi_4 = edx_96 * 2 - 1
                                
                                if (esi_118 == edx_95 || esi_4 == 0)
                                    uint32_t esi_120 = zx.d(*(eax_7 - 0x1a))
                                    uint32_t edx_98 = zx.d(*(ecx_2 - 0x1a))
                                    esi_4 = esi_120 - edx_98
                                    
                                    if (esi_120 != edx_98)
                                        int32_t edx_99
                                        edx_99.b = esi_4 s> 0
                                        esi_4 = edx_99 * 2 - 1
                                    
                                    goto label_490fef
                case 0x1e
                    int32_t edx_179 = *(eax_7 - 0x1e)
                    
                    if (edx_179 == *(ecx_2 - 0x1e))
                        esi_4 = 0
                    label_4913fb:
                        
                        if (esi_4 == 0)
                            goto label_491403
                    else
                        uint32_t esi_163 = zx.d(edx_179.b)
                        uint32_t edx_180 = zx.d(*(ecx_2 - 0x1e))
                        
                        if (esi_163 != edx_180)
                            int32_t edx_181
                            edx_181.b = esi_163 - edx_180 s> 0
                            esi_4 = edx_181 * 2 - 1
                        
                        if (esi_163 == edx_180 || esi_4 == 0)
                            uint32_t esi_165 = zx.d(*(eax_7 - 0x1d))
                            uint32_t edx_183 = zx.d(*(ecx_2 - 0x1d))
                            
                            if (esi_165 != edx_183)
                                int32_t edx_184
                                edx_184.b = esi_165 - edx_183 s> 0
                                esi_4 = edx_184 * 2 - 1
                            
                            if (esi_165 == edx_183 || esi_4 == 0)
                                uint32_t esi_167 = zx.d(*(eax_7 - 0x1c))
                                uint32_t edx_186 = zx.d(*(ecx_2 - 0x1c))
                                
                                if (esi_167 != edx_186)
                                    int32_t edx_187
                                    edx_187.b = esi_167 - edx_186 s> 0
                                    esi_4 = edx_187 * 2 - 1
                                
                                if (esi_167 == edx_186 || esi_4 == 0)
                                    uint32_t esi_169 = zx.d(*(eax_7 - 0x1b))
                                    uint32_t edx_189 = zx.d(*(ecx_2 - 0x1b))
                                    esi_4 = esi_169 - edx_189
                                    
                                    if (esi_169 != edx_189)
                                        int32_t edx_190
                                        edx_190.b = esi_4 s> 0
                                        esi_4 = edx_190 * 2 - 1
                                    
                                    goto label_4913fb
                case 0x1f
                    if (*(eax_7 - 0x1f) == *(ecx_2 - 0x1f))
                        esi_4 = 0
                    label_49181c:
                        
                        if (esi_4 == 0)
                            goto label_491824
                    else
                        uint32_t edx_271 = zx.d(*(ecx_2 - 0x1f))
                        uint32_t esi_214 = zx.d(*(eax_7 - 0x1f))
                        
                        if (esi_214 != edx_271)
                            int32_t edx_272
                            edx_272.b = esi_214 - edx_271 s> 0
                            esi_4 = edx_272 * 2 - 1
                        
                        if (esi_214 == edx_271 || esi_4 == 0)
                            uint32_t esi_216 = zx.d(*(eax_7 - 0x1e))
                            uint32_t edx_274 = zx.d(*(ecx_2 - 0x1e))
                            
                            if (esi_216 != edx_274)
                                int32_t edx_275
                                edx_275.b = esi_216 - edx_274 s> 0
                                esi_4 = edx_275 * 2 - 1
                            
                            if (esi_216 == edx_274 || esi_4 == 0)
                                uint32_t esi_218 = zx.d(*(eax_7 - 0x1d))
                                uint32_t edx_277 = zx.d(*(ecx_2 - 0x1d))
                                
                                if (esi_218 != edx_277)
                                    int32_t edx_278
                                    edx_278.b = esi_218 - edx_277 s> 0
                                    esi_4 = edx_278 * 2 - 1
                                
                                if (esi_218 == edx_277 || esi_4 == 0)
                                    uint32_t esi_220 = zx.d(*(eax_7 - 0x1c))
                                    uint32_t edx_280 = zx.d(*(ecx_2 - 0x1c))
                                    esi_4 = esi_220 - edx_280
                                    
                                    if (esi_220 != edx_280)
                                        int32_t edx_281
                                        edx_281.b = esi_4 s> 0
                                        esi_4 = edx_281 * 2 - 1
                                    
                                    goto label_49181c
        else if (*eax_6 == *ecx_1)
            esi_4 = 0
        label_490783:
            
            if (esi_4 == 0)
                if (eax_6[1] == ecx_1[1])
                    esi_4 = 0
                label_490813:
                    
                    if (esi_4 == 0)
                        if (eax_6[2] == ecx_1[2])
                            esi_4 = 0
                        label_4908a3:
                            
                            if (esi_4 == 0)
                                if (eax_6[3] == ecx_1[3])
                                    esi_4 = 0
                                label_490933:
                                    
                                    if (esi_4 == 0)
                                        if (eax_6[4] == ecx_1[4])
                                            esi_4 = 0
                                        label_4909c3:
                                            
                                            if (esi_4 == 0)
                                                if (eax_6[5] == ecx_1[5])
                                                    esi_4 = 0
                                                label_490a53:
                                                    
                                                    if (esi_4 == 0)
                                                        if (eax_6[6] == ecx_1[6])
                                                            esi_4 = 0
                                                        label_490ae3:
                                                            
                                                            if (esi_4 == 0)
                                                                if (eax_6[7] == ecx_1[7])
                                                                    esi_4 = 0
                                                                label_490b67:
                                                                    
                                                                    if (esi_4 == 0)
                                                                        eax_6 = &eax_6[8]
                                                                        ecx_1 = &ecx_1[8]
                                                                        edi -= 0x20
                                                                        continue
                                                                else
                                                                    uint32_t esi_59 = zx.d(eax_6[7].b)
                                                                    uint32_t ebx_85 = zx.d(ecx_1[7].b)
                                                                    
                                                                    if (esi_59 != ebx_85)
                                                                        int32_t ebx_86
                                                                        ebx_86.b = esi_59 - ebx_85 s> 0
                                                                        esi_4 = ebx_86 * 2 - 1
                                                                    
                                                                    if (esi_59 == ebx_85 || esi_4 == 0)
                                                                        uint32_t esi_61 = zx.d(*(eax_6 + 0x1d))
                                                                        uint32_t ebx_88 = zx.d(*(ecx_1 + 0x1d))
                                                                        
                                                                        if (esi_61 != ebx_88)
                                                                            int32_t ebx_89
                                                                            ebx_89.b = esi_61 - ebx_88 s> 0
                                                                            esi_4 = ebx_89 * 2 - 1
                                                                        
                                                                        if (esi_61 == ebx_88 || esi_4 == 0)
                                                                            uint32_t esi_63 = zx.d(*(eax_6 + 0x1e))
                                                                            uint32_t ebx_91 = zx.d(*(ecx_1 + 0x1e))
                                                                            
                                                                            if (esi_63 != ebx_91)
                                                                                int32_t ebx_92
                                                                                ebx_92.b = esi_63 - ebx_91 s> 0
                                                                                esi_4 = ebx_92 * 2 - 1
                                                                            
                                                                            if (esi_63 == ebx_91 || esi_4 == 0)
                                                                                uint32_t esi_65 = zx.d(*(eax_6 + 0x1f))
                                                                                uint32_t ebx_94 = zx.d(*(ecx_1 + 0x1f))
                                                                                esi_4 = esi_65 - ebx_94
                                                                                
                                                                                if (esi_65 != ebx_94)
                                                                                    int32_t ebx_95
                                                                                    ebx_95.b = esi_4 s> 0
                                                                                    esi_4 = ebx_95 * 2 - 1
                                                                                
                                                                                goto label_490b67
                                                        else
                                                            uint32_t esi_51 = zx.d(eax_6[6].b)
                                                            uint32_t ebx_73 = zx.d(ecx_1[6].b)
                                                            
                                                            if (esi_51 != ebx_73)
                                                                int32_t ebx_74
                                                                ebx_74.b = esi_51 - ebx_73 s> 0
                                                                esi_4 = ebx_74 * 2 - 1
                                                            
                                                            if (esi_51 == ebx_73 || esi_4 == 0)
                                                                uint32_t esi_53 = zx.d(*(eax_6 + 0x19))
                                                                uint32_t ebx_76 = zx.d(*(ecx_1 + 0x19))
                                                                
                                                                if (esi_53 != ebx_76)
                                                                    int32_t ebx_77
                                                                    ebx_77.b = esi_53 - ebx_76 s> 0
                                                                    esi_4 = ebx_77 * 2 - 1
                                                                
                                                                if (esi_53 == ebx_76 || esi_4 == 0)
                                                                    uint32_t esi_55 = zx.d(*(eax_6 + 0x1a))
                                                                    uint32_t ebx_79 = zx.d(*(ecx_1 + 0x1a))
                                                                    
                                                                    if (esi_55 != ebx_79)
                                                                        int32_t ebx_80
                                                                        ebx_80.b = esi_55 - ebx_79 s> 0
                                                                        esi_4 = ebx_80 * 2 - 1
                                                                    
                                                                    if (esi_55 == ebx_79 || esi_4 == 0)
                                                                        uint32_t esi_57 = zx.d(*(eax_6 + 0x1b))
                                                                        uint32_t ebx_82 = zx.d(*(ecx_1 + 0x1b))
                                                                        esi_4 = esi_57 - ebx_82
                                                                        
                                                                        if (esi_57 != ebx_82)
                                                                            int32_t ebx_83
                                                                            ebx_83.b = esi_4 s> 0
                                                                            esi_4 = ebx_83 * 2 - 1
                                                                        
                                                                        goto label_490ae3
                                                else
                                                    uint32_t esi_43 = zx.d(eax_6[5].b)
                                                    uint32_t ebx_61 = zx.d(ecx_1[5].b)
                                                    
                                                    if (esi_43 != ebx_61)
                                                        int32_t ebx_62
                                                        ebx_62.b = esi_43 - ebx_61 s> 0
                                                        esi_4 = ebx_62 * 2 - 1
                                                    
                                                    if (esi_43 == ebx_61 || esi_4 == 0)
                                                        uint32_t esi_45 = zx.d(*(eax_6 + 0x15))
                                                        uint32_t ebx_64 = zx.d(*(ecx_1 + 0x15))
                                                        
                                                        if (esi_45 != ebx_64)
                                                            int32_t ebx_65
                                                            ebx_65.b = esi_45 - ebx_64 s> 0
                                                            esi_4 = ebx_65 * 2 - 1
                                                        
                                                        if (esi_45 == ebx_64 || esi_4 == 0)
                                                            uint32_t esi_47 = zx.d(*(eax_6 + 0x16))
                                                            uint32_t ebx_67 = zx.d(*(ecx_1 + 0x16))
                                                            
                                                            if (esi_47 != ebx_67)
                                                                int32_t ebx_68
                                                                ebx_68.b = esi_47 - ebx_67 s> 0
                                                                esi_4 = ebx_68 * 2 - 1
                                                            
                                                            if (esi_47 == ebx_67 || esi_4 == 0)
                                                                uint32_t esi_49 = zx.d(*(eax_6 + 0x17))
                                                                uint32_t ebx_70 = zx.d(*(ecx_1 + 0x17))
                                                                esi_4 = esi_49 - ebx_70
                                                                
                                                                if (esi_49 != ebx_70)
                                                                    int32_t ebx_71
                                                                    ebx_71.b = esi_4 s> 0
                                                                    esi_4 = ebx_71 * 2 - 1
                                                                
                                                                goto label_490a53
                                        else
                                            uint32_t ebx_49 = zx.d(ecx_1[4].b)
                                            uint32_t esi_35 = zx.d(eax_6[4].b)
                                            
                                            if (esi_35 != ebx_49)
                                                int32_t ebx_50
                                                ebx_50.b = esi_35 - ebx_49 s> 0
                                                esi_4 = ebx_50 * 2 - 1
                                            
                                            if (esi_35 == ebx_49 || esi_4 == 0)
                                                uint32_t esi_37 = zx.d(*(eax_6 + 0x11))
                                                uint32_t ebx_52 = zx.d(*(ecx_1 + 0x11))
                                                
                                                if (esi_37 != ebx_52)
                                                    int32_t ebx_53
                                                    ebx_53.b = esi_37 - ebx_52 s> 0
                                                    esi_4 = ebx_53 * 2 - 1
                                                
                                                if (esi_37 == ebx_52 || esi_4 == 0)
                                                    uint32_t esi_39 = zx.d(*(eax_6 + 0x12))
                                                    uint32_t ebx_55 = zx.d(*(ecx_1 + 0x12))
                                                    
                                                    if (esi_39 != ebx_55)
                                                        int32_t ebx_56
                                                        ebx_56.b = esi_39 - ebx_55 s> 0
                                                        esi_4 = ebx_56 * 2 - 1
                                                    
                                                    if (esi_39 == ebx_55 || esi_4 == 0)
                                                        uint32_t esi_41 = zx.d(*(eax_6 + 0x13))
                                                        uint32_t ebx_58 = zx.d(*(ecx_1 + 0x13))
                                                        esi_4 = esi_41 - ebx_58
                                                        
                                                        if (esi_41 != ebx_58)
                                                            int32_t ebx_59
                                                            ebx_59.b = esi_4 s> 0
                                                            esi_4 = ebx_59 * 2 - 1
                                                        
                                                        goto label_4909c3
                                else
                                    uint32_t esi_27 = zx.d(eax_6[3].b)
                                    uint32_t ebx_37 = zx.d(ecx_1[3].b)
                                    
                                    if (esi_27 != ebx_37)
                                        int32_t ebx_38
                                        ebx_38.b = esi_27 - ebx_37 s> 0
                                        esi_4 = ebx_38 * 2 - 1
                                    
                                    if (esi_27 == ebx_37 || esi_4 == 0)
                                        uint32_t esi_29 = zx.d(*(eax_6 + 0xd))
                                        uint32_t ebx_40 = zx.d(*(ecx_1 + 0xd))
                                        
                                        if (esi_29 != ebx_40)
                                            int32_t ebx_41
                                            ebx_41.b = esi_29 - ebx_40 s> 0
                                            esi_4 = ebx_41 * 2 - 1
                                        
                                        if (esi_29 == ebx_40 || esi_4 == 0)
                                            uint32_t esi_31 = zx.d(*(eax_6 + 0xe))
                                            uint32_t ebx_43 = zx.d(*(ecx_1 + 0xe))
                                            
                                            if (esi_31 != ebx_43)
                                                int32_t ebx_44
                                                ebx_44.b = esi_31 - ebx_43 s> 0
                                                esi_4 = ebx_44 * 2 - 1
                                            
                                            if (esi_31 == ebx_43 || esi_4 == 0)
                                                uint32_t esi_33 = zx.d(*(eax_6 + 0xf))
                                                uint32_t ebx_46 = zx.d(*(ecx_1 + 0xf))
                                                esi_4 = esi_33 - ebx_46
                                                
                                                if (esi_33 != ebx_46)
                                                    int32_t ebx_47
                                                    ebx_47.b = esi_4 s> 0
                                                    esi_4 = ebx_47 * 2 - 1
                                                
                                                goto label_490933
                        else
                            uint32_t esi_19 = zx.d(eax_6[2].b)
                            uint32_t ebx_25 = zx.d(ecx_1[2].b)
                            
                            if (esi_19 != ebx_25)
                                int32_t ebx_26
                                ebx_26.b = esi_19 - ebx_25 s> 0
                                esi_4 = ebx_26 * 2 - 1
                            
                            if (esi_19 == ebx_25 || esi_4 == 0)
                                uint32_t esi_21 = zx.d(*(eax_6 + 9))
                                uint32_t ebx_28 = zx.d(*(ecx_1 + 9))
                                
                                if (esi_21 != ebx_28)
                                    int32_t ebx_29
                                    ebx_29.b = esi_21 - ebx_28 s> 0
                                    esi_4 = ebx_29 * 2 - 1
                                
                                if (esi_21 == ebx_28 || esi_4 == 0)
                                    uint32_t esi_23 = zx.d(*(eax_6 + 0xa))
                                    uint32_t ebx_31 = zx.d(*(ecx_1 + 0xa))
                                    
                                    if (esi_23 != ebx_31)
                                        int32_t ebx_32
                                        ebx_32.b = esi_23 - ebx_31 s> 0
                                        esi_4 = ebx_32 * 2 - 1
                                    
                                    if (esi_23 == ebx_31 || esi_4 == 0)
                                        uint32_t esi_25 = zx.d(*(eax_6 + 0xb))
                                        uint32_t ebx_34 = zx.d(*(ecx_1 + 0xb))
                                        esi_4 = esi_25 - ebx_34
                                        
                                        if (esi_25 != ebx_34)
                                            int32_t ebx_35
                                            ebx_35.b = esi_4 s> 0
                                            esi_4 = ebx_35 * 2 - 1
                                        
                                        goto label_4908a3
                else
                    uint32_t esi_11 = zx.d(eax_6[1].b)
                    uint32_t ebx_13 = zx.d(ecx_1[1].b)
                    
                    if (esi_11 != ebx_13)
                        int32_t ebx_14
                        ebx_14.b = esi_11 - ebx_13 s> 0
                        esi_4 = ebx_14 * 2 - 1
                    
                    if (esi_11 == ebx_13 || esi_4 == 0)
                        uint32_t esi_13 = zx.d(*(eax_6 + 5))
                        uint32_t ebx_16 = zx.d(*(ecx_1 + 5))
                        
                        if (esi_13 != ebx_16)
                            int32_t ebx_17
                            ebx_17.b = esi_13 - ebx_16 s> 0
                            esi_4 = ebx_17 * 2 - 1
                        
                        if (esi_13 == ebx_16 || esi_4 == 0)
                            uint32_t esi_15 = zx.d(*(eax_6 + 6))
                            uint32_t ebx_19 = zx.d(*(ecx_1 + 6))
                            
                            if (esi_15 != ebx_19)
                                int32_t ebx_20
                                ebx_20.b = esi_15 - ebx_19 s> 0
                                esi_4 = ebx_20 * 2 - 1
                            
                            if (esi_15 == ebx_19 || esi_4 == 0)
                                uint32_t esi_17 = zx.d(*(eax_6 + 7))
                                uint32_t ebx_22 = zx.d(*(ecx_1 + 7))
                                esi_4 = esi_17 - ebx_22
                                
                                if (esi_17 != ebx_22)
                                    int32_t ebx_23
                                    ebx_23.b = esi_4 s> 0
                                    esi_4 = ebx_23 * 2 - 1
                                
                                goto label_490813
        else
            uint32_t esi_2 = zx.d(*eax_6)
            uint32_t ebx_1 = zx.d(*ecx_1)
            
            if (esi_2 != ebx_1)
                int32_t ebx_2
                ebx_2.b = esi_2 - ebx_1 s> 0
                esi_4 = ebx_2 * 2 - 1
            
            if (esi_2 == ebx_1 || esi_4 == 0)
                uint32_t esi_5 = zx.d(*(eax_6 + 1))
                uint32_t ebx_4 = zx.d(*(ecx_1 + 1))
                
                if (esi_5 != ebx_4)
                    int32_t ebx_5
                    ebx_5.b = esi_5 - ebx_4 s> 0
                    esi_4 = ebx_5 * 2 - 1
                
                if (esi_5 == ebx_4 || esi_4 == 0)
                    uint32_t esi_7 = zx.d(*(eax_6 + 2))
                    uint32_t ebx_7 = zx.d(*(ecx_1 + 2))
                    
                    if (esi_7 != ebx_7)
                        int32_t ebx_8
                        ebx_8.b = esi_7 - ebx_7 s> 0
                        esi_4 = ebx_8 * 2 - 1
                    
                    if (esi_7 == ebx_7 || esi_4 == 0)
                        uint32_t esi_9 = zx.d(*(eax_6 + 3))
                        uint32_t ebx_10 = zx.d(*(ecx_1 + 3))
                        esi_4 = esi_9 - ebx_10
                        
                        if (esi_9 != ebx_10)
                            int32_t ebx_11
                            ebx_11.b = esi_4 s> 0
                            esi_4 = ebx_11 * 2 - 1
                        
                        goto label_490783
        
        return esi_4
return eax_8
