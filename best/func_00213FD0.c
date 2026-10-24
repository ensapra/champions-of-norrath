s32 D_004844A4;
typedef struct {s16 type,a,b,c;} Entry;
typedef struct {u8 pad[16];s16 a[4],b[4];s8 c,d;u8 p[2];Entry e[4];u8 tail[12];} Params;
void func_001CE218(void*,void*,f32,f32,s32,s32,s32,s32,Params*,s32);
static __inline__ void init(Params*p,s32 empty){s32 i;{s32 k=3;s16*q=&p->e[3].type;do{k--;*q=empty;q-=4;}while(k>=0);}((volatile Params*)p)->d=-1;((volatile Params*)p)->c=-1;for(i=0;i<4;i++){p->a[i]=0;p->b[i]=0;}}
static __inline__ void put(Params*p,s32 t,s32 a,s32 b,s32 c){s32 i=0; s16*r;Entry*q;q=p->e;r=&q->c;do{s32 type=q->type;if(type==-1||type==t){q->type=t;r[-2]=a;r[-1]=b;r[0]=c;break;}i++;r+=4;q++;}while(i<4);}
void func_00213FD0(void*a,void*b){void*n;void*old;s32 flag,i;Params p;
if(!b)return;n=*(void**)((u8*)a+0x60);
if(n){void*prev=*(void**)((u8*)n+12);if(prev==b)return;if((*(s32*)((u8*)prev+12)&64)&&(*(s32*)((u8*)b+12)&64))return;}
if(D_004844A4%12)return;
flag=0;if(n){void*prev=*(void**)((u8*)n+12);{u32 bits=*(u32*)((u8*)prev+12)&64;flag=bits>0;}}
init(&p,-1);
{s32 v=flag?1:3;put(&p,21,v,v,0);}
old=0;if(n)old=*(void**)((u8*)n+12);
func_001CE218(b,old,0.f,0.f,100000,0,0,0x100c040,&p,0);
}
