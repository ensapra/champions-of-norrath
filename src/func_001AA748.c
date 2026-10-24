typedef struct {
    s32 size;
    s32 count;
    u8 *rd;
    u8 *wr;
    u8 data[1];
} Ring;

void func_001AE898(Ring *r)
{
    r->count++;
    r->wr++;
    if (r->wr == r->data + r->size) {
        r->wr = r->data;
    }
}

s32 func_001AA748(void *reent, s32 *pwc, u8 *s, u32 n)
{
    s32 dummy;

    if (pwc == NULL) {
        pwc = &dummy;
    }
    if (s == NULL) {
        return 0;
    }
    if (n == 0) {
        return -1;
    }
    *pwc = *s;
    return *s != 0;
}

extern u8 jtbl_004C006C[];
void func_001AA508(s32, s32, s32);

void func_001AA5A4(s32 arg0, s32 arg1)
{
    func_001AA508(*(s32 *)(jtbl_004C006C + 0x3A14), arg0, arg1);
}

void *func_001A1CF0(void *, s32);
void *func_001A2660(void *, s32, s32);

void *func_001A98C8(void *pool, s32 n)
{
    s32 size = n * 0x58;
    s32 *p = (s32 *)func_001A1CF0(pool, size + 0xC);

    if (p != NULL) {
        p[1] = n;
        p[0] = 0;
        p[2] = (s32)(p + 3);
        func_001A2660(p + 3, 0, size);
    }
    return p;
}
