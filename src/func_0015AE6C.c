#define F(o, off) (*(s32 *)((u8 *)(o) + (off)))

void func_0015B248(void *);
void func_0015B2F8(void *);
void func_0015B400(void *);
void func_0015B520(void *);
void func_0015BA94(void *);
s32 func_0015BBE0(void *, s32, s32);
s32 func_0015BCA8(void *, s32);

void func_0015AE6C(void *o, s32 arg1)
{
    s32 idx;
    s32 r;
    s32 d, h, t;

    idx = func_0015BBE0(o, F(o, 0x4F4), F(o, 0x4F8));
    if (idx >= 0) {
        F(o, 0xD10) = 1;
        r = func_0015BCA8(o, idx);
        if (r != 0 && arg1 != 0) {
            d = F(o, 0xD08);
            h = F(o, 0xBF4);
            t = h - d;
            h += d;
            if (r < 0) {
                F(o, 0xBF4) = h;
            } else {
                F(o, 0xBF4) = (t < 0) ? 0 : t;
            }
        }
        F(o, 0xB8C) = idx;
        func_0015B248(o);
        func_0015B2F8(o);
        F(o, 0x98) = 2;
        func_0015BA94(o);
        func_0015B520(o);
        func_0015B400(o);
    }
}
