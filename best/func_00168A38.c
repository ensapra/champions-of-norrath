typedef struct {f32 x,y,z;} V3;
extern void func_001590C0(V3*,s32,s32);extern void func_00159AE0(void*,V3*,void*);extern void func_00159B98(void*,V3*,void*);extern f32 func_0015A070(s32);extern f32 func_0015A100(s32);extern void func_001627A0(s32,s32,V3*,s32);
void func_00168A38(char *obj,void *a1,s16 angle,s32 use,s32 index,V3 *out,void *out2,f32 scale){
 V3 v; s32 key=*(s32*)((char*)a1+8); char *m=obj+((u8)obj[0x22]*16);
 if(use)func_001627A0(use,*(s32*)(m+index*0x34),&v,key);
 else func_001590C0(&v,(s32)angle<<16,key);
 m+=index*0x34;
 if(out)func_00159AE0(out,&v,m+0x28);
 if(out2)func_00159B98(out2,&v,m+0x10);
 {s32 a=(s32)angle-0x4000;f32 c=func_0015A070(a);f32 s=func_0015A100(a);
  if(out){f32 x=-out->x,y=out->y*scale,z=out->z*scale;out->z=z+v.z;out->y=x*s-y*c+v.y;out->x=x*c+y*s+v.x;}
  if(out2){f32 x=-((f32*)out2)[0],y=((f32*)out2)[1];((f32*)out2)[1]=x*s-y*c;((f32*)out2)[0]=x*c+y*s;}
 }
}
