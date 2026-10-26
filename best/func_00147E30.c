typedef struct {f32 x,y,z;} V3;
void func_00143630(void*); void func_00143878(void*,s32);
f32 func_00175FE0(s32,V3*,s32,f32);
f32 func_001770F8(s32,V3*,void*,s32,V3*,f32,f32);
f32 D_0047FD38=0.01666666567325592f; f32 D_0047FD3C=0.0009999999310821295f; f32 D_0047FD40=26.999998092651367f; f32 D_0047FD44=0.01666666567325592f; f32 D_0047FD48=0.9799999594688416f; f32 D_0047FD4C=-0.09999999403953552f; f32 D_0047FD50=0.3999999761581421f; f32 D_0047FD54=0.09999999403953552f; s32 D_004844A0;
void func_00147E30(void *p,s32 a1){
 s32 dir=a1; u16 flags=*(u16*)((char*)p+0x140); f32 x,y,z=0.0f,scale; V3 pos,tmp; f32 dist, floor, vel, delta; u16 count, timer;
 if((flags^1)&1){
  x=*(f32*)((char*)p+0xfc)*D_0047FD38; y=*(f32*)((char*)p+0x100)*D_0047FD38;
  if(D_0047FD3C<x*x+y*y){
   pos=*(V3*)((char*)p+0x10);
   scale=func_001770F8(D_004844A0,&tmp,&pos,1,&tmp,*(f32*)((char*)p+0x1c),0.0f);
   x*=scale;y*=scale;z*=scale;
   *(f32*)((char*)p+0x10)+=x;*(f32*)((char*)p+0x14)+=y;*(f32*)((char*)p+0x18)+=z;
   func_00143630(p);
   if(scale<1.0f){f32 vx=*(f32*)((char*)p+0xfc),vy=*(f32*)((char*)p+0x100);delta=D_0047FD3C-(tmp.x*vx+tmp.y*vy);if(delta>0){*(f32*)((char*)p+0x100)=vy+tmp.y*delta*1.5f;*(f32*)((char*)p+0xfc)=vx+tmp.x*delta*1.5f;}}
  }
  pos=*(V3*)((char*)p+0x10);floor=func_00175FE0(D_004844A0,&pos,(s32)pos.z,*(f32*)((char*)p+0x1c));
  vel=*(f32*)((char*)p+0x30)-D_0047FD40;*(f32*)((char*)p+0x30)=vel;
  dist=*(f32*)((char*)p+0x18)+vel*D_0047FD44;*(f32*)((char*)p+0x18)=dist;
  if(dist<=floor&&vel<=0){*(f32*)((char*)p+0x18)=floor;*(f32*)((char*)p+0xfc)*=D_0047FD48;*(f32*)((char*)p+0x100)*=D_0047FD48;if(vel<D_0047FD4C)*(f32*)((char*)p+0x30)=-vel*D_0047FD50;else *(f32*)((char*)p+0x30)=0;}
  count=*(u16*)((char*)p+0x10c);timer=count-10;*(u16*)((char*)p+0x38)+=count;*(u16*)((char*)p+0x10c)=timer;if(timer&0x8000)*(u16*)((char*)p+0x10c)=0;
 }
 timer=*(u16*)((char*)p+0x10e)-1;*(u16*)((char*)p+0x10e)=timer;
 if((s16)timer<=0){flags=*(u16*)((char*)p+0x140);if((flags^1)&1){flags|=1;if(!(flags&2)){*(u16*)((char*)p+0x140)=flags;func_00143878(p,dir);return;}}}
 if((s16)*(u16*)((char*)p+0x10e)<-0x3c){*(f32*)((char*)p+0x18)-=D_0047FD54;*(f32*)((char*)p+0x13c)-=D_0047FD54;if((s16)*(u16*)((char*)p+0x10e)<-0x12c){void *v=*(void**)((char*)p+0x48);s16 off=*(s16*)((char*)v+8);s32 fn=*(s32*)((char*)v+12);((void(*)(void*,s32))fn)((char*)p+off,3);}}
}
