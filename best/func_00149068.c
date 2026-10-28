extern unsigned char D_0044CE68[];extern char D_00462260[],D_00483B70[];
typedef struct { char c[8]; s32 b; } B;
typedef struct { s64 q[5]; } C;
s32 func_001476B8(void*,B*);s32 func_00148738(void*,s32);s32 func_00165DC0(void*,void*);s32 func_0024D308(s32,void*,f32);s32 func_00303EB8(void*,void*,s32,s32);
struct A{char x[0x248];};
void func_00149068(struct A*a,B*b,s32 q2,s32 q3,s32 q4,s32 q5,s32 f,C*src,f32 v){
 B cp; char t[0x40]; s32 i,j; s16*p; u8*d=(u8*)a+0x148;
 cp=*b;
 func_001476B8(a,&cp);
 *(void**)((char*)a+0x48)=D_0044CE68;
 i=3;p=(s16*)((char*)a+0x184);do{*p=-1;p-=4;i--;}while(i>=0);
 d[0x20]=255;d[0x21]=255;
 j=0x10;i=3;do{*(s16*)(d+j)=0;*(s16*)(d+8+j)=0;j+=2;i--;}while(i>=0);
 *(f32*)((char*)a+0x240)=v;*(s32*)((char*)a+12)|=0x4000;
 if(src){C *s=src; C *o=(C*)d; while(1){*o=*s;break;} a->x[0x238]=1;*(s32*)((char*)a+12)=(*(s32*)((char*)a+12)|0x100000)&~0x800;}
 a->x[0x23a]=0;*(s32*)((char*)a+0x234)=0;
 func_00148738(a,f);
 if(a->x[0x238]&&(f&25)){u32 q=*(u32*)((char*)a+0x44)*0x19660d+0x3c6ef35f;*(u32*)((char*)a+0x44)=q;func_00303EB8(t,D_00462260,((q>>16)%3)+1,3);func_0024D308(func_00165DC0(D_00483B70,t),a,1.0f);}
}
