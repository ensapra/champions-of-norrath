typedef struct { f32 x,y,z; } V3; typedef struct { char pad0[12]; s32 flags; V3 p; char pad1C[28]; u16 angle; char pad3A[14]; void *v; } Obj;
extern char D_0034B752[],D_00429410[],D_00429440[],D_0042A3F8[],D_0044D2E8[],D_00483BA8[],D_00483C10[],D_00483C18[],D_00483C20[];
s32 D_00483E5C; s8 D_00483F3E; s8 D_00484CA8; s16 D_00483F48[4];
s16 func_001411F0(void *,V3,s32,void *); s32 func_00143A80(void *,char *,s32); s32 func_00140F60(void *,char *,s32); s32 func_003044FC(char *,char *);
void func_0013F2D0(V3 *,V3 *,s32,s32,s32);
s16 func_0014B400(Obj *o,V3 p,s16 ang,void *extra) {
 s32 from,name,need=0;
 func_001411F0(o,p,0,extra); o->v=D_0044D2E8; o->angle=ang; o->flags|=3;
 if(D_00484CA8==3)return;
 from=func_00143A80(o,D_00483C10,0); name=func_00143A80(o,D_00483BA8,0);
 if(D_00484CA8<=0 || (D_00484CA8<2 && func_00140F60(o,D_00483C18,0))) { need=1; D_00484CA8=1; }
 {u8 f;
  if(from) {
   if(!func_003044FC(D_0034B752,(char*)from)) {
    f=(u8)D_00483F3E;
    if(!D_00483F3E){need=1;D_00484CA8=2;}
   } else f=(u8)D_00483F3E;
  } else f=(u8)D_00483F3E;
  if(f && from && !func_003044FC((char*)from,D_00483C20)) {
   need=1; D_00484CA8=3;
   if(name && !D_00483F3E && !func_003044FC(D_0042A3F8,(char*)name)){D_00484CA8=3;need=1;}
  }
 }
 if(!need)return;
 { V3 q,r,in; V3 *src=&o->p; V3 *dst=(V3*)D_00429410; V3 *outp=&q,*inp=&in,*tempp=&r; u32 factor=0x19660D,divisor=4000,ix=0;
  do {*inp=*src; func_0013F2D0(outp,inp,0x24,0x18,0); *tempp=*outp; *dst=*tempp; dst++;
   D_00483E5C=D_00483E5C*factor+0x3C6EF35F;
   *(s16*)((char*)D_00483F48+ix)=(s16)(o->angle+((u32)D_00483E5C>>16)%divisor-2000); ix+=2;
  } while(dst<(V3*)D_00429440);
 }
}
