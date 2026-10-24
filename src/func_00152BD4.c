void func_00154068(s32);
void func_00154130(s32);
void func_00154394(s32);
extern char func_001C8098[];

void func_0015398C(s32 arg0) {
    (*(void (**)(void))(func_001C8098 + 0xD70))();
    func_00154068(arg0);
    func_00154130(arg0);
    func_00154394(arg0);
}

s32  func_0016FA70(s32);
s32  func_00152D74(void);
void func_00152DA0(void *);
void func_00152CB8(s32, s32, f32 *, f32);
void func_00154798(void *);

void func_0015471C(void *arg0) {
    s32 v;
    v = *(s32 *)((char *)arg0 + 0x984);
    if (v != 0)
        *(s32 *)((char *)arg0 + 0x924) = func_0016FA70(v);
    else
        *(s32 *)((char *)arg0 + 0x924) = 0;
    *(s32 *)((char *)arg0 + 0x984) = 0;
    *(s32 *)((char *)arg0 + 0x934) = func_00152D74();
    func_00152DA0((char *)arg0 + 0x938);
    v = *(s32 *)((char *)arg0 + 0x988);
    if (v != 0)
        *(s32 *)((char *)arg0 + 0x928) = func_0016FA70(v);
    else
        *(s32 *)((char *)arg0 + 0x928) = 0;
    *(s32 *)((char *)arg0 + 0x988) = 0;
    func_00154798(arg0);
}

extern void (*D_010E4578[])(void);
void func_00152BD4(void) {
    if (D_010E4578[0] != NULL) {
        D_010E4578[0]();
    }
}

void func_00154798(void *arg0) {
    f32 buf[4];
    if (*(s32 *)((char *)arg0 + 0x928) != 0) {
        func_00152CB8(*(s32 *)((char *)arg0 + 0x9AC), *(s32 *)((char *)arg0 + 0x928),
                      buf, *(f32 *)((char *)arg0 + 0x9B8));
        *(s32 *)((char *)arg0 + 0x930) = (s32)(buf[3] - buf[2]);
    } else {
        *(s32 *)((char *)arg0 + 0x930) = 0;
    }
}
