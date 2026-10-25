void func_002EF250(s32 mode, s64 offset, s32 count, s64 *in, s64 *out, s64 *res) {
    s64 *src = in - (s32)offset;
    s32 i;
    s64 x, y;
    switch (mode) {
    case 0:
        for (i=0;i<40;i++) { x=*src++; y=(x*0xCCD)>>15; *out++=y; *res++=*in++-y; } break;
    case 1:
        for (i=0;i<40;i++) { x=*src++; y=(x*0x2CCD)>>15; *out++=y; *res++=*in++-y; } break;
    case 2:
        for (i=0;i<40;i++) { x=*src++; y=(x*0x5333)>>15; *out++=y; *res++=*in++-y; } break;
    case 3:
        for (i=0;i<40;i++) { x=*src++; y=(x*0x7FFF)>>15; *out++=y; *res++=*in++-y; } break;
    }
}
