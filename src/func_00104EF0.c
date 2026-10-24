extern void func_001B6328(s32);
void func_001001C8(void) { func_001B6328(0); }

extern void iSignalSema(void);
void func_00104E30(void) { iSignalSema(); }

typedef struct { s32 count, max_count, init_count, wait_threads, attr, option; } SemaP;
typedef struct { u32 status; void *entry; void *stack; s32 stack_size; void *gp; s32 prio; s32 a, b; } ThreadP;
extern s32 CreateSema(SemaP *);
extern s32 GetThreadId(void);
extern s32 ChangeThreadPriority(s32, s32);
extern s32 CreateThread(ThreadP *);
extern s32 StartThread(s32, s32);
extern void func_00104DB8(void *);
extern void func_0017BD88(void *, s32);
extern u8 D_0050F9F0[];
extern u8 D_010B4800[];

void func_00104E48(void) {
    SemaP sema;
    ThreadP th;
    s32 id;
    sema.max_count = 1;
    sema.init_count = 0;
    sema.option = 0;
    CreateSema(&sema);
    id = GetThreadId();
    ChangeThreadPriority(id, 2);
    th.entry = (void *)func_00104DB8;
    th.stack = D_010B4800;
    th.stack_size = 0x2000;
    th.gp = D_0050F9F0;
    th.prio = 1;
    StartThread(CreateThread(&th), id);
    func_0017BD88((void *)func_00104E30, id);
}

typedef struct { s32 v; u8 pad[0xB0]; } Ent104;
extern Ent104 D_010B6800[];
void func_00104EF0(void) {
    s32 i;
    for (i = 255; i >= 0; i--) D_010B6800[i].v = 0;
}
