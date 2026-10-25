typedef struct { u8 value; s8 enabled; } A;
typedef struct { u8 pad[0x210]; s32 mode; s32 old; } O;
typedef struct { u8 value, flag; } Rec;
extern s32 D_00442148[];
s32 D_004865E0;
u8 func_002CBBE0(u8,s32,s32,s32*);
void func_002CC070(void*, Rec*);
void func_002CB9E8(O*o,A*a) {
 s32 i; u8 id, found; Rec r;
 if(a->enabled) {
  if(o->mode) {
   o->old=a->value;
   found=func_002CBBE0(a->value,o->mode,D_004865E0,D_00442148);
   if(!found) {
    r.value=o->mode; r.flag=1; func_002CC070(o,&r);
    r.flag=0; func_002CC070(o,&r);
    r.value=a->value; r.flag=1; func_002CC070(o,&r);
    r.flag=0; func_002CC070(o,&r);
   } else {r.value=found;r.flag=1;func_002CC070(o,&r);r.flag=0;func_002CC070(o,&r);}
   o->mode=0;
  } else {
   i=0; found=0;
   if(D_004865E0>0) {
    id=a->value; if(id==D_00442148[0]) {o->mode=id;found=id;}
    else {do{i++;if(i>=D_004865E0)break;}while(id!=D_00442148[i]);if(i<D_004865E0){o->mode=id;found=id;}}
   }
   if(!found) func_002CC070(o,(Rec*)a);
  }
 } else {
  i=0;found=0;
  if(D_004865E0>0) {
   id=a->value;if(id==D_00442148[0])found=id;
   else {do{i++;if(i>=D_004865E0)break;}while(id!=D_00442148[i]);if(i<D_004865E0)found=id;}
  }
  if(!found) {
   if(o->old!=a->value)func_002CC070(o,(Rec*)a);
   if(o->old==a->value)o->old=0;
  }
 }
}
