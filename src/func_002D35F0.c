typedef struct { s32 f0,f4,f8; s32 pad[4]; } Ent;
typedef struct { Ent ent[4]; } Grp;
typedef struct { s32 hdr[4]; Grp g[2]; } EntTab;
extern EntTab D_008DD8D0;
extern s32 D_008DDAC0[];
extern s32 D_008DD880[];
s32 func_002D8270(void*,s32,s32,void*,s32,void*,s32,s32,s32);
s32 func_002D35F0(void) {
 s32 i;
 for(i=0;i<4;i++) {
  D_008DD8D0.g[0].ent[i].f0=0;
  D_008DD8D0.g[0].ent[i].f8=0;
  D_008DD8D0.g[0].ent[i].f4=0;
  D_008DD8D0.g[1].ent[i].f0=0;
  D_008DD8D0.g[1].ent[i].f8=0;
  D_008DD8D0.g[1].ent[i].f4=0;
 }
 D_008DDAC0[0]=16;
 D_008DDAC0[4]=0;
 if(func_002D8270(D_008DD880,1,0,D_008DDAC0,128,D_008DDAC0,128,0,0)<0) return 0;
 return D_008DDAC0[3];
}
