typedef struct { f32 x,y,z; } Vec3; extern void func_001411F0(void*,Vec3,s32,s32); extern void func_0028DF70(void*); extern void func_0013EF30(void*,void*,void*,s32); extern void func_0013EB28(void*); extern s32 func_00312270(void); extern s32 func_002FD2E0(void*,s32); extern void func_002FF3C8(void); extern void ovl_ntgui2_func_0013D230(void*,void*,s32,s32); extern char D_00449310[]; f32 D_00482614;
void func_0028DA68(void *a0,Vec3 a1,s32 a2,f32 f0,f32 f1) { f32 p[3],q[3],*v; void *list[128],*x; char *w; int i,n=0;
 func_001411F0(a0,a1,0,0);p[0]=0;p[1]=0;p[2]=36;*(void**)((char*)a0+0x48)=D_00449310;__builtin_memcpy((char*)a0+0xb0,&a1,12);w=(char*)a0+0x80;w[9]=0;
 *(f32*)(w+0x24)=120;*(f32*)(w+0x28)=D_00482614;*(f32*)(w+0x2c)=1;*(u16*)(w+0x12)=255;*(u16*)(w+0x14)=128;*(f32*)(w+0x1c)=120;*(f32*)(w+0x20)=D_00482614;*(u16*)(w+0xa)=255;*(u16*)(w+0xc)=128;*(u16*)(w+0xe)=0;*(u16*)(w+0x10)=0;*(u16*)(w+0x16)=0;*(u16*)(w+0x18)=0;
 ovl_ntgui2_func_0013D230(w,p,128,255);((char*)a0)[0x6f]=0;((char*)a0)[0x70]=0;func_0028DF70(a0);*(s32*)((char*)a0+0x7c)=a2;((char*)a0)[0x6e]=1;*(f32*)((char*)a0+0x50)=f0;*(f32*)((char*)a0+0x68)*=f1;
 v=(f32*)((char*)a0+0x10);for(i=0;i<3;i++){p[i]=v[i]-30;q[i]=v[i]+30;}func_0013EF30(p,q,list,128);
 for(i=0;list[i];i++)if(list[i]!=a0){x=((void**)*(void**)((char*)list[i]+0x48))[1];if(func_002FD2E0(x,func_00312270()))func_0013EB28((char*)list[i]+0x80);n++;}
 if(n>=4)*(s32*)((char*)a0+0x7c)=*(s32*)((char*)a0+0x7c)/2;
}
