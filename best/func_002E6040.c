s32 func_002E58A8(s32,s32,s32*,s32); s32 func_002E5930(s32,s32,s32,s32,s32*,s32);
s32 func_002E6040(s32 a0,s32 a1,s32 *out){s32 buf[256],info,n,i,*p;n=func_002E58A8(a0,a1,buf,0x100);if(n<0)return -1;if(n==0)return -2;p=buf;for(i=0;i<n;i++){if(func_002E5930(a0,a1,*p,8,&info,4)<0)return -1;p++;if(info&2)break;}if(i==n)return -2;*out=buf[i];return 0;}
