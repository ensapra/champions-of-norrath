typedef struct {char pad[16];f32 x,y,z;char p20[4];f32 amount;char p24[40];f32 speed;s32 limit,state;} Obj;
s32 D_004844A4; f32 D_00481C5C; extern f32 D_0042AD70[];
s32 func_00153FA8(void*); void func_00156CB0(void*,s32,s16);
f32 func_0015A070(s32); f32 func_0015A100(s32); void func_0015A248(void*,f32*);
void func_00180338(s32); void func_00180380(s32); void func_001803C0(s32,void*);
void func_00180DA0(void*,f32*,f32*,f32);
void func_0023B2E8(Obj*o) {
 f32 mat[16],vec[3],dir[3],noise[3],ang,rad,x,y,z; s32 i=0,t;
 if(D_004844A4>=o->limit)return;
 ang=o->speed;
 if(ang<96.0f)o->speed=ang+2.0f;
 func_00180338(o->state);
 vec[0]=o->x;vec[1]=o->y;vec[2]=o->z;
 func_0015A248(mat,vec);
 func_00156CB0(mat,2,(s16)((u16)D_004844A4<<12));
 func_001803C0(o->state,mat);
 if(((s32)o->amount*2)>0) {
  do {
   rad=(f32)func_00153FA8(o)*0.0000152587890625f*o->speed; noise[0]=rad;
   t=func_00153FA8(o)<<16;t>>=16;
   ang=(f32)func_00153FA8(o)*0.0000152587890625f*((rad*0.25f)+16.0f);
   dir[0]=func_0015A070(t)*ang;dir[1]=func_0015A100(t)*ang;
   do {
    noise[0]=2.0f*((f32)func_00153FA8(o)*0.0000152587890625f)-1;
    noise[1]=2.0f*((f32)func_00153FA8(o)*0.0000152587890625f)-1;
    noise[2]=2.0f*((f32)func_00153FA8(o)*0.0000152587890625f)-1;
   } while(noise[0]*noise[0]+noise[1]*noise[1]+noise[2]*noise[2]>1);
   ++i;noise[0]*=D_00481C5C;noise[1]*=D_00481C5C;noise[2]*=D_00481C5C;
   func_00180DA0(D_0042AD70,dir,noise,0.0f);
  } while(i<((s32)o->amount*2));
 }
 func_00180380(o->state);
}
