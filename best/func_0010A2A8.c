typedef struct {f32 x,y,z;} Vec3;
typedef struct {u8 p0[0x10];f32 x;f32 y;u8 p1[0x20];u16 angle;u8 p2[0x6e];f32 scale;u8 p3[0x70];u16 value;u8 p4[0x202];u8 state;} SObj;
extern s32 func_0015A198(f32,f32); f32 D_0047FB90; f32 D_0047FB94; f32 D_0047FB98; f32 D_0047FB9C;
void func_0010A2A8(f32 unused,SObj*o,s32 toggle,Vec3*v){
 Vec3 pos=*v;
 s32 amount=(s32)(o->scale*D_0047FB90);
 s32 result=func_0015A198(pos.y-o->y,pos.x-o->x);
 s32 chosen=result;
 toggle ^= 1;
 if(toggle==0) chosen=0x8000+result;
 s32 delta=(s32)((f32)(s16)(chosen-o->angle)*D_0047FB94);
 s32 current=(s16)o->value;
 s32 sum=(s16)(current+delta);
 s32 adjust=(s32)((f32)sum*D_0047FB98);
 s32 next=(s16)(sum-adjust);
 if(amount<next) next=amount;
 else if(next < -amount) next=-amount;
 o->value=(u16)next;
 if((u8)(o->state-1)<0x3C){s32 inc=(s32)((f32)(0x3C-(s8)o->state)*D_0047FB9C);o->angle=(u16)(o->angle+inc);}
 else o->angle=(u16)(o->angle+o->value);
}
