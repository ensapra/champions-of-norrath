extern char D_00477FE0[]; extern f32 D_004828B8; s32 func_001671F8(void*); void func_00190E20(s32,s32,f32,f32,f32,f32,f32,f32,f32,f32);
typedef struct { char pad[0x60]; s32 vt; } Host;
typedef struct { s16 off; s16 pad; void (*fn)(void*,s32,s32,s32,s32*,s32*,f32); } Entry0;
typedef struct { s16 off; s16 pad; s32 (*fn)(void*,s32,s32); } Entry1;
void func_0029B000(void *arg0,s32 arg1,s32 arg2) {
 s32 out0,out1,r; Host*h=arg0; Entry0*v; Entry1*w;
 v=(Entry0*)(h->vt+0x48);
 v->fn((char*)h+v->off,0,arg2,0,&out0,&out1,D_004828B8);
 w=(Entry1*)(h->vt+0x58);
 r=w->fn((char*)h+w->off,1,arg2);
 func_00190E20(arg1,func_001671F8(D_00477FE0),(f32)out0,(f32)out1,(f32)r,0.0f,0.0f,0.0f,0.0f,0.0f);
}
