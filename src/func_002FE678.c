s32 func_002D6140(s32);s32 func_002D70D0(void*);s32 func_002D8468(void*);
extern s32 D_00446090[];extern u8 D_00447C00[];extern char D_0047BB68[];
s32 func_002E2F78(s32 a){if(!a){if(D_00446090[0]>0)func_002D70D0(D_0047BB68);while(func_002D8468(D_00447C00))func_002D6140(4000);return 0;}return func_002D8468(D_00447C00);}
typedef struct {s16 delta,index;s32(*fn)(void*,s32,s32,s32,s32);} VE;
typedef struct {s32 x;VE*vt;} Obj;
typedef struct {s32 a,b;Obj*obj;} Parent;
s32 func_002FD2E0(s32,void*);
s32 func_002FD828(Parent*a,s32 b,s32 c,s32 d,s32 e){Obj*o;VE*v;if(e==d && func_002FD2E0(c,a))return 6;o=a->obj;v=&o->vt[4];return v->fn((char*)o+v->delta,b,c,d,e);}
s32 func_002FE0D0(s32,s32,s32,s32*);
s32 func_002FE5E0(s32 a,s32 b,s32 c){s32 v;s32 r=func_002FE0D0(a,b,c,&v);if(r)r=v;return r;}
extern char D_004538E0[];
void func_002FE678(s32*p,s32 a,s32 b,s32 c){if(p){p[0]=a;p[1]=(s32)D_004538E0;p[2]=c;p[3]=b;}}
