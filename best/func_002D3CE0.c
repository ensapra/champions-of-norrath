typedef struct {s32 a,b,c,d,state,x,y;} Ent; typedef struct {Ent e[4];} Row; extern Row D_008DD8D0[]; u8 *func_002D39B0(s32,s32);
u8 func_002D3CE0(s32 a,s32 b){if(D_008DD8D0[a].e[b].state==0)return 0;return func_002D39B0(a,b)[0x71];}
