void func_001ADF70(u32,u32);void func_001AE098(u32 a,u32 b){func_001ADF70(a&0xFFFFFFC0,b&0xFFFFFFC0);}
s32 func_001B01D8(void*,s32);
s64 func_001B0208(void*p,s32 n){s32*r=p;if(n>=0 && n<r[8])return r[7]+(n<<6);return func_001B01D8(p,n);}
s32 func_001AFD10(u32,void*,s32,s32,s32,s32);
s32 func_001B0318(s32 a,s32 b,s32 c,void*p){s32*q=p;return func_001AFD10(0x80000008,p,64,q[9],q[10],q[11])?0:0x800;}
typedef struct Item {s32 id;u8 pad[52];struct Item*next;} Item;
typedef struct Group {s32 a,b;Item*head;s32 d,e;struct Group*next;} Group;
Item*func_001B0580(s32 id,void*p){Group*g=*(Group**)((u8*)p+40);for(;g;g=g->next){Item*i;for(i=g->head;i;i=i->next){if(i->id==id)return i;}}return 0;}
