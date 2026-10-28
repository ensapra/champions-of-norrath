typedef struct { char pad[0x54]; s32 f54; char pad2[0xE90 - 0x58]; } Q;
typedef struct {
    char pad0[0x470]; Q q[6];
    s32 cur; char pad1[0x5C50 - 0x5BD4]; s32 f5c50; char pad2[4]; union { s32 w; u8 b; } f5c58; char pad3[4]; s32 f5c60; char pad4[4];
    void (*f5c68)(s32, s32);
} GT;
extern char D_003627C0[];
extern char D_003628C0[];
extern char func_001D1C80[];
extern char func_001E23F8[];
void func_00182948(s32);
void func_001835C0(void *, s32, void *);
void func_00196B88(void *);
void func_001967D8(void *, s32);
void func_0019BB84(void *);
void func_00181BD8(void);
#define G ((GT *)(func_001D1C80 + 0x6C0))
void func_001844A0(void) {
    char *a = D_003627C0;
    char *b = D_003628C0;
    s32 i;
    Q *q;
    func_00182948(1);
    for (i = 0; i < 6; i++) func_001835C0(a, i, G);
    q = &G->q[G->cur];
    func_00196B88(q);
    func_001967D8(q, q->f54);
    if (b) func_0019BB84(b);
    func_001E23F8[0x48] = G->f5c58.b;
    if (G->f5c58.w == 0) {
        func_00181BD8();
        G->f5c68(1, 0);
    }
    G->f5c50 = -1;
    G->f5c60 = 1;
}
