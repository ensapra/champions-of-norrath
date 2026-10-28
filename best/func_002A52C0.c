typedef struct __attribute__((packed,aligned(4))){u32 a,b,c;} V; typedef struct Node{struct Node*next;char p[8];struct Ent*ent;} Node;typedef struct Ent{char p[12];u32 flags;} Ent;
typedef struct A{s8 b;s32 z;s32 d;void*c;u32 r;void*vt;s32 f18,f1c,f20;void*f24;}A;
typedef struct C{char p[0x10];V v;s32 q;char p2[0x20];s16 s;}C;
extern char D_0044E670[],D_00451B80[],D_00478750[];f32 D_00482AA8,D_00482AAC;u32 D_00483E5C;void *func_00165DC0(s32,char*,u32,s32);void func_00160010(void*,void*,s32,f32,f32);void func_001535D0(V*,s16,Node**,s32,f32,f32);void func_00194300(Node**);
void func_002A52C0(A*a,s8 b,char*c,s32 d){V v;Node*n,*p;char*h;u32 r;
a->b=b;a->vt=D_0044E670;a->d=d;a->z=0;a->c=c;
r=D_00483E5C*0x19660d+0x3c6ef35f;D_00483E5C=r;a->r=r>>16;a->vt=D_00451B80;
*(s32*)(c+0x578)=6;
h=func_00165DC0(**(s32**)(c+0x24),D_00478750,r,d);
func_00160010(c+0x120,h,0x812,D_00482AA8,D_00482AA8);
h[0x20]=2;*(f32*)(h+0x1c)=D_00482AAC;
a->f1c=0;a->f18=0;a->f20=0;a->f24=0;n=0;v=*(V*)(c+0x10);
func_001535D0(&v,*(s16*)(c+0x38),&n,0,100.f,90.f);
if(n){p=n;if(!(p->ent->flags&0x1000000))a->f24=p->ent;else{do{p=p->next;}while(p && (p->ent->flags&0x1000000));if(p)a->f24=n->ent;}}
func_00194300(&n);}
