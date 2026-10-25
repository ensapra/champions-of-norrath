extern char D_00478488[]; f32 D_00482A28; extern s32 func_001671F8(void*); extern void func_00190E20(s32,s32,f32,f32,f32,f32,f32,f32,f32,f32);
void func_002A27E0(void *arg0,s32 arg1,s32 arg2) { char *b=arg0; s32 r0,r1,out0,out1;
 {void *v=*(void**)(b+0x60);char *d=(char*)v+0x58;s16 off=*(s16*)d;s32(*fn)(void*,s32)=*(void**)(d+4);r0=fn(b+off,2)/12;}
 {void *v=*(void**)(b+0x60);char *d=(char*)v+0x58;s16 off=*(s16*)d;s32(*fn)(void*,s32,s32)=*(void**)(d+4);r1=fn(b+off,1,arg2)/12;}
 {void *v=*(void**)(b+0x60);char *d=(char*)v+0x48;s16 off=*(s16*)d;void(*fn)(void*,s32,s32,s32,s32*,s32*,f32)=*(void**)(d+4);fn(b+off,0,arg2,0,&out0,&out1,D_00482A28);}
 func_00190E20(arg1,func_001671F8(D_00478488),(f32)out0,(f32)out1,(f32)r0,(f32)r1,0.0f,0.0f,0.0f,0.0f);
}
