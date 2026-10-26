typedef struct { f32 x,y,z; } V3;
typedef struct { u8 pad0[0x71C]; f32 scale; void *a; void *b; } Obj;
typedef struct { u8 pad[0x400]; s16 id; u16 count; } Node;
s32 D_00483E58; s32 D_004844A8; s32 D_00486A00;
void func_00183DD0(s16, V3 *);
void func_001844B0(Obj *, V3 *, V3 *, u32, f32);
void func_001844B0(Obj *obj, V3 *a, V3 *b, u32 depth, f32 factor) {
 V3 x=*a, y=*b, out;
 u32 seed=D_00483E58*0x19660D+0x3C6EF35F, r1, r2, i;
 f32 inv=1.0f/65536.0f, one=1.0f, s=obj->scale, px,py,pz,*v;
 Node *n;
 r1=seed*0x19660D+0x3C6EF35F; r2=r1*0x19660D+0x3C6EF35F;
 px=(x.x+y.x)*0.5f; py=(x.y+y.y)*0.5f; pz=(x.z+y.z)*0.5f;
 i=D_00486A00; v=(f32 *)((u8*)obj+i*0x1C);
 out.x=px+v[0]+((2.0f*(f32)(seed>>16)*inv)-one)*factor*s;
 out.y=py+v[1]+((2.0f*(f32)(r1>>16)*inv)-one)*factor*s;
 out.z=pz+v[2]+((2.0f*(f32)(r2>>16)*inv)-one)*factor*s;
 D_00486A00=i+1; D_00483E58=r2;
 if(depth) func_001844B0(obj,&x,&out,depth-1,factor*0.5f);
 n=(D_004844A8&1)?obj->a:obj->b;
 func_00183DD0(n->id,&out); n->count++;
 if(depth) func_001844B0(obj,&out,&y,depth-1,factor*0.5f);
}
