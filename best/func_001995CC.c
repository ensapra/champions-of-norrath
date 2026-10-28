typedef struct __attribute__((packed,aligned(1))){u64 v;} U64; typedef struct __attribute__((packed,aligned(1))){U64 v[16];} Row;
void func_001995CC(char *o,s32 n){Row *g=(Row*)(o+0xA88);s32 x,y;if(n>0){for(y=0;y<8-n;y++)for(x=0;x<16;x++)g[y].v[x]=g[y+n].v[x];}else if(n<0){for(y=7;y>=-n;y--)for(x=0;x<16;x++)g[y].v[x]=g[y+n].v[x];}}
