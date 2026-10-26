typedef struct { s32 a,b; } Pair;
typedef struct { char pad[0x240]; Pair entries[16]; s32 unk; s32 count; } ObjB;
typedef struct { f32 x,y,z; } V3f;
void func_00113200(V3f *dst, ObjB *obj) { s32 i=obj->count; volatile V3f v; v.x=-1.0f; v.y=-1.0f; v.z=-1.0f; if(i<16){v.x=(f32)obj->entries[i].b; v.y=(f32)obj->entries[i+1].a;} *dst=*(V3f*)&v; }
