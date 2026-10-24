/* identical to func_001B0580 (matched), with its names changed by decompdecomp */
typedef struct Item {s32 id;u8 pad[52];struct Item*next;} Item;
typedef struct Group {s32 a,b;Item*head;s32 d,e;struct Group*next;} Group;
Item*func_002D7F40(s32 id,void*p){Group*g=*(Group**)((u8*)p+40);for(;g;g=g->next){Item*i;for(i=g->head;i;i=i->next){if(i->id==id)return i;}}return 0;}
