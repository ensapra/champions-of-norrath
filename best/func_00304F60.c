s32 func_00304F60(const char *a,const char *b,u32 n){s32 r=0;while(n>0){u8 x=*a;u8 y=*b;if(x!=y){r=(s32)x-(s32)y;break;}if(x==0)break;a++;b++;n--;}return r;}
