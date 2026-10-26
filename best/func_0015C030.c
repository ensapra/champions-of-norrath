s32 func_0016FA70(s32);
typedef struct { unsigned char pad0[0x4D0]; s32 x4D0; unsigned char pad4D4[0x43C]; s32 x910,x914; unsigned char pad918[0xC]; s32 x924,x928; } Obj;
void func_0015C030(Obj *p) {
 if (p->x924) p->x910=func_0016FA70(p->x924); else p->x910=0;
 p->x924=0;
 if (p->x928) p->x914=func_0016FA70(p->x928); else p->x914=0;
 p->x928=0;
 p->x4D0=0;
}
