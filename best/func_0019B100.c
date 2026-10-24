typedef struct { u8 a; u8 pad[3]; u8 b; u8 pad2[3]; s32 n; u16 v[1]; } Lst;
extern void *D_004804D0;
extern u8 D_004CF470[], D_004CF480[];
void func_001A1568(void *, s32, void *);
void func_0019BDBC(u8, u8, u16);
void func_0019B0C4(s32, s32, s32);
void func_0019B100(Lst *l) {
    s32 i;
    if (l == 0) {
        func_001A1568(D_004CF470, 0x152, D_004CF480);
    } else {
        for (i = 0; i < l->n; ) {
            void *p = D_004804D0;
            p = *(void **)((u8 *)p + 0x74);
            if (((s32 (*)(void))p)()) { func_0019B0C4(0, 0, 0); return; }
            func_0019BDBC(l->a, l->b, l->v[i]);
            i++;
        }
    }
}
