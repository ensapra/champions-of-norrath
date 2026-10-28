extern const f32 D_00482FF8, D_00482FFC;
typedef struct {char pad0[0xE]; volatile s16 a[3]; char pad1[4]; volatile s16 b[3]; char pad2[6]; volatile s32 c[3]; char pad3[8]; volatile s16 d[3]; char pad4[4]; volatile s16 e[3]; char pad5[4]; volatile f32 f[3];} Obj;
void func_002BF1C8(Obj*p){f32 x=2.0f; f32 a=D_00482FF8; f32 b=D_00482FFC;p->f[0]=x;p->f[2]=b;p->e[1]=2;p->f[1]=a;p->d[2]=1;p->e[2]=3;p->a[0]=1;p->b[0]=0;p->c[0]=0;p->a[1]=1;p->b[1]=0;p->c[1]=0;p->a[2]=1;p->b[2]=0;p->c[2]=0;p->d[0]=1;p->e[0]=2;p->d[1]=1;}
