extern s32 D_001D04D4[];
extern s32 D_001D04E0[];
extern s32 D_001D04E8[];
extern s32 D_001D04EC[];
extern s32 D_001D04F0[];
extern s32 D_001D04F4[];
extern s32 D_001D0518[];
s32 SignalSema(s32);
s32 DeleteSema(s32);
typedef struct {
    s32 count;
    s32 max_count;
    s32 init_count;
    s32 wait_threads;
    u32 attr;
    u32 option;
} SemaParam_;
s32 CreateSema(SemaParam_ *);
s32 func_001B5C80(void);
void func_001AFB48(u32);
void func_001B5CD8(void);

void func_0017BCE8(void) {
    s32 r;
    if (D_001D04D4[0] != 0) {
        D_001D0518[0] = -1;
        SignalSema(D_001D04E0[0]);
    }
    DeleteSema(D_001D04E8[0]);
    DeleteSema(D_001D04EC[0]);
    DeleteSema(D_001D04F0[0]);
    DeleteSema(D_001D04E0[0]);
    r = func_001B5C80();
    func_001AFB48(0x80000012);
    if (r != 0) {
        func_001B5CD8();
    }
}

void func_0017BC30(void) {
    SemaParam_ p;
    if (D_001D04E8[0] == -1 || D_001D04EC[0] == -1 || D_001D04F0[0] == -1) {
        p.option = 0;
        p.max_count = 1;
        p.init_count = 1;
        D_001D04E8[0] = CreateSema(&p);
        D_001D04EC[0] = CreateSema(&p);
        D_001D04F0[0] = CreateSema(&p);
        p.init_count = 0;
        D_001D04E0[0] = CreateSema(&p);
        D_001D04F4[0] = 0;
    }
}

typedef struct {
    s32 n1;
    s32 n2;
    u8 *d1;
    u8 *d2;
    u8 b1[0x40];
    u8 b2[0x40];
} Msg;
void func_0017B938(void *);

void func_0017BB78(Msg *m) {
    Msg *u = (Msg *)((u32)m | 0x20000000);
    u8 *d;
    u8 *ud;
    s32 i;
    if (u->n1 > 0) {
        d = u->d1;
        ud = (u8 *)((u32)d | 0x20000000);
        for (i = 0; i < u->n1; i++) {
            u8 c = u->b1[i];
            ud[i] = c;
            d[i] = c;
        }
    }
    if (u->n2 > 0) {
        d = u->d2;
        ud = (u8 *)((u32)d | 0x20000000);
        for (i = 0; i < u->n2; i++) {
            u8 c = u->b2[i];
            ud[i] = c;
            d[i] = c;
        }
    }
    func_0017B938(D_001D0518);
}
