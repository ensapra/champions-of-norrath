typedef struct { f32 x,y,z; } Vec3; extern void func_0013EF30(Vec3*,Vec3*,void**,s32); extern void func_001945A8(void*);
void func_0013F158(f32 radius,Vec3*point,void*unused,void*arg2){Vec3 p,lo,hi;void *items[0x200];s32 i;Vec3 *orig,*mn=&lo,*mx=&hi;
 p=*point;orig=&p;
 mn->x=orig->x-radius;mn->y=orig->y-radius;mn->z=orig->z-radius;
 mx->x=orig->x+radius;mx->y=orig->y+radius;mx->z=orig->z+radius;
 func_0013EF30(mn,mx,items,0x200);
 for(i=0;items[i];i++){u8 *obj=(u8*)items[i];f32 *q=(f32*)(obj+0x10);if((*((s32*)(obj+0xC))&0x4D)==0){f32 dx=orig->x-q[0],dy=orig->y-q[1],dz=orig->z-q[2];f32 d=dx*dx+dy*dy+dz*dz;if(d<radius+*(f32*)(obj+0x1C))func_001945A8(arg2);}}
}
