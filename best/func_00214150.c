typedef struct {char pad[0x10];f32 x,y,z;char pad1c[0x30];f32 qx,qy,qz;s32 age;s8 type;} Obj;
typedef struct {f32 x,y,z;} V3; typedef struct {s16 offset,pad;void *fn;} VCall;
extern s32 D_004844A4; extern f32 D_0048157C; extern f32 D_00481580; extern u8 D_0042C4D0[]; extern u8 D_0042C520[];
s32 func_00153FA8(void*); void func_00180DA0(void*,V3*,V3*,f32);
void func_00214150(Obj*o){
 V3 base,out,scaled,mid,rnd; s32 delta=o->age-D_004844A4;f32 alpha=(f32)delta*D_0048157C;
 s32 n; f32 speed;
 if(alpha>1.0f)alpha=1.0f;
 speed=D_00481580;
 for(n=3;n>=0;n--){f32 r=(f32)func_00153FA8(o)*0.0000152587890625f;
 base.x=o->x*r+o->qx*(1-r);base.y=o->y*r+o->qy*(1-r);base.z=o->z*r+o->qz*(1-r);
 do{rnd.x=2.0f*((f32)func_00153FA8(o)*0.0000152587890625f)-1;rnd.y=2.0f*((f32)func_00153FA8(o)*0.0000152587890625f)-1;rnd.z=2.0f*((f32)func_00153FA8(o)*0.0000152587890625f)-1;}while(rnd.x*rnd.x+rnd.y*rnd.y+rnd.z*rnd.z>1);
 mid=rnd;scaled.x=mid.x*speed;scaled.y=mid.y*speed;scaled.z=mid.z*speed;out=scaled;out.x*=alpha;out.y*=alpha;base.z=(base.z+7.5f)*alpha;
 func_00180DA0(o->type?D_0042C520:D_0042C4D0,&base,&out,0);
 }
 if(delta<=0&&o){VCall *tab=*(VCall**)((char*)o+0x48);((void(*)(void*,s32))tab[1].fn)((char*)o+tab[1].offset,3);}
}
