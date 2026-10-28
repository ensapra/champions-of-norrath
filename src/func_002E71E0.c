typedef struct { s32 pad[4]; s32 f10; s32 pad2[2]; s32 st; char pad3[0xF0]; } Ent;
typedef struct { char pad[0x40]; s32 cnt; char pad2[0x44]; Ent e[1]; } Tab;
extern Tab D_008EBDD8;
void func_002E8E28(void*);
s32 func_002E71E0(s32 index) {
 s32 code, t; Ent *p;
 index--;
 if(D_008EBDD8.cnt<index || index<0)return 0x80000004;
 p=&D_008EBDD8.e[index];
 switch(p->st){
 case 4: code=1; break;
 case 1: case 2: code=0x8000000f; break;
 case 6: code=0x80000006; break;
 default: code=0x80000000; break;
 }
 if(code!=1)return code;
 t=p->f10; if(t)return t;
 func_002E8E28(p); return 0;
}
