s32 func_001671F8(void *);
void func_00190E20(s32,s32,f32,f32,f32,f32,f32,f32,f32,f32);
extern char D_00478610[],D_00478628[],D_00478640[];
f32 D_00482A70,D_00482A74,D_00482A78,D_00482A7C;
void func_002A4218(void *a0,s32 a1,s32 a2) {
 typedef s32 (*F0)(void*,s32); typedef s32 (*F1)(void*,s32,s32);
 void *v; s32 r0,r1,r2,r3,t; f32 x,y,q,z;
 v=*(void**)((char*)a0+0x60); r0=((F0)(*(s32*)((char*)v+0x5c)))((char*)a0+*(s16*)((char*)v+0x58),0);
 v=*(void**)((char*)a0+0x60); r1=((F1)(*(s32*)((char*)v+0x5c)))((char*)a0+*(s16*)((char*)v+0x58),1,a2);
 v=*(void**)((char*)a0+0x60); r2=((F1)(*(s32*)((char*)v+0x5c)))((char*)a0+*(s16*)((char*)v+0x58),2,a2);
 v=*(void**)((char*)a0+0x60); r3=((F1)(*(s32*)((char*)v+0x5c)))((char*)a0+*(s16*)((char*)v+0x58),3,a2);
 if(r1) { x=(f32)r0; y=(f32)r1; t=func_001671F8(D_00478610); q=x+x*D_00482A70; if(q>=0) q+=0.5f; else q-=0.5f; z=y+y*D_00482A74; if(z>=0) z+=0.5f; else z-=0.5f; func_00190E20(a1,t,x,0.0f,y,0.0f,(f32)r3,(f32)r2,0,0); return; }
 if(r3!=1) { x=(f32)r0; t=func_001671F8(D_00478640); q=x+x*D_00482A7C; if(q>=0) q+=0.5f; else q-=0.5f; func_00190E20(a1,t,x,0.0f,(f32)r3,(f32)r2,0,0,0,0); return; }
 x=(f32)r0; t=func_001671F8(D_00478628); q=x+x*D_00482A78; if(q>=0) q+=0.5f; else q-=0.5f; func_00190E20(a1,t,x,0.0f,(f32)r3,(f32)r2,0,0,0,0);
}
