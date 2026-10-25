s32 func_0014BA30(void*,void*); extern struct {char pad[0xDB8]; s32(*cb)(void);} func_001C8098;
typedef struct {char p[0x98];s32 state;char q[0x40C14-0x9C];s32 a14,a18,a1c,a20;char x[0xC];s64 a30;s64 a38;s32 a40;} Obj;
typedef struct {char p[0x40C14];s32 a14,a18,a1c,a20;char q[0xC];u64 a30,a38;s32 a40;} Data;
s32 func_001539CC(Obj*o,Data*a,Data*b){s32 r=func_001C8098.cb();if(func_0014BA30((char*)a+0x40C30,(char*)b+0x40C30)==0){o->state=2;r=1;o->a30=a->a30;o->a38=a->a38;}if(a->a40!=b->a40){o->a40=a->a40;o->state=2;r=1;}if(a->a1c!=b->a1c){o->a1c=a->a1c;o->state=2;r=1;}if(a->a20!=b->a20){o->a20=a->a20;o->state=2;r=1;}if(a->a14!=b->a14){o->a14=a->a14;o->state=2;r=1;}if(a->a18!=b->a18){o->a18=a->a18;o->state=2;r=1;}return r;}
