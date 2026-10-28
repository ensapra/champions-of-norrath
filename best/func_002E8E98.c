typedef struct { s32 a; s32 count; s32 init; s32 pad[5]; } SemaParam;
typedef struct { s32 pad0; void *entry; void *stack; s32 size; void *gp; s32 arg; } ThreadParam;
typedef struct { s32 pad[10]; s32 sema; s32 pad2; s32 thread; } Glob;
s32 ChangeThreadPriority_2(s32,s32); s32 CreateSema_2(SemaParam*); s32 CreateThread_2(ThreadParam*); s32 GetThreadId_2(void); s32 StartThread_2(s32,s32); s32 func_00302560(void*);
extern char D_0047C058[]; extern u8 D_004879F0[]; extern ThreadParam D_008E8C40; extern u8 D_008E8F50[]; extern Glob D_008EBDD8;
extern void func_002E89A8(void);
void func_002E8E98(s32 arg0){
 s32 tid, p; SemaParam sp;
 tid = GetThreadId_2();
 D_008E8C40.arg = arg0;
 D_008E8C40.size = 0x1800;
 D_008E8C40.entry = func_002E89A8;
 D_008E8C40.stack = D_008E8F50;
 D_008E8C40.gp = D_004879F0;
 sp.count = 1; sp.init = 0;
 D_008EBDD8.sema = CreateSema_2(&sp);
 if (D_008EBDD8.sema == -1) { func_00302560(D_0047C058); for(;;){} }
 D_008EBDD8.thread = CreateThread_2(&D_008E8C40);
 if (D_008EBDD8.thread > 0) StartThread_2(D_008EBDD8.thread, 0);
 p = ChangeThreadPriority_2(tid, 0x1e);
 ChangeThreadPriority_2(tid, p);
}
