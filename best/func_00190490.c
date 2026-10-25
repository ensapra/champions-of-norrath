extern u8 func_01000000[];typedef struct{s32 a,b,c,d,state,f,g;}Ent;typedef struct{Ent e[4];}Row;typedef struct{u8 data[0x60];s32 size;u8 pad[0x1c];}Info;Info*func_001903E0(s32,s32);s32 func_001B5C80(s32);void func_001A24AC(void*,void*,s32);void func_001B5CD8(void);
s32 func_00190490(s32 a,s32 b,void*d){Info info;Info *p;s32 t;s32 off=a*0x70;off+=b*0x1c;
if(((Row*)(func_01000000+0xF4610))[a].e[b].state==0)return 0;
t=func_001B5C80(off);p=&info;*p=*func_001903E0(a,b);func_001A24AC(d,p,p->size);if(t==1)func_001B5CD8();return p->size;}
