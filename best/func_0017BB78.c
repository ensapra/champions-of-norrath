typedef struct {
    s32 size;
    s32 count;
    s32 unk8;
    u8 *ptr;
} Ring;

void func_001AE898(Ring *r) {
    r->count++;
    r->ptr++;
    if (r->ptr == (u8 *)r + (r->size + 0x10)) {
        r->ptr = (u8 *)r + 0x10;
    }
}

extern u8 func_001CE218[];
#define G(off) (*(s32 *)(func_001CE218 + (off)))
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
    if (G(0x22BC) != 0) {
        G(0x2300) = -1;
        SignalSema(G(0x22C8));
    }
    DeleteSema(G(0x22D0));
    DeleteSema(G(0x22D4));
    DeleteSema(G(0x22D8));
    DeleteSema(G(0x22C8));
    r = func_001B5C80();
    func_001AFB48(0x80000012);
    if (r != 0) {
        func_001B5CD8();
    }
}

void func_0017BC30(void) {
    SemaParam_ p;
    if (G(0x22D0) == -1 || G(0x22D4) == -1 || G(0x22D8) == -1) {
        p.option = 0;
        p.max_count = 1;
        p.init_count = 1;
        G(0x22D0) = CreateSema(&p);
        G(0x22D4) = CreateSema(&p);
        G(0x22D8) = CreateSema(&p);
        p.init_count = 0;
        G(0x22C8) = CreateSema(&p);
        G(0x22DC) = 0;
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
    for (i = 0; i < u->n1; i++) {
        if (i == 0) {
        }
    }
    func_0017B938(func_001CE218 + 0x2300);
}
