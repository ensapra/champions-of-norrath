typedef struct {u32 w[3];} __attribute__((packed,aligned(4))) Copy12;
void func_001411F0(void*,void*,s32,s32); void func_00143830(void*,s32); void func_00105F60(const char*,void*,s32,s32); void func_001B46A0(void);
extern char D_00449040[]; extern char D_00466E10[]; extern s32 D_004844A4; extern char D_00484958[]; extern char D_007CCBE0[];
struct Obj { char pad[0xC]; s32 flags; char x[0x38]; void *table; s32 val; };
void func_001BC040(struct Obj *p,Copy12 v) {
 func_001411F0(p,&v,0,0);
 p->table=D_00449040;
 p->flags|=0xB;
 p->val=D_004844A4;
 func_00143830(p,D_004844A4);
 char *base=D_007CCBE0;
 func_00105F60(D_00484958,base,-1,0);
 *(s32*)(base+0x1200)=1;
 char *q=base+0x2410;
 func_00105F60(D_00466E10,q,-1,0);
 *(s32*)(q+0x1200)=1;
 func_001B46A0();
}
