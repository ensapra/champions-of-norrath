extern u8 D_001BA400[];
extern u8 D_001BA848[];
extern s32 func_00101730(void *);
extern void func_00101050(void);
void func_001016C0(void) {
    s32 r = -1;
    if (*(s32 *)D_001BA400 != 0) {
        r = func_00101730(D_001BA848);
    }
    if (*(s32 *)(D_001BA848 + 8) != 0 && r == 1) {
        func_00101050();
    }
}

extern s32 func_001B5640(s32, s32, s32);
void func_001040CC(s32 a, s32 b, s32 c) {
    do {
    } while (func_001B5640(a, b, c) < 0);
}

typedef struct {
    u32 count;
    u32 max_count;
    u32 init_count;
    u32 wait_threads;
    u32 attr;
    u32 option;
} SemaP;
typedef struct {
    u32 status;
    void *entry;
    void *stack;
    s32 stack_size;
    void *gp;
    s32 prio;
    u32 a,b,c,d,e,f;
} ThreadP;
extern s32 CreateSema(SemaP *);
extern s32 GetThreadId(void);
extern s32 ChangeThreadPriority(s32, s32);
extern s32 CreateThread(ThreadP *);
extern s32 StartThread(s32, s32);
extern void func_00104DB8(void *);
extern void func_00104E30(void);
extern void func_0017BD88(void *, s32);
extern u8 D_0050F9F0[];
extern u8 D_010B4800[];
void func_00104E48(void) {
    ThreadP th;
    SemaP sema;
    s32 id;
    sema.max_count = 1;
    sema.init_count = 0;
    sema.option = 0;
    sema.count = 0;
    sema.wait_threads = 0;
    sema.attr = 0;
    id = CreateSema(&sema);
    ChangeThreadPriority(GetThreadId(), 2);
    th.status = 0;
    th.entry = func_00104DB8;
    th.stack = D_010B4800;
    th.stack_size = 0x2000;
    th.gp = D_0050F9F0;
    th.prio = 1;
    th.a = th.b = th.c = th.d = th.e = th.f = 0;
    id = StartThread(CreateThread(&th), id);
    func_0017BD88(func_00104E30, id);
}

typedef struct { void *buf; s32 cap; s32 unk8; s32 count; } PtrArr;
typedef struct { s32 a,b,c,d,e,f,g; } S7;
extern void func_00106288(PtrArr *);
void func_00106368(PtrArr *p, S7 *src) {
    if (p->count >= p->cap) {
        func_00106288(p);
    }
    ((S7 *)p->buf)[p->count] = *src;
    p->count++;
}
