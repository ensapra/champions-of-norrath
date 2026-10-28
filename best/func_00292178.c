typedef struct { f32 x,y,z; } Vec3; typedef struct { u8 pad[0xA0]; } P; typedef struct { s32 next,pad[2],data; } Node;
s32 func_00153FD0(void *,Vec3,void *,s32); f32 func_0015A070(s16); f32 func_0015A100(s16); void func_00143830(void*); s32 func_001535D0(Vec3,s16,void**,s32,f32,f32); s32 func_00165DC0(void*,void*); void func_00194300(void**); s32 func_00194390(void*,void*,void*); void func_0024D308(s32,void*,f32);
extern char D_00450920[],D_00477AA0[],D_00486170[]; extern f32 D_00482724; s32 D_004844A4;
void func_00292178(P*p,s16 a,s32 b,Vec3*pos,void*owner,s32 arg5) {
 Vec3 q=*pos; void* volatile list; Vec3 local; Node*n; s32 t,off; void*d; f32 y; volatile s32 *first=(s32*)((char*)p+0x54), *second=(s32*)((char*)p+0x58);
 func_00153FD0(p,q,owner,0); *first=0;*second=0; *(void**)((char*)p+0x48)=D_00450920; *(s16*)((char*)p+0x38)=a; *(s32*)((char*)p+0x6c)=0;
 *(f32*)((char*)p+0x64)=func_0015A070(a)*350.0f; y=func_0015A100(*(s16*)((char*)p+0x38)); *(s16*)((char*)p+0x60)=b; *(f32*)((char*)p+0x68)=y*350.0f;
 if(owner)func_00194390((void*)first,owner,owner);
 *(s32*)((char*)p+0x5c)=arg5; *(s32*)((char*)p+0x70)=D_004844A4+300; *(s32*)((char*)p+0x74)=D_004844A4+10; *(s32*)((char*)p+0x78)=0;
 if(owner){list=0;t=*(s32*)((char*)p+0x18); local=*(Vec3*)((char*)p+0x10); func_001535D0(local,*(s16*)((char*)p+0x38),(void**)&list,0,D_00482724,60.0f);n=(Node*)list;while(n){d=(void*)n->data;off=*(s32*)((char*)owner+0x48); {char *v=(char*)off+0xA0; if((*(s32 (**)(void*,void*))(v+4))((char*)owner+*(s16*)v,d)){func_00194390((void*)second,d,d);break;} n=(Node*)n->next;}}func_00194300((void**)&list);}
 func_00143830(p);func_0024D308(func_00165DC0(D_00486170,D_00477AA0),p,1.0f);
}
