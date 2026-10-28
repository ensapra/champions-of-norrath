extern s32 func_00138758(void *, s32, void **);
extern void func_00138900(void *, void *);
extern void func_00140678(void *, s32 *, s32);
extern void func_00143630(void *);
extern void *func_00143A58(void *);
typedef struct { u16 x, y; s32 z, w; } V3i;
typedef struct { char pad[0x10]; V3i pos; char pad2[0x38 - 0x1C]; u16 f38; } Obj;
s32 func_001395A0(void *arg0, s32 *arg1) {
 struct { char b0[0xA0]; char b1[0xA0]; void *s; } l;
 s32 list[0x200]; Obj *out; Obj *e; s32 i;
 func_00138758(arg0,arg1[1],&l.s); func_00138900(l.b0,l.s);
 func_00140678(l.b0,list,0x200); func_00138758(arg0,arg1[2],&l.s);
 func_00138900(l.b1,l.s); out=func_00143A58(l.b1);
 if (!out) return 0;
 for(i=0;list[i];i++) {
 ((Obj*)list[i])->pos=out->pos;
 e=(Obj*)list[i]; e->f38=*(volatile u16 *)&out->f38;
 func_00143630(e);
 }
 return 0;
}
