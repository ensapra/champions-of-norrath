typedef struct{u32 a,b,c,d;}Pool;typedef struct{u8 pad[0x384];u32 size;Pool*pool;}Obj;
s32 func_001A1568(void*,s32,void*,s32,s32,s32,s64,s32*);
s32 func_0018BF40(Obj*o){Pool*p=o->pool;u32 *v=(u32*)p->a;s32 n=o->size-(((u32)v-p->b+15)>>4);if(n<4)return 0;s32 k=(-(s32)((u32)v>>2)&3)-1;if(k!=-1){do{*v=0;k--;v++;}while(k!=-1);}if(p->c){u32 x=(u32)v-p->c;*(s32*)p->c+=((s32)x>>4)-1;}u32 x=(u32)v+8;u32 al=x&~15;u32 e=al+12;if(e<x)e=al+28;*v=0x10000000;v[1]=0;p->c=(u32)v;v[1]=0;p->a=x;p->d=0;if(x<e){u32*z=(u32*)x;do{*z=0;z++;}while((u32)z<e);p->a=(u32)z;}return 1;}
