extern s32 D_00483F30;typedef struct{s8 b0,b1,b2,b3,b4;s8 pad[7];} S88B8;extern volatile S88B8 D_008D88B8;extern s8 D_008D8938[1008];void*func_003021B0(void*,s32,s32);
void func_002CB388(void){s8*p;s32 i;if(!D_00483F30){func_003021B0(D_008D8938,0,0x3F0);D_008D88B8.b4=0;D_008D88B8.b1=0;D_008D88B8.b0=1;D_008D88B8.b3=32;p=&D_008D8938[0x374];for(i=7;i>=0;i--){*p=-2;p-=0x7e;}}}

typedef struct ExitNode{struct ExitNode*next;s32 count;void(*fn[1])(void);}ExitNode;
typedef struct ExitState{char p[0x3c];void(*cleanup)(void*);char q[0x108];ExitNode*head;}ExitState;
extern ExitState *D_00448480[];void func_00100248(s32);
void func_002FFB08(s32 a){ExitNode*n=D_00448480[0]->head;while(n){s32 i=n->count-1;if(i>=0){void(**p)(void)=&n->fn[i];do{void(*f)(void)=*p;p--;i--;f();}while(i>=0);}n=n->next;}if(D_00448480[0]->cleanup)D_00448480[0]->cleanup(D_00448480[0]);func_00100248(a);}
typedef struct{u8*p;s32 n;}File;
s32 func_00303838(File*);
s32 func_002FFF00(File*f){if(--f->n<0)return func_00303838(f);return *f->p++;}
typedef struct __attribute__((packed,aligned(4))){u64 a;s32 b;}P12;
s32 func_001441B8(s32);void func_002955C0(s32,s32,void*,s32);
s32 func_00296808(s32 a,s32 b,void*c,P12*d){volatile P12 copy=*d;s32 r;*(volatile s16*)((char*)c+0x98)=-100;*(volatile s16*)((char*)c+0x94)=-100;*(volatile s16*)((char*)c+0x96)=-100;*(volatile s16*)((char*)c+0x9a)=0;r=func_001441B8(0x1b0);if(r)func_002955C0(r,b,c,a);return r;}
