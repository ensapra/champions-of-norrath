typedef struct { s32 count, max_count, init_count, wait_threads, attr, option; } SemaP;
typedef struct { u32 status; void *entry; void *stack; s32 stack_size; void *gp; s32 prio; s32 a, b, c, d, e, f; } ThreadP;
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
    id = CreateSema(&sema);
    ChangeThreadPriority(GetThreadId(), 2);
    th.stack_size = 0x2000;
    th.entry = (void *)func_00104DB8;
    th.stack = D_010B4800;
    th.gp = D_0050F9F0;
    th.prio = 1;
    StartThread(CreateThread(&th), id);
    func_0017BD88((void *)func_00104E30, id);
}
