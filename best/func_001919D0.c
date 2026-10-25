extern u8 D_00780B00[];

void func_00184080(s32 arg0) {
    u8 *p;
    s32 idx;
    s32 id;
    if (arg0 == 0) {
        return;
    }
    id = arg0;
    idx = id & 0xFF;
    p = (u8 *)D_00780B00 + (((idx << 6) + idx) << 4);
    if (*(s16 *)(p + 0x400) == id) {
        return;
    }
    *(s16 *)(p + 0x400) = 0;
}

extern s32 D_00484478;
extern s32 D_0048447C;
extern struct {
    void (*fn)(void);
    u8 pad[12];
    s32 mask;
} D_00793E60[];

void func_00191770(s32 arg0, s32 arg1) {
    s32 i;
    s32 n;
    n = D_00484478;
    D_0048447C = 0;
    if (n <= 0) {
        return;
    }
    i = 0;
    do {
        s32 m;
        i = D_0048447C;
        m = D_00793E60[i].mask;
        if ((m & arg0) == 0) {
            if (arg1 == -1) {
                D_00793E60[i].fn();
                i = D_0048447C;
            } else if (arg1 & (i + 1)) {
                D_00793E60[i].fn();
                i = D_0048447C;
            }
        }
        i = i + 1;
        D_0048447C = i;
    } while (i < n);
}

extern void func_00190E20(void *, s16 *);
void func_001919D0(void *ctx, s8 *src) {
    s16 buf[256];
    s16 *dst = buf;
    s32 c;
    if (src[0] == 0) {
        goto end;
    }
    c = (u8)src[0];
    do {
        *dst++ = c;
        src++;
        c = (u8)src[0];
    } while (c != 0);
end:
    *dst = 0;
    func_00190E20(ctx, buf);
}

s32 func_00191A20(u32 c, f32 scale) {
    u32 a = c >> 24;
    u32 r = (c >> 8) & 0xFF;
    u32 g = (c >> 16) & 0xFF;
    u32 b = c & 0xFF;
    s32 ir = (s32)(r * scale);
    s32 ig = (s32)(g * scale);
    s32 ib = (s32)(b * scale);
    if (ir < 0) ir = 0;
    if (ig < 0) ig = 0;
    if (ib < 0) ib = 0;
    if (ir > 255) ir = 255;
    if (ig > 255) ig = 255;
    if (ib > 255) ib = 255;
    return (a << 24) | (ir << 8) | (ig << 16) | ib;
}
