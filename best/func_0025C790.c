typedef struct {s32 f0,f4,f8,fC;} Ent;
extern Ent D_0042F440[]; s32 D_00486CD0,D_00486CD4;
void func_0025C790(s32 a,s32 b,s32 c,s32 d){s32 idx=D_00486CD4, next=idx+1; volatile s32 i;
 if(next==256)next=0;
 D_0042F440[idx].f0=a;D_0042F440[idx].f4=b;D_0042F440[idx].f8=c;D_0042F440[idx].fC=d;
 D_00486CD4=next;
 if(next==D_00486CD0){i=255; while(i>0)i-=32;}
}
