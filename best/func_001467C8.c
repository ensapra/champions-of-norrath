s32 func_00193528(void *,void *,s32); s32 func_001A4174(void *,void *); s32 func_001A444C(void *);
extern u8 func_001C5078[]; extern u8 func_001C6058[]; extern u8 jtbl_004C006C[];
s32 func_001467C8(void) {
u8 *p=(u8*)func_001C6058+0xa8,*a=p-0xc00,*b,*c,*d,*e;
u8 *table=jtbl_004C006C+0xb12c; u8 tmp[0x100]; s32 r;
if(!func_001A444C(p))return -4;
if(!func_001A444C(p+0x100))return -4;
if(a[0x1315]==1) {
 b=p-0x200;
 if(!func_001A444C(b)||!func_001A444C(p-0x100))return -4;
 func_00193528(b,tmp,0x100);
 if(func_001A4174(b,tmp))return -4;
 *(s32*)(a+0x131c)=0x5ae;a[0x1314]=4;p[-0x300]=table[0];*(s32*)(a+0x1300)=-1;a[0x1313]=1;*(u16*)(p+0x600)=*(u16*)(table+8);
 *(s32*)(a+0x1310)=0; a[0x1316]=a[0x1317]=a[0x1318]=0;
 p[0x200]=p[0x300]=p[0x400]=table[0];*(s32*)(a+0x130c)=0;
 p[-0xa00]=p[-0x900]=p[-0x800]=p[-0x500]=p[-0x400]=table[0];
} else {
 a[0x1318]=255;p[-0x300]=table[0];*(s32*)(a+0x130c)=-1;a[0x1314]=0;a[0x1316]=a[0x1317]=255;*(s32*)(a+0x131c)=-1;*(s32*)(a+0x1300)=-1;
 p[0x200]=p[0x300]=p[0x400]=table[0];a[0x1313]=0;p[0x600]=p[-0x200]=p[-0x100]=p[-0x500]=p[-0x400]=table[0];
}
a=(u8*)func_001C5078+0x488;
if(a[0x1310]!=1) {
 if(a[0x1315]!=1) {
 b=a+0x200;c=a+0x300;d=a+0x400;
 if(!func_001A444C(b)||!func_001A444C(c)||!func_001A444C(d))return -4;
 e=jtbl_004C006C+0xb13c;
 if(!func_001A4174(b,e)||!func_001A4174(c,e)||!func_001A4174(d,e))return -4;
 }
 func_001C6058[0x5a8]=table[0];
} else {a[0x400]=a[0x200]=table[0];}
if((*(s32*)(a+0x1310)&0xffff00)==0x10100) {
 a[0x600]=a[0x500]=table[0];
 if(*(s32*)(a+0x1304)!=2&&a[0x1315]!=1)a[0x1312]=a[0x1311]=255;
 return 0;
}
b=a+0x500;
if(!func_001A444C(b))return -4;
e=jtbl_004C006C+0xb13c;
if(!func_001A4174(b,e))return -4;
r=func_001A4174(a+0x600,e);if(!r)a[0x600]=table[0];
return r?0:0;
}
