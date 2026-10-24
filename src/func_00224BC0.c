extern void func_00163830(void *, s32, s32);
extern void func_00163BA0(void *);
s32 func_00224B00(u8 *g, u8 *s) {
    s32 *p4 = (s32 *)s;
    s16 *p2;
    s8 *p1;
    s32 *q;
    s32 v, w;
    s16 h;
    s8 c, d;
    v = *p4++;
    p2 = (s16 *)p4;
    h = *p2++;
    p1 = (s8 *)p2;
    *(s64 *)(g + 0xC8) = v;
    *(s16 *)(g + 0xDC) = h;
    c = *p1++;
    *(s8 *)(g + 0xE4) = c;
    d = *p1++;
    *(s8 *)(g + 0xE5) = d;
    q = (s32 *)p1;
    w = *q++;
    *(s32 *)(g + 0xD8) = w;
    if (w != 0) {
        func_00163830(g + 0x98, *(s32 *)(g + 0xF4), 0x204);
        func_00163BA0(g + 0x98);
        if (*(s16 *)(g + 0xDC) <= 0)
            *(s32 *)(g + 0xC) &= 0xFFEFFFFF;
    }
    return (u8 *)q - s;
}

s32 func_00224D18(void *arg0, s32 *arg1) {
    s32 *old = arg1;
    s32 v;
    void *tbl;
    s16 off;
    s32 (*fn)(void *, s32, s16);
    arg1++;
    tbl = *(void **)((char *)arg0 + 0x48);
    v = *old;
    off = *(s16 *)((char *)tbl + 0x90);
    *(s32 *)((char *)arg0 + 0x178) = v;
    fn = *(s32 (**)(void *, s32, s16))((char *)tbl + 0x94);
    fn((char *)arg0 + off, v, off);
    return (s32)((char *)arg1 - (char *)old);
}

extern u8 D_0044EC40[],D_0044ED78[];
extern s32 D_004844A0;
void func_0017D318(s32,s32);
void func_00164050(void*,s32);
void func_00141658(void*,s32);
void func_001447D8(void*);
void func_00224C70(void *a,s32 b){
    *(void**)((u8*)a+72)=D_0044EC40;
    func_0017D318(D_004844A0,*(s32*)((u8*)a+396));
    *(void**)((u8*)a+72)=D_0044ED78;
    func_00164050((u8*)a+152,2);
    func_00141658(a,0);
    if(b&1)func_001447D8(a);
}

extern char D_00470D68[];
extern char D_00470D78[];
extern void *func_001671F8(char *);
extern void func_00190E20(void *, void *, f32, f32, f32, f32, f32, f32, f32, f32);
extern void ovl_ntgui2_func_00191830(void *, void *);
s32 func_00224BC0(u8 *a, void *b) {
    u32 local[100];
    if (*(s32 *)(a + 0xD8) == 0) {
        ovl_ntgui2_func_00191830(b, func_001671F8(D_00470D68));
        return 1;
    }
    if (*(s16 *)(a + 0xDC) > 0) {
        func_00190E20(local, func_001671F8(D_00470D78), (f32)*(s16 *)(a + 0xDC), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
        ovl_ntgui2_func_00191830(b, local);
    }
    return 1;
}
