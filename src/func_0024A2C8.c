typedef struct { s8 used; u8 pad[0x4F]; } E;
E *func_0024F6C8(void);
s32 func_0024F688(void);
void func_0024A660(s32, s32, s32, s32, s32, s32, s32, s32);
void func_0024A2C8(s32 a, s32 idx, s32 c) {
    E *base = func_0024F6C8();
    E *p;
    s32 i;
    if (base != 0) {
        i = 0;
        if (idx >= 0) {
            p = base;
            do {
                if (!p->used) return;
                p++;
                i++;
            } while (!(idx < i));
        }
        {
            u8 *e;
            s32 r = func_0024F688();
            e = (u8 *)(idx * 0x50) + (s32)base;
            func_0024A660(a, r, c, *(s32 *)(e + 0x40), *(s32 *)(e + 0x90) - *(s32 *)(e + 0x40), *(s32 *)(e + 0x44), *(s16 *)(e + 0x48), *(s32 *)(e + 0x4C));
        }
    }
}
