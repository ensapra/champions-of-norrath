typedef struct E { s32 v; s32 pad; } E;
extern E D_004CDAB0[];
extern char D_004CDC08[];
extern char D_004CDC10[];
s32 func_00185888(void *, s32);
s32 func_0019FDF8(void *, s32, s32);
s16 func_001A1640(void *);
void func_001A2850(void *, s32, s32);
void func_001A3D78(void *, void *, void *);
s32 func_001A444C(s32);

void func_00185780(s32 a0, s16 *out) {
    char buf[0x200];
    char tmp[0x10];
    E *p;
    s32 i;
    s32 len;
    s16 r;
    while ((a0 = func_00185888(buf, a0)) != 0) {
        i = 0;
        p = D_004CDAB0;
        for (; i < 10; i++, p++) {
            len = func_001A444C(p->v);
            if (func_0019FDF8(buf, p->v, len) == 0) {
                func_001A3D78(tmp, D_004CDC08, buf + len);
                out[i] = func_001A1640(tmp);
                func_001A2850(D_004CDC10, p->v, (u16)out[i]);
                break;
            }
        }
    }
}
