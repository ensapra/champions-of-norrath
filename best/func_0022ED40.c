s32 func_00153FA8(void*,s32,void*); void func_001CE218(void*,void*,s32,s32,s32,s32,void*,s32,f32,f32,s32,s32);
typedef struct{char p[76];void*x;char q[24];s32 n,b;}A; typedef struct{char p[12];s32 f;char q[0x304];s16 st;}B;
void func_0022ED40(A*a,B*b){char t[0x28];s32 f,r;B*c=(B*)a->x;if(a->b)return;
if(c){if(b){f=b->f;if(f&32){B*d=(B*)*(void**)((char*)c+12);if(d->f&64){if(!(f&64)&&!b->st){if(d->st)return;}}else if(f&64){if(d->st){if(!(f&64)&&b->st)return;}}}}}
if(!b)goto init;f=b->f;if(!c&&!(f&32))a->b=1;if(f&64){if(func_00153FA8(a,f,t)<0)return;}else if((f&32)&&(*(u64*)((char*)b+160)&512))return;
init: for(r=0;r<4;r++)*(s16*)(t+60-r*8)=-1;t[33]=t[32]=-1;for(r=0;r<4;r++){*(s16*)(t+16+r*2)=0;*(s16*)(t+24+r*2)=0;}func_001CE218(b,a,100000,0,0,0,t,0,(f32)a->n,(f32)a->n,0,0);a->b=1;}
