/* identical to func_002D30B8 (matched), with its names changed by decompdecomp */
typedef struct{s32 flags; s32 pad4[3]; u32 f10; s32 pad14[3]; s32 f20;} S;
s32 func_0018F678(s32);
void func_0018F580(void *);
void func_0018FAE8(S *a,s32 b,s32 c){ s32 t=func_0018F678(b); func_0018F580(a); if(a->f10!=0xFFFFFFFF) a->f10=t; a->f20=c; a->flags=(a->flags&~0xC)|0x109; }
