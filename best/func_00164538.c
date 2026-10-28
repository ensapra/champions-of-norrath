extern s32 func_0016FB28(s32);
extern s32 func_0016386C(void *, s32);
typedef struct { char pad[0x948]; s32 f948,f94C; } S;
s64 func_00164538(S *p) {
 s32 r=func_0016FB28((s32)p+0x950);
 s32 a=p->f948;
 if(r) { p->f94C=0; func_0016386C(p,a); }
 else { p->f94C=0; func_0016386C(p,a); }
}
