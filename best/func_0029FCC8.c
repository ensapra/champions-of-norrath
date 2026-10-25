extern char D_00478248[];

extern s32 func_001671F8(void *);
extern void func_00190E20(s32, s32, f32, f32, f32, f32, f32, f32, f32, f32);

void func_0029FCC8(void *arg0, s32 arg1, s32 arg2) {
    char *base = (char *)arg0;
    s32 r0, r1, r2;

    {
        void *vtable = *(void **)(base + 0x60);
        char *dispatch = (char *)vtable + 0x58;
        s16 offset = *(s16 *)dispatch;
        s32 (*fn)(void *, s32) = *(s32 (**)(void *, s32))(dispatch + 4);
        r0 = fn(base + offset, 2);
    }
    {
        void *vtable = *(void **)(base + 0x60);
        char *dispatch = (char *)vtable + 0x58;
        s16 offset = *(s16 *)dispatch;
        s32 (*fn)(void *, s32, s32) = *(s32 (**)(void *, s32, s32))(dispatch + 4);
        r1 = fn(base + offset, 1, arg2) / 12;
    }
    {
        void *vtable = *(void **)(base + 0x60);
        char *dispatch = (char *)vtable + 0x58;
        s16 offset = *(s16 *)dispatch;
        s32 (*fn)(void *, s32, s32) = *(s32 (**)(void *, s32, s32))(dispatch + 4);
        r2 = fn(base + offset, 3, arg2);
    }

    {
    s32 r = func_001671F8(D_00478248);
    void (*fp)(s32, s32, f32, f32, f32, f32, f32, f32, f32, f32) = func_00190E20;
    fp(arg1, r, (f32)r0, (f32)r1, (f32)r2, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    }
}
