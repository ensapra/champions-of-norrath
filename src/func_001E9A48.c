#define READ(p,T) (p += sizeof(T), *(T *)(p - sizeof(T)))
s32 func_00111B90(void *, void *);
s32 func_001E9A48(u8 *o, u8 *buf) {
    u8 *start = buf;
    buf += func_00111B90(o, buf);
    *(s32 *)(o + 0xD0) = READ(buf, s32);
    if (*(s16 *)(o + 0x23C) == 10) {
        *(s32 *)(o + 0x3D8) = 0;
    }
    return buf - start;
}
