typedef struct { s32 pad[4]; s32 f10; s32 pad2[2]; s32 st; char pad3[0xc0]; char data[32]; char pad4[0x10]; } Ent;
typedef struct { char pad[0x2c]; s32 sem; char pad1[0x10]; s32 cnt; char pad2[0x44]; Ent e[1]; } Tab;
typedef struct { char b[32]; } Chunk;
extern Tab D_008EBDD8;
void WaitSema_2(s32); void SignalSema_2(s32);
s32 func_002E7490(s32 index, void *out) {
 s32 code, t; Ent *p;
 index--;
 if(D_008EBDD8.cnt<index || index<0 || out==0)return 0x80000004;
 p=&D_008EBDD8.e[index];
 switch(p->st){
 case 4: code=1; break;
 case 1: case 2: code=0x8000000f; break;
 case 6: code=0x80000006; break;
 default: code=0x80000000; break;
 }
 if(code!=1)return code;
 t=p->f10; if(t)return t;
 WaitSema_2(D_008EBDD8.sem);
 *(Chunk*)out=*(Chunk*)p->data;
 SignalSema_2(D_008EBDD8.sem);
 return 0;
}
