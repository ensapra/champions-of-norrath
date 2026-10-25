typedef struct { u32 a,b,c; } Buf; typedef struct { u8 p[0x44]; u32 seed; } Obj;
extern char D_00600E50[];
extern void func_00180DA0(void *, f32 *, void *, u32,u32,void *,u32,u32,f32,f32,f32);
void func_00152938(Obj *o, Buf *p) {
 f32 out[2]; u32 x,y,z,w,q,r;
 out[0]=0.0f; out[1]=0.0f; *(u64*)out=*(u64*)p; *(u32*)((char*)out+8)=p->c;
 x=o->seed*0x19660d; y=x+0x3c6ef35f; z=y*0x19660d; w=z+0x3c6ef35f;
 q=w*0x19660d; r=q+0x3c6ef35f; o->seed=r;
 out[0]+=(((f32)(s32)(y>>16)*0.000030517578125f)-0.5f)*5.0f;
 out[1]+=(((f32)(s32)(w>>16)*0.000030517578125f)-0.5f)*16.0f;
 func_00180DA0(D_00600E50,out,(void*)0,r,q,o,z,0,
 (((f32)(s32)(r>>16)*0.000030517578125f)-0.5f)*5.0f,
 (((f32)(s32)(y>>16)*0.000030517578125f)-0.5f)*16.0f,0.0f);
}
