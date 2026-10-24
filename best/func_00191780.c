void func_001927D8(void *, f32);
void func_001928C8(void *, void *, f32);
void func_001929C0(void *, void *, f32);
s32 func_00191678(void);

void func_00192AB8(void *a, void *b, f32 *v) {
    func_001927D8(a, v[2]);
    func_001929C0(a, a, v[1]);
    func_001928C8(a, a, v[0]);
}

typedef struct { u32 *cur; s32 pad; s32 r; s32 z; } W;
void func_00191780(W *w, u32 t) {
    u32 *p;
    w->r = func_00191678();
    p = w->cur;
    *p++ = t | 0x70000000;
    w->z = 0;
    w->cur = p + 1;
    *p = 0;
}
