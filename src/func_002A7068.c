typedef struct { f32 x,y,z; } V;
typedef struct { char pad[0x10]; V pos; char pad2[0x3C0-0x1C]; s32 f3c0; } E;
typedef struct { s16 delta,pad; s32 (*fn)(void*,s32,s32); } VT;
typedef struct { char pad[0x60]; VT *vt; } O;
typedef struct { s8 id; s32 unk4; O *owner; E *ent; u32 rnd; void *vt; E *sub; s32 unk1c; f32 unk20; } S;
extern char D_0044E670[],D_00451D00[],D_00478820[],D_00486328[],D_004086B0[];
u32 D_00483E5C; f32 D_00482AEC,D_00482AF0;
void *func_00165DC0(char*,char*); void func_0024D308(void*,E*,f32); void *func_001441B8(s32); void func_001E6910(void*,V,s32,s32,s32,s32);
S *func_002A7068(S *s,s8 id,E *ent,O *owner) {
void *p; VT *e; V unused,pos;
s->id=id; s->vt=D_0044E670; s->owner=owner; s->unk4=0; s->ent=ent;
D_00483E5C=D_00483E5C*0x19660D+0x3C6EF35F; s->vt=D_00451D00; s->rnd=D_00483E5C>>16;
func_0024D308(func_00165DC0(D_00486328,D_00478820),s->ent,1.0f);
s->sub=ent; p=func_001441B8(0x5c);
if(p){pos=s->ent->pos;func_001E6910(p,pos,0x5a,0xfa,0xc8,0x64);}
s->unk1c=0; e=&s->owner->vt[11];
s->unk20=*(f32*)(D_004086B0+s->sub->f3c0*0x5db0)*D_00482AEC*((f32)e->fn((char*)s->owner+e->delta,0,s->id)*D_00482AF0);
}
