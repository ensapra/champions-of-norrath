typedef struct { void *p0,*p4,*p8,*pC,*p10; s16 s14,s16,s18,s1A,s1C,s1E,s20,s22,s24,s26;} Ent;
extern s32 D_010E4920[];
extern char D_010E49B0[],D_010E6110[],D_010E7210[],D_010E8970[],D_010E8EC0[];
extern Ent D_010EA1E0[];
s16 func_001736A8(s16,s16,s16);
void func_00173728(void*,s16,s16,s16,s32,s32,s16,s16);
void func_00173910(void*,s32,s16,s16,s16,s16,s16,void*);
void func_00173B00(void*,s16,s16,s16,s16,s32);
void func_00173C60(void*,s32,s16,s16,s16,s16);
s32 func_00174388(s32 id,s32 a1,s16 a2,s16 a3,s16 a4,s16 a5,s16 a6,s16 a7){
 Ent *e=&D_010EA1E0[id]; s32 sp0; sp0=a7;
 D_010E4920[id]=1; e->s14=a1; e->s1C=a2; e->s1E=a6; e->s20=a3; e->s22=a4;
 e->s18=func_001736A8(a2,a3,a4); e->s1A=func_001736A8(a6,a3,a4); e->s24=a5;
 e->p4=D_010E6110+(id<<7); e->p8=D_010E7210+id*0xB0; e->s26=sp0;
 e->p0=D_010E49B0+id*0xB0; e->p10=D_010E8EC0+id*0x90; e->pC=D_010E8970+id*0x28;
 func_00173910(e->p0,a1,a2,a3,a4,a5,a6,e->p10);
 func_00173B00(e->p4,a2,a3,a4,a5,sp0); func_00173C60(e->p8,a1,a2,a3,a4,a5);
 func_00173728(e->p10,a1,a3,a2,0,0,a3,a4); return id;
}
