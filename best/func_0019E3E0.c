extern s32 func_003044FC(void*,s32*,void*,void*); extern void func_00304640(void*,void*); extern u8 D_00422B90[],D_00423998[],D_004247A0[],D_004255A8[],D_004263B0[]; extern char D_0041FCE8[],D_0041FFC0[],D_004201B8[],D_004203B0[],D_00420500[]; extern s32 D_00484608;
typedef struct {u8 x[4];f32 f;u32 pad;u64 q;} E;
void func_0019E3E0(void *arg){s32 i,j,idx;u8 *dst;u8 *src;
 for(i=0,idx=0;i<64;i++,idx+=7) for(j=0;j<4;j++){u8*p=D_00422B90+idx*8+0x20+j*0xe08;p[0]=0xff;p[1]=1;*(s32*)(p+0x10)=0;}
 u8 *ds[5]={D_00422B90,D_00423998,D_004247A0,D_004263B0,D_004255A8};u8 *ss[5]={(u8*)D_0041FCE8,(u8*)D_0041FFC0,(u8*)D_00420500,(u8*)D_004201B8,(u8*)D_004203B0};
 for(i=0;i<5;i++){for(j=0;j<64;j++){E *p=(E*)(ss[i]+j*56);if(!func_003044FC(p,(s32*)&D_00484608,arg,0))break;func_00304640(ds[i]+j*56,p);E *q=(E*)(ds[i]+j*56+0x20);E*r=(E*)(ss[i]+j*56+0x20);q->x[0]=r->x[0];q->x[1]=r->x[1];q->x[2]=r->x[2];q->f=r->f;q->q=r->q;}*(s32*)(ds[i]+j*56)=D_00484608;}
}
