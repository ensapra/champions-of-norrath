typedef struct {
    char p0[0x5AC]; s32 w; s32 h;
    char p1[0x998-0x5B4]; s32 x; s32 y; s32 f9a0; s32 f9a4;
    char p2[0x9C0-0x9A8]; s32 v0; s32 dx; s32 f9c8; s32 f9cc;
    char sub[1];
} T;
extern int func_00151868(void*, s32, s32, s32);
extern int func_001519B4(void*, s32, s32, s32, s32);
extern int func_00151A98(void*, s32, s32, s32, s32);
extern int func_00151B7C(void*, s32, s32, s32, s32);
void func_0014FA64(T *t) {
    s32 m;
    if (*(s64*)&t->v0 != 0) {
        t->x += t->v0;
        t->y += t->dx;
        if (t->x < 0) t->x = 0;
        else if (t->x >= t->w) t->x = t->w - 1;
        if (t->y < 0) t->y = 0;
        else if (t->y >= t->h) t->y = t->h - 1;
        func_00151868(t->sub, t->x, t->y, 0);
    }
    m = (t->f9a0 ^ t->f9cc) & t->f9cc;
    if (m) func_001519B4(t->sub, t->x, t->y, 0, m);
    m = (t->f9a0 ^ t->f9cc) & t->f9a0;
    if (m) func_00151A98(t->sub, t->x, t->y, 0, m);
    if (t->f9a4 != t->f9c8) {
        func_00151B7C(t->sub, t->x, t->y, 0, t->f9c8);
        t->f9a4 = t->f9c8;
    }
    t->dx = 0;
    t->f9a0 = t->f9cc;
    t->v0 = 0;
    t->f9c8 = 0;
}
